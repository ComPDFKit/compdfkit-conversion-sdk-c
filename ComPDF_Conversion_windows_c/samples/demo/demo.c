#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#include "compdf_common_c.h"
#include "compdf_conversion_c.h"

static const char* LICENSE = "..\\license.xml";
static const wchar_t* PASSWORD = L"";

static void progress_callback(int current_page_count, int total_page_count)
{
    printf("convert rate: %d/%d\n", current_page_count, total_page_count);
}

static bool cancel_callback()
{
    return false;
}

static void print_result(const char* name, CSDKErrorCode error_code)
{
    printf("%s: %d\n", name, (int)error_code);
}

int main(void)
{
    CConvertOption options = CPDF_CONVERT_OPTION_DEFAULT;
    CConvertCallback callback;
    COCRLanguage languages[] = { e_CENGLISH };
    char version[30] = { 0 };

    memset(&callback, 0, sizeof(callback));
    callback.progress = progress_callback;
    callback.cancel = cancel_callback;
    callback.ocr = NULL;
    callback.get_ocr_result = NULL;
    callback.layout = NULL;
    callback.get_layout_result = NULL;
    callback.table = NULL;
    callback.get_table_result = NULL;


    print_result("compdfkit conversion sdk license verify",
                 CPDF_LicenseVerify(LICENSE, "", "com.compdfkit.conversion"));
    CPDF_Initialize(L"..\\..\\resource");
    CPDF_SetLogger(false, false);
    print_result("set document ai model",
                 CPDF_SetDocumentAIModel(L"..\\..\\resource\\models\\documentai.model", -1));

    print_result("pdf to word",
                 CPDF_StartPDFToWord(L"..\\input_files\\word.pdf", PASSWORD,
                                     L"..\\output_files\\word.docx", options, &callback));
    print_result("pdf to excel",
                 CPDF_StartPDFToExcel(L"..\\input_files\\excel.pdf", PASSWORD,
                                      L"..\\output_files\\excel.xlsx", options, &callback));
    print_result("pdf to ppt",
                 CPDF_StartPDFToPpt(L"..\\input_files\\powerpoint.pdf", PASSWORD,
                                    L"..\\output_files\\powerpoint.pptx", options, &callback));

    options.excel_csv_format = true;
    print_result("pdf to csv",
                 CPDF_StartPDFToExcel(L"..\\input_files\\excel.pdf", PASSWORD,
                                      L"..\\output_files\\", options, &callback));
    options.excel_csv_format = false;

    options.page_layout_mode = e_PageLayoutModeBox;
    print_result("pdf to html",
                 CPDF_StartPDFToHtml(L"..\\input_files\\word.pdf", PASSWORD,
                                     L"..\\output_files\\html.html", options, &callback));
    print_result("pdf to rtf",
                 CPDF_StartPDFToRtf(L"..\\input_files\\word.pdf", PASSWORD,
                                    L"..\\output_files\\rtf.rtf", options, &callback));
    print_result("pdf to image",
                 CPDF_StartPDFToImage(L"..\\input_files\\word.pdf", PASSWORD,
                                      L"..\\output_files\\", options, &callback));
    print_result("pdf to txt",
                 CPDF_StartPDFToTxt(L"..\\input_files\\word.pdf", PASSWORD,
                                    L"..\\output_files\\txt.txt", options, &callback));
    print_result("pdf to json",
                 CPDF_StartPDFToJson(L"..\\input_files\\word.pdf", PASSWORD,
                                     L"..\\output_files\\json.json", options, &callback));
    print_result("pdf to markdown",
                 CPDF_StartPDFToMarkdown(L"..\\input_files\\word.pdf", PASSWORD,
                                         L"..\\output_files\\markdown.md", options, &callback));

    options.enable_ocr = true;
    options.transparent_text = true;
    options.languages = languages;
    options.language_count = 1;
    print_result("pdf to searchable pdf",
                 CPDF_StartPDFToSearchablePDF(L"..\\input_files\\word.pdf", PASSWORD,
                                              L"..\\output_files\\pdf.pdf", options, &callback));

    print_result("pdf to ofd",
                 CPDF_StartPDFToOfd(L"..\\input_files\\word.pdf", PASSWORD,
                                    L"..\\output_files\\pdf.ofd", options, &callback));

    CPDF_GetVersion(version);
    printf("compdfkit conversion sdk version: %s\n", version);

    CPDF_Release();
    return 0;
}