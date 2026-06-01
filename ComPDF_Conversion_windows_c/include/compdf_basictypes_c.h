#ifndef COMPDFKIT_BASICTYPES_C_H
#define COMPDFKIT_BASICTYPES_C_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>

#include "com_config_macros.h"

#if defined(_WIN32)
#define COMPDFKIT_STRING const wchar_t*
#define CSDK_COMPDFKIT_CALL __stdcall
#else
#define COMPDFKIT_STRING const char*
#define CSDK_COMPDFKIT_CALL
#endif  // _WIN32

/// \brief Error code.
typedef enum _CSDKErrorCode {
    /// Success, and no error occurs.
    e_CErrSuccess = 0,
    /// Conversion process was canceled.
    e_CErrCancel = 1,
    /// File cannot be found or could not be opened.
    e_CErrFile = 2,
    /// Invalid password. Usually, this error may occur when loading a PDF document with password. When meet this, user should load document again with correct password.
    e_CErrPDFPassword = 3,
    /// PDF page failed to load.
    e_CErrPDFPage = 4,
    /// Format is invalid. For files, this may also mean that file is corrupted.
    e_CErrPDFFormat = 5,
    /// PDF document is encrypted by some unsupported security handler.
    e_CErrPDFSecurity = 6,
    /// Out-of-memory error occurs.
    e_CErrOutOfMemory = 7,
    /// System I/O error.
    e_CErrIO = 8,
    /// Folder compression failed.
    e_CErrCompress = 9,

    /// The license is invalid
    e_CErrLicenseInvalid = 20,
    /// The license has expired
    e_CErrLicenseExpire = 21,
    /// The license does not support the current platform
    e_CErrLicenseUnsupportedPlatform = 22,
    /// The license does not support the application id
    e_CErrLicenseUnsupportedID = 23,
    /// The license does not support the device id
    e_CErrLicenseUnsupportedDevice = 24,
    /// The license does not have the function permission
    e_CErrLicensePermissionDeny = 25,
    /// License has not been initialized
    e_CErrLicenseUninitialized = 26,
    /// Illegal access to the API interface
    e_CErrLicenseIllegalAccess = 27,
    /// Failed to read license file
    e_CErrLicenseFileReadFailed = 28,
    /// The license does not have OCR permissions.
    e_CErrLicenseOCRPermissionDeny = 29,
    /// The current conversion concurrency exceeds the license limit.
    e_CErrLicenseConcurrencyExceeded = 30,
    /// The current conversion pages exceed the license limit.
    e_CErrLicensePageLimitExceeded = 31,
    /// The quota persistence file has been tampered with.
    e_CErrLicenseQuotaCorrupted = 32,

    /// No tables found in the source file.
    e_CErrNoTable = 40,
    /// Failed to call OCR recognition
    e_CErrOCRFailure = 41,

    /// Currently executing conversion task.
    e_CErrConverting = 60,

    /// Document AI error code
    e_CErrInvalidArg = 80,
    e_CErrInvalidHandle = 81,
    e_CErrModelInvalidFormat = 82,
    e_CErrModelFunctionUnsupported = 83,
    e_CErrModelFormatUnsupported = 84,
    e_CErrModelSDKMismatch = 85,
    e_CErrImageDataEmpty = 86,
    e_CErrImageWHError = 87,
    e_CErrImageUnsupportedFormat = 88,
    e_CErrImageInvalid = 89,
    e_CErrExpire = 90,
    e_CErrMissingArg = 91,
    e_CErrLicenseUnsupportedAPI = 92,
    e_CErrLicenseMismatch = 93,
    e_CErrInvalidTable = 94,

    /// Unknown error
    e_CErrUnknown = 100
}CSDKErrorCode;

/// \brief OCR language.
typedef enum _COCRLanguage{
    /// Unknown language.
    e_CUNKNOWN = 0,
    /// Chinese (Simplified).
    e_CCHINESE,
    /// Chinese (Traditional).
    e_CCHINESE_TRA,
    /// English.
    e_CENGLISH,
    /// Korean.
    e_CKOREAN,
    /// Japanese.
    e_CJAPANESE,
    /// Latin.
    e_CLATIN,
    /// Devanagari.
    e_CDEVANAGARI,
    /// Cyrillic.
    e_CCYRILLIC,
    /// Arabic.
    e_CARABIC,
    /// Tamil.
    e_CTAMIL,
    /// Telugu.
    e_CTELUGU,
    /// Kannada.
    e_CKANNADA,
    /// THAI.
    e_CTHAI,
    /// GREEK.
    e_CGREEK,
    /// Eslav.
    e_CEslav,
    /// Automatically select language.
    e_CAUTO
} COCRLanguage;

/// \brief Page layout mode.
typedef enum _CPageLayoutMode{
    /// Box mode.
    e_PageLayoutModeBox,
    /// Flowing mode.
    e_PageLayoutModeFlow
} CPageLayoutMode;

/// \brief OCR option.
typedef enum _COCROption
{
    /// Recognize illegal characters in PDF documents.
    e_CInvalidCharacter,
    /// Recognize scanned pages in PDF documents.
    e_CScanPage,
    /// Recognize illegal characters and scanned pages in PDF documents.
    e_CInvalidCharacterAndScanPage,
    /// Recognize all characters on all pages.
    e_CAll,
} COCROption;

/// \brief Image color mode.
typedef enum _CImageColorMode
{
    /// Color mode.
    e_CColor,
    /// Gray mode.
    e_CGray,
    /// Binary mode.
    e_CBinary,
} CImageColorMode;

/// \brief Image type.
typedef enum _CImageType
{
    /// .jpg.
    e_CJPG,
    /// .jpeg.
    e_CJPEG,
    /// .jp2.
    e_CJPEG2000,
    /// .png.
    e_CPNG,
    /// .bmp.
    e_CBMP,
    /// .tiff.
    e_CTIFF,
    /// .tga.
    e_CTGA,
    /// .gif.
    e_CGIF,
    /// .webp
    e_CWEBP,
} CImageType;

/// \brief Excel Worksheet option.
typedef enum _CExcelWorksheetOption
{
    /// A worksheet to contain only one table.
    e_CForTable,
    /// A worksheet to contain table for PDF Page.
    e_CForPage,
    /// A worksheet to contain table for PDF Document.
    e_CForDocument
} CExcelWorksheetOption;

/// \brief Html option.
typedef enum _CHtmlOption
{
    /// Convert the entire PDF file into a single HTML file.
    e_CSinglePage,
    /// Convert the PDF file into a single HTML file with an outline for navigation at the beginning of the HTML page.
    e_CSinglePageWithBookmark,
    /// Convert the PDF file into multiple HTML files.
    e_CMultiPage,
    /// Convert the PDF file into multiple HTML files. Each HTML file corresponds to a PDF page, and users can navigate to the next HTML file via a link at the bottom of the HTML page.
    e_CMultiPageWithBookmark,
} CHtmlOption;

/// \brief Convert options.
typedef struct _CConvertOption{
    /// Whether to enable AI layout analysis during conversion.
    bool enable_ai_layout;

    /// Whether to enable AI table recognition during conversion.
    bool enable_ai_table_recognition;

    /// Whether to contain images when converting,which takes effect only when enable_ocr is false.
    bool contain_image;

    /// Whether to contain page background images when converting,which takes effect only when enable_ocr is true.
    bool contain_page_background_image;

    /// Whether to contain table when convert pdf to json.
    bool json_contain_table;

    /// Whether to contain annotations when converting.
    bool contain_annotation;

    /// Whether to set contain all pdf content to the xlsx file.
    bool excel_all_content;

    /// Whether to set to save the table in csv format.
    bool excel_csv_format;

    /// Whether to use OCR.
    bool enable_ocr;

    /// Whether to make the text transparent in the output document.
    bool transparent_text;

    /// Whether format table when convert pdf to txt.
    bool txt_table_format;

    /// Whether to enhance the image path.
    bool image_path_enhance;

    /// Whether to convert formulas to images.
    bool formula_to_image;

    /// Whether to automatically create folder when exporting multiple documents.
    bool auto_create_folder;

    /// whether to output one document per page.
    bool output_document_per_page;

    /// Number of OCR languages specified in the languages array.
    int language_count;

    /// Specify the image scaling of the image file.
    float image_scaling;

    /// Specify the layout mode.
    CPageLayoutMode page_layout_mode;

    /// Specify the Excel worksheet option.
    CExcelWorksheetOption excel_worksheet_option;

    /// Specify the Html option.
    CHtmlOption html_option;

    /// Specify the OCR option.
    COCROption ocr_option;

    /// Specify the image color mode of the image file.
    CImageColorMode image_color_mode;

    /// Specify the image type of the image file.
    CImageType image_type;

    /// Specify the fontname to convert, e.g. "Arial".
    char font_name[256];

    /// Specify the pages to convert, e.g. "1-3,5,7-9"
    char page_ranges[256];

    /// Specify the OCR languages.
    COCRLanguage* languages;
} CConvertOption;

#define CPDF_CONVERT_OPTION_DEFAULT { \
    true, true, true, true, true, true, false, false, false, true, true, false, true, true, false, \
    0, 4.0f, e_PageLayoutModeFlow, e_CForTable, e_CSinglePage, e_CAll, e_CColor, e_CJPG, \
    {0}, {0}, 0 \
}

#ifdef __cplusplus
}
#endif

#endif //COMPDFKIT_BASICTYPES_C_H
