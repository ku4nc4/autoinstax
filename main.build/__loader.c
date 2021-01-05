
/* Code to register embedded modules for meta path based loading if any. */

#include <Python.h>

#include "nuitka/constants_blob.h"

#include "nuitka/unfreezing.h"

/* Type bool */
#ifndef __cplusplus
#include "stdbool.h"
#endif

#if 110 > 0
static unsigned char *bytecode_data[110];
#else
static unsigned char **bytecode_data = NULL;
#endif

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *modulecode_PIL(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$BmpImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GifImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GimpGradientFile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GimpPaletteFile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$Image(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageChops(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageColor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageDraw(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageDraw2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageFile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageFilter(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageFont(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageMode(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImagePalette(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImagePath(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageQt(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageSequence(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageShow(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$JpegImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$JpegPresets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$MpoImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PaletteFile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PngImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PpmImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PyAccess(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$TiffImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$TiffTags(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_binary(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode___main__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cv2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cv2$data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cv2$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$__config__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_distributor_init(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_globals(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_pytesttester(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$compat$_inspect(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$compat$py3k(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_add_newdocs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_asarray(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_dtype(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_dtype_ctypes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_internal(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_methods(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_string_helpers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_type_aliases(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_ufunc_config(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$arrayprint(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$defchararray(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$einsumfunc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$fromnumeric(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$function_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$getlimits(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$machar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$memmap(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$multiarray(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$numeric(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$numerictypes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$overrides(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$records(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$shape_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$umath(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ctypeslib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$dual(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft$_pocketfft(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft$helper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_datasource(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_iotools(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arraypad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arraysetops(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arrayterator(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$financial(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$format(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$function_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$histograms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$index_tricks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$mixins(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$nanfunctions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$npyio(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$polynomial(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$scimath(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$shape_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$stride_tricks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$twodim_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$type_check(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$ufunclike(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$linalg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$linalg$linalg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$extras(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$mrecords(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$matrixlib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$matrixlib$defmatrix(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$_polybase(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$chebyshev(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$hermite(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$hermite_e(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$laguerre(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$legendre(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$polynomial(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$polyutils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$random(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$random$_pickle(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_six(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_wx(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_wx$__version__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_wx$adv(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_wx$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_wx$html(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_wx$lib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_wx$lib$colourutils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_wx$msw(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);

static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] = {
    {"PIL", modulecode_PIL, 0, 0, NUITKA_PACKAGE_FLAG},
    {"PIL.BmpImagePlugin", modulecode_PIL$BmpImagePlugin, 0, 0, },
    {"PIL.GifImagePlugin", modulecode_PIL$GifImagePlugin, 0, 0, },
    {"PIL.GimpGradientFile", modulecode_PIL$GimpGradientFile, 0, 0, },
    {"PIL.GimpPaletteFile", modulecode_PIL$GimpPaletteFile, 0, 0, },
    {"PIL.Image", modulecode_PIL$Image, 0, 0, },
    {"PIL.ImageChops", modulecode_PIL$ImageChops, 0, 0, },
    {"PIL.ImageColor", modulecode_PIL$ImageColor, 0, 0, },
    {"PIL.ImageDraw", modulecode_PIL$ImageDraw, 0, 0, },
    {"PIL.ImageDraw2", modulecode_PIL$ImageDraw2, 0, 0, },
    {"PIL.ImageFile", modulecode_PIL$ImageFile, 0, 0, },
    {"PIL.ImageFilter", modulecode_PIL$ImageFilter, 0, 0, },
    {"PIL.ImageFont", modulecode_PIL$ImageFont, 0, 0, },
    {"PIL.ImageMode", modulecode_PIL$ImageMode, 0, 0, },
    {"PIL.ImagePalette", modulecode_PIL$ImagePalette, 0, 0, },
    {"PIL.ImagePath", modulecode_PIL$ImagePath, 0, 0, },
    {"PIL.ImageQt", modulecode_PIL$ImageQt, 0, 0, },
    {"PIL.ImageSequence", modulecode_PIL$ImageSequence, 0, 0, },
    {"PIL.ImageShow", modulecode_PIL$ImageShow, 0, 0, },
    {"PIL.JpegImagePlugin", modulecode_PIL$JpegImagePlugin, 0, 0, },
    {"PIL.JpegPresets", modulecode_PIL$JpegPresets, 0, 0, },
    {"PIL.MpoImagePlugin", modulecode_PIL$MpoImagePlugin, 0, 0, },
    {"PIL.PaletteFile", modulecode_PIL$PaletteFile, 0, 0, },
    {"PIL.PngImagePlugin", modulecode_PIL$PngImagePlugin, 0, 0, },
    {"PIL.PpmImagePlugin", modulecode_PIL$PpmImagePlugin, 0, 0, },
    {"PIL.PyAccess", modulecode_PIL$PyAccess, 0, 0, },
    {"PIL.TiffImagePlugin", modulecode_PIL$TiffImagePlugin, 0, 0, },
    {"PIL.TiffTags", modulecode_PIL$TiffTags, 0, 0, },
    {"PIL._binary", modulecode_PIL$_binary, 0, 0, },
    {"PIL._util", modulecode_PIL$_util, 0, 0, },
    {"PIL._version", modulecode_PIL$_version, 0, 0, },
    {"__main__", modulecode___main__, 0, 0, },
    {"cv2", modulecode_cv2, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cv2.data", modulecode_cv2$data, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cv2.version", modulecode_cv2$version, 0, 0, },
    {"numpy", modulecode_numpy, 0, 0, NUITKA_PACKAGE_FLAG},
    {"numpy.__config__", modulecode_numpy$__config__, 0, 0, },
    {"numpy._distributor_init", modulecode_numpy$_distributor_init, 0, 0, },
    {"numpy._globals", modulecode_numpy$_globals, 0, 0, },
    {"numpy._pytesttester", modulecode_numpy$_pytesttester, 0, 0, },
    {"numpy.compat", modulecode_numpy$compat, 0, 0, NUITKA_PACKAGE_FLAG},
    {"numpy.compat._inspect", modulecode_numpy$compat$_inspect, 0, 0, },
    {"numpy.compat.py3k", modulecode_numpy$compat$py3k, 0, 0, },
    {"numpy.core", modulecode_numpy$core, 0, 0, NUITKA_PACKAGE_FLAG},
    {"numpy.core._add_newdocs", modulecode_numpy$core$_add_newdocs, 0, 0, },
    {"numpy.core._asarray", modulecode_numpy$core$_asarray, 0, 0, },
    {"numpy.core._dtype", modulecode_numpy$core$_dtype, 0, 0, },
    {"numpy.core._dtype_ctypes", modulecode_numpy$core$_dtype_ctypes, 0, 0, },
    {"numpy.core._exceptions", modulecode_numpy$core$_exceptions, 0, 0, },
    {"numpy.core._internal", modulecode_numpy$core$_internal, 0, 0, },
    {"numpy.core._methods", modulecode_numpy$core$_methods, 0, 0, },
    {"numpy.core._string_helpers", modulecode_numpy$core$_string_helpers, 0, 0, },
    {"numpy.core._type_aliases", modulecode_numpy$core$_type_aliases, 0, 0, },
    {"numpy.core._ufunc_config", modulecode_numpy$core$_ufunc_config, 0, 0, },
    {"numpy.core.arrayprint", modulecode_numpy$core$arrayprint, 0, 0, },
    {"numpy.core.defchararray", modulecode_numpy$core$defchararray, 0, 0, },
    {"numpy.core.einsumfunc", modulecode_numpy$core$einsumfunc, 0, 0, },
    {"numpy.core.fromnumeric", modulecode_numpy$core$fromnumeric, 0, 0, },
    {"numpy.core.function_base", modulecode_numpy$core$function_base, 0, 0, },
    {"numpy.core.getlimits", modulecode_numpy$core$getlimits, 0, 0, },
    {"numpy.core.machar", modulecode_numpy$core$machar, 0, 0, },
    {"numpy.core.memmap", modulecode_numpy$core$memmap, 0, 0, },
    {"numpy.core.multiarray", modulecode_numpy$core$multiarray, 0, 0, },
    {"numpy.core.numeric", modulecode_numpy$core$numeric, 0, 0, },
    {"numpy.core.numerictypes", modulecode_numpy$core$numerictypes, 0, 0, },
    {"numpy.core.overrides", modulecode_numpy$core$overrides, 0, 0, },
    {"numpy.core.records", modulecode_numpy$core$records, 0, 0, },
    {"numpy.core.shape_base", modulecode_numpy$core$shape_base, 0, 0, },
    {"numpy.core.umath", modulecode_numpy$core$umath, 0, 0, },
    {"numpy.ctypeslib", modulecode_numpy$ctypeslib, 0, 0, },
    {"numpy.distutils", NULL, 0, 1509, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.distutils.__config__", NULL, 1, 2591, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils._shell_utils", NULL, 2, 3198, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.ccompiler", NULL, 3, 19098, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command", NULL, 4, 1044, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.distutils.command.autodist", NULL, 5, 3731, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.bdist_rpm", NULL, 6, 852, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.build", NULL, 7, 1755, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.build_clib", NULL, 8, 7605, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.build_ext", NULL, 9, 12710, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.build_py", NULL, 10, 1383, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.build_scripts", NULL, 11, 1668, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.build_src", NULL, 12, 18378, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.config", NULL, 13, 13931, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.config_compiler", NULL, 14, 3931, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.develop", NULL, 15, 879, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.egg_info", NULL, 16, 1107, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.install", NULL, 17, 2099, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.install_clib", NULL, 18, 1645, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.install_data", NULL, 19, 907, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.install_headers", NULL, 20, 973, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.sdist", NULL, 21, 959, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.conv_template", NULL, 22, 8301, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.core", NULL, 23, 4736, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.cpuinfo", NULL, 24, 32688, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.exec_command", NULL, 25, 9175, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.extension", NULL, 26, 2515, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.fcompiler", NULL, 27, 28255, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.distutils.fcompiler.environment", NULL, 28, 3008, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.from_template", NULL, 29, 7235, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.lib2def", NULL, 30, 3321, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.log", NULL, 31, 2487, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.mingw32ccompiler", NULL, 32, 14397, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.misc_util", NULL, 33, 70371, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.npy_pkg_config", NULL, 34, 12310, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.numpy_distribution", NULL, 35, 800, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.system_info", NULL, 36, 84604, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.unixccompiler", NULL, 37, 3272, NUITKA_BYTECODE_FLAG},
    {"numpy.dual", modulecode_numpy$dual, 0, 0, },
    {"numpy.f2py", NULL, 38, 2669, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.f2py.__version__", NULL, 39, 352, NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.auxfuncs", NULL, 40, 22057, NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.capi_maps", NULL, 41, 18013, NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.cb_rules", NULL, 42, 15580, NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.cfuncs", NULL, 43, 38523, NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.common_rules", NULL, 44, 4806, NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.crackfortran", NULL, 45, 76293, NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.diagnose", NULL, 46, 3743, NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.f2py2e", NULL, 47, 20260, NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.f2py_testing", NULL, 48, 1417, NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.f90mod_rules", NULL, 49, 7328, NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.func2subr", NULL, 50, 6523, NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.rules", NULL, 51, 34459, NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.use_rules", NULL, 52, 3067, NUITKA_BYTECODE_FLAG},
    {"numpy.fft", modulecode_numpy$fft, 0, 0, NUITKA_PACKAGE_FLAG},
    {"numpy.fft._pocketfft", modulecode_numpy$fft$_pocketfft, 0, 0, },
    {"numpy.fft.helper", modulecode_numpy$fft$helper, 0, 0, },
    {"numpy.lib", modulecode_numpy$lib, 0, 0, NUITKA_PACKAGE_FLAG},
    {"numpy.lib._datasource", modulecode_numpy$lib$_datasource, 0, 0, },
    {"numpy.lib._iotools", modulecode_numpy$lib$_iotools, 0, 0, },
    {"numpy.lib._version", modulecode_numpy$lib$_version, 0, 0, },
    {"numpy.lib.arraypad", modulecode_numpy$lib$arraypad, 0, 0, },
    {"numpy.lib.arraysetops", modulecode_numpy$lib$arraysetops, 0, 0, },
    {"numpy.lib.arrayterator", modulecode_numpy$lib$arrayterator, 0, 0, },
    {"numpy.lib.financial", modulecode_numpy$lib$financial, 0, 0, },
    {"numpy.lib.format", modulecode_numpy$lib$format, 0, 0, },
    {"numpy.lib.function_base", modulecode_numpy$lib$function_base, 0, 0, },
    {"numpy.lib.histograms", modulecode_numpy$lib$histograms, 0, 0, },
    {"numpy.lib.index_tricks", modulecode_numpy$lib$index_tricks, 0, 0, },
    {"numpy.lib.mixins", modulecode_numpy$lib$mixins, 0, 0, },
    {"numpy.lib.nanfunctions", modulecode_numpy$lib$nanfunctions, 0, 0, },
    {"numpy.lib.npyio", modulecode_numpy$lib$npyio, 0, 0, },
    {"numpy.lib.polynomial", modulecode_numpy$lib$polynomial, 0, 0, },
    {"numpy.lib.scimath", modulecode_numpy$lib$scimath, 0, 0, },
    {"numpy.lib.shape_base", modulecode_numpy$lib$shape_base, 0, 0, },
    {"numpy.lib.stride_tricks", modulecode_numpy$lib$stride_tricks, 0, 0, },
    {"numpy.lib.twodim_base", modulecode_numpy$lib$twodim_base, 0, 0, },
    {"numpy.lib.type_check", modulecode_numpy$lib$type_check, 0, 0, },
    {"numpy.lib.ufunclike", modulecode_numpy$lib$ufunclike, 0, 0, },
    {"numpy.lib.utils", modulecode_numpy$lib$utils, 0, 0, },
    {"numpy.linalg", modulecode_numpy$linalg, 0, 0, NUITKA_PACKAGE_FLAG},
    {"numpy.linalg.linalg", modulecode_numpy$linalg$linalg, 0, 0, },
    {"numpy.ma", modulecode_numpy$ma, 0, 0, NUITKA_PACKAGE_FLAG},
    {"numpy.ma.core", modulecode_numpy$ma$core, 0, 0, },
    {"numpy.ma.extras", modulecode_numpy$ma$extras, 0, 0, },
    {"numpy.ma.mrecords", modulecode_numpy$ma$mrecords, 0, 0, },
    {"numpy.matrixlib", modulecode_numpy$matrixlib, 0, 0, NUITKA_PACKAGE_FLAG},
    {"numpy.matrixlib.defmatrix", modulecode_numpy$matrixlib$defmatrix, 0, 0, },
    {"numpy.polynomial", modulecode_numpy$polynomial, 0, 0, NUITKA_PACKAGE_FLAG},
    {"numpy.polynomial._polybase", modulecode_numpy$polynomial$_polybase, 0, 0, },
    {"numpy.polynomial.chebyshev", modulecode_numpy$polynomial$chebyshev, 0, 0, },
    {"numpy.polynomial.hermite", modulecode_numpy$polynomial$hermite, 0, 0, },
    {"numpy.polynomial.hermite_e", modulecode_numpy$polynomial$hermite_e, 0, 0, },
    {"numpy.polynomial.laguerre", modulecode_numpy$polynomial$laguerre, 0, 0, },
    {"numpy.polynomial.legendre", modulecode_numpy$polynomial$legendre, 0, 0, },
    {"numpy.polynomial.polynomial", modulecode_numpy$polynomial$polynomial, 0, 0, },
    {"numpy.polynomial.polyutils", modulecode_numpy$polynomial$polyutils, 0, 0, },
    {"numpy.random", modulecode_numpy$random, 0, 0, NUITKA_PACKAGE_FLAG},
    {"numpy.random._pickle", modulecode_numpy$random$_pickle, 0, 0, },
    {"numpy.testing", NULL, 53, 745, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.testing._private", NULL, 54, 181, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.testing._private.decorators", NULL, 55, 9032, NUITKA_BYTECODE_FLAG},
    {"numpy.testing._private.noseclasses", NULL, 56, 9937, NUITKA_BYTECODE_FLAG},
    {"numpy.testing._private.nosetester", NULL, 57, 14918, NUITKA_BYTECODE_FLAG},
    {"numpy.testing._private.parameterized", NULL, 58, 15684, NUITKA_BYTECODE_FLAG},
    {"numpy.testing._private.utils", NULL, 59, 69988, NUITKA_BYTECODE_FLAG},
    {"numpy.version", modulecode_numpy$version, 0, 0, },
    {"pkg_resources", NULL, 60, 100463, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"pkg_resources._vendor", NULL, 61, 180, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"pkg_resources._vendor.appdirs", NULL, 62, 20533, NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging", NULL, 63, 568, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"pkg_resources._vendor.packaging.__about__", NULL, 64, 730, NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging._compat", NULL, 65, 1004, NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging._structures", NULL, 66, 2786, NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging.markers", NULL, 67, 8956, NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging.requirements", NULL, 68, 4027, NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging.specifiers", NULL, 69, 19760, NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging.version", NULL, 70, 12091, NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.pyparsing", NULL, 71, 201657, NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.six", NULL, 72, 24453, NUITKA_BYTECODE_FLAG},
    {"pkg_resources.extern", NULL, 73, 2377, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"setuptools", NULL, 74, 8853, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"setuptools._deprecation_warning", NULL, 75, 539, NUITKA_BYTECODE_FLAG},
    {"setuptools._imp", NULL, 76, 2078, NUITKA_BYTECODE_FLAG},
    {"setuptools.archive_util", NULL, 77, 5182, NUITKA_BYTECODE_FLAG},
    {"setuptools.command", NULL, 78, 735, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"setuptools.command.bdist_egg", NULL, 79, 14446, NUITKA_BYTECODE_FLAG},
    {"setuptools.command.bdist_rpm", NULL, 80, 1807, NUITKA_BYTECODE_FLAG},
    {"setuptools.command.develop", NULL, 81, 6497, NUITKA_BYTECODE_FLAG},
    {"setuptools.command.easy_install", NULL, 82, 65211, NUITKA_BYTECODE_FLAG},
    {"setuptools.command.egg_info", NULL, 83, 21768, NUITKA_BYTECODE_FLAG},
    {"setuptools.command.install", NULL, 84, 4039, NUITKA_BYTECODE_FLAG},
    {"setuptools.command.install_scripts", NULL, 85, 2347, NUITKA_BYTECODE_FLAG},
    {"setuptools.command.py36compat", NULL, 86, 4633, NUITKA_BYTECODE_FLAG},
    {"setuptools.command.sdist", NULL, 87, 7882, NUITKA_BYTECODE_FLAG},
    {"setuptools.command.setopt", NULL, 88, 4560, NUITKA_BYTECODE_FLAG},
    {"setuptools.config", NULL, 89, 19356, NUITKA_BYTECODE_FLAG},
    {"setuptools.depends", NULL, 90, 5239, NUITKA_BYTECODE_FLAG},
    {"setuptools.dist", NULL, 91, 33055, NUITKA_BYTECODE_FLAG},
    {"setuptools.distutils_patch", NULL, 92, 1936, NUITKA_BYTECODE_FLAG},
    {"setuptools.extension", NULL, 93, 1984, NUITKA_BYTECODE_FLAG},
    {"setuptools.extern", NULL, 94, 2400, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"setuptools.glob", NULL, 95, 3756, NUITKA_BYTECODE_FLAG},
    {"setuptools.installer", NULL, 96, 4127, NUITKA_BYTECODE_FLAG},
    {"setuptools.monkey", NULL, 97, 4667, NUITKA_BYTECODE_FLAG},
    {"setuptools.namespaces", NULL, 98, 3639, NUITKA_BYTECODE_FLAG},
    {"setuptools.package_index", NULL, 99, 33131, NUITKA_BYTECODE_FLAG},
    {"setuptools.py27compat", NULL, 100, 1772, NUITKA_BYTECODE_FLAG},
    {"setuptools.py31compat", NULL, 101, 1214, NUITKA_BYTECODE_FLAG},
    {"setuptools.py33compat", NULL, 102, 1431, NUITKA_BYTECODE_FLAG},
    {"setuptools.py34compat", NULL, 103, 473, NUITKA_BYTECODE_FLAG},
    {"setuptools.sandbox", NULL, 104, 15519, NUITKA_BYTECODE_FLAG},
    {"setuptools.ssl_support", NULL, 105, 6896, NUITKA_BYTECODE_FLAG},
    {"setuptools.unicode_utils", NULL, 106, 1174, NUITKA_BYTECODE_FLAG},
    {"setuptools.version", NULL, 107, 315, NUITKA_BYTECODE_FLAG},
    {"setuptools.wheel", NULL, 108, 7314, NUITKA_BYTECODE_FLAG},
    {"setuptools.windows_support", NULL, 109, 1012, NUITKA_BYTECODE_FLAG},
    {"six", modulecode_six, 0, 0, },
    {"wx", modulecode_wx, 0, 0, NUITKA_PACKAGE_FLAG},
    {"wx.__version__", modulecode_wx$__version__, 0, 0, },
    {"wx.adv", modulecode_wx$adv, 0, 0, },
    {"wx.core", modulecode_wx$core, 0, 0, },
    {"wx.html", modulecode_wx$html, 0, 0, },
    {"wx.lib", modulecode_wx$lib, 0, 0, NUITKA_PACKAGE_FLAG},
    {"wx.lib.colourutils", modulecode_wx$lib$colourutils, 0, 0, },
    {"wx.msw", modulecode_wx$msw, 0, 0, },
    {NULL, NULL, 0, 0, 0}
};


void setupMetaPathBasedLoader(void) {
    static bool init_done = false;
    if (init_done == false) {
        loadConstantsBlob((PyObject **)bytecode_data, ".bytecode", 110);
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

    {NULL, 0, 0}
};


void copyFrozenModulesTo(struct _frozen *destination) {
    loadConstantsBlob((PyObject **)bytecode_data, ".bytecode", 110);

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


