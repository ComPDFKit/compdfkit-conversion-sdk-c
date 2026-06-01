#ifndef COMPDFKIT_CONVERSION_C_H
#define COMPDFKIT_CONVERSION_C_H

#if _WIN32
#include <windows.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

#include "compdf_basictypes_c.h"

/// \brief Starts the conversion of a PDF file to a Word document.
///
/// \param[in] file_path Path to the input PDF file.
/// \param[in] password Password for opening the PDF file (if required).
/// \\param[in] output_path Path where the converted Word document will be saved.
/// \\param[in] options \link CConvertOption \endlink settings for conversion.
/// \\param[in] callback Optional \link CConvertCallback \endlink function for handling convert operations.
/// \return \link CSDKErrorCode \endlink indicating the success or failure of the operation.
COMPDFKIT_DECL
CSDKErrorCode CSDK_COMPDFKIT_CALL CPDF_StartPDFToWord(COMPDFKIT_STRING file_path, COMPDFKIT_STRING password, COMPDFKIT_STRING output_path, CConvertOption options, CConvertCallback* callback);

/// \brief Starts the conversion of a PDF file to an RTF document.
///
/// \param[in] file_path Path to the input PDF file.
/// \param[in] password Password for opening the PDF file (if required).
/// \param[in] output_path Path where the converted RTF document will be saved.
/// \param[in] options \link CConvertOption \endlink settings for conversion.
/// \param[in] callback Optional \link CConvertCallback \endlink function for handling convert operations.
/// \return \link CSDKErrorCode \endlink indicating the success or failure of the operation.
COMPDFKIT_DECL
CSDKErrorCode CSDK_COMPDFKIT_CALL CPDF_StartPDFToRtf(COMPDFKIT_STRING file_path, COMPDFKIT_STRING password, COMPDFKIT_STRING output_path, CConvertOption options, CConvertCallback* callback);

/// \brief Starts the conversion of a PDF file to an Excel document.
///
/// \param[in] file_path Path to the input PDF file.
/// \param[in] password Password for opening the PDF file (if required).
/// \param[in] output_path Path where the converted Excel document will be saved.
/// \param[in] options \link CConvertOption \endlink settings for conversion.
/// \param[in] callback Optional \link CConvertCallback \endlink function for handling convert operations.
/// \return \link CSDKErrorCode \endlink indicating the success or failure of the operation.
COMPDFKIT_DECL
CSDKErrorCode CSDK_COMPDFKIT_CALL CPDF_StartPDFToExcel(COMPDFKIT_STRING file_path, COMPDFKIT_STRING password, COMPDFKIT_STRING output_path, CConvertOption options, CConvertCallback* callback);

/// \brief Starts the conversion of a PDF file to a PowerPoint presentation.
///
/// \param[in] file_path Path to the input PDF file.
/// \param[in] password Password for opening the PDF file (if required).
/// \param[in] output_path Path where the converted PowerPoint presentation will be saved.
/// \param[in] options \link CConvertOption \endlink settings for conversion.
/// \param[in] callback Optional \link CConvertCallback \endlink function for handling convert operations.
/// \return \link CSDKErrorCode \endlink indicating the success or failure of the operation.
COMPDFKIT_DECL
CSDKErrorCode CSDK_COMPDFKIT_CALL CPDF_StartPDFToPpt(COMPDFKIT_STRING file_path, COMPDFKIT_STRING password, COMPDFKIT_STRING output_path, CConvertOption options, CConvertCallback* callback);

/// \brief Starts the conversion of a PDF file to an HTML document.
///
/// \param[in] file_path Path to the input PDF file.
/// \param[in] password Password for opening the PDF file (if required).
/// \param[in] output_path Path where the converted HTML document will be saved.
/// \param[in] options \link CConvertOption \endlink settings for conversion.
/// \param[in] callback Optional \link CConvertCallback \endlink function for handling convert operations.
/// \return \link CSDKErrorCode \endlink indicating the success or failure of the operation.
COMPDFKIT_DECL
CSDKErrorCode CSDK_COMPDFKIT_CALL CPDF_StartPDFToHtml(COMPDFKIT_STRING file_path, COMPDFKIT_STRING password, COMPDFKIT_STRING output_path, CConvertOption options, CConvertCallback* callback);

