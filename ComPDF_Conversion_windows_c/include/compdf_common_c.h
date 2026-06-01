#ifndef COMPDFKIT_COMMON_C_H
#define COMPDFKIT_COMMON_C_H

#if _WIN32
#include <windows.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>

#include "compdf_basictypes_c.h"

/// \brief Verifies the license for using the COMPDFKit SDK.
///
/// \param[in] license The license key string provided by COMPDFKit.
/// \param[in] device_id Unique identifier of the device on which the SDK will be used.
/// \param[in] app_id Application ID associated with the license.
/// \return \link CSDKErrorCode \endlink indicating the success or failure of the license verification process.
COMPDFKIT_DECL
CSDKErrorCode CSDK_COMPDFKIT_CALL CPDF_LicenseVerify(const char* license, const char* device_id, const char* app_id);

/// \brief Initializes the COMPDFKit SDK with the specified resource path.
///
/// \param[in] resource_path Path to the resources required by the SDK.
COMPDFKIT_DECL
void CSDK_COMPDFKIT_CALL CPDF_Initialize(COMPDFKIT_STRING resource_path);

/// \brief Configures logging settings for the SDK.
///
/// \param[in] enable_info If true, enables info level logging.
/// \param[in] enable_warning If true, enables warning level logging.
COMPDFKIT_DECL
void CSDK_COMPDFKIT_CALL CPDF_SetLogger(bool enable_info, bool enable_warning);

/// \brief Sets up the document AI model used for advanced processing like OCR.
///
/// \param[in] model_path Path to the AI model file.
/// \param[in] ocr_language Language setting for OCR operations.
/// \return \link CSDKErrorCode \endlink indicating the success or failure of setting up the AI model.
COMPDFKIT_DECL
CSDKErrorCode CSDK_COMPDFKIT_CALL CPDF_SetDocumentAIModel(
    COMPDFKIT_STRING model_path, int gpu_id);

/// \brief Retrieves the number of pages in a given PDF file.
///
/// \param[in] file_path Path to the PDF file.
/// \param[in] password Password for opening the PDF file (if required).
/// \return The number of pages in the PDF file as an integer.
COMPDFKIT_DECL
int CSDK_COMPDFKIT_CALL CPDF_GetPageCount(COMPDFKIT_STRING file_path, COMPDFKIT_STRING password);

/// \brief Returns the remaining page quota.
/// \return >= 0: actual remaining pages, -1: not initialized,
///         -2: unlimited, -3: quota file corrupted.
COMPDFKIT_DECL
int CSDK_COMPDFKIT_CALL CPDF_GetRemainingPageQuota();

/// \brief Retrieves the version of the COMPDFKit SDK.
///
/// \param[out] version Pointer to a buffer where the SDK version will be stored.
COMPDFKIT_DECL
void CSDK_COMPDFKIT_CALL CPDF_GetVersion(char* version);

/// \brief Releases all resources and cleans up the COMPDFKit SDK.
COMPDFKIT_DECL
void CSDK_COMPDFKIT_CALL CPDF_Release();

/// \brief Release the memory by the AI model. If you want to use the AI function again after this call, you need to call the \link CPDF_SetDocumentAIModel \endlink interface again.
COMPDFKIT_DECL
void CSDK_COMPDFKIT_CALL CPDF_ReleaseDocumentAIModel();

/// \brief Sets the number of AI models for layout analysis and table recognition.
///
/// \param[in] layout_model_count Number of layout analysis models to be used.
/// \param[in] table_model_count Number of table recognition models to be used.
COMPDFKIT_DECL
void CSDK_COMPDFKIT_CALL CPDF_SetDocumentAIModelCount(int layout_model_count, int table_model_count);

#ifdef __cplusplus
}
#endif

#endif //COMPDFKIT_COMMON_C_H
