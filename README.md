# ComPDF Conversion SDK for C

As part of the KDAN ecosystem, ComPDF Conversion SDK gives your C applications the power to convert PDF files into editable Office documents, images, HTML, RTF, CSV, TXT, and more — through a clean C API. Whether you're building desktop tools, embedded systems, or cross-platform utilities, you can integrate reliable PDF conversion capabilities using a standard C interface that works on Windows, Linux, and macOS.

> If you find this library helpful, please consider giving us a ⭐ **Star** on GitHub! Have feedback or questions? Join the conversation in our [Discussions](https://github.com/orgs/ComPDFKit/discussions).

**Supported Features**

* Convert PDF to Word (.docx)

* Convert PDF to Excel (.xlsx)

* Convert PDF to PowerPoint (.pptx)

* Convert PDF to HTML (.html)

* Convert PDF to CSV (.csv)

* Convert PDF to Image (.png, .jpg, .jpeg,.jpeg2000, .bmp, .tiff, .tga, .gif, .webp)

* Convert PDF to Plain Text (.txt)

* Convert PDF to Rich Text Format (.rtf)

* Convert PDF to Searchable PDF (.pdf)

* Convert PDF to Structured Data (.json)

* Convert PDF to Markdown (.md)

* Convert PDF to OFD (.ofd)

* Optical Character Recognition (OCR)

* Layout Analysis

* Table Recognition

## Table of Contents

* [Why ComPDF Conversion SDK](#why-compdf-conversion-sdk)

* [Conversion Quality Preview](#conversion-quality-preview)

* [Requirements](#requirements)

* [How to Run a Demo](#how-to-run-a-demo)

* [License and Free Trial](#license-and-free-trial)

* [C API Basics](#c-api-basics)

* [Developer Guides for All Features](#developer-guides-for-all-features)

* [FAQ](#faq)

* [Changelog](#changelog)

* [Technical Support](#technical-support)

## **Why ComPDF Conversion SDK**

- **Mature Technology:** With years of technology accumulation, we have established a complete mechanism of product iteration to offer a continuous guarantee for product competitiveness.  

- **High-Fidelity Conversion:** Designed to preserve layout, tables, text structure, and formatting in the output files.  

- **AI-Enhanced Conversion:** Continuously improved for complex layout analysis, table recognition, OCR, and editable output.

- **Independent Intellectual Property Rights:** Our technology is independent and compliant with ISO, helping enterprises conduct international business without considering copyright risks.  

- **High-quality Service:** We provide 24/7 professional one-to-one technical support, including onsite service and remote assistance via phone and email.

## Conversion Quality Preview

With **AI table recognition, AI layout analysis, and OCR capabilities**, ComPDF Conversion SDK delivers accurate PDF conversion results. Simply select the appropriate conversion parameters based on your document type to achieve accurate document reconstruction. Below, we demonstrate the power of the ComPDF Conversion SDK by converting PDFs to Word, Excel, or searchable PDF files. Contact us to get a demo and experience our product's performance firsthand.

![conversion sdk performance GIF](./Images/conversion%20sdk%20performance%20GIF.gif)

### Convert PDF to Word

ComPDF Conversion SDK accurately restores all content and images, complex structures, paragraph aggregation, natural reading order, text styles, bold formatting, fonts, multi‑column layouts, image-text positioning, ordered lists, and more. Get a fully editable Word document that looks exactly like the original PDF.

![conversion sdk performance GIF](./Images/Performance%20-%20PDF%20to%20Word.png)

### Convert PDF to Excel

Extract standard tables and borderless tables with precision, preserve the content and images inside table cells, and retain text styles such as bold and color. ComPDF Conversion SDK turns PDF tables into fully functional Excel spreadsheets without losing structure or formatting.

![Conversion SDK: PDF to Excel](./Images/Performance%20-%20PDF%20to%20Excel.png)

### Convert Scanned PDF to editable text

Convert scanned documents and scanned PDFs into searchable PDFs while perfectly preserving the original layout and formatting. Every word becomes searchable, locatable, and selectable – ready for copying just like native digital text.

![conversion sdk performance GIF](./Images/Performance%20-%20PDF%20to%20searchable%20PDF.png)

## Requirements

**Download Conversion SDK:** 

[Contact us](https://www.compdf.com/contact-sales?utm_source=github&utm_medium=compdfkit-conversion-sdk-c&utm_campaign=compdfkit_conversion_sdk_c_repo&ref_platform_id=github_compdfkit) to obtain the ComPDF C Conversion SDK.

**System Requirements:**

| Development Platform | System Requirements                                                                                         | Development Environment       | Notice                                                       |
| -------------------- | ----------------------------------------------------------------------------------------------------------- | ----------------------------- | ------------------------------------------------------------ |
| Windows              | Windows 7, 8, 10, and 11 (32-bit, 64-bit). A C compiler compatible with the delivered library architecture. | Visual Studio 2022 or higher. | Samples have been tested on Windows 10 and 11.               |
| Linux                | Linux x64.                                                                                                  | GCC or Clang toolchain.       | Samples have been tested on Ubuntu 20.04.                    |
| Mac                  | macOS 10.14 or higher (Intel, Apple Silicon).                                                               | Xcode 13.0 or higher.         | Samples have been tested on Mac Intel and Mac Apple Silicon. |

## How to Run a Demo

ComPDF Conversion SDK provides a demo in the **"samples"** folder.

### Windows

1. Load the Visual Studio solution file **"demo_vs2022.sln"** in the **"samples"** folder.
2. Build the demo by clicking **Build > Build Solution**. After the build is completed, the executable file will be generated in the **"samples/bin"** folder.
3. Double-click the executable file to run the demo.

Output files will be generated in the **"samples/output_files"** folder.

### Linux and Mac

1. Open a terminal window and navigate to the **"samples"** folder of the ComPDF Conversion SDK package.
2. Enter the following command to run the demo:

```shell
./RunDemo.sh
```

Output files will be generated in the **"samples/output_files"** folder.



## License and Free Trial

### Get Free Trial License

[Contact our sales team](https://www.compdf.com/contact-sales) and we'll send you a 30-day free trial license for ComPDF Conversion SDK.

### Get Commercial License

ComPDF Conversion SDK is a commercial SDK that requires a license for application release. Any documents, sample code, or source code distribution from the released package of ComPDF to any third party is prohibited. To get commercial license for ComPDF Conversion SDK, feel free to [contact our sales team](https://www.compdf.com/contact-sales?utm_source=github&utm_medium=compdfkit-conversion-sdk-c&utm_campaign=compdfkit_conversion_sdk_c_repo&ref_platform_id=github_compdfkit).

For C Conversion SDK, the commercial license must be bound to your developer device ID ([How to find the developer device ID](https://www.compdf.com/faq/how-to-find-the-device-id?utm_source=github&utm_medium=compdfkit-conversion-sdk-c&utm_campaign=compdfkit_conversion_sdk_c_repo&ref_platform_id=github_compdfkit)), and each license is only valid for one device ID in development mode.

### Apply the License Key

If you haven't get a license key, please check out [how to obtain a license key](https://www.compdf.com/contact-sales?utm_source=github&utm_medium=compdfkit-conversion-sdk-c&utm_campaign=compdfkit_conversion_sdk_c_repo&ref_platform_id=github_compdfkit). ComPDF Conversion SDK currently supports offline authentication to verify license keys.

*Learn more:* [*What is the authentication mechanism of ComPDF's license?*](https://www.compdf.com/faq/authentication-mechanism-of-compdfkit-license?utm_source=github&utm_medium=compdfkit-conversion-sdk-c&utm_campaign=compdfkit_conversion_sdk_c_repo&ref_platform_id=github_compdfkit)

**Copy the License Key:**

Accurately obtaining the license key is crucial for the application of the license.

1. In the email you received, locate the XML file containing the license key.
2. Open the XML file, and determine the license type based on the `<type>` field. If `<type>online</type>` is present, it indicates an online license. If `<type>offline</type>` is present or if the field is absent, it indicates an offline license.
- **Online License:**
  
      <?xml version="1.0" encoding="UTF-8" standalone="no"?>
      <license version="1">
          <platform>windows</platform>
          <starttime>xxxxxxxx</starttime>
          <endtime>xxxxxxxx</endtime>
          <type>online</type>
          <key>LICENSE_KEY</key>
      </license>

- **Offline License**:
  
  ```xml
  <?xml version="1.0" encoding="UTF-8" standalone="no"?>
  <license version="1">
      <platform>linux</platform>
      <starttime>xxxxxxxx</starttime>
      <endtime>xxxxxxxx</endtime>
      <key>LICENSE_KEY</key>
  </license>
  ```
3. Copy the value located at the LICENSE_KEY position within the `<key>LICENSE_KEY</key>` field. This is your license key.

**Apply the License Key**

You can perform offline authentication using the following method:

Before using the classes and methods of the ComPDF Conversion SDK in your project, you need to initialize the SDK with a valid license key. If you don't have a license key, feel free to contact the [ComPDF team](https://www.compdf.com/contact-sales?utm_source=github&utm_medium=compdfkit-conversion-sdk-c&utm_campaign=compdfkit_conversion_sdk_c_repo&ref_platform_id=github_compdfkit) to obtain one.

```c
#include "compdf_common_c.h"

const char* license = "LICENSE_KEY";
CSDKErrorCode code = CPDF_LicenseVerify(license, "device_id", "app_id");
if (code != e_CErrSuccess) {
    return code;
}
```

Then initialize SDK:

```c
#include "compdf_common_c.h"

#if defined(_WIN32)
#define CPDF_TEXT(text) L##text
#else
#define CPDF_TEXT(text) text
#endif

CPDF_Initialize(CPDF_TEXT("ComPDF_Conversion_SDK/resource"));
```

## C API Basics

### Header Files

The C SDK exposes the following main headers:

| Header                  | Description                                                                                         |
| ----------------------- | --------------------------------------------------------------------------------------------------- |
| `compdf_common_c.h`     | License, initialization, resource release, page count, version, and DocumentAI model configuration. |
| `compdf_conversion_c.h` | PDF conversion APIs.                                                                                |
| `compdf_basictypes_c.h` | Error codes, conversion options, image types, OCR languages, and other public C types.              |

Most conversion code needs at least:

```c
#include <stdbool.h>
#include <string.h>

#include "compdf_common_c.h"
#include "compdf_conversion_c.h"
```

### Platform String Type

Most file path parameters use `COMPDFKIT_STRING`:

```c
#if defined(_WIN32)
#define COMPDFKIT_STRING const wchar_t*
#else
#define COMPDFKIT_STRING const char*
#endif
```

On Windows, pass wide-character strings such as `L"input.pdf"`. On Linux and macOS, pass UTF-8 `const char*` strings. For portable string literals in sample code, this guide uses the following helper macro:

```c
#if defined(_WIN32)
#define CPDF_TEXT(text) L##text
#else
#define CPDF_TEXT(text) text
#endif
```

`CPDF_LicenseVerify` is an exception: its `license`, `device_id`, and `app_id` parameters are always `const char*`.

### Conversion Option Initialization

`CConvertOption` is a plain C structure. It does not have a constructor, so initialize it before use. The following helper mirrors the current default values used by the C++ SDK:

```c
#include <string.h>

static CConvertOption CPDF_DefaultConvertOption(void)
{
    CConvertOption option;
    memset(&option, 0, sizeof(option));

    option.enable_ai_layout = true;
    option.enable_ai_table_recognition = true;
    option.contain_image = true;
    option.contain_page_background_image = true;
    option.json_contain_table = true;
    option.contain_annotation = true;
    option.transparent_text = true;
    option.txt_table_format = true;
    option.formula_to_image = true;
    option.auto_create_folder = true;
    option.image_scaling = 4.0f;
    option.page_layout_mode = e_PageLayoutModeFlow;
    option.excel_worksheet_option = e_CForTable;
    option.html_option = e_CSinglePage;
    option.ocr_option = e_CAll;
    option.image_color_mode = e_CColor;
    option.image_type = e_CJPG;

    return option;
}
```

You can also zero-initialize the structure and explicitly set every option you rely on:

```c
CConvertOption option = {0};
option.contain_image = true;
option.page_layout_mode = e_PageLayoutModeFlow;
```

For string fields such as `page_ranges` and `font_name`, use bounded copy functions in production code. The sample snippets use `strcpy` only for clarity.

### Error Codes

Most C APIs return `CSDKErrorCode`. `e_CErrSuccess` indicates success. Other common error codes include:

| Error Code                         | Meaning                                                   |
| ---------------------------------- | --------------------------------------------------------- |
| `e_CErrFile`                       | File cannot be found or opened.                           |
| `e_CErrPDFPassword`                | The PDF password is invalid.                              |
| `e_CErrPDFFormat`                  | The PDF format is invalid or the file is corrupted.       |
| `e_CErrOutOfMemory`                | Memory allocation failed.                                 |
| `e_CErrLicenseInvalid`             | The license is invalid.                                   |
| `e_CErrLicenseExpire`              | The license has expired.                                  |
| `e_CErrLicenseConcurrencyExceeded` | Current conversion concurrency exceeds the license limit. |
| `e_CErrLicensePageLimitExceeded`   | Current conversion pages exceed the license limit.        |
| `e_CErrOCRFailure`                 | OCR recognition failed.                                   |
| `e_CErrConverting`                 | A conversion task is already running.                     |
| `e_CErrUnknown`                    | Unknown error.                                            |

Always check the returned error code after calling a conversion API.

## Developer Guides for All Features

ComPDF Conversion SDK provides a wide range of customizable conversion options, such as whether to include images or annotations in PDF documents during file conversion, enable OCR, perform layout analysis, and more. Explore the [guides](https://www.compdf.com/guides/conversion-sdk/c/overview?utm_source=github&utm_medium=compdfkit-conversion-sdk-c&utm_campaign=compdfkit_conversion_sdk_c_repo&ref_platform_id=github_compdfkit) for sample code and learn how to customize conversions for the following features.

- Initialize Library Resources
- Set DocumentAI Model
- Get Conversion Progress
- Cancel Conversion Task
- Select Page Range for Conversion
- Conversion Options: Contain Image & Annotation
- Page Layout Mode
- OCR
- Layout Analysis
- Table Recognition
- Use Custom AI Models via Callbacks (v4.1.0+)
- Output Font Option
- Convert PDF to Word
- Convert PDF to Excel
- Convert PDF to PPT
- Convert PDF to HTML
- Convert PDF to CSV
- Convert PDF to Image
- Convert PDF to RTF
- Convert PDF to TXT
- Convert PDF to Searchable PDF
- Convert PDF to OFD
- Releasing Library Resources
- Extract PDF to JSON
- Extract PDF to Markdown

### FAQ

* Does OCR work on x86 architecture?
  Currently, the OCR only works on x64 architecture.
* Why does my C sample fail on Windows when I pass `"input.pdf"`?
  On Windows, most path parameters use `COMPDFKIT_STRING`, which is `const wchar_t*`. Use wide strings such as `L"input.pdf"`, or use the `CPDF_TEXT` helper macro for string literals.
* Why are my conversion options different from the C++ sample defaults?
  `CConvertOption` is a C structure and has no constructor. Initialize it explicitly or use a helper similar to `CPDF_DefaultConvertOption`.
- [More FAQ](https://www.compdf.com/faq?utm_source=github&utm_medium=compdfkit-conversion-sdk-c&utm_campaign=compdfkit_conversion_sdk_c_repo&ref_platform_id=github_compdfkit)

## Changelog

Go to our [changelog](https://www.compdf.com/conversion-sdk/changelog-windows?utm_source=github&utm_medium=compdfkit-conversion-sdk-c&utm_campaign=compdfkit_conversion_sdk_c_repo&ref_platform_id=github_compdfkit) to keep up with the latest updates, improvements, and bug fixes.

## Technical Support

Thanks for your interest in ComPDF Conversion SDK, the easy-to-use and powerful development solution. If you encounter technical questions or bug issues when using ComPDF Conversion SDK, please submit the problem report to the [ComPDF team](mailto:support@compdf.com). More information as follows would help us to solve your problem:

- ComPDF Conversion SDK product and version.
- Your operating system and IDE version.
- Detailed descriptions of the problem.
- Any other related information, such as an error screenshot.

Home link: [https://www.compdf.com](https://www.compdf.com/?utm_source=github&utm_medium=compdfkit-conversion-sdk-c&utm_campaign=compdfkit_conversion_sdk_c_repo&ref_platform_id=github_compdfkit)

Technical Support: [https://www.compdf.com/support](https://www.compdf.com/support?utm_source=github&utm_medium=compdfkit-conversion-sdk-c&utm_campaign=compdfkit_conversion_sdk_c_repo&ref_platform_id=github_compdfkit)

Email: [support@compdf.com](mailto:support@compdf.com)
