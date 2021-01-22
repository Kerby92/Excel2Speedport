
/* Code to register embedded modules for meta path based loading if any. */

#include <Python.h>

#include "nuitka/constants_blob.h"

#include "nuitka/unfreezing.h"

/* Type bool */
#ifndef __cplusplus
#include "stdbool.h"
#endif

#if 598 > 0
static unsigned char *bytecode_data[598];
#else
static unsigned char **bytecode_data = NULL;
#endif

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *modulecode___main__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_et_xmlfile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_et_xmlfile$xmlfile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jdcal(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$_constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$cell(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$cell$_writer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$cell$cell(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$cell$read_only(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$cell$text(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$_3d(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$_chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$area_chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$axis(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$bar_chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$bubble_chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$chartspace(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$data_source(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$descriptors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$error_bar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$label(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$layout(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$legend(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$line_chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$marker(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$picture(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$pie_chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$pivot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$plotarea(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$print_settings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$radar_chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$reader(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$reference(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$scatter_chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$series(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$series_factory(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$shapes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$stock_chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$surface_chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$text(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$title(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$trendline(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$updown_bars(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chartsheet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chartsheet$chartsheet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chartsheet$custom(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chartsheet$properties(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chartsheet$protection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chartsheet$publish(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chartsheet$relation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chartsheet$views(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$comments(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$comments$author(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$comments$comment_sheet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$comments$comments(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$comments$shape_writer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$compat$numbers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$compat$strings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$descriptors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$descriptors$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$descriptors$excel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$descriptors$namespace(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$descriptors$nested(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$descriptors$sequence(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$descriptors$serialisable(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$colors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$connector(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$drawing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$effect(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$fill(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$geometry(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$graphic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$image(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$line(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$picture(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$properties(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$relation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$spreadsheet_drawing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$text(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$xdr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$formatting(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$formatting$formatting(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$formatting$rule(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$formula(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$formula$tokenizer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$formula$translate(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$packaging(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$packaging$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$packaging$extended(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$packaging$manifest(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$packaging$relationship(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$packaging$workbook(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$pivot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$pivot$cache(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$pivot$fields(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$pivot$record(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$pivot$table(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$reader(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$reader$drawings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$reader$excel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$reader$strings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$reader$workbook(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$alignment(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$borders(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$builtins(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$cell_style(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$colors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$differential(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$fills(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$fonts(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$named_styles(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$numbers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$protection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$proxy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$styleable(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$stylesheet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$table(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils$bound_dictionary(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils$cell(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils$datetime(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils$escape(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils$formulas(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils$indexed_list(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils$protection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils$units(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$_writer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$child(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$defined_name(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$external_link(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$external_link$external(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$external_reference(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$function_group(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$properties(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$protection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$smart_tags(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$views(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$web(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$workbook(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$_read_only(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$_reader(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$_write_only(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$_writer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$cell_range(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$copier(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$datavalidation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$dimensions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$drawing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$filters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$header_footer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$hyperlink(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$merge(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$page(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$pagebreak(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$properties(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$protection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$related(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$scenario(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$table(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$views(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$worksheet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$writer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$writer$excel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$writer$theme(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$xml(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$xml$constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$xml$functions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);

static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] = {
    {"__main__", modulecode___main__, 0, 0, },
    {"_asyncio", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_bz2", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_ctypes", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_decimal", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_elementtree", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_hashlib", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_lzma", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_msi", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_multiprocessing", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_overlapped", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_queue", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_socket", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_sqlite3", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_ssl", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_tkinter", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"collections", NULL, 0, 46391, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"contextlib", NULL, 1, 20194, NUITKA_BYTECODE_FLAG},
    {"copy", NULL, 2, 6952, NUITKA_BYTECODE_FLAG},
    {"datetime", NULL, 3, 57138, NUITKA_BYTECODE_FLAG},
    {"et_xmlfile", modulecode_et_xmlfile, 0, 0, NUITKA_PACKAGE_FLAG},
    {"et_xmlfile.xmlfile", modulecode_et_xmlfile$xmlfile, 0, 0, },
    {"functools", NULL, 4, 27866, NUITKA_BYTECODE_FLAG},
    {"hashlib", NULL, 5, 6692, NUITKA_BYTECODE_FLAG},
    {"inspect", NULL, 6, 80558, NUITKA_BYTECODE_FLAG},
    {"io", NULL, 7, 3419, NUITKA_BYTECODE_FLAG},
    {"jdcal", modulecode_jdcal, 0, 0, },
    {"keyword", NULL, 8, 963, NUITKA_BYTECODE_FLAG},
    {"mimetypes", NULL, 9, 15996, NUITKA_BYTECODE_FLAG},
    {"ntpath", NULL, 10, 14622, NUITKA_BYTECODE_FLAG},
    {"openpyxl", modulecode_openpyxl, 0, 0, NUITKA_PACKAGE_FLAG},
    {"openpyxl._constants", modulecode_openpyxl$_constants, 0, 0, },
    {"openpyxl.cell", modulecode_openpyxl$cell, 0, 0, NUITKA_PACKAGE_FLAG},
    {"openpyxl.cell._writer", modulecode_openpyxl$cell$_writer, 0, 0, },
    {"openpyxl.cell.cell", modulecode_openpyxl$cell$cell, 0, 0, },
    {"openpyxl.cell.read_only", modulecode_openpyxl$cell$read_only, 0, 0, },
    {"openpyxl.cell.text", modulecode_openpyxl$cell$text, 0, 0, },
    {"openpyxl.chart", modulecode_openpyxl$chart, 0, 0, NUITKA_PACKAGE_FLAG},
    {"openpyxl.chart._3d", modulecode_openpyxl$chart$_3d, 0, 0, },
    {"openpyxl.chart._chart", modulecode_openpyxl$chart$_chart, 0, 0, },
    {"openpyxl.chart.area_chart", modulecode_openpyxl$chart$area_chart, 0, 0, },
    {"openpyxl.chart.axis", modulecode_openpyxl$chart$axis, 0, 0, },
    {"openpyxl.chart.bar_chart", modulecode_openpyxl$chart$bar_chart, 0, 0, },
    {"openpyxl.chart.bubble_chart", modulecode_openpyxl$chart$bubble_chart, 0, 0, },
    {"openpyxl.chart.chartspace", modulecode_openpyxl$chart$chartspace, 0, 0, },
    {"openpyxl.chart.data_source", modulecode_openpyxl$chart$data_source, 0, 0, },
    {"openpyxl.chart.descriptors", modulecode_openpyxl$chart$descriptors, 0, 0, },
    {"openpyxl.chart.error_bar", modulecode_openpyxl$chart$error_bar, 0, 0, },
    {"openpyxl.chart.label", modulecode_openpyxl$chart$label, 0, 0, },
    {"openpyxl.chart.layout", modulecode_openpyxl$chart$layout, 0, 0, },
    {"openpyxl.chart.legend", modulecode_openpyxl$chart$legend, 0, 0, },
    {"openpyxl.chart.line_chart", modulecode_openpyxl$chart$line_chart, 0, 0, },
    {"openpyxl.chart.marker", modulecode_openpyxl$chart$marker, 0, 0, },
    {"openpyxl.chart.picture", modulecode_openpyxl$chart$picture, 0, 0, },
    {"openpyxl.chart.pie_chart", modulecode_openpyxl$chart$pie_chart, 0, 0, },
    {"openpyxl.chart.pivot", modulecode_openpyxl$chart$pivot, 0, 0, },
    {"openpyxl.chart.plotarea", modulecode_openpyxl$chart$plotarea, 0, 0, },
    {"openpyxl.chart.print_settings", modulecode_openpyxl$chart$print_settings, 0, 0, },
    {"openpyxl.chart.radar_chart", modulecode_openpyxl$chart$radar_chart, 0, 0, },
    {"openpyxl.chart.reader", modulecode_openpyxl$chart$reader, 0, 0, },
    {"openpyxl.chart.reference", modulecode_openpyxl$chart$reference, 0, 0, },
    {"openpyxl.chart.scatter_chart", modulecode_openpyxl$chart$scatter_chart, 0, 0, },
    {"openpyxl.chart.series", modulecode_openpyxl$chart$series, 0, 0, },
    {"openpyxl.chart.series_factory", modulecode_openpyxl$chart$series_factory, 0, 0, },
    {"openpyxl.chart.shapes", modulecode_openpyxl$chart$shapes, 0, 0, },
    {"openpyxl.chart.stock_chart", modulecode_openpyxl$chart$stock_chart, 0, 0, },
    {"openpyxl.chart.surface_chart", modulecode_openpyxl$chart$surface_chart, 0, 0, },
    {"openpyxl.chart.text", modulecode_openpyxl$chart$text, 0, 0, },
    {"openpyxl.chart.title", modulecode_openpyxl$chart$title, 0, 0, },
    {"openpyxl.chart.trendline", modulecode_openpyxl$chart$trendline, 0, 0, },
    {"openpyxl.chart.updown_bars", modulecode_openpyxl$chart$updown_bars, 0, 0, },
    {"openpyxl.chartsheet", modulecode_openpyxl$chartsheet, 0, 0, NUITKA_PACKAGE_FLAG},
    {"openpyxl.chartsheet.chartsheet", modulecode_openpyxl$chartsheet$chartsheet, 0, 0, },
    {"openpyxl.chartsheet.custom", modulecode_openpyxl$chartsheet$custom, 0, 0, },
    {"openpyxl.chartsheet.properties", modulecode_openpyxl$chartsheet$properties, 0, 0, },
    {"openpyxl.chartsheet.protection", modulecode_openpyxl$chartsheet$protection, 0, 0, },
    {"openpyxl.chartsheet.publish", modulecode_openpyxl$chartsheet$publish, 0, 0, },
    {"openpyxl.chartsheet.relation", modulecode_openpyxl$chartsheet$relation, 0, 0, },
    {"openpyxl.chartsheet.views", modulecode_openpyxl$chartsheet$views, 0, 0, },
    {"openpyxl.comments", modulecode_openpyxl$comments, 0, 0, NUITKA_PACKAGE_FLAG},
    {"openpyxl.comments.author", modulecode_openpyxl$comments$author, 0, 0, },
    {"openpyxl.comments.comment_sheet", modulecode_openpyxl$comments$comment_sheet, 0, 0, },
    {"openpyxl.comments.comments", modulecode_openpyxl$comments$comments, 0, 0, },
    {"openpyxl.comments.shape_writer", modulecode_openpyxl$comments$shape_writer, 0, 0, },
    {"openpyxl.compat", modulecode_openpyxl$compat, 0, 0, NUITKA_PACKAGE_FLAG},
    {"openpyxl.compat.numbers", modulecode_openpyxl$compat$numbers, 0, 0, },
    {"openpyxl.compat.strings", modulecode_openpyxl$compat$strings, 0, 0, },
    {"openpyxl.descriptors", modulecode_openpyxl$descriptors, 0, 0, NUITKA_PACKAGE_FLAG},
    {"openpyxl.descriptors.base", modulecode_openpyxl$descriptors$base, 0, 0, },
    {"openpyxl.descriptors.excel", modulecode_openpyxl$descriptors$excel, 0, 0, },
    {"openpyxl.descriptors.namespace", modulecode_openpyxl$descriptors$namespace, 0, 0, },
    {"openpyxl.descriptors.nested", modulecode_openpyxl$descriptors$nested, 0, 0, },
    {"openpyxl.descriptors.sequence", modulecode_openpyxl$descriptors$sequence, 0, 0, },
    {"openpyxl.descriptors.serialisable", modulecode_openpyxl$descriptors$serialisable, 0, 0, },
    {"openpyxl.drawing", modulecode_openpyxl$drawing, 0, 0, NUITKA_PACKAGE_FLAG},
    {"openpyxl.drawing.colors", modulecode_openpyxl$drawing$colors, 0, 0, },
    {"openpyxl.drawing.connector", modulecode_openpyxl$drawing$connector, 0, 0, },
    {"openpyxl.drawing.drawing", modulecode_openpyxl$drawing$drawing, 0, 0, },
    {"openpyxl.drawing.effect", modulecode_openpyxl$drawing$effect, 0, 0, },
    {"openpyxl.drawing.fill", modulecode_openpyxl$drawing$fill, 0, 0, },
    {"openpyxl.drawing.geometry", modulecode_openpyxl$drawing$geometry, 0, 0, },
    {"openpyxl.drawing.graphic", modulecode_openpyxl$drawing$graphic, 0, 0, },
    {"openpyxl.drawing.image", modulecode_openpyxl$drawing$image, 0, 0, },
    {"openpyxl.drawing.line", modulecode_openpyxl$drawing$line, 0, 0, },
    {"openpyxl.drawing.picture", modulecode_openpyxl$drawing$picture, 0, 0, },
    {"openpyxl.drawing.properties", modulecode_openpyxl$drawing$properties, 0, 0, },
    {"openpyxl.drawing.relation", modulecode_openpyxl$drawing$relation, 0, 0, },
    {"openpyxl.drawing.spreadsheet_drawing", modulecode_openpyxl$drawing$spreadsheet_drawing, 0, 0, },
    {"openpyxl.drawing.text", modulecode_openpyxl$drawing$text, 0, 0, },
    {"openpyxl.drawing.xdr", modulecode_openpyxl$drawing$xdr, 0, 0, },
    {"openpyxl.formatting", modulecode_openpyxl$formatting, 0, 0, NUITKA_PACKAGE_FLAG},
    {"openpyxl.formatting.formatting", modulecode_openpyxl$formatting$formatting, 0, 0, },
    {"openpyxl.formatting.rule", modulecode_openpyxl$formatting$rule, 0, 0, },
    {"openpyxl.formula", modulecode_openpyxl$formula, 0, 0, NUITKA_PACKAGE_FLAG},
    {"openpyxl.formula.tokenizer", modulecode_openpyxl$formula$tokenizer, 0, 0, },
    {"openpyxl.formula.translate", modulecode_openpyxl$formula$translate, 0, 0, },
    {"openpyxl.packaging", modulecode_openpyxl$packaging, 0, 0, NUITKA_PACKAGE_FLAG},
    {"openpyxl.packaging.core", modulecode_openpyxl$packaging$core, 0, 0, },
    {"openpyxl.packaging.extended", modulecode_openpyxl$packaging$extended, 0, 0, },
    {"openpyxl.packaging.manifest", modulecode_openpyxl$packaging$manifest, 0, 0, },
    {"openpyxl.packaging.relationship", modulecode_openpyxl$packaging$relationship, 0, 0, },
    {"openpyxl.packaging.workbook", modulecode_openpyxl$packaging$workbook, 0, 0, },
    {"openpyxl.pivot", modulecode_openpyxl$pivot, 0, 0, NUITKA_PACKAGE_FLAG},
    {"openpyxl.pivot.cache", modulecode_openpyxl$pivot$cache, 0, 0, },
    {"openpyxl.pivot.fields", modulecode_openpyxl$pivot$fields, 0, 0, },
    {"openpyxl.pivot.record", modulecode_openpyxl$pivot$record, 0, 0, },
    {"openpyxl.pivot.table", modulecode_openpyxl$pivot$table, 0, 0, },
    {"openpyxl.reader", modulecode_openpyxl$reader, 0, 0, NUITKA_PACKAGE_FLAG},
    {"openpyxl.reader.drawings", modulecode_openpyxl$reader$drawings, 0, 0, },
    {"openpyxl.reader.excel", modulecode_openpyxl$reader$excel, 0, 0, },
    {"openpyxl.reader.strings", modulecode_openpyxl$reader$strings, 0, 0, },
    {"openpyxl.reader.workbook", modulecode_openpyxl$reader$workbook, 0, 0, },
    {"openpyxl.styles", modulecode_openpyxl$styles, 0, 0, NUITKA_PACKAGE_FLAG},
    {"openpyxl.styles.alignment", modulecode_openpyxl$styles$alignment, 0, 0, },
    {"openpyxl.styles.borders", modulecode_openpyxl$styles$borders, 0, 0, },
    {"openpyxl.styles.builtins", modulecode_openpyxl$styles$builtins, 0, 0, },
    {"openpyxl.styles.cell_style", modulecode_openpyxl$styles$cell_style, 0, 0, },
    {"openpyxl.styles.colors", modulecode_openpyxl$styles$colors, 0, 0, },
    {"openpyxl.styles.differential", modulecode_openpyxl$styles$differential, 0, 0, },
    {"openpyxl.styles.fills", modulecode_openpyxl$styles$fills, 0, 0, },
    {"openpyxl.styles.fonts", modulecode_openpyxl$styles$fonts, 0, 0, },
    {"openpyxl.styles.named_styles", modulecode_openpyxl$styles$named_styles, 0, 0, },
    {"openpyxl.styles.numbers", modulecode_openpyxl$styles$numbers, 0, 0, },
    {"openpyxl.styles.protection", modulecode_openpyxl$styles$protection, 0, 0, },
    {"openpyxl.styles.proxy", modulecode_openpyxl$styles$proxy, 0, 0, },
    {"openpyxl.styles.styleable", modulecode_openpyxl$styles$styleable, 0, 0, },
    {"openpyxl.styles.stylesheet", modulecode_openpyxl$styles$stylesheet, 0, 0, },
    {"openpyxl.styles.table", modulecode_openpyxl$styles$table, 0, 0, },
    {"openpyxl.utils", modulecode_openpyxl$utils, 0, 0, NUITKA_PACKAGE_FLAG},
    {"openpyxl.utils.bound_dictionary", modulecode_openpyxl$utils$bound_dictionary, 0, 0, },
    {"openpyxl.utils.cell", modulecode_openpyxl$utils$cell, 0, 0, },
    {"openpyxl.utils.datetime", modulecode_openpyxl$utils$datetime, 0, 0, },
    {"openpyxl.utils.escape", modulecode_openpyxl$utils$escape, 0, 0, },
    {"openpyxl.utils.exceptions", modulecode_openpyxl$utils$exceptions, 0, 0, },
    {"openpyxl.utils.formulas", modulecode_openpyxl$utils$formulas, 0, 0, },
    {"openpyxl.utils.indexed_list", modulecode_openpyxl$utils$indexed_list, 0, 0, },
    {"openpyxl.utils.protection", modulecode_openpyxl$utils$protection, 0, 0, },
    {"openpyxl.utils.units", modulecode_openpyxl$utils$units, 0, 0, },
    {"openpyxl.workbook", modulecode_openpyxl$workbook, 0, 0, NUITKA_PACKAGE_FLAG},
    {"openpyxl.workbook._writer", modulecode_openpyxl$workbook$_writer, 0, 0, },
    {"openpyxl.workbook.child", modulecode_openpyxl$workbook$child, 0, 0, },
    {"openpyxl.workbook.defined_name", modulecode_openpyxl$workbook$defined_name, 0, 0, },
    {"openpyxl.workbook.external_link", modulecode_openpyxl$workbook$external_link, 0, 0, NUITKA_PACKAGE_FLAG},
    {"openpyxl.workbook.external_link.external", modulecode_openpyxl$workbook$external_link$external, 0, 0, },
    {"openpyxl.workbook.external_reference", modulecode_openpyxl$workbook$external_reference, 0, 0, },
    {"openpyxl.workbook.function_group", modulecode_openpyxl$workbook$function_group, 0, 0, },
    {"openpyxl.workbook.properties", modulecode_openpyxl$workbook$properties, 0, 0, },
    {"openpyxl.workbook.protection", modulecode_openpyxl$workbook$protection, 0, 0, },
    {"openpyxl.workbook.smart_tags", modulecode_openpyxl$workbook$smart_tags, 0, 0, },
    {"openpyxl.workbook.views", modulecode_openpyxl$workbook$views, 0, 0, },
    {"openpyxl.workbook.web", modulecode_openpyxl$workbook$web, 0, 0, },
    {"openpyxl.workbook.workbook", modulecode_openpyxl$workbook$workbook, 0, 0, },
    {"openpyxl.worksheet", modulecode_openpyxl$worksheet, 0, 0, NUITKA_PACKAGE_FLAG},
    {"openpyxl.worksheet._read_only", modulecode_openpyxl$worksheet$_read_only, 0, 0, },
    {"openpyxl.worksheet._reader", modulecode_openpyxl$worksheet$_reader, 0, 0, },
    {"openpyxl.worksheet._write_only", modulecode_openpyxl$worksheet$_write_only, 0, 0, },
    {"openpyxl.worksheet._writer", modulecode_openpyxl$worksheet$_writer, 0, 0, },
    {"openpyxl.worksheet.cell_range", modulecode_openpyxl$worksheet$cell_range, 0, 0, },
    {"openpyxl.worksheet.copier", modulecode_openpyxl$worksheet$copier, 0, 0, },
    {"openpyxl.worksheet.datavalidation", modulecode_openpyxl$worksheet$datavalidation, 0, 0, },
    {"openpyxl.worksheet.dimensions", modulecode_openpyxl$worksheet$dimensions, 0, 0, },
    {"openpyxl.worksheet.drawing", modulecode_openpyxl$worksheet$drawing, 0, 0, },
    {"openpyxl.worksheet.filters", modulecode_openpyxl$worksheet$filters, 0, 0, },
    {"openpyxl.worksheet.header_footer", modulecode_openpyxl$worksheet$header_footer, 0, 0, },
    {"openpyxl.worksheet.hyperlink", modulecode_openpyxl$worksheet$hyperlink, 0, 0, },
    {"openpyxl.worksheet.merge", modulecode_openpyxl$worksheet$merge, 0, 0, },
    {"openpyxl.worksheet.page", modulecode_openpyxl$worksheet$page, 0, 0, },
    {"openpyxl.worksheet.pagebreak", modulecode_openpyxl$worksheet$pagebreak, 0, 0, },
    {"openpyxl.worksheet.properties", modulecode_openpyxl$worksheet$properties, 0, 0, },
    {"openpyxl.worksheet.protection", modulecode_openpyxl$worksheet$protection, 0, 0, },
    {"openpyxl.worksheet.related", modulecode_openpyxl$worksheet$related, 0, 0, },
    {"openpyxl.worksheet.scenario", modulecode_openpyxl$worksheet$scenario, 0, 0, },
    {"openpyxl.worksheet.table", modulecode_openpyxl$worksheet$table, 0, 0, },
    {"openpyxl.worksheet.views", modulecode_openpyxl$worksheet$views, 0, 0, },
    {"openpyxl.worksheet.worksheet", modulecode_openpyxl$worksheet$worksheet, 0, 0, },
    {"openpyxl.writer", modulecode_openpyxl$writer, 0, 0, NUITKA_PACKAGE_FLAG},
    {"openpyxl.writer.excel", modulecode_openpyxl$writer$excel, 0, 0, },
    {"openpyxl.writer.theme", modulecode_openpyxl$writer$theme, 0, 0, },
    {"openpyxl.xml", modulecode_openpyxl$xml, 0, 0, NUITKA_PACKAGE_FLAG},
    {"openpyxl.xml.constants", modulecode_openpyxl$xml$constants, 0, 0, },
    {"openpyxl.xml.functions", modulecode_openpyxl$xml$functions, 0, 0, },
    {"operator", NULL, 11, 13656, NUITKA_BYTECODE_FLAG},
    {"os", NULL, 12, 31362, NUITKA_BYTECODE_FLAG},
    {"posixpath", NULL, 13, 10393, NUITKA_BYTECODE_FLAG},
    {"pyexpat", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"re", NULL, 14, 14387, NUITKA_BYTECODE_FLAG},
    {"select", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"site", NULL, 15, 13237, NUITKA_BYTECODE_FLAG},
    {"string", NULL, 16, 7265, NUITKA_BYTECODE_FLAG},
    {"tempfile", NULL, 17, 23362, NUITKA_BYTECODE_FLAG},
    {"unicodedata", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"warnings", NULL, 18, 13617, NUITKA_BYTECODE_FLAG},
    {"weakref", NULL, 19, 19483, NUITKA_BYTECODE_FLAG},
    {"xml", NULL, 20, 648, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.etree", NULL, 21, 87, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.etree.ElementTree", NULL, 22, 55599, NUITKA_BYTECODE_FLAG},
    {"zipfile", NULL, 23, 58479, NUITKA_BYTECODE_FLAG},
    {"__future__", NULL, 24, 4123, NUITKA_BYTECODE_FLAG},
    {"_bootlocale", NULL, 25, 1208, NUITKA_BYTECODE_FLAG},
    {"_collections_abc", NULL, 26, 28706, NUITKA_BYTECODE_FLAG},
    {"_compat_pickle", NULL, 27, 5466, NUITKA_BYTECODE_FLAG},
    {"_compression", NULL, 28, 4111, NUITKA_BYTECODE_FLAG},
    {"_dummy_thread", NULL, 29, 6002, NUITKA_BYTECODE_FLAG},
    {"_markupbase", NULL, 30, 7755, NUITKA_BYTECODE_FLAG},
    {"_osx_support", NULL, 31, 10277, NUITKA_BYTECODE_FLAG},
    {"_py_abc", NULL, 32, 4635, NUITKA_BYTECODE_FLAG},
    {"_pyio", NULL, 33, 74044, NUITKA_BYTECODE_FLAG},
    {"_sitebuiltins", NULL, 34, 3446, NUITKA_BYTECODE_FLAG},
    {"_strptime", NULL, 35, 16009, NUITKA_BYTECODE_FLAG},
    {"_threading_local", NULL, 36, 6411, NUITKA_BYTECODE_FLAG},
    {"_weakrefset", NULL, 37, 7565, NUITKA_BYTECODE_FLAG},
    {"abc", NULL, 38, 5299, NUITKA_BYTECODE_FLAG},
    {"aifc", NULL, 39, 25439, NUITKA_BYTECODE_FLAG},
    {"argparse", NULL, 40, 62242, NUITKA_BYTECODE_FLAG},
    {"ast", NULL, 41, 16728, NUITKA_BYTECODE_FLAG},
    {"asynchat", NULL, 42, 6816, NUITKA_BYTECODE_FLAG},
    {"asyncio", NULL, 43, 706, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"asyncio.base_events", NULL, 44, 50985, NUITKA_BYTECODE_FLAG},
    {"asyncio.base_futures", NULL, 45, 1863, NUITKA_BYTECODE_FLAG},
    {"asyncio.base_subprocess", NULL, 46, 9381, NUITKA_BYTECODE_FLAG},
    {"asyncio.base_tasks", NULL, 47, 1909, NUITKA_BYTECODE_FLAG},
    {"asyncio.constants", NULL, 48, 546, NUITKA_BYTECODE_FLAG},
    {"asyncio.coroutines", NULL, 49, 6619, NUITKA_BYTECODE_FLAG},
    {"asyncio.events", NULL, 50, 28022, NUITKA_BYTECODE_FLAG},
    {"asyncio.exceptions", NULL, 51, 2514, NUITKA_BYTECODE_FLAG},
    {"asyncio.format_helpers", NULL, 52, 2297, NUITKA_BYTECODE_FLAG},
    {"asyncio.futures", NULL, 53, 11158, NUITKA_BYTECODE_FLAG},
    {"asyncio.locks", NULL, 54, 16333, NUITKA_BYTECODE_FLAG},
    {"asyncio.log", NULL, 55, 191, NUITKA_BYTECODE_FLAG},
    {"asyncio.proactor_events", NULL, 56, 24110, NUITKA_BYTECODE_FLAG},
    {"asyncio.protocols", NULL, 57, 8579, NUITKA_BYTECODE_FLAG},
    {"asyncio.queues", NULL, 58, 8346, NUITKA_BYTECODE_FLAG},
    {"asyncio.runners", NULL, 59, 1912, NUITKA_BYTECODE_FLAG},
    {"asyncio.selector_events", NULL, 60, 29650, NUITKA_BYTECODE_FLAG},
    {"asyncio.sslproto", NULL, 61, 21583, NUITKA_BYTECODE_FLAG},
    {"asyncio.staggered", NULL, 62, 4083, NUITKA_BYTECODE_FLAG},
    {"asyncio.streams", NULL, 63, 20605, NUITKA_BYTECODE_FLAG},
    {"asyncio.subprocess", NULL, 64, 7323, NUITKA_BYTECODE_FLAG},
    {"asyncio.tasks", NULL, 65, 24246, NUITKA_BYTECODE_FLAG},
    {"asyncio.transports", NULL, 66, 12227, NUITKA_BYTECODE_FLAG},
    {"asyncio.trsock", NULL, 67, 8448, NUITKA_BYTECODE_FLAG},
    {"asyncio.windows_events", NULL, 68, 24548, NUITKA_BYTECODE_FLAG},
    {"asyncio.windows_utils", NULL, 69, 4436, NUITKA_BYTECODE_FLAG},
    {"asyncore", NULL, 70, 15993, NUITKA_BYTECODE_FLAG},
    {"base64", NULL, 71, 17036, NUITKA_BYTECODE_FLAG},
    {"bdb", NULL, 72, 24886, NUITKA_BYTECODE_FLAG},
    {"binhex", NULL, 73, 12099, NUITKA_BYTECODE_FLAG},
    {"bisect", NULL, 74, 2319, NUITKA_BYTECODE_FLAG},
    {"bz2", NULL, 75, 11410, NUITKA_BYTECODE_FLAG},
    {"cProfile", NULL, 76, 5340, NUITKA_BYTECODE_FLAG},
    {"calendar", NULL, 77, 27029, NUITKA_BYTECODE_FLAG},
    {"cgi", NULL, 78, 26272, NUITKA_BYTECODE_FLAG},
    {"cgitb", NULL, 79, 10115, NUITKA_BYTECODE_FLAG},
    {"chunk", NULL, 80, 4804, NUITKA_BYTECODE_FLAG},
    {"cmd", NULL, 81, 12591, NUITKA_BYTECODE_FLAG},
    {"code", NULL, 82, 9878, NUITKA_BYTECODE_FLAG},
    {"codecs", NULL, 83, 33921, NUITKA_BYTECODE_FLAG},
    {"codeop", NULL, 84, 6382, NUITKA_BYTECODE_FLAG},
    {"collections", NULL, 0, 46391, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"collections.abc", NULL, 85, 28705, NUITKA_BYTECODE_FLAG},
    {"colorsys", NULL, 86, 3205, NUITKA_BYTECODE_FLAG},
    {"compileall", NULL, 87, 9375, NUITKA_BYTECODE_FLAG},
    {"concurrent", NULL, 88, 88, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"concurrent.futures", NULL, 89, 1064, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"concurrent.futures._base", NULL, 90, 21865, NUITKA_BYTECODE_FLAG},
    {"concurrent.futures.process", NULL, 91, 20265, NUITKA_BYTECODE_FLAG},
    {"concurrent.futures.thread", NULL, 92, 5783, NUITKA_BYTECODE_FLAG},
    {"configparser", NULL, 93, 45683, NUITKA_BYTECODE_FLAG},
    {"contextlib", NULL, 1, 20194, NUITKA_BYTECODE_FLAG},
    {"contextvars", NULL, 94, 208, NUITKA_BYTECODE_FLAG},
    {"copy", NULL, 2, 6952, NUITKA_BYTECODE_FLAG},
    {"copyreg", NULL, 95, 4283, NUITKA_BYTECODE_FLAG},
    {"csv", NULL, 96, 11875, NUITKA_BYTECODE_FLAG},
    {"ctypes", NULL, 97, 16328, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"ctypes._aix", NULL, 98, 9809, NUITKA_BYTECODE_FLAG},
    {"ctypes._endian", NULL, 99, 1894, NUITKA_BYTECODE_FLAG},
    {"ctypes.macholib", NULL, 100, 255, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"ctypes.macholib.dyld", NULL, 101, 4342, NUITKA_BYTECODE_FLAG},
    {"ctypes.macholib.dylib", NULL, 102, 1881, NUITKA_BYTECODE_FLAG},
    {"ctypes.macholib.framework", NULL, 103, 2161, NUITKA_BYTECODE_FLAG},
    {"ctypes.util", NULL, 104, 8026, NUITKA_BYTECODE_FLAG},
    {"ctypes.wintypes", NULL, 105, 5068, NUITKA_BYTECODE_FLAG},
    {"dataclasses", NULL, 106, 23592, NUITKA_BYTECODE_FLAG},
    {"datetime", NULL, 3, 57138, NUITKA_BYTECODE_FLAG},
    {"dbm", NULL, 107, 4148, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"dbm.dumb", NULL, 108, 7738, NUITKA_BYTECODE_FLAG},
    {"decimal", NULL, 109, 160697, NUITKA_BYTECODE_FLAG},
    {"difflib", NULL, 110, 59403, NUITKA_BYTECODE_FLAG},
    {"dis", NULL, 111, 15773, NUITKA_BYTECODE_FLAG},
    {"distutils", NULL, 112, 340, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"distutils._msvccompiler", NULL, 113, 12931, NUITKA_BYTECODE_FLAG},
    {"distutils.archive_util", NULL, 114, 6504, NUITKA_BYTECODE_FLAG},
    {"distutils.bcppcompiler", NULL, 115, 6488, NUITKA_BYTECODE_FLAG},
    {"distutils.ccompiler", NULL, 116, 33262, NUITKA_BYTECODE_FLAG},
    {"distutils.cmd", NULL, 117, 13913, NUITKA_BYTECODE_FLAG},
    {"distutils.command", NULL, 118, 499, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"distutils.command.bdist", NULL, 119, 3631, NUITKA_BYTECODE_FLAG},
    {"distutils.command.bdist_dumb", NULL, 120, 3557, NUITKA_BYTECODE_FLAG},
    {"distutils.command.bdist_msi", NULL, 121, 19588, NUITKA_BYTECODE_FLAG},
    {"distutils.command.bdist_rpm", NULL, 122, 12393, NUITKA_BYTECODE_FLAG},
    {"distutils.command.bdist_wininst", NULL, 123, 8454, NUITKA_BYTECODE_FLAG},
    {"distutils.command.build", NULL, 124, 3846, NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_clib", NULL, 125, 4779, NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_ext", NULL, 126, 16102, NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_py", NULL, 127, 10445, NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_scripts", NULL, 128, 4289, NUITKA_BYTECODE_FLAG},
    {"distutils.command.check", NULL, 129, 4850, NUITKA_BYTECODE_FLAG},
    {"distutils.command.clean", NULL, 130, 2065, NUITKA_BYTECODE_FLAG},
    {"distutils.command.config", NULL, 131, 10192, NUITKA_BYTECODE_FLAG},
    {"distutils.command.install", NULL, 132, 13537, NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_data", NULL, 133, 2254, NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_egg_info", NULL, 134, 2961, NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_headers", NULL, 135, 1673, NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_lib", NULL, 136, 5078, NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_scripts", NULL, 137, 2106, NUITKA_BYTECODE_FLAG},
    {"distutils.command.register", NULL, 138, 8420, NUITKA_BYTECODE_FLAG},
    {"distutils.command.sdist", NULL, 139, 14481, NUITKA_BYTECODE_FLAG},
    {"distutils.command.upload", NULL, 140, 4904, NUITKA_BYTECODE_FLAG},
    {"distutils.config", NULL, 141, 3474, NUITKA_BYTECODE_FLAG},
    {"distutils.core", NULL, 142, 6579, NUITKA_BYTECODE_FLAG},
    {"distutils.cygwinccompiler", NULL, 143, 8577, NUITKA_BYTECODE_FLAG},
    {"distutils.debug", NULL, 144, 159, NUITKA_BYTECODE_FLAG},
    {"distutils.dep_util", NULL, 145, 2679, NUITKA_BYTECODE_FLAG},
    {"distutils.dir_util", NULL, 146, 5788, NUITKA_BYTECODE_FLAG},
    {"distutils.dist", NULL, 147, 34457, NUITKA_BYTECODE_FLAG},
    {"distutils.errors", NULL, 148, 5215, NUITKA_BYTECODE_FLAG},
    {"distutils.extension", NULL, 149, 6888, NUITKA_BYTECODE_FLAG},
    {"distutils.fancy_getopt", NULL, 150, 10621, NUITKA_BYTECODE_FLAG},
    {"distutils.file_util", NULL, 151, 5898, NUITKA_BYTECODE_FLAG},
    {"distutils.filelist", NULL, 152, 9832, NUITKA_BYTECODE_FLAG},
    {"distutils.log", NULL, 153, 2280, NUITKA_BYTECODE_FLAG},
    {"distutils.msvc9compiler", NULL, 154, 17475, NUITKA_BYTECODE_FLAG},
    {"distutils.msvccompiler", NULL, 155, 14688, NUITKA_BYTECODE_FLAG},
    {"distutils.spawn", NULL, 156, 5071, NUITKA_BYTECODE_FLAG},
    {"distutils.sysconfig", NULL, 157, 12066, NUITKA_BYTECODE_FLAG},
    {"distutils.text_file", NULL, 158, 8404, NUITKA_BYTECODE_FLAG},
    {"distutils.unixccompiler", NULL, 159, 6583, NUITKA_BYTECODE_FLAG},
    {"distutils.util", NULL, 160, 15511, NUITKA_BYTECODE_FLAG},
    {"distutils.version", NULL, 161, 7276, NUITKA_BYTECODE_FLAG},
    {"distutils.versionpredicate", NULL, 162, 5100, NUITKA_BYTECODE_FLAG},
    {"doctest", NULL, 163, 75939, NUITKA_BYTECODE_FLAG},
    {"dummy_threading", NULL, 164, 1075, NUITKA_BYTECODE_FLAG},
    {"email", NULL, 165, 1647, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"email._encoded_words", NULL, 166, 5651, NUITKA_BYTECODE_FLAG},
    {"email._header_value_parser", NULL, 167, 79898, NUITKA_BYTECODE_FLAG},
    {"email._parseaddr", NULL, 168, 12419, NUITKA_BYTECODE_FLAG},
    {"email._policybase", NULL, 169, 14775, NUITKA_BYTECODE_FLAG},
    {"email.base64mime", NULL, 170, 3200, NUITKA_BYTECODE_FLAG},
    {"email.charset", NULL, 171, 11424, NUITKA_BYTECODE_FLAG},
    {"email.contentmanager", NULL, 172, 7326, NUITKA_BYTECODE_FLAG},
    {"email.encoders", NULL, 173, 1577, NUITKA_BYTECODE_FLAG},
    {"email.errors", NULL, 174, 5870, NUITKA_BYTECODE_FLAG},
    {"email.feedparser", NULL, 175, 10607, NUITKA_BYTECODE_FLAG},
    {"email.generator", NULL, 176, 12489, NUITKA_BYTECODE_FLAG},
    {"email.header", NULL, 177, 16404, NUITKA_BYTECODE_FLAG},
    {"email.headerregistry", NULL, 178, 22009, NUITKA_BYTECODE_FLAG},
    {"email.iterators", NULL, 179, 1885, NUITKA_BYTECODE_FLAG},
    {"email.message", NULL, 180, 37843, NUITKA_BYTECODE_FLAG},
    {"email.mime", NULL, 181, 88, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"email.mime.application", NULL, 182, 1424, NUITKA_BYTECODE_FLAG},
    {"email.mime.audio", NULL, 183, 2589, NUITKA_BYTECODE_FLAG},
    {"email.mime.base", NULL, 184, 1006, NUITKA_BYTECODE_FLAG},
    {"email.mime.image", NULL, 185, 1869, NUITKA_BYTECODE_FLAG},
    {"email.mime.message", NULL, 186, 1247, NUITKA_BYTECODE_FLAG},
    {"email.mime.multipart", NULL, 187, 1467, NUITKA_BYTECODE_FLAG},
    {"email.mime.nonmultipart", NULL, 188, 729, NUITKA_BYTECODE_FLAG},
    {"email.mime.text", NULL, 189, 1276, NUITKA_BYTECODE_FLAG},
    {"email.parser", NULL, 190, 5687, NUITKA_BYTECODE_FLAG},
    {"email.policy", NULL, 191, 9623, NUITKA_BYTECODE_FLAG},
    {"email.quoprimime", NULL, 192, 7643, NUITKA_BYTECODE_FLAG},
    {"email.utils", NULL, 193, 9507, NUITKA_BYTECODE_FLAG},
    {"encodings", NULL, 194, 3859, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"encodings.aliases", NULL, 195, 6295, NUITKA_BYTECODE_FLAG},
    {"encodings.ascii", NULL, 196, 1846, NUITKA_BYTECODE_FLAG},
    {"encodings.base64_codec", NULL, 197, 2364, NUITKA_BYTECODE_FLAG},
    {"encodings.big5", NULL, 198, 1374, NUITKA_BYTECODE_FLAG},
    {"encodings.big5hkscs", NULL, 199, 1384, NUITKA_BYTECODE_FLAG},
    {"encodings.bz2_codec", NULL, 200, 3255, NUITKA_BYTECODE_FLAG},
    {"encodings.charmap", NULL, 201, 2856, NUITKA_BYTECODE_FLAG},
    {"encodings.cp037", NULL, 202, 2387, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1006", NULL, 203, 2463, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1026", NULL, 204, 2391, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1125", NULL, 205, 8094, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1140", NULL, 206, 2377, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1250", NULL, 207, 2414, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1251", NULL, 208, 2411, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1252", NULL, 209, 2414, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1253", NULL, 210, 2427, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1254", NULL, 211, 2416, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1255", NULL, 212, 2435, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1256", NULL, 213, 2413, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1257", NULL, 214, 2421, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1258", NULL, 215, 2419, NUITKA_BYTECODE_FLAG},
    {"encodings.cp273", NULL, 216, 2373, NUITKA_BYTECODE_FLAG},
    {"encodings.cp424", NULL, 217, 2417, NUITKA_BYTECODE_FLAG},
    {"encodings.cp437", NULL, 218, 7811, NUITKA_BYTECODE_FLAG},
    {"encodings.cp500", NULL, 219, 2387, NUITKA_BYTECODE_FLAG},
    {"encodings.cp720", NULL, 220, 2484, NUITKA_BYTECODE_FLAG},
    {"encodings.cp737", NULL, 221, 8133, NUITKA_BYTECODE_FLAG},
    {"encodings.cp775", NULL, 222, 7841, NUITKA_BYTECODE_FLAG},
    {"encodings.cp850", NULL, 223, 7472, NUITKA_BYTECODE_FLAG},
    {"encodings.cp852", NULL, 224, 7849, NUITKA_BYTECODE_FLAG},
    {"encodings.cp855", NULL, 225, 8102, NUITKA_BYTECODE_FLAG},
    {"encodings.cp856", NULL, 226, 2449, NUITKA_BYTECODE_FLAG},
    {"encodings.cp857", NULL, 227, 7452, NUITKA_BYTECODE_FLAG},
    {"encodings.cp858", NULL, 228, 7442, NUITKA_BYTECODE_FLAG},
    {"encodings.cp860", NULL, 229, 7790, NUITKA_BYTECODE_FLAG},
    {"encodings.cp861", NULL, 230, 7805, NUITKA_BYTECODE_FLAG},
    {"encodings.cp862", NULL, 231, 7994, NUITKA_BYTECODE_FLAG},
    {"encodings.cp863", NULL, 232, 7805, NUITKA_BYTECODE_FLAG},
    {"encodings.cp864", NULL, 233, 7949, NUITKA_BYTECODE_FLAG},
    {"encodings.cp865", NULL, 234, 7805, NUITKA_BYTECODE_FLAG},
    {"encodings.cp866", NULL, 235, 8138, NUITKA_BYTECODE_FLAG},
    {"encodings.cp869", NULL, 236, 7829, NUITKA_BYTECODE_FLAG},
    {"encodings.cp874", NULL, 237, 2515, NUITKA_BYTECODE_FLAG},
    {"encodings.cp875", NULL, 238, 2384, NUITKA_BYTECODE_FLAG},
    {"encodings.cp932", NULL, 239, 1376, NUITKA_BYTECODE_FLAG},
    {"encodings.cp949", NULL, 240, 1376, NUITKA_BYTECODE_FLAG},
    {"encodings.cp950", NULL, 241, 1376, NUITKA_BYTECODE_FLAG},
    {"encodings.euc_jis_2004", NULL, 242, 1390, NUITKA_BYTECODE_FLAG},
    {"encodings.euc_jisx0213", NULL, 243, 1390, NUITKA_BYTECODE_FLAG},
    {"encodings.euc_jp", NULL, 244, 1378, NUITKA_BYTECODE_FLAG},
    {"encodings.euc_kr", NULL, 245, 1378, NUITKA_BYTECODE_FLAG},
    {"encodings.gb18030", NULL, 246, 1380, NUITKA_BYTECODE_FLAG},
    {"encodings.gb2312", NULL, 247, 1378, NUITKA_BYTECODE_FLAG},
    {"encodings.gbk", NULL, 248, 1372, NUITKA_BYTECODE_FLAG},
    {"encodings.hex_codec", NULL, 249, 2351, NUITKA_BYTECODE_FLAG},
    {"encodings.hp_roman8", NULL, 250, 2588, NUITKA_BYTECODE_FLAG},
    {"encodings.hz", NULL, 251, 1370, NUITKA_BYTECODE_FLAG},
    {"encodings.idna", NULL, 252, 5582, NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp", NULL, 253, 1391, NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_1", NULL, 254, 1395, NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_2", NULL, 255, 1395, NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_2004", NULL, 256, 1401, NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_3", NULL, 257, 1395, NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_ext", NULL, 258, 1399, NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_kr", NULL, 259, 1391, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_1", NULL, 260, 2386, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_10", NULL, 261, 2391, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_11", NULL, 262, 2485, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_13", NULL, 263, 2394, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_14", NULL, 264, 2412, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_15", NULL, 265, 2391, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_16", NULL, 266, 2393, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_2", NULL, 267, 2386, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_3", NULL, 268, 2393, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_4", NULL, 269, 2386, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_5", NULL, 270, 2387, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_6", NULL, 271, 2431, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_7", NULL, 272, 2394, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_8", NULL, 273, 2425, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_9", NULL, 274, 2386, NUITKA_BYTECODE_FLAG},
    {"encodings.johab", NULL, 275, 1376, NUITKA_BYTECODE_FLAG},
    {"encodings.koi8_r", NULL, 276, 2438, NUITKA_BYTECODE_FLAG},
    {"encodings.koi8_t", NULL, 277, 2349, NUITKA_BYTECODE_FLAG},
    {"encodings.koi8_u", NULL, 278, 2424, NUITKA_BYTECODE_FLAG},
    {"encodings.kz1048", NULL, 279, 2401, NUITKA_BYTECODE_FLAG},
    {"encodings.latin_1", NULL, 280, 1858, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_arabic", NULL, 281, 7705, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_centeuro", NULL, 282, 2425, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_croatian", NULL, 283, 2433, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_cyrillic", NULL, 284, 2423, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_farsi", NULL, 285, 2367, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_greek", NULL, 286, 2407, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_iceland", NULL, 287, 2426, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_latin2", NULL, 288, 2567, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_roman", NULL, 289, 2424, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_romanian", NULL, 290, 2434, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_turkish", NULL, 291, 2427, NUITKA_BYTECODE_FLAG},
    {"encodings.mbcs", NULL, 292, 1676, NUITKA_BYTECODE_FLAG},
    {"encodings.oem", NULL, 293, 1489, NUITKA_BYTECODE_FLAG},
    {"encodings.palmos", NULL, 294, 2414, NUITKA_BYTECODE_FLAG},
    {"encodings.ptcp154", NULL, 295, 2508, NUITKA_BYTECODE_FLAG},
    {"encodings.punycode", NULL, 296, 6280, NUITKA_BYTECODE_FLAG},
    {"encodings.quopri_codec", NULL, 297, 2380, NUITKA_BYTECODE_FLAG},
    {"encodings.raw_unicode_escape", NULL, 298, 1727, NUITKA_BYTECODE_FLAG},
    {"encodings.rot_13", NULL, 299, 2966, NUITKA_BYTECODE_FLAG},
    {"encodings.shift_jis", NULL, 300, 1384, NUITKA_BYTECODE_FLAG},
    {"encodings.shift_jis_2004", NULL, 301, 1394, NUITKA_BYTECODE_FLAG},
    {"encodings.shift_jisx0213", NULL, 302, 1394, NUITKA_BYTECODE_FLAG},
    {"encodings.tis_620", NULL, 303, 2476, NUITKA_BYTECODE_FLAG},
    {"encodings.undefined", NULL, 304, 2060, NUITKA_BYTECODE_FLAG},
    {"encodings.unicode_escape", NULL, 305, 1707, NUITKA_BYTECODE_FLAG},
    {"encodings.utf_16", NULL, 306, 4837, NUITKA_BYTECODE_FLAG},
    {"encodings.utf_16_be", NULL, 307, 1615, NUITKA_BYTECODE_FLAG},
    {"encodings.utf_16_le", NULL, 308, 1615, NUITKA_BYTECODE_FLAG},
    {"encodings.utf_32", NULL, 309, 4730, NUITKA_BYTECODE_FLAG},
    {"encodings.utf_32_be", NULL, 310, 1508, NUITKA_BYTECODE_FLAG},
    {"encodings.utf_32_le", NULL, 311, 1508, NUITKA_BYTECODE_FLAG},
    {"encodings.utf_7", NULL, 312, 1536, NUITKA_BYTECODE_FLAG},
    {"encodings.utf_8", NULL, 313, 1595, NUITKA_BYTECODE_FLAG},
    {"encodings.utf_8_sig", NULL, 314, 4511, NUITKA_BYTECODE_FLAG},
    {"encodings.uu_codec", NULL, 315, 3214, NUITKA_BYTECODE_FLAG},
    {"encodings.zlib_codec", NULL, 316, 3074, NUITKA_BYTECODE_FLAG},
    {"enum", NULL, 317, 25899, NUITKA_BYTECODE_FLAG},
    {"filecmp", NULL, 318, 8392, NUITKA_BYTECODE_FLAG},
    {"fileinput", NULL, 319, 13338, NUITKA_BYTECODE_FLAG},
    {"fnmatch", NULL, 320, 3297, NUITKA_BYTECODE_FLAG},
    {"formatter", NULL, 321, 17510, NUITKA_BYTECODE_FLAG},
    {"fractions", NULL, 322, 18704, NUITKA_BYTECODE_FLAG},
    {"ftplib", NULL, 323, 27814, NUITKA_BYTECODE_FLAG},
    {"functools", NULL, 4, 27866, NUITKA_BYTECODE_FLAG},
    {"genericpath", NULL, 324, 3966, NUITKA_BYTECODE_FLAG},
    {"getopt", NULL, 325, 6236, NUITKA_BYTECODE_FLAG},
    {"getpass", NULL, 326, 4143, NUITKA_BYTECODE_FLAG},
    {"gettext", NULL, 327, 17848, NUITKA_BYTECODE_FLAG},
    {"glob", NULL, 328, 4308, NUITKA_BYTECODE_FLAG},
    {"gzip", NULL, 329, 18156, NUITKA_BYTECODE_FLAG},
    {"hashlib", NULL, 5, 6692, NUITKA_BYTECODE_FLAG},
    {"heapq", NULL, 330, 14035, NUITKA_BYTECODE_FLAG},
    {"hmac", NULL, 331, 6353, NUITKA_BYTECODE_FLAG},
    {"html", NULL, 332, 3574, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"html.entities", NULL, 333, 50494, NUITKA_BYTECODE_FLAG},
    {"html.parser", NULL, 334, 11163, NUITKA_BYTECODE_FLAG},
    {"http", NULL, 335, 6020, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"http.client", NULL, 336, 34651, NUITKA_BYTECODE_FLAG},
    {"http.cookiejar", NULL, 337, 53607, NUITKA_BYTECODE_FLAG},
    {"http.cookies", NULL, 338, 15233, NUITKA_BYTECODE_FLAG},
    {"http.server", NULL, 339, 34357, NUITKA_BYTECODE_FLAG},
    {"imaplib", NULL, 340, 41307, NUITKA_BYTECODE_FLAG},
    {"imghdr", NULL, 341, 4083, NUITKA_BYTECODE_FLAG},
    {"imp", NULL, 342, 9774, NUITKA_BYTECODE_FLAG},
    {"importlib", NULL, 343, 3714, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"importlib._bootstrap", NULL, 344, 28570, NUITKA_BYTECODE_FLAG},
    {"importlib._bootstrap_external", NULL, 345, 43675, NUITKA_BYTECODE_FLAG},
    {"importlib.abc", NULL, 346, 13538, NUITKA_BYTECODE_FLAG},
    {"importlib.machinery", NULL, 347, 927, NUITKA_BYTECODE_FLAG},
    {"importlib.metadata", NULL, 348, 20841, NUITKA_BYTECODE_FLAG},
    {"importlib.resources", NULL, 349, 6445, NUITKA_BYTECODE_FLAG},
    {"importlib.util", NULL, 350, 9257, NUITKA_BYTECODE_FLAG},
    {"inspect", NULL, 6, 80558, NUITKA_BYTECODE_FLAG},
    {"io", NULL, 7, 3419, NUITKA_BYTECODE_FLAG},
    {"ipaddress", NULL, 351, 59533, NUITKA_BYTECODE_FLAG},
    {"json", NULL, 352, 12564, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"json.decoder", NULL, 353, 9809, NUITKA_BYTECODE_FLAG},
    {"json.encoder", NULL, 354, 11136, NUITKA_BYTECODE_FLAG},
    {"json.scanner", NULL, 355, 1916, NUITKA_BYTECODE_FLAG},
    {"json.tool", NULL, 356, 1861, NUITKA_BYTECODE_FLAG},
    {"keyword", NULL, 8, 963, NUITKA_BYTECODE_FLAG},
    {"lib2to3", NULL, 357, 85, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"lib2to3.btm_matcher", NULL, 358, 4842, NUITKA_BYTECODE_FLAG},
    {"lib2to3.btm_utils", NULL, 359, 6115, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixer_base", NULL, 360, 6218, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixer_util", NULL, 361, 12163, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes", NULL, 362, 91, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"lib2to3.fixes.fix_apply", NULL, 363, 1638, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_asserts", NULL, 364, 1237, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_basestring", NULL, 365, 621, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_buffer", NULL, 366, 766, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_dict", NULL, 367, 3293, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_except", NULL, 368, 2776, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_exec", NULL, 369, 1107, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_execfile", NULL, 370, 1655, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_exitfunc", NULL, 371, 2264, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_filter", NULL, 372, 2402, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_funcattrs", NULL, 373, 934, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_future", NULL, 374, 742, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_getcwdu", NULL, 375, 746, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_has_key", NULL, 376, 2897, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_idioms", NULL, 377, 3879, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_import", NULL, 378, 2745, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_imports", NULL, 379, 4353, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_imports2", NULL, 380, 504, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_input", NULL, 381, 908, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_intern", NULL, 382, 1092, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_isinstance", NULL, 383, 1509, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_itertools", NULL, 384, 1508, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_itertools_imports", NULL, 385, 1536, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_long", NULL, 386, 663, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_map", NULL, 387, 3055, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_metaclass", NULL, 388, 5305, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_methodattrs", NULL, 389, 896, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_ne", NULL, 390, 769, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_next", NULL, 391, 3041, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_nonzero", NULL, 392, 881, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_numliterals", NULL, 393, 981, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_operator", NULL, 394, 4178, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_paren", NULL, 395, 1348, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_print", NULL, 396, 2301, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_raise", NULL, 397, 2211, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_raw_input", NULL, 398, 753, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_reduce", NULL, 399, 1086, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_reload", NULL, 400, 1104, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_renames", NULL, 401, 1965, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_repr", NULL, 402, 803, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_set_literal", NULL, 403, 1641, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_standarderror", NULL, 404, 678, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_sys_exc", NULL, 405, 1369, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_throw", NULL, 406, 1766, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_tuple_params", NULL, 407, 4549, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_types", NULL, 408, 1795, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_unicode", NULL, 409, 1507, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_urllib", NULL, 410, 5957, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_ws_comma", NULL, 411, 1077, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_xrange", NULL, 412, 2487, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_xreadlines", NULL, 413, 1081, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_zip", NULL, 414, 1541, NUITKA_BYTECODE_FLAG},
    {"lib2to3.main", NULL, 415, 8573, NUITKA_BYTECODE_FLAG},
    {"lib2to3.patcomp", NULL, 416, 5604, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2", NULL, 417, 121, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"lib2to3.pgen2.driver", NULL, 418, 5106, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.grammar", NULL, 419, 5630, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.literals", NULL, 420, 1519, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.parse", NULL, 421, 6463, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.pgen", NULL, 422, 9741, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.token", NULL, 423, 1852, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.tokenize", NULL, 424, 15237, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pygram", NULL, 425, 1225, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pytree", NULL, 426, 24307, NUITKA_BYTECODE_FLAG},
    {"lib2to3.refactor", NULL, 427, 20405, NUITKA_BYTECODE_FLAG},
    {"linecache", NULL, 428, 3832, NUITKA_BYTECODE_FLAG},
    {"locale", NULL, 429, 34654, NUITKA_BYTECODE_FLAG},
    {"logging", NULL, 430, 65069, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"logging.config", NULL, 431, 23189, NUITKA_BYTECODE_FLAG},
    {"logging.handlers", NULL, 432, 43163, NUITKA_BYTECODE_FLAG},
    {"lzma", NULL, 433, 11983, NUITKA_BYTECODE_FLAG},
    {"mailbox", NULL, 434, 60229, NUITKA_BYTECODE_FLAG},
    {"mailcap", NULL, 435, 6441, NUITKA_BYTECODE_FLAG},
    {"mimetypes", NULL, 9, 15996, NUITKA_BYTECODE_FLAG},
    {"modulefinder", NULL, 436, 16080, NUITKA_BYTECODE_FLAG},
    {"msilib", NULL, 437, 15965, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"msilib.schema", NULL, 438, 52135, NUITKA_BYTECODE_FLAG},
    {"msilib.sequence", NULL, 439, 2565, NUITKA_BYTECODE_FLAG},
    {"msilib.text", NULL, 440, 8427, NUITKA_BYTECODE_FLAG},
    {"multiprocessing", NULL, 441, 618, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"multiprocessing.connection", NULL, 442, 25199, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.context", NULL, 443, 12983, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.dummy", NULL, 444, 3859, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"multiprocessing.dummy.connection", NULL, 445, 2513, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.forkserver", NULL, 446, 8324, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.heap", NULL, 447, 7602, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.managers", NULL, 448, 41511, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.pool", NULL, 449, 24990, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.popen_spawn_win32", NULL, 450, 3426, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.process", NULL, 451, 10966, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.queues", NULL, 452, 9519, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.reduction", NULL, 453, 8168, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.resource_sharer", NULL, 454, 5221, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.resource_tracker", NULL, 455, 5150, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.shared_memory", NULL, 456, 14355, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.sharedctypes", NULL, 457, 7014, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.spawn", NULL, 458, 6661, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.synchronize", NULL, 459, 11256, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.util", NULL, 460, 11451, NUITKA_BYTECODE_FLAG},
    {"netrc", NULL, 461, 3742, NUITKA_BYTECODE_FLAG},
    {"nntplib", NULL, 462, 33939, NUITKA_BYTECODE_FLAG},
    {"ntpath", NULL, 10, 14622, NUITKA_BYTECODE_FLAG},
    {"nturl2path", NULL, 463, 1566, NUITKA_BYTECODE_FLAG},
    {"numbers", NULL, 464, 12167, NUITKA_BYTECODE_FLAG},
    {"opcode", NULL, 465, 5385, NUITKA_BYTECODE_FLAG},
    {"operator", NULL, 11, 13656, NUITKA_BYTECODE_FLAG},
    {"optparse", NULL, 466, 48022, NUITKA_BYTECODE_FLAG},
    {"os", NULL, 12, 31362, NUITKA_BYTECODE_FLAG},
    {"pathlib", NULL, 467, 43899, NUITKA_BYTECODE_FLAG},
    {"pdb", NULL, 468, 47157, NUITKA_BYTECODE_FLAG},
    {"pickle", NULL, 469, 46873, NUITKA_BYTECODE_FLAG},
    {"pickletools", NULL, 470, 67169, NUITKA_BYTECODE_FLAG},
    {"pipes", NULL, 471, 7760, NUITKA_BYTECODE_FLAG},
    {"pkgutil", NULL, 472, 16274, NUITKA_BYTECODE_FLAG},
    {"platform", NULL, 473, 24205, NUITKA_BYTECODE_FLAG},
    {"plistlib", NULL, 474, 27130, NUITKA_BYTECODE_FLAG},
    {"poplib", NULL, 475, 13424, NUITKA_BYTECODE_FLAG},
    {"posixpath", NULL, 13, 10393, NUITKA_BYTECODE_FLAG},
    {"pprint", NULL, 476, 16246, NUITKA_BYTECODE_FLAG},
    {"profile", NULL, 477, 14618, NUITKA_BYTECODE_FLAG},
    {"pstats", NULL, 478, 22031, NUITKA_BYTECODE_FLAG},
    {"py_compile", NULL, 479, 7317, NUITKA_BYTECODE_FLAG},
    {"pyclbr", NULL, 480, 10416, NUITKA_BYTECODE_FLAG},
    {"pydoc", NULL, 481, 84052, NUITKA_BYTECODE_FLAG},
    {"pydoc_data", NULL, 482, 88, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"pydoc_data.topics", NULL, 483, 425081, NUITKA_BYTECODE_FLAG},
    {"queue", NULL, 484, 10591, NUITKA_BYTECODE_FLAG},
    {"quopri", NULL, 485, 5713, NUITKA_BYTECODE_FLAG},
    {"random", NULL, 486, 20073, NUITKA_BYTECODE_FLAG},
    {"re", NULL, 14, 14387, NUITKA_BYTECODE_FLAG},
    {"reprlib", NULL, 487, 5268, NUITKA_BYTECODE_FLAG},
    {"rlcompleter", NULL, 488, 5720, NUITKA_BYTECODE_FLAG},
    {"runpy", NULL, 489, 8146, NUITKA_BYTECODE_FLAG},
    {"sched", NULL, 490, 6497, NUITKA_BYTECODE_FLAG},
    {"secrets", NULL, 491, 2155, NUITKA_BYTECODE_FLAG},
    {"selectors", NULL, 492, 16900, NUITKA_BYTECODE_FLAG},
    {"shelve", NULL, 493, 9455, NUITKA_BYTECODE_FLAG},
    {"shlex", NULL, 494, 7501, NUITKA_BYTECODE_FLAG},
    {"shutil", NULL, 495, 36741, NUITKA_BYTECODE_FLAG},
    {"signal", NULL, 496, 2808, NUITKA_BYTECODE_FLAG},
    {"site", NULL, 15, 13237, NUITKA_BYTECODE_FLAG},
    {"smtpd", NULL, 497, 26428, NUITKA_BYTECODE_FLAG},
    {"smtplib", NULL, 498, 35248, NUITKA_BYTECODE_FLAG},
    {"sndhdr", NULL, 499, 6954, NUITKA_BYTECODE_FLAG},
    {"socket", NULL, 500, 27752, NUITKA_BYTECODE_FLAG},
    {"socketserver", NULL, 501, 23972, NUITKA_BYTECODE_FLAG},
    {"sqlite3", NULL, 502, 116, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"sqlite3.dbapi2", NULL, 503, 2469, NUITKA_BYTECODE_FLAG},
    {"sqlite3.dump", NULL, 504, 1894, NUITKA_BYTECODE_FLAG},
    {"sre_compile", NULL, 505, 15107, NUITKA_BYTECODE_FLAG},
    {"sre_constants", NULL, 506, 6324, NUITKA_BYTECODE_FLAG},
    {"sre_parse", NULL, 507, 21612, NUITKA_BYTECODE_FLAG},
    {"ssl", NULL, 508, 44561, NUITKA_BYTECODE_FLAG},
    {"stat", NULL, 509, 4337, NUITKA_BYTECODE_FLAG},
    {"statistics", NULL, 510, 33618, NUITKA_BYTECODE_FLAG},
    {"string", NULL, 16, 7265, NUITKA_BYTECODE_FLAG},
    {"stringprep", NULL, 511, 10982, NUITKA_BYTECODE_FLAG},
    {"struct", NULL, 512, 295, NUITKA_BYTECODE_FLAG},
    {"subprocess", NULL, 513, 41905, NUITKA_BYTECODE_FLAG},
    {"sunau", NULL, 514, 17045, NUITKA_BYTECODE_FLAG},
    {"symbol", NULL, 515, 2369, NUITKA_BYTECODE_FLAG},
    {"symtable", NULL, 516, 11287, NUITKA_BYTECODE_FLAG},
    {"sysconfig", NULL, 517, 15633, NUITKA_BYTECODE_FLAG},
    {"tabnanny", NULL, 518, 6995, NUITKA_BYTECODE_FLAG},
    {"tarfile", NULL, 519, 62626, NUITKA_BYTECODE_FLAG},
    {"telnetlib", NULL, 520, 18202, NUITKA_BYTECODE_FLAG},
    {"tempfile", NULL, 17, 23362, NUITKA_BYTECODE_FLAG},
    {"textwrap", NULL, 521, 13484, NUITKA_BYTECODE_FLAG},
    {"this", NULL, 522, 1226, NUITKA_BYTECODE_FLAG},
    {"threading", NULL, 523, 39941, NUITKA_BYTECODE_FLAG},
    {"timeit", NULL, 524, 11742, NUITKA_BYTECODE_FLAG},
    {"tkinter", NULL, 525, 176253, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"tkinter.colorchooser", NULL, 526, 1090, NUITKA_BYTECODE_FLAG},
    {"tkinter.commondialog", NULL, 527, 1077, NUITKA_BYTECODE_FLAG},
    {"tkinter.constants", NULL, 528, 1619, NUITKA_BYTECODE_FLAG},
    {"tkinter.dialog", NULL, 529, 1437, NUITKA_BYTECODE_FLAG},
    {"tkinter.dnd", NULL, 530, 11227, NUITKA_BYTECODE_FLAG},
    {"tkinter.filedialog", NULL, 531, 12193, NUITKA_BYTECODE_FLAG},
    {"tkinter.font", NULL, 532, 6227, NUITKA_BYTECODE_FLAG},
    {"tkinter.messagebox", NULL, 533, 2956, NUITKA_BYTECODE_FLAG},
    {"tkinter.scrolledtext", NULL, 534, 2142, NUITKA_BYTECODE_FLAG},
    {"tkinter.simpledialog", NULL, 535, 10625, NUITKA_BYTECODE_FLAG},
    {"tkinter.tix", NULL, 536, 79372, NUITKA_BYTECODE_FLAG},
    {"tkinter.ttk", NULL, 537, 56663, NUITKA_BYTECODE_FLAG},
    {"token", NULL, 538, 2450, NUITKA_BYTECODE_FLAG},
    {"tokenize", NULL, 539, 17125, NUITKA_BYTECODE_FLAG},
    {"trace", NULL, 540, 19991, NUITKA_BYTECODE_FLAG},
    {"traceback", NULL, 541, 19832, NUITKA_BYTECODE_FLAG},
    {"tracemalloc", NULL, 542, 17328, NUITKA_BYTECODE_FLAG},
    {"turtle", NULL, 543, 129923, NUITKA_BYTECODE_FLAG},
    {"types", NULL, 544, 9142, NUITKA_BYTECODE_FLAG},
    {"typing", NULL, 545, 62385, NUITKA_BYTECODE_FLAG},
    {"unittest", NULL, 546, 3082, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"unittest.async_case", NULL, 547, 4148, NUITKA_BYTECODE_FLAG},
    {"unittest.case", NULL, 548, 50449, NUITKA_BYTECODE_FLAG},
    {"unittest.loader", NULL, 549, 14501, NUITKA_BYTECODE_FLAG},
    {"unittest.main", NULL, 550, 7499, NUITKA_BYTECODE_FLAG},
    {"unittest.mock", NULL, 551, 77331, NUITKA_BYTECODE_FLAG},
    {"unittest.result", NULL, 552, 7256, NUITKA_BYTECODE_FLAG},
    {"unittest.runner", NULL, 553, 6981, NUITKA_BYTECODE_FLAG},
    {"unittest.signals", NULL, 554, 2185, NUITKA_BYTECODE_FLAG},
    {"unittest.suite", NULL, 555, 9900, NUITKA_BYTECODE_FLAG},
    {"unittest.util", NULL, 556, 4396, NUITKA_BYTECODE_FLAG},
    {"urllib", NULL, 557, 84, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"urllib.error", NULL, 558, 2774, NUITKA_BYTECODE_FLAG},
    {"urllib.parse", NULL, 559, 33959, NUITKA_BYTECODE_FLAG},
    {"urllib.request", NULL, 560, 72518, NUITKA_BYTECODE_FLAG},
    {"urllib.response", NULL, 561, 3254, NUITKA_BYTECODE_FLAG},
    {"urllib.robotparser", NULL, 562, 7292, NUITKA_BYTECODE_FLAG},
    {"uu", NULL, 563, 3570, NUITKA_BYTECODE_FLAG},
    {"uuid", NULL, 564, 23648, NUITKA_BYTECODE_FLAG},
    {"venv", NULL, 565, 14387, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"warnings", NULL, 18, 13617, NUITKA_BYTECODE_FLAG},
    {"wave", NULL, 566, 18114, NUITKA_BYTECODE_FLAG},
    {"weakref", NULL, 19, 19483, NUITKA_BYTECODE_FLAG},
    {"webbrowser", NULL, 567, 17085, NUITKA_BYTECODE_FLAG},
    {"wsgiref", NULL, 568, 680, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"wsgiref.handlers", NULL, 569, 16411, NUITKA_BYTECODE_FLAG},
    {"wsgiref.headers", NULL, 570, 7721, NUITKA_BYTECODE_FLAG},
    {"wsgiref.simple_server", NULL, 571, 5226, NUITKA_BYTECODE_FLAG},
    {"wsgiref.util", NULL, 572, 5377, NUITKA_BYTECODE_FLAG},
    {"wsgiref.validate", NULL, 573, 14720, NUITKA_BYTECODE_FLAG},
    {"xdrlib", NULL, 574, 8186, NUITKA_BYTECODE_FLAG},
    {"xml", NULL, 20, 648, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.dom", NULL, 575, 5486, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.dom.NodeFilter", NULL, 576, 932, NUITKA_BYTECODE_FLAG},
    {"xml.dom.domreg", NULL, 577, 2815, NUITKA_BYTECODE_FLAG},
    {"xml.dom.expatbuilder", NULL, 578, 27306, NUITKA_BYTECODE_FLAG},
    {"xml.dom.minicompat", NULL, 579, 2707, NUITKA_BYTECODE_FLAG},
    {"xml.dom.minidom", NULL, 580, 55339, NUITKA_BYTECODE_FLAG},
    {"xml.dom.pulldom", NULL, 581, 10656, NUITKA_BYTECODE_FLAG},
    {"xml.dom.xmlbuilder", NULL, 582, 12459, NUITKA_BYTECODE_FLAG},
    {"xml.etree", NULL, 21, 87, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.etree.ElementInclude", NULL, 583, 1544, NUITKA_BYTECODE_FLAG},
    {"xml.etree.ElementPath", NULL, 584, 8399, NUITKA_BYTECODE_FLAG},
    {"xml.etree.ElementTree", NULL, 22, 55599, NUITKA_BYTECODE_FLAG},
    {"xml.etree.cElementTree", NULL, 585, 138, NUITKA_BYTECODE_FLAG},
    {"xml.parsers", NULL, 586, 261, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.parsers.expat", NULL, 587, 299, NUITKA_BYTECODE_FLAG},
    {"xml.sax", NULL, 588, 3175, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.sax._exceptions", NULL, 589, 5409, NUITKA_BYTECODE_FLAG},
    {"xml.sax.expatreader", NULL, 590, 12460, NUITKA_BYTECODE_FLAG},
    {"xml.sax.handler", NULL, 591, 12387, NUITKA_BYTECODE_FLAG},
    {"xml.sax.saxutils", NULL, 592, 12884, NUITKA_BYTECODE_FLAG},
    {"xml.sax.xmlreader", NULL, 593, 16809, NUITKA_BYTECODE_FLAG},
    {"xmlrpc", NULL, 594, 84, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xmlrpc.client", NULL, 595, 34504, NUITKA_BYTECODE_FLAG},
    {"xmlrpc.server", NULL, 596, 29373, NUITKA_BYTECODE_FLAG},
    {"zipapp", NULL, 597, 5819, NUITKA_BYTECODE_FLAG},
    {"zipfile", NULL, 23, 58479, NUITKA_BYTECODE_FLAG},
    {NULL, NULL, 0, 0, 0}
};


void setupMetaPathBasedLoader(void) {
    static bool init_done = false;
    if (init_done == false) {
        loadConstantsBlob((PyObject **)bytecode_data, ".bytecode", 598);
        registerMetaPathBasedUnfreezer(meta_path_loader_entries, bytecode_data);

        init_done = true;
    }


}

// This provides the frozen (compiled bytecode) files that are included if
// any.

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    int index;
    int size;
};

static struct frozen_desc _frozen_modules[] = {
    {"_collections_abc", 26, 28706},
    {"_compression", 28, 4111},
    {"_weakrefset", 37, 7565},
    {"abc", 38, 5299},
    {"base64", 71, 17036},
    {"bz2", 75, 11410},
    {"codecs", 83, 33921},
    {"collections", 0, -46391},
    {"collections.abc", 85, 28705},
    {"copyreg", 95, 4283},
    {"dis", 111, 15773},
    {"encodings", 194, -3859},
    {"encodings.aliases", 195, 6295},
    {"encodings.ascii", 196, 1846},
    {"encodings.base64_codec", 197, 2364},
    {"encodings.big5", 198, 1374},
    {"encodings.big5hkscs", 199, 1384},
    {"encodings.bz2_codec", 200, 3255},
    {"encodings.charmap", 201, 2856},
    {"encodings.cp037", 202, 2387},
    {"encodings.cp1006", 203, 2463},
    {"encodings.cp1026", 204, 2391},
    {"encodings.cp1125", 205, 8094},
    {"encodings.cp1140", 206, 2377},
    {"encodings.cp1250", 207, 2414},
    {"encodings.cp1251", 208, 2411},
    {"encodings.cp1252", 209, 2414},
    {"encodings.cp1253", 210, 2427},
    {"encodings.cp1254", 211, 2416},
    {"encodings.cp1255", 212, 2435},
    {"encodings.cp1256", 213, 2413},
    {"encodings.cp1257", 214, 2421},
    {"encodings.cp1258", 215, 2419},
    {"encodings.cp273", 216, 2373},
    {"encodings.cp424", 217, 2417},
    {"encodings.cp437", 218, 7811},
    {"encodings.cp500", 219, 2387},
    {"encodings.cp720", 220, 2484},
    {"encodings.cp737", 221, 8133},
    {"encodings.cp775", 222, 7841},
    {"encodings.cp850", 223, 7472},
    {"encodings.cp852", 224, 7849},
    {"encodings.cp855", 225, 8102},
    {"encodings.cp856", 226, 2449},
    {"encodings.cp857", 227, 7452},
    {"encodings.cp858", 228, 7442},
    {"encodings.cp860", 229, 7790},
    {"encodings.cp861", 230, 7805},
    {"encodings.cp862", 231, 7994},
    {"encodings.cp863", 232, 7805},
    {"encodings.cp864", 233, 7949},
    {"encodings.cp865", 234, 7805},
    {"encodings.cp866", 235, 8138},
    {"encodings.cp869", 236, 7829},
    {"encodings.cp874", 237, 2515},
    {"encodings.cp875", 238, 2384},
    {"encodings.cp932", 239, 1376},
    {"encodings.cp949", 240, 1376},
    {"encodings.cp950", 241, 1376},
    {"encodings.euc_jis_2004", 242, 1390},
    {"encodings.euc_jisx0213", 243, 1390},
    {"encodings.euc_jp", 244, 1378},
    {"encodings.euc_kr", 245, 1378},
    {"encodings.gb18030", 246, 1380},
    {"encodings.gb2312", 247, 1378},
    {"encodings.gbk", 248, 1372},
    {"encodings.hex_codec", 249, 2351},
    {"encodings.hp_roman8", 250, 2588},
    {"encodings.hz", 251, 1370},
    {"encodings.idna", 252, 5582},
    {"encodings.iso2022_jp", 253, 1391},
    {"encodings.iso2022_jp_1", 254, 1395},
    {"encodings.iso2022_jp_2", 255, 1395},
    {"encodings.iso2022_jp_2004", 256, 1401},
    {"encodings.iso2022_jp_3", 257, 1395},
    {"encodings.iso2022_jp_ext", 258, 1399},
    {"encodings.iso2022_kr", 259, 1391},
    {"encodings.iso8859_1", 260, 2386},
    {"encodings.iso8859_10", 261, 2391},
    {"encodings.iso8859_11", 262, 2485},
    {"encodings.iso8859_13", 263, 2394},
    {"encodings.iso8859_14", 264, 2412},
    {"encodings.iso8859_15", 265, 2391},
    {"encodings.iso8859_16", 266, 2393},
    {"encodings.iso8859_2", 267, 2386},
    {"encodings.iso8859_3", 268, 2393},
    {"encodings.iso8859_4", 269, 2386},
    {"encodings.iso8859_5", 270, 2387},
    {"encodings.iso8859_6", 271, 2431},
    {"encodings.iso8859_7", 272, 2394},
    {"encodings.iso8859_8", 273, 2425},
    {"encodings.iso8859_9", 274, 2386},
    {"encodings.johab", 275, 1376},
    {"encodings.koi8_r", 276, 2438},
    {"encodings.koi8_t", 277, 2349},
    {"encodings.koi8_u", 278, 2424},
    {"encodings.kz1048", 279, 2401},
    {"encodings.latin_1", 280, 1858},
    {"encodings.mac_arabic", 281, 7705},
    {"encodings.mac_centeuro", 282, 2425},
    {"encodings.mac_croatian", 283, 2433},
    {"encodings.mac_cyrillic", 284, 2423},
    {"encodings.mac_farsi", 285, 2367},
    {"encodings.mac_greek", 286, 2407},
    {"encodings.mac_iceland", 287, 2426},
    {"encodings.mac_latin2", 288, 2567},
    {"encodings.mac_roman", 289, 2424},
    {"encodings.mac_romanian", 290, 2434},
    {"encodings.mac_turkish", 291, 2427},
    {"encodings.mbcs", 292, 1676},
    {"encodings.oem", 293, 1489},
    {"encodings.palmos", 294, 2414},
    {"encodings.ptcp154", 295, 2508},
    {"encodings.punycode", 296, 6280},
    {"encodings.quopri_codec", 297, 2380},
    {"encodings.raw_unicode_escape", 298, 1727},
    {"encodings.rot_13", 299, 2966},
    {"encodings.shift_jis", 300, 1384},
    {"encodings.shift_jis_2004", 301, 1394},
    {"encodings.shift_jisx0213", 302, 1394},
    {"encodings.tis_620", 303, 2476},
    {"encodings.undefined", 304, 2060},
    {"encodings.unicode_escape", 305, 1707},
    {"encodings.utf_16", 306, 4837},
    {"encodings.utf_16_be", 307, 1615},
    {"encodings.utf_16_le", 308, 1615},
    {"encodings.utf_32", 309, 4730},
    {"encodings.utf_32_be", 310, 1508},
    {"encodings.utf_32_le", 311, 1508},
    {"encodings.utf_7", 312, 1536},
    {"encodings.utf_8", 313, 1595},
    {"encodings.utf_8_sig", 314, 4511},
    {"encodings.uu_codec", 315, 3214},
    {"encodings.zlib_codec", 316, 3074},
    {"enum", 317, 25899},
    {"functools", 4, 27866},
    {"genericpath", 324, 3966},
    {"heapq", 330, 14035},
    {"importlib", 343, -3714},
    {"importlib._bootstrap", 344, 28570},
    {"importlib._bootstrap_external", 345, 43675},
    {"importlib.machinery", 347, 927},
    {"inspect", 6, 80558},
    {"io", 7, 3419},
    {"keyword", 8, 963},
    {"linecache", 428, 3832},
    {"locale", 429, 34654},
    {"ntpath", 10, 14622},
    {"opcode", 465, 5385},
    {"operator", 11, 13656},
    {"os", 12, 31362},
    {"quopri", 485, 5713},
    {"re", 14, 14387},
    {"reprlib", 487, 5268},
    {"sre_compile", 505, 15107},
    {"sre_constants", 506, 6324},
    {"sre_parse", 507, 21612},
    {"stat", 509, 4337},
    {"stringprep", 511, 10982},
    {"struct", 512, 295},
    {"threading", 523, 39941},
    {"token", 538, 2450},
    {"tokenize", 539, 17125},
    {"types", 544, 9142},
    {"warnings", 18, 13617},
    {NULL, 0, 0}
};


void copyFrozenModulesTo(struct _frozen *destination) {
    loadConstantsBlob((PyObject **)bytecode_data, ".bytecode", 598);

    struct frozen_desc *current = _frozen_modules;

    for(;;) {
        destination->name = (char *)current->name;
        destination->code = bytecode_data[current->index];
        destination->size = current->size;

        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}