/// \brief Starts the conversion of a PDF file to an image format.
///
/// \param[in] file_path Path to the input PDF file.
/// \param[in] password Password for opening the PDF file (if required).
/// \param[in] output_path Path where the converted images will be saved.
/// \param[in] options \link CConvertOption \endlink settings for conversion.
/// \param[in] callback Optional \link CConvertCallback \endlink function for handling convert operations.
/// \return \link CSDKErrorCode \endlink indicating the success or failure of the operation.
COMPDFKIT_DECL
CSDKErrorCode CSDK_COMPDFKIT_CALL CPDF_StartPDFToImage(COMPDFKIT_STRING file_path, COMPDFKIT_STRING password, COMPDFKIT_STRING output_path, CConvertOption options, CConvertCallback* callback);

/// \brief Starts the conversion of a PDF file to a searchable PDF.
///
/// \param[in] file_path Path to the input PDF file.
/// \param[in] password Password for opening the PDF file (if required).
/// \param[in] output_path Path where the searchable PDF will be saved.
/// \param[in] options \link CConvertOption \endlink settings for conversion.
/// \param[in] callback Optional \link CConvertCallback \endlink function for handling convert operations.
/// \return \link CSDKErrorCode \endlink indicating the success or failure of the operation.
COMPDFKIT_DECL
CSDKErrorCode CSDK_COMPDFKIT_CALL CPDF_StartPDFToSearchablePDF(COMPDFKIT_STRING file_path, COMPDFKIT_STRING password, COMPDFKIT_STRING output_path, CConvertOption options, CConvertCallback* callback);

/// \brief Starts the conversion of a PDF file to a plain text file.
///
/// \param[in] file_path Path to the input PDF file.
/// \param[in] password Password for opening the PDF file (if required).
/// \param[in] output_path Path where the converted text file will be saved.
/// \param[in] options \link CConvertOption \endlink settings for conversion.
/// \param[in] callback Optional \link CConvertCallback \endlink function for handling convert operations.
/// \return \link CSDKErrorCode \endlink indicating the success or failure of the operation.
COMPDFKIT_DECL
CSDKErrorCode CSDK_COMPDFKIT_CALL CPDF_StartPDFToTxt(COMPDFKIT_STRING file_path, COMPDFKIT_STRING password, COMPDFKIT_STRING output_path, CConvertOption options, CConvertCallback* callback);

/// \brief Starts the conversion of a PDF file to a JSON file.
///
/// \param[in] file_path Path to the input PDF file.
/// \param[in] password Password for opening the PDF file (if required).
/// \param[in] output_path Path where the converted JSON file will be saved.
/// \param[in] options \link CConvertOption \endlink settings for conversion.
/// \param[in] callback Optional \link CConvertCallback \endlink function for handling convert operations.
/// \return \link CSDKErrorCode \endlink indicating the success or failure of the operation.
COMPDFKIT_DECL
CSDKErrorCode CSDK_COMPDFKIT_CALL CPDF_StartPDFToJson(COMPDFKIT_STRING file_path, COMPDFKIT_STRING password, COMPDFKIT_STRING output_path, CConvertOption options, CConvertCallback* callback);

/// \brief Starts the conversion of a PDF file to a Markdown file.
///
/// \param[in] file_path Path to the input PDF file.
/// \param[in] password Password for opening the PDF file (if required).
/// \param[in] output_path Path where the converted JSON file will be saved.
/// \param[in] options \link CConvertOption \endlink settings for conversion.
/// \param[in] callback Optional \link CConvertCallback \endlink function for handling convert operations.
/// \return \link CSDKErrorCode \endlink indicating the success or failure of the operation.
COMPDFKIT_DECL
CSDKErrorCode CSDK_COMPDFKIT_CALL CPDF_StartPDFToMarkdown(COMPDFKIT_STRING file_path, COMPDFKIT_STRING password, COMPDFKIT_STRING output_path, CConvertOption options, CConvertCallback* callback);


COMPDFKIT_DECL
CSDKErrorCode CSDK_COMPDFKIT_CALL CPDF_StartPDFToOfd(COMPDFKIT_STRING file_path, COMPDFKIT_STRING password, COMPDFKIT_STRING output_path, CConvertOption options, CConvertCallback* callback);

#ifdef __cplusplus
}

#endif

#endif //COMPDFKIT_CONVERSION_C_H
