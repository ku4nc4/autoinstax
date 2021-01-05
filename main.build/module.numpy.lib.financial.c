/* Generated code for Python module 'numpy.lib.financial'
 * created by Nuitka version 0.6.10.4
 *
 * This code is in part copyright 2020 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_numpy$lib$financial" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$lib$financial;
PyDictObject *moduledict_numpy$lib$financial;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[152];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    loadConstantsBlob(&mod_consts[0], "numpy.lib.financial", 152);

    constants_created = true;
}

/* For multiprocessing, we want to be able to initialize the __main__ constants. */
#if _NUITKA_PLUGIN_MULTIPROCESSING_ENABLED && 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$lib$financial(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "numpy.lib.financial", 152);
}
#endif

// The module code objects.
static PyCodeObject *codeobj_31f0e076353723b3ce4e67315deb7c05;
static PyCodeObject *codeobj_85828734932ec425d81e301753a3ba3f;
static PyCodeObject *codeobj_068531bf9118e45e5883edb90b26c51f;
static PyCodeObject *codeobj_d2a2b1f028dfb5c86b8e69bd0c22a948;
static PyCodeObject *codeobj_df7c931562d79469f54979e1a28a601b;
static PyCodeObject *codeobj_ec63e62f022e53f8054ae13da908b473;
static PyCodeObject *codeobj_ac7522ed11325e06c39bf83f9992097d;
static PyCodeObject *codeobj_7f5331cbe30f33ddb8f9e754313ed604;
static PyCodeObject *codeobj_86ea398df6aa04b60426f566a97089be;
static PyCodeObject *codeobj_42cc692680ea556e217c971e8e3a2aa6;
static PyCodeObject *codeobj_c8aa3dc6e9bb8adbaa9d53ce9215cf1a;
static PyCodeObject *codeobj_472144e55f798cc4cfa6d22aa99220b4;
static PyCodeObject *codeobj_caad8a0da1b2130f5f932f1ad9e431f7;
static PyCodeObject *codeobj_169c24406f4eda16c9545bf68f033ce2;
static PyCodeObject *codeobj_a1d36f025e8a1dca78612709ec1b3eef;
static PyCodeObject *codeobj_15905f607522cd46129ee9813db081bf;
static PyCodeObject *codeobj_c1a5f214900fcfa6267061ca6e2392fb;
static PyCodeObject *codeobj_52851e846834440c173ed3ec0926ff85;
static PyCodeObject *codeobj_c3837951d77b068441532c1918822769;
static PyCodeObject *codeobj_7e07cfcc5627d252ef682fb900dc814b;
static PyCodeObject *codeobj_aa7f98d1334b74466e76789f563a034a;
static PyCodeObject *codeobj_bae565da51e6d21e370bf7253437e58d;
static PyCodeObject *codeobj_a3b6beed179f3ec06ea084751caee02e;
static PyCodeObject *codeobj_31bdb694842f4dff65d4e395dccc78b2;
static PyCodeObject *codeobj_f5bb60273e0ac25e4949495174ce4622;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[89]; CHECK_OBJECT(module_filename_obj);
    codeobj_31f0e076353723b3ce4e67315deb7c05 = MAKE_CODEOBJECT(module_filename_obj, 47, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[128], mod_consts[129], NULL, 1, 0, 0);
    codeobj_85828734932ec425d81e301753a3ba3f = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[130], NULL, NULL, 0, 0, 0);
    codeobj_068531bf9118e45e5883edb90b26c51f = MAKE_CODEOBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[11], mod_consts[131], NULL, 1, 0, 0);
    codeobj_d2a2b1f028dfb5c86b8e69bd0c22a948 = MAKE_CODEOBJECT(module_filename_obj, 50, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[110], mod_consts[132], NULL, 5, 0, 0);
    codeobj_df7c931562d79469f54979e1a28a601b = MAKE_CODEOBJECT(module_filename_obj, 633, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[55], mod_consts[133], NULL, 6, 0, 0);
    codeobj_ec63e62f022e53f8054ae13da908b473 = MAKE_CODEOBJECT(module_filename_obj, 350, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[116], mod_consts[134], NULL, 6, 0, 0);
    codeobj_ac7522ed11325e06c39bf83f9992097d = MAKE_CODEOBJECT(module_filename_obj, 737, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[123], mod_consts[135], NULL, 1, 0, 0);
    codeobj_7f5331cbe30f33ddb8f9e754313ed604 = MAKE_CODEOBJECT(module_filename_obj, 914, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[126], mod_consts[136], NULL, 3, 0, 0);
    codeobj_86ea398df6aa04b60426f566a97089be = MAKE_CODEOBJECT(module_filename_obj, 263, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[115], mod_consts[137], NULL, 5, 0, 0);
    codeobj_42cc692680ea556e217c971e8e3a2aa6 = MAKE_CODEOBJECT(module_filename_obj, 830, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[125], mod_consts[138], NULL, 2, 0, 0);
    codeobj_c8aa3dc6e9bb8adbaa9d53ce9215cf1a = MAKE_CODEOBJECT(module_filename_obj, 155, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[113], mod_consts[139], NULL, 5, 0, 0);
    codeobj_472144e55f798cc4cfa6d22aa99220b4 = MAKE_CODEOBJECT(module_filename_obj, 474, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[117], mod_consts[134], NULL, 6, 0, 0);
    codeobj_caad8a0da1b2130f5f932f1ad9e431f7 = MAKE_CODEOBJECT(module_filename_obj, 521, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[119], mod_consts[140], NULL, 5, 0, 0);
    codeobj_169c24406f4eda16c9545bf68f033ce2 = MAKE_CODEOBJECT(module_filename_obj, 641, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[121], mod_consts[141], NULL, 8, 0, 0);
    codeobj_a1d36f025e8a1dca78612709ec1b3eef = MAKE_CODEOBJECT(module_filename_obj, 464, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], mod_consts[142], NULL, 5, 0, 0);
    codeobj_15905f607522cd46129ee9813db081bf = MAKE_CODEOBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[39], mod_consts[143], NULL, 5, 0, 0);
    codeobj_c1a5f214900fcfa6267061ca6e2392fb = MAKE_CODEOBJECT(module_filename_obj, 357, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[37], mod_consts[144], NULL, 6, 0, 0);
    codeobj_52851e846834440c173ed3ec0926ff85 = MAKE_CODEOBJECT(module_filename_obj, 744, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[124], mod_consts[145], NULL, 1, 0, 0);
    codeobj_c3837951d77b068441532c1918822769 = MAKE_CODEOBJECT(module_filename_obj, 921, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[127], mod_consts[146], NULL, 3, 0, 0);
    codeobj_7e07cfcc5627d252ef682fb900dc814b = MAKE_CODEOBJECT(module_filename_obj, 270, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[56], mod_consts[147], NULL, 5, 0, 0);
    codeobj_aa7f98d1334b74466e76789f563a034a = MAKE_CODEOBJECT(module_filename_obj, 837, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[83], mod_consts[138], NULL, 2, 0, 0);
    codeobj_bae565da51e6d21e370bf7253437e58d = MAKE_CODEOBJECT(module_filename_obj, 162, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], mod_consts[148], NULL, 5, 0, 0);
    codeobj_a3b6beed179f3ec06ea084751caee02e = MAKE_CODEOBJECT(module_filename_obj, 481, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[118], mod_consts[149], NULL, 6, 0, 0);
    codeobj_31bdb694842f4dff65d4e395dccc78b2 = MAKE_CODEOBJECT(module_filename_obj, 528, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[44], mod_consts[150], NULL, 5, 0, 0);
    codeobj_f5bb60273e0ac25e4949495174ce4622 = MAKE_CODEOBJECT(module_filename_obj, 656, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[73], mod_consts[151], NULL, 8, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_10__rbl();


static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_11__ppmt_dispatcher(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_12_ppmt(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_13__pv_dispatcher(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_14_pv(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_15__g_div_gp();


static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_16__rate_dispatcher(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_17_rate(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_18__irr_dispatcher();


static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_19_irr();


static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_1__convert_when();


static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_20__npv_dispatcher();


static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_21_npv();


static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_22__mirr_dispatcher();


static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_23_mirr();


static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_2__fv_dispatcher(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_3_fv(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_4__pmt_dispatcher(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_5_pmt(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_6__nper_dispatcher(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_7_nper(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_8__ipmt_dispatcher(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_9_ipmt(PyObject *defaults);


// The module function definitions.
static PyObject *impl_numpy$lib$financial$$$function_1__convert_when(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_when = python_pars[0];
    PyObject *outline_0_var_x = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_068531bf9118e45e5883edb90b26c51f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    struct Nuitka_FrameObject *frame_31f0e076353723b3ce4e67315deb7c05_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_31f0e076353723b3ce4e67315deb7c05_2 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_068531bf9118e45e5883edb90b26c51f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_068531bf9118e45e5883edb90b26c51f)) {
        Py_XDECREF(cache_frame_068531bf9118e45e5883edb90b26c51f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_068531bf9118e45e5883edb90b26c51f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_068531bf9118e45e5883edb90b26c51f = MAKE_FUNCTION_FRAME(codeobj_068531bf9118e45e5883edb90b26c51f, module_numpy$lib$financial, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_068531bf9118e45e5883edb90b26c51f->m_type_description == NULL);
    frame_068531bf9118e45e5883edb90b26c51f = cache_frame_068531bf9118e45e5883edb90b26c51f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_068531bf9118e45e5883edb90b26c51f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_068531bf9118e45e5883edb90b26c51f) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_when);
        tmp_isinstance_inst_1 = par_when;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[1]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(par_when);
    tmp_return_value = par_when;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        CHECK_OBJECT(par_when);
        tmp_subscript_name_1 = par_when;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_type_1);
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_value_1);
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF(exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_068531bf9118e45e5883edb90b26c51f, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_068531bf9118e45e5883edb90b26c51f, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = mod_consts[3];
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_when);
        tmp_iter_arg_1 = par_when;
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
        assert(tmp_listcomp_1__$0 == NULL);
        tmp_listcomp_1__$0 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = PyList_New(0);
        assert(tmp_listcomp_1__contraction == NULL);
        tmp_listcomp_1__contraction = tmp_assign_source_2;
    }
    if (isFrameUnusable(cache_frame_31f0e076353723b3ce4e67315deb7c05_2)) {
        Py_XDECREF(cache_frame_31f0e076353723b3ce4e67315deb7c05_2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_31f0e076353723b3ce4e67315deb7c05_2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_31f0e076353723b3ce4e67315deb7c05_2 = MAKE_FUNCTION_FRAME(codeobj_31f0e076353723b3ce4e67315deb7c05, module_numpy$lib$financial, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_31f0e076353723b3ce4e67315deb7c05_2->m_type_description == NULL);
    frame_31f0e076353723b3ce4e67315deb7c05_2 = cache_frame_31f0e076353723b3ce4e67315deb7c05_2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_31f0e076353723b3ce4e67315deb7c05_2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_31f0e076353723b3ce4e67315deb7c05_2) == 2); // Frame stack

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        tmp_next_source_1 = tmp_listcomp_1__$0;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_2 = "o";
                exception_lineno = 47;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_listcomp_1__iter_value_0;
            tmp_listcomp_1__iter_value_0 = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
        tmp_assign_source_4 = tmp_listcomp_1__iter_value_0;
        {
            PyObject *old = outline_0_var_x;
            outline_0_var_x = tmp_assign_source_4;
            Py_INCREF(outline_0_var_x);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_append_list_1 = tmp_listcomp_1__contraction;
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_2 = "o";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(outline_0_var_x);
        tmp_subscript_name_2 = outline_0_var_x;
        tmp_append_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_3, tmp_subscript_name_2);
        if (tmp_append_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_2 = "o";
            goto try_except_handler_4;
        }
        assert(PyList_Check(tmp_append_list_1));
        tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_2 = "o";
            goto try_except_handler_4;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 47;
        type_description_2 = "o";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    tmp_return_value = tmp_listcomp_1__contraction;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_4;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_4:;
    CHECK_OBJECT(tmp_listcomp_1__$0);
    Py_DECREF(tmp_listcomp_1__$0);
    tmp_listcomp_1__$0 = NULL;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    Py_DECREF(tmp_listcomp_1__contraction);
    tmp_listcomp_1__contraction = NULL;
    Py_XDECREF(tmp_listcomp_1__iter_value_0);
    tmp_listcomp_1__iter_value_0 = NULL;
    goto frame_return_exit_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_listcomp_1__$0);
    Py_DECREF(tmp_listcomp_1__$0);
    tmp_listcomp_1__$0 = NULL;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    Py_DECREF(tmp_listcomp_1__contraction);
    tmp_listcomp_1__contraction = NULL;
    Py_XDECREF(tmp_listcomp_1__iter_value_0);
    tmp_listcomp_1__iter_value_0 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_2;
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION(frame_31f0e076353723b3ce4e67315deb7c05_2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_2:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_31f0e076353723b3ce4e67315deb7c05_2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_3;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_31f0e076353723b3ce4e67315deb7c05_2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_31f0e076353723b3ce4e67315deb7c05_2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_31f0e076353723b3ce4e67315deb7c05_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_31f0e076353723b3ce4e67315deb7c05_2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_31f0e076353723b3ce4e67315deb7c05_2,
        type_description_2,
        outline_0_var_x
    );


    // Release cached frame if used for exception.
    if (frame_31f0e076353723b3ce4e67315deb7c05_2 == cache_frame_31f0e076353723b3ce4e67315deb7c05_2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_31f0e076353723b3ce4e67315deb7c05_2);
        cache_frame_31f0e076353723b3ce4e67315deb7c05_2 = NULL;
    }

    assertFrameObject(frame_31f0e076353723b3ce4e67315deb7c05_2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;
    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "o";
    goto try_except_handler_3;
    skip_nested_handling_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    Py_XDECREF(outline_0_var_x);
    outline_0_var_x = NULL;
    goto outline_result_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(outline_0_var_x);
    outline_0_var_x = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto outline_exception_1;
    // End of try:
    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;
    outline_exception_1:;
    exception_lineno = 47;
    goto try_except_handler_2;
    outline_result_1:;
    goto try_return_handler_2;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 44;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_068531bf9118e45e5883edb90b26c51f->m_frame) frame_068531bf9118e45e5883edb90b26c51f->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto try_except_handler_2;
    branch_end_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION(frame_068531bf9118e45e5883edb90b26c51f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_068531bf9118e45e5883edb90b26c51f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_068531bf9118e45e5883edb90b26c51f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_068531bf9118e45e5883edb90b26c51f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_068531bf9118e45e5883edb90b26c51f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_068531bf9118e45e5883edb90b26c51f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_068531bf9118e45e5883edb90b26c51f,
        type_description_1,
        par_when
    );


    // Release cached frame if used for exception.
    if (frame_068531bf9118e45e5883edb90b26c51f == cache_frame_068531bf9118e45e5883edb90b26c51f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_068531bf9118e45e5883edb90b26c51f);
        cache_frame_068531bf9118e45e5883edb90b26c51f = NULL;
    }

    assertFrameObject(frame_068531bf9118e45e5883edb90b26c51f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_2:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_when);
    Py_DECREF(par_when);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_when);
    Py_DECREF(par_when);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$financial$$$function_2__fv_dispatcher(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_rate = python_pars[0];
    PyObject *par_nper = python_pars[1];
    PyObject *par_pmt = python_pars[2];
    PyObject *par_pv = python_pars[3];
    PyObject *par_when = python_pars[4];
    struct Nuitka_FrameObject *frame_d2a2b1f028dfb5c86b8e69bd0c22a948;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d2a2b1f028dfb5c86b8e69bd0c22a948 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d2a2b1f028dfb5c86b8e69bd0c22a948)) {
        Py_XDECREF(cache_frame_d2a2b1f028dfb5c86b8e69bd0c22a948);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d2a2b1f028dfb5c86b8e69bd0c22a948 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d2a2b1f028dfb5c86b8e69bd0c22a948 = MAKE_FUNCTION_FRAME(codeobj_d2a2b1f028dfb5c86b8e69bd0c22a948, module_numpy$lib$financial, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d2a2b1f028dfb5c86b8e69bd0c22a948->m_type_description == NULL);
    frame_d2a2b1f028dfb5c86b8e69bd0c22a948 = cache_frame_d2a2b1f028dfb5c86b8e69bd0c22a948;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d2a2b1f028dfb5c86b8e69bd0c22a948);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d2a2b1f028dfb5c86b8e69bd0c22a948) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_kw_name_2;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[5]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 51;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[7]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 51;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = PyDict_Copy(mod_consts[8]);
        frame_d2a2b1f028dfb5c86b8e69bd0c22a948->m_frame.f_lineno = 51;
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_2, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 51;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kw_name_2 = PyDict_Copy(mod_consts[10]);
        frame_d2a2b1f028dfb5c86b8e69bd0c22a948->m_frame.f_lineno = 51;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_2);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d2a2b1f028dfb5c86b8e69bd0c22a948);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d2a2b1f028dfb5c86b8e69bd0c22a948);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d2a2b1f028dfb5c86b8e69bd0c22a948, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d2a2b1f028dfb5c86b8e69bd0c22a948->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d2a2b1f028dfb5c86b8e69bd0c22a948, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d2a2b1f028dfb5c86b8e69bd0c22a948,
        type_description_1,
        par_rate,
        par_nper,
        par_pmt,
        par_pv,
        par_when
    );


    // Release cached frame if used for exception.
    if (frame_d2a2b1f028dfb5c86b8e69bd0c22a948 == cache_frame_d2a2b1f028dfb5c86b8e69bd0c22a948) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d2a2b1f028dfb5c86b8e69bd0c22a948);
        cache_frame_d2a2b1f028dfb5c86b8e69bd0c22a948 = NULL;
    }

    assertFrameObject(frame_d2a2b1f028dfb5c86b8e69bd0c22a948);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(par_rate);
        tmp_tuple_element_2 = par_rate;
        tmp_return_value = PyTuple_New(4);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_nper);
        tmp_tuple_element_2 = par_nper;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
        CHECK_OBJECT(par_pmt);
        tmp_tuple_element_2 = par_pmt;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_2);
        CHECK_OBJECT(par_pv);
        tmp_tuple_element_2 = par_pv;
        PyTuple_SET_ITEM0(tmp_return_value, 3, tmp_tuple_element_2);
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_rate);
    Py_DECREF(par_rate);
    CHECK_OBJECT(par_nper);
    Py_DECREF(par_nper);
    CHECK_OBJECT(par_pmt);
    Py_DECREF(par_pmt);
    CHECK_OBJECT(par_pv);
    Py_DECREF(par_pv);
    CHECK_OBJECT(par_when);
    Py_DECREF(par_when);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_rate);
    Py_DECREF(par_rate);
    CHECK_OBJECT(par_nper);
    Py_DECREF(par_nper);
    CHECK_OBJECT(par_pmt);
    Py_DECREF(par_pmt);
    CHECK_OBJECT(par_pv);
    Py_DECREF(par_pv);
    CHECK_OBJECT(par_when);
    Py_DECREF(par_when);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$financial$$$function_3_fv(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_rate = python_pars[0];
    PyObject *par_nper = python_pars[1];
    PyObject *par_pmt = python_pars[2];
    PyObject *par_pv = python_pars[3];
    PyObject *par_when = python_pars[4];
    PyObject *var_temp = NULL;
    PyObject *var_fact = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_15905f607522cd46129ee9813db081bf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_15905f607522cd46129ee9813db081bf = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_15905f607522cd46129ee9813db081bf)) {
        Py_XDECREF(cache_frame_15905f607522cd46129ee9813db081bf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_15905f607522cd46129ee9813db081bf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_15905f607522cd46129ee9813db081bf = MAKE_FUNCTION_FRAME(codeobj_15905f607522cd46129ee9813db081bf, module_numpy$lib$financial, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_15905f607522cd46129ee9813db081bf->m_type_description == NULL);
    frame_15905f607522cd46129ee9813db081bf = cache_frame_15905f607522cd46129ee9813db081bf;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_15905f607522cd46129ee9813db081bf);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_15905f607522cd46129ee9813db081bf) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_when);
        tmp_args_element_name_1 = par_when;
        frame_15905f607522cd46129ee9813db081bf->m_frame.f_lineno = 147;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_when;
            assert(old != NULL);
            par_when = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_list_element_1;
        tmp_called_name_2 = (PyObject *)&PyMap_Type;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[12]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_rate);
        tmp_list_element_1 = par_rate;
        tmp_args_element_name_3 = PyList_New(5);
        PyList_SET_ITEM0(tmp_args_element_name_3, 0, tmp_list_element_1);
        CHECK_OBJECT(par_nper);
        tmp_list_element_1 = par_nper;
        PyList_SET_ITEM0(tmp_args_element_name_3, 1, tmp_list_element_1);
        CHECK_OBJECT(par_pmt);
        tmp_list_element_1 = par_pmt;
        PyList_SET_ITEM0(tmp_args_element_name_3, 2, tmp_list_element_1);
        CHECK_OBJECT(par_pv);
        tmp_list_element_1 = par_pv;
        PyList_SET_ITEM0(tmp_args_element_name_3, 3, tmp_list_element_1);
        CHECK_OBJECT(par_when);
        tmp_list_element_1 = par_when;
        PyList_SET_ITEM0(tmp_args_element_name_3, 4, tmp_list_element_1);
        frame_15905f607522cd46129ee9813db081bf->m_frame.f_lineno = 148;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_1, 0, 5);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 148;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_2, 1, 5);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 148;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_3, 2, 5);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 148;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_4, 3, 5);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 148;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_4 == NULL);
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_5, 4, 5);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 148;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_5 == NULL);
        tmp_tuple_unpack_1__element_5 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooo";
                    exception_lineno = 148;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[13];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooo";
            exception_lineno = 148;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_rate;
            assert(old != NULL);
            par_rate = tmp_assign_source_8;
            Py_INCREF(par_rate);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_nper;
            assert(old != NULL);
            par_nper = tmp_assign_source_9;
            Py_INCREF(par_nper);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = par_pmt;
            assert(old != NULL);
            par_pmt = tmp_assign_source_10;
            Py_INCREF(par_pmt);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_4;
        {
            PyObject *old = par_pv;
            assert(old != NULL);
            par_pv = tmp_assign_source_11;
            Py_INCREF(par_pv);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_5);
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_5;
        {
            PyObject *old = par_when;
            assert(old != NULL);
            par_when = tmp_assign_source_12;
            Py_INCREF(par_when);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;

    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        tmp_left_name_2 = mod_consts[14];
        CHECK_OBJECT(par_rate);
        tmp_right_name_1 = par_rate;
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_left_name_2, tmp_right_name_1);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_nper);
        tmp_right_name_2 = par_nper;
        tmp_assign_source_13 = BINARY_OPERATION_POW_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_2);
        Py_DECREF(tmp_left_name_1);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_temp == NULL);
        var_temp = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_3;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_4;
        PyObject *tmp_right_name_5;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_6;
        PyObject *tmp_right_name_7;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[15]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_rate);
        tmp_compexpr_left_1 = par_rate;
        tmp_compexpr_right_1 = mod_consts[16];
        tmp_args_element_name_4 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 150;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_nper);
        tmp_args_element_name_5 = par_nper;
        tmp_left_name_5 = mod_consts[14];
        CHECK_OBJECT(par_rate);
        tmp_left_name_6 = par_rate;
        CHECK_OBJECT(par_when);
        tmp_right_name_4 = par_when;
        tmp_right_name_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_6, tmp_right_name_4);
        if (tmp_right_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_4);

            exception_lineno = 151;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_4 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_left_name_5, tmp_right_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_left_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_4);

            exception_lineno = 151;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_temp);
        tmp_left_name_7 = var_temp;
        tmp_right_name_6 = mod_consts[14];
        tmp_right_name_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_7, tmp_right_name_6);
        if (tmp_right_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_4);
            Py_DECREF(tmp_left_name_4);

            exception_lineno = 151;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_4, tmp_right_name_5);
        Py_DECREF(tmp_left_name_4);
        Py_DECREF(tmp_right_name_5);
        if (tmp_left_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_4);

            exception_lineno = 151;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_rate);
        tmp_right_name_7 = par_rate;
        tmp_args_element_name_6 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_name_3, tmp_right_name_7);
        Py_DECREF(tmp_left_name_3);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_4);

            exception_lineno = 151;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_15905f607522cd46129ee9813db081bf->m_frame.f_lineno = 150;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_3, call_args);
        }

        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_4);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_fact == NULL);
        var_fact = tmp_assign_source_14;
    }
    {
        PyObject *tmp_operand_name_1;
        PyObject *tmp_left_name_8;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_8;
        PyObject *tmp_right_name_9;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_10;
        CHECK_OBJECT(par_pv);
        tmp_left_name_9 = par_pv;
        CHECK_OBJECT(var_temp);
        tmp_right_name_8 = var_temp;
        tmp_left_name_8 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_9, tmp_right_name_8);
        if (tmp_left_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_pmt);
        tmp_left_name_10 = par_pmt;
        CHECK_OBJECT(var_fact);
        tmp_right_name_10 = var_fact;
        tmp_right_name_9 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_10, tmp_right_name_10);
        if (tmp_right_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_8);

            exception_lineno = 152;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_8, tmp_right_name_9);
        Py_DECREF(tmp_left_name_8);
        Py_DECREF(tmp_right_name_9);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = UNARY_OPERATION(PyNumber_Negative, tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_15905f607522cd46129ee9813db081bf);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_15905f607522cd46129ee9813db081bf);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_15905f607522cd46129ee9813db081bf);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_15905f607522cd46129ee9813db081bf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_15905f607522cd46129ee9813db081bf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_15905f607522cd46129ee9813db081bf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_15905f607522cd46129ee9813db081bf,
        type_description_1,
        par_rate,
        par_nper,
        par_pmt,
        par_pv,
        par_when,
        var_temp,
        var_fact
    );


    // Release cached frame if used for exception.
    if (frame_15905f607522cd46129ee9813db081bf == cache_frame_15905f607522cd46129ee9813db081bf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_15905f607522cd46129ee9813db081bf);
        cache_frame_15905f607522cd46129ee9813db081bf = NULL;
    }

    assertFrameObject(frame_15905f607522cd46129ee9813db081bf);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_rate);
    Py_DECREF(par_rate);
    par_rate = NULL;
    CHECK_OBJECT(par_nper);
    Py_DECREF(par_nper);
    par_nper = NULL;
    CHECK_OBJECT(par_pmt);
    Py_DECREF(par_pmt);
    par_pmt = NULL;
    CHECK_OBJECT(par_pv);
    Py_DECREF(par_pv);
    par_pv = NULL;
    CHECK_OBJECT(par_when);
    Py_DECREF(par_when);
    par_when = NULL;
    CHECK_OBJECT(var_temp);
    Py_DECREF(var_temp);
    var_temp = NULL;
    CHECK_OBJECT(var_fact);
    Py_DECREF(var_fact);
    var_fact = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_rate);
    Py_DECREF(par_rate);
    par_rate = NULL;
    CHECK_OBJECT(par_nper);
    Py_DECREF(par_nper);
    par_nper = NULL;
    CHECK_OBJECT(par_pmt);
    Py_DECREF(par_pmt);
    par_pmt = NULL;
    CHECK_OBJECT(par_pv);
    Py_DECREF(par_pv);
    par_pv = NULL;
    CHECK_OBJECT(par_when);
    Py_DECREF(par_when);
    par_when = NULL;
    Py_XDECREF(var_temp);
    var_temp = NULL;
    Py_XDECREF(var_fact);
    var_fact = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$financial$$$function_4__pmt_dispatcher(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_rate = python_pars[0];
    PyObject *par_nper = python_pars[1];
    PyObject *par_pv = python_pars[2];
    PyObject *par_fv = python_pars[3];
    PyObject *par_when = python_pars[4];
    struct Nuitka_FrameObject *frame_c8aa3dc6e9bb8adbaa9d53ce9215cf1a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c8aa3dc6e9bb8adbaa9d53ce9215cf1a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c8aa3dc6e9bb8adbaa9d53ce9215cf1a)) {
        Py_XDECREF(cache_frame_c8aa3dc6e9bb8adbaa9d53ce9215cf1a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c8aa3dc6e9bb8adbaa9d53ce9215cf1a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c8aa3dc6e9bb8adbaa9d53ce9215cf1a = MAKE_FUNCTION_FRAME(codeobj_c8aa3dc6e9bb8adbaa9d53ce9215cf1a, module_numpy$lib$financial, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c8aa3dc6e9bb8adbaa9d53ce9215cf1a->m_type_description == NULL);
    frame_c8aa3dc6e9bb8adbaa9d53ce9215cf1a = cache_frame_c8aa3dc6e9bb8adbaa9d53ce9215cf1a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c8aa3dc6e9bb8adbaa9d53ce9215cf1a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c8aa3dc6e9bb8adbaa9d53ce9215cf1a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_kw_name_2;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[5]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 156;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[7]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 156;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = PyDict_Copy(mod_consts[18]);
        frame_c8aa3dc6e9bb8adbaa9d53ce9215cf1a->m_frame.f_lineno = 156;
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_2, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 156;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kw_name_2 = PyDict_Copy(mod_consts[10]);
        frame_c8aa3dc6e9bb8adbaa9d53ce9215cf1a->m_frame.f_lineno = 156;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_2);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c8aa3dc6e9bb8adbaa9d53ce9215cf1a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c8aa3dc6e9bb8adbaa9d53ce9215cf1a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c8aa3dc6e9bb8adbaa9d53ce9215cf1a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c8aa3dc6e9bb8adbaa9d53ce9215cf1a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c8aa3dc6e9bb8adbaa9d53ce9215cf1a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c8aa3dc6e9bb8adbaa9d53ce9215cf1a,
        type_description_1,
        par_rate,
        par_nper,
        par_pv,
        par_fv,
        par_when
    );


    // Release cached frame if used for exception.
    if (frame_c8aa3dc6e9bb8adbaa9d53ce9215cf1a == cache_frame_c8aa3dc6e9bb8adbaa9d53ce9215cf1a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c8aa3dc6e9bb8adbaa9d53ce9215cf1a);
        cache_frame_c8aa3dc6e9bb8adbaa9d53ce9215cf1a = NULL;
    }

    assertFrameObject(frame_c8aa3dc6e9bb8adbaa9d53ce9215cf1a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(par_rate);
        tmp_tuple_element_2 = par_rate;
        tmp_return_value = PyTuple_New(4);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_nper);
        tmp_tuple_element_2 = par_nper;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
        CHECK_OBJECT(par_pv);
        tmp_tuple_element_2 = par_pv;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_2);
        CHECK_OBJECT(par_fv);
        tmp_tuple_element_2 = par_fv;
        PyTuple_SET_ITEM0(tmp_return_value, 3, tmp_tuple_element_2);
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_rate);
    Py_DECREF(par_rate);
    CHECK_OBJECT(par_nper);
    Py_DECREF(par_nper);
    CHECK_OBJECT(par_pv);
    Py_DECREF(par_pv);
    CHECK_OBJECT(par_fv);
    Py_DECREF(par_fv);
    CHECK_OBJECT(par_when);
    Py_DECREF(par_when);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_rate);
    Py_DECREF(par_rate);
    CHECK_OBJECT(par_nper);
    Py_DECREF(par_nper);
    CHECK_OBJECT(par_pv);
    Py_DECREF(par_pv);
    CHECK_OBJECT(par_fv);
    Py_DECREF(par_fv);
    CHECK_OBJECT(par_when);
    Py_DECREF(par_when);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$financial$$$function_5_pmt(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_rate = python_pars[0];
    PyObject *par_nper = python_pars[1];
    PyObject *par_pv = python_pars[2];
    PyObject *par_fv = python_pars[3];
    PyObject *par_when = python_pars[4];
    PyObject *var_temp = NULL;
    PyObject *var_mask = NULL;
    PyObject *var_masked_rate = NULL;
    PyObject *var_fact = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_bae565da51e6d21e370bf7253437e58d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_bae565da51e6d21e370bf7253437e58d = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bae565da51e6d21e370bf7253437e58d)) {
        Py_XDECREF(cache_frame_bae565da51e6d21e370bf7253437e58d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bae565da51e6d21e370bf7253437e58d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bae565da51e6d21e370bf7253437e58d = MAKE_FUNCTION_FRAME(codeobj_bae565da51e6d21e370bf7253437e58d, module_numpy$lib$financial, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_bae565da51e6d21e370bf7253437e58d->m_type_description == NULL);
    frame_bae565da51e6d21e370bf7253437e58d = cache_frame_bae565da51e6d21e370bf7253437e58d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_bae565da51e6d21e370bf7253437e58d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_bae565da51e6d21e370bf7253437e58d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_when);
        tmp_args_element_name_1 = par_when;
        frame_bae565da51e6d21e370bf7253437e58d->m_frame.f_lineno = 253;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_when;
            assert(old != NULL);
            par_when = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_list_element_1;
        tmp_called_name_2 = (PyObject *)&PyMap_Type;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[19]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_rate);
        tmp_list_element_1 = par_rate;
        tmp_args_element_name_3 = PyList_New(5);
        PyList_SET_ITEM0(tmp_args_element_name_3, 0, tmp_list_element_1);
        CHECK_OBJECT(par_nper);
        tmp_list_element_1 = par_nper;
        PyList_SET_ITEM0(tmp_args_element_name_3, 1, tmp_list_element_1);
        CHECK_OBJECT(par_pv);
        tmp_list_element_1 = par_pv;
        PyList_SET_ITEM0(tmp_args_element_name_3, 2, tmp_list_element_1);
        CHECK_OBJECT(par_fv);
        tmp_list_element_1 = par_fv;
        PyList_SET_ITEM0(tmp_args_element_name_3, 3, tmp_list_element_1);
        CHECK_OBJECT(par_when);
        tmp_list_element_1 = par_when;
        PyList_SET_ITEM0(tmp_args_element_name_3, 4, tmp_list_element_1);
        frame_bae565da51e6d21e370bf7253437e58d->m_frame.f_lineno = 254;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_1, 0, 5);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 254;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_2, 1, 5);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 254;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_3, 2, 5);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 254;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_4, 3, 5);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 254;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_4 == NULL);
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_5, 4, 5);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 254;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_5 == NULL);
        tmp_tuple_unpack_1__element_5 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooo";
                    exception_lineno = 254;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[13];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooo";
            exception_lineno = 254;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_rate;
            assert(old != NULL);
            par_rate = tmp_assign_source_8;
            Py_INCREF(par_rate);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_nper;
            assert(old != NULL);
            par_nper = tmp_assign_source_9;
            Py_INCREF(par_nper);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = par_pv;
            assert(old != NULL);
            par_pv = tmp_assign_source_10;
            Py_INCREF(par_pv);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_4;
        {
            PyObject *old = par_fv;
            assert(old != NULL);
            par_fv = tmp_assign_source_11;
            Py_INCREF(par_fv);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_5);
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_5;
        {
            PyObject *old = par_when;
            assert(old != NULL);
            par_when = tmp_assign_source_12;
            Py_INCREF(par_when);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;

    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        tmp_left_name_2 = mod_consts[14];
        CHECK_OBJECT(par_rate);
        tmp_right_name_1 = par_rate;
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_left_name_2, tmp_right_name_1);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_nper);
        tmp_right_name_2 = par_nper;
        tmp_assign_source_13 = BINARY_OPERATION_POW_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_2);
        Py_DECREF(tmp_left_name_1);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_temp == NULL);
        var_temp = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_rate);
        tmp_compexpr_left_1 = par_rate;
        tmp_compexpr_right_1 = mod_consts[16];
        tmp_assign_source_14 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_mask == NULL);
        var_mask = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_mask);
        tmp_args_element_name_4 = var_mask;
        tmp_args_element_name_5 = mod_consts[14];
        CHECK_OBJECT(par_rate);
        tmp_args_element_name_6 = par_rate;
        frame_bae565da51e6d21e370bf7253437e58d->m_frame.f_lineno = 257;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_assign_source_15 = CALL_METHOD_WITH_ARGS3(tmp_called_instance_1, mod_consts[15], call_args);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_masked_rate == NULL);
        var_masked_rate = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_3;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_4;
        PyObject *tmp_right_name_5;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_6;
        PyObject *tmp_right_name_7;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[15]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_mask);
        tmp_compexpr_left_2 = var_mask;
        tmp_compexpr_right_2 = mod_consts[16];
        tmp_args_element_name_7 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_args_element_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 258;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_nper);
        tmp_args_element_name_8 = par_nper;
        tmp_left_name_5 = mod_consts[14];
        CHECK_OBJECT(var_masked_rate);
        tmp_left_name_6 = var_masked_rate;
        CHECK_OBJECT(par_when);
        tmp_right_name_4 = par_when;
        tmp_right_name_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_6, tmp_right_name_4);
        if (tmp_right_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_7);

            exception_lineno = 259;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_4 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_left_name_5, tmp_right_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_left_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_7);

            exception_lineno = 259;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_temp);
        tmp_left_name_7 = var_temp;
        tmp_right_name_6 = mod_consts[14];
        tmp_right_name_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_7, tmp_right_name_6);
        if (tmp_right_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_7);
            Py_DECREF(tmp_left_name_4);

            exception_lineno = 259;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_4, tmp_right_name_5);
        Py_DECREF(tmp_left_name_4);
        Py_DECREF(tmp_right_name_5);
        if (tmp_left_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_7);

            exception_lineno = 259;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_masked_rate);
        tmp_right_name_7 = var_masked_rate;
        tmp_args_element_name_9 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_name_3, tmp_right_name_7);
        Py_DECREF(tmp_left_name_3);
        if (tmp_args_element_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_7);

            exception_lineno = 259;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bae565da51e6d21e370bf7253437e58d->m_frame.f_lineno = 258;
        {
            PyObject *call_args[] = {tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9};
            tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_3, call_args);
        }

        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_7);
        Py_DECREF(tmp_args_element_name_9);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_fact == NULL);
        var_fact = tmp_assign_source_16;
    }
    {
        PyObject *tmp_left_name_8;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_8;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_9;
        PyObject *tmp_right_name_10;
        CHECK_OBJECT(par_fv);
        tmp_left_name_9 = par_fv;
        CHECK_OBJECT(par_pv);
        tmp_left_name_10 = par_pv;
        CHECK_OBJECT(var_temp);
        tmp_right_name_9 = var_temp;
        tmp_right_name_8 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_10, tmp_right_name_9);
        if (tmp_right_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_9, tmp_right_name_8);
        Py_DECREF(tmp_right_name_8);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_8 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_left_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_fact);
        tmp_right_name_10 = var_fact;
        tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_name_8, tmp_right_name_10);
        Py_DECREF(tmp_left_name_8);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bae565da51e6d21e370bf7253437e58d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_bae565da51e6d21e370bf7253437e58d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bae565da51e6d21e370bf7253437e58d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bae565da51e6d21e370bf7253437e58d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bae565da51e6d21e370bf7253437e58d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bae565da51e6d21e370bf7253437e58d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bae565da51e6d21e370bf7253437e58d,
        type_description_1,
        par_rate,
        par_nper,
        par_pv,
        par_fv,
        par_when,
        var_temp,
        var_mask,
        var_masked_rate,
        var_fact
    );


    // Release cached frame if used for exception.
    if (frame_bae565da51e6d21e370bf7253437e58d == cache_frame_bae565da51e6d21e370bf7253437e58d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_bae565da51e6d21e370bf7253437e58d);
        cache_frame_bae565da51e6d21e370bf7253437e58d = NULL;
    }

    assertFrameObject(frame_bae565da51e6d21e370bf7253437e58d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_rate);
    Py_DECREF(par_rate);
    par_rate = NULL;
    CHECK_OBJECT(par_nper);
    Py_DECREF(par_nper);
    par_nper = NULL;
    CHECK_OBJECT(par_pv);
    Py_DECREF(par_pv);
    par_pv = NULL;
    CHECK_OBJECT(par_fv);
    Py_DECREF(par_fv);
    par_fv = NULL;
    CHECK_OBJECT(par_when);
    Py_DECREF(par_when);
    par_when = NULL;
    CHECK_OBJECT(var_temp);
    Py_DECREF(var_temp);
    var_temp = NULL;
    CHECK_OBJECT(var_mask);
    Py_DECREF(var_mask);
    var_mask = NULL;
    CHECK_OBJECT(var_masked_rate);
    Py_DECREF(var_masked_rate);
    var_masked_rate = NULL;
    CHECK_OBJECT(var_fact);
    Py_DECREF(var_fact);
    var_fact = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_rate);
    Py_DECREF(par_rate);
    par_rate = NULL;
    CHECK_OBJECT(par_nper);
    Py_DECREF(par_nper);
    par_nper = NULL;
    CHECK_OBJECT(par_pv);
    Py_DECREF(par_pv);
    par_pv = NULL;
    CHECK_OBJECT(par_fv);
    Py_DECREF(par_fv);
    par_fv = NULL;
    CHECK_OBJECT(par_when);
    Py_DECREF(par_when);
    par_when = NULL;
    Py_XDECREF(var_temp);
    var_temp = NULL;
    Py_XDECREF(var_mask);
    var_mask = NULL;
    Py_XDECREF(var_masked_rate);
    var_masked_rate = NULL;
    Py_XDECREF(var_fact);
    var_fact = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$financial$$$function_6__nper_dispatcher(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_rate = python_pars[0];
    PyObject *par_pmt = python_pars[1];
    PyObject *par_pv = python_pars[2];
    PyObject *par_fv = python_pars[3];
    PyObject *par_when = python_pars[4];
    struct Nuitka_FrameObject *frame_86ea398df6aa04b60426f566a97089be;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_86ea398df6aa04b60426f566a97089be = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_86ea398df6aa04b60426f566a97089be)) {
        Py_XDECREF(cache_frame_86ea398df6aa04b60426f566a97089be);

#if _DEBUG_REFCOUNTS
        if (cache_frame_86ea398df6aa04b60426f566a97089be == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_86ea398df6aa04b60426f566a97089be = MAKE_FUNCTION_FRAME(codeobj_86ea398df6aa04b60426f566a97089be, module_numpy$lib$financial, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_86ea398df6aa04b60426f566a97089be->m_type_description == NULL);
    frame_86ea398df6aa04b60426f566a97089be = cache_frame_86ea398df6aa04b60426f566a97089be;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_86ea398df6aa04b60426f566a97089be);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_86ea398df6aa04b60426f566a97089be) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_kw_name_2;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[5]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 264;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[7]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 264;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = PyDict_Copy(mod_consts[21]);
        frame_86ea398df6aa04b60426f566a97089be->m_frame.f_lineno = 264;
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_2, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 264;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ooooo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kw_name_2 = PyDict_Copy(mod_consts[10]);
        frame_86ea398df6aa04b60426f566a97089be->m_frame.f_lineno = 264;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_2);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_86ea398df6aa04b60426f566a97089be);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_86ea398df6aa04b60426f566a97089be);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_86ea398df6aa04b60426f566a97089be, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_86ea398df6aa04b60426f566a97089be->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_86ea398df6aa04b60426f566a97089be, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_86ea398df6aa04b60426f566a97089be,
        type_description_1,
        par_rate,
        par_pmt,
        par_pv,
        par_fv,
        par_when
    );


    // Release cached frame if used for exception.
    if (frame_86ea398df6aa04b60426f566a97089be == cache_frame_86ea398df6aa04b60426f566a97089be) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_86ea398df6aa04b60426f566a97089be);
        cache_frame_86ea398df6aa04b60426f566a97089be = NULL;
    }

    assertFrameObject(frame_86ea398df6aa04b60426f566a97089be);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(par_rate);
        tmp_tuple_element_2 = par_rate;
        tmp_return_value = PyTuple_New(4);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_pmt);
        tmp_tuple_element_2 = par_pmt;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
        CHECK_OBJECT(par_pv);
        tmp_tuple_element_2 = par_pv;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_2);
        CHECK_OBJECT(par_fv);
        tmp_tuple_element_2 = par_fv;
        PyTuple_SET_ITEM0(tmp_return_value, 3, tmp_tuple_element_2);
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_rate);
    Py_DECREF(par_rate);
    CHECK_OBJECT(par_pmt);
    Py_DECREF(par_pmt);
    CHECK_OBJECT(par_pv);
    Py_DECREF(par_pv);
    CHECK_OBJECT(par_fv);
    Py_DECREF(par_fv);
    CHECK_OBJECT(par_when);
    Py_DECREF(par_when);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_rate);
    Py_DECREF(par_rate);
    CHECK_OBJECT(par_pmt);
    Py_DECREF(par_pmt);
    CHECK_OBJECT(par_pv);
    Py_DECREF(par_pv);
    CHECK_OBJECT(par_fv);
    Py_DECREF(par_fv);
    CHECK_OBJECT(par_when);
    Py_DECREF(par_when);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$financial$$$function_7_nper(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_rate = python_pars[0];
    PyObject *par_pmt = python_pars[1];
    PyObject *par_pv = python_pars[2];
    PyObject *par_fv = python_pars[3];
    PyObject *par_when = python_pars[4];
    nuitka_bool var_use_zero_rate = NUITKA_BOOL_UNASSIGNED;
    PyObject *var_z = NULL;
    PyObject *var_A = NULL;
    PyObject *var_B = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_7e07cfcc5627d252ef682fb900dc814b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7e07cfcc5627d252ef682fb900dc814b = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7e07cfcc5627d252ef682fb900dc814b)) {
        Py_XDECREF(cache_frame_7e07cfcc5627d252ef682fb900dc814b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7e07cfcc5627d252ef682fb900dc814b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7e07cfcc5627d252ef682fb900dc814b = MAKE_FUNCTION_FRAME(codeobj_7e07cfcc5627d252ef682fb900dc814b, module_numpy$lib$financial, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7e07cfcc5627d252ef682fb900dc814b->m_type_description == NULL);
    frame_7e07cfcc5627d252ef682fb900dc814b = cache_frame_7e07cfcc5627d252ef682fb900dc814b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7e07cfcc5627d252ef682fb900dc814b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7e07cfcc5627d252ef682fb900dc814b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_when);
        tmp_args_element_name_1 = par_when;
        frame_7e07cfcc5627d252ef682fb900dc814b->m_frame.f_lineno = 332;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_when;
            assert(old != NULL);
            par_when = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_list_element_1;
        tmp_called_name_2 = (PyObject *)&PyMap_Type;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "ooooobooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[12]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "ooooobooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_rate);
        tmp_list_element_1 = par_rate;
        tmp_args_element_name_3 = PyList_New(5);
        PyList_SET_ITEM0(tmp_args_element_name_3, 0, tmp_list_element_1);
        CHECK_OBJECT(par_pmt);
        tmp_list_element_1 = par_pmt;
        PyList_SET_ITEM0(tmp_args_element_name_3, 1, tmp_list_element_1);
        CHECK_OBJECT(par_pv);
        tmp_list_element_1 = par_pv;
        PyList_SET_ITEM0(tmp_args_element_name_3, 2, tmp_list_element_1);
        CHECK_OBJECT(par_fv);
        tmp_list_element_1 = par_fv;
        PyList_SET_ITEM0(tmp_args_element_name_3, 3, tmp_list_element_1);
        CHECK_OBJECT(par_when);
        tmp_list_element_1 = par_when;
        PyList_SET_ITEM0(tmp_args_element_name_3, 4, tmp_list_element_1);
        frame_7e07cfcc5627d252ef682fb900dc814b->m_frame.f_lineno = 333;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "ooooobooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "ooooobooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_1, 0, 5);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooobooo";
            exception_lineno = 333;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_2, 1, 5);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooobooo";
            exception_lineno = 333;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_3, 2, 5);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooobooo";
            exception_lineno = 333;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_4, 3, 5);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooobooo";
            exception_lineno = 333;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_4 == NULL);
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_5, 4, 5);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooobooo";
            exception_lineno = 333;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_5 == NULL);
        tmp_tuple_unpack_1__element_5 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooobooo";
                    exception_lineno = 333;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[13];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooobooo";
            exception_lineno = 333;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_rate;
            assert(old != NULL);
            par_rate = tmp_assign_source_8;
            Py_INCREF(par_rate);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_pmt;
            assert(old != NULL);
            par_pmt = tmp_assign_source_9;
            Py_INCREF(par_pmt);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = par_pv;
            assert(old != NULL);
            par_pv = tmp_assign_source_10;
            Py_INCREF(par_pv);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_4;
        {
            PyObject *old = par_fv;
            assert(old != NULL);
            par_fv = tmp_assign_source_11;
            Py_INCREF(par_fv);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_5);
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_5;
        {
            PyObject *old = par_when;
            assert(old != NULL);
            par_when = tmp_assign_source_12;
            Py_INCREF(par_when);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;

    {
        nuitka_bool tmp_assign_source_13;
        tmp_assign_source_13 = NUITKA_BOOL_FALSE;
        var_use_zero_rate = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_kw_name_1;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "ooooobooo";
            goto try_except_handler_4;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[22]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "ooooobooo";
            goto try_except_handler_4;
        }
        tmp_kw_name_1 = PyDict_Copy(mod_consts[23]);
        frame_7e07cfcc5627d252ef682fb900dc814b->m_frame.f_lineno = 336;
        tmp_assign_source_14 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_3, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "ooooobooo";
            goto try_except_handler_4;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_3;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_name_3 = tmp_with_1__source;
        tmp_called_name_4 = LOOKUP_SPECIAL(tmp_expression_name_3, mod_consts[24]);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "ooooobooo";
            goto try_except_handler_4;
        }
        frame_7e07cfcc5627d252ef682fb900dc814b->m_frame.f_lineno = 336;
        tmp_assign_source_15 = CALL_FUNCTION_NO_ARGS(tmp_called_name_4);
        Py_DECREF(tmp_called_name_4);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "ooooobooo";
            goto try_except_handler_4;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_expression_name_4;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_name_4 = tmp_with_1__source;
        tmp_assign_source_16 = LOOKUP_SPECIAL(tmp_expression_name_4, mod_consts[25]);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "ooooobooo";
            goto try_except_handler_4;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_16;
    }
    {
        nuitka_bool tmp_assign_source_17;
        tmp_assign_source_17 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_17;
    }
    // Tried code:
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_2;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_3;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT(par_pmt);
        tmp_left_name_2 = par_pmt;
        tmp_left_name_3 = mod_consts[14];
        CHECK_OBJECT(par_rate);
        tmp_left_name_4 = par_rate;
        CHECK_OBJECT(par_when);
        tmp_right_name_3 = par_when;
        tmp_right_name_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_4, tmp_right_name_3);
        if (tmp_right_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "ooooobooo";
            goto try_except_handler_7;
        }
        tmp_right_name_1 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_left_name_3, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "ooooobooo";
            goto try_except_handler_7;
        }
        tmp_left_name_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "ooooobooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(par_rate);
        tmp_right_name_4 = par_rate;
        tmp_assign_source_18 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_4);
        Py_DECREF(tmp_left_name_1);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "ooooobooo";
            goto try_except_handler_7;
        }
        assert(var_z == NULL);
        var_z = tmp_assign_source_18;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_type_1);
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_value_1);
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF(exception_preserved_tb_1);

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_7e07cfcc5627d252ef682fb900dc814b, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_7e07cfcc5627d252ef682fb900dc814b, exception_keeper_lineno_3);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_3, exception_keeper_tb_3);
    PUBLISH_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_FloatingPointError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_assign_source_19;
        tmp_assign_source_19 = NUITKA_BOOL_TRUE;
        var_use_zero_rate = tmp_assign_source_19;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 337;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_7e07cfcc5627d252ef682fb900dc814b->m_frame) frame_7e07cfcc5627d252ef682fb900dc814b->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooobooo";
    goto try_except_handler_8;
    branch_end_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_6;
    // End of try:
    try_end_4:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    goto try_end_3;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_3:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_2 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_type_2);
    exception_preserved_value_2 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_value_2);
    exception_preserved_tb_2 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF(exception_preserved_tb_2);

    if (exception_keeper_tb_5 == NULL) {
        exception_keeper_tb_5 = MAKE_TRACEBACK(frame_7e07cfcc5627d252ef682fb900dc814b, exception_keeper_lineno_5);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_keeper_tb_5 = ADD_TRACEBACK(exception_keeper_tb_5, frame_7e07cfcc5627d252ef682fb900dc814b, exception_keeper_lineno_5);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_5, exception_keeper_tb_5);
    PUBLISH_EXCEPTION(&exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5);
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_2 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_2, tmp_compexpr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        nuitka_bool tmp_assign_source_20;
        tmp_assign_source_20 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_20;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_name_5 = tmp_with_1__exit;
        tmp_args_element_name_4 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_name_5 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_name_6 = EXC_TRACEBACK(PyThreadState_GET());
        frame_7e07cfcc5627d252ef682fb900dc814b->m_frame.f_lineno = 337;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_5, call_args);
        }

        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "ooooobooo";
            goto try_except_handler_9;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "ooooobooo";
            goto try_except_handler_9;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 337;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_7e07cfcc5627d252ef682fb900dc814b->m_frame) frame_7e07cfcc5627d252ef682fb900dc814b->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooobooo";
    goto try_except_handler_9;
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 336;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_7e07cfcc5627d252ef682fb900dc814b->m_frame) frame_7e07cfcc5627d252ef682fb900dc814b->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooobooo";
    goto try_except_handler_9;
    branch_end_2:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_5;
    // End of try:
    try_end_6:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);
    goto try_end_5;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_5:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_4;
        nuitka_bool tmp_compexpr_left_3;
        nuitka_bool tmp_compexpr_right_3;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_3 = tmp_with_1__indicator;
        tmp_compexpr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = (tmp_compexpr_left_3 == tmp_compexpr_right_3) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_name_6 = tmp_with_1__exit;
        frame_7e07cfcc5627d252ef682fb900dc814b->m_frame.f_lineno = 337;
        tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_6, &PyTuple_GET_ITEM(mod_consts[26], 0));

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_7);
            Py_XDECREF(exception_keeper_value_7);
            Py_XDECREF(exception_keeper_tb_7);

            exception_lineno = 337;
            type_description_1 = "ooooobooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_4:;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_4;
    // End of try:
    try_end_7:;
    {
        bool tmp_condition_result_5;
        nuitka_bool tmp_compexpr_left_4;
        nuitka_bool tmp_compexpr_right_4;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_4 = tmp_with_1__indicator;
        tmp_compexpr_right_4 = NUITKA_BOOL_TRUE;
        tmp_condition_result_5 = (tmp_compexpr_left_4 == tmp_compexpr_right_4) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_name_7;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_name_7 = tmp_with_1__exit;
        frame_7e07cfcc5627d252ef682fb900dc814b->m_frame.f_lineno = 337;
        tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_7, &PyTuple_GET_ITEM(mod_consts[26], 0));

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "ooooobooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_5:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    CHECK_OBJECT(tmp_with_1__exit);
    Py_DECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    {
        nuitka_bool tmp_condition_result_6;
        if (var_use_zero_rate == NUITKA_BOOL_UNASSIGNED) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 342;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_condition_result_6 = var_use_zero_rate;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_left_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_right_name_5;
        PyObject *tmp_right_name_6;
        CHECK_OBJECT(par_fv);
        tmp_operand_name_2 = par_fv;
        tmp_left_name_6 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_name_2);
        if (tmp_left_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_pv);
        tmp_right_name_5 = par_pv;
        tmp_left_name_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_6, tmp_right_name_5);
        Py_DECREF(tmp_left_name_6);
        if (tmp_left_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_pmt);
        tmp_right_name_6 = par_pmt;
        tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_name_5, tmp_right_name_6);
        Py_DECREF(tmp_left_name_5);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_left_name_7;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_7;
        PyObject *tmp_right_name_8;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        CHECK_OBJECT(par_fv);
        tmp_left_name_8 = par_fv;
        CHECK_OBJECT(par_pv);
        tmp_right_name_7 = par_pv;
        tmp_operand_name_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_8, tmp_right_name_7);
        if (tmp_operand_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_7 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_name_3);
        Py_DECREF(tmp_operand_name_3);
        if (tmp_left_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_pmt);
        tmp_left_name_9 = par_pmt;
        tmp_right_name_9 = mod_consts[16];
        tmp_right_name_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_name_9, tmp_right_name_9);
        if (tmp_right_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_7);

            exception_lineno = 345;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_21 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_name_7, tmp_right_name_8);
        Py_DECREF(tmp_left_name_7);
        Py_DECREF(tmp_right_name_8);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        assert(var_A == NULL);
        var_A = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_left_name_10;
        PyObject *tmp_called_name_8;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_left_name_11;
        PyObject *tmp_left_name_12;
        PyObject *tmp_operand_name_4;
        PyObject *tmp_right_name_10;
        PyObject *tmp_right_name_11;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_12;
        PyObject *tmp_right_name_13;
        PyObject *tmp_called_name_9;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_14;
        tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_5 == NULL)) {
            tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[28]);
        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_fv);
        tmp_operand_name_4 = par_fv;
        tmp_left_name_12 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_name_4);
        if (tmp_left_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_8);

            exception_lineno = 346;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        if (var_z == NULL) {
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_left_name_12);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 346;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_10 = var_z;
        tmp_left_name_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_12, tmp_right_name_10);
        Py_DECREF(tmp_left_name_12);
        if (tmp_left_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_8);

            exception_lineno = 346;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_pv);
        tmp_left_name_13 = par_pv;
        if (var_z == NULL) {
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_left_name_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 346;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_12 = var_z;
        tmp_right_name_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_13, tmp_right_name_12);
        if (tmp_right_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_left_name_11);

            exception_lineno = 346;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_7 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_name_11, tmp_right_name_11);
        Py_DECREF(tmp_left_name_11);
        Py_DECREF(tmp_right_name_11);
        if (tmp_args_element_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_8);

            exception_lineno = 346;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        frame_7e07cfcc5627d252ef682fb900dc814b->m_frame.f_lineno = 346;
        tmp_left_name_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_7);
        Py_DECREF(tmp_called_name_8);
        Py_DECREF(tmp_args_element_name_7);
        if (tmp_left_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_6 == NULL)) {
            tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_10);

            exception_lineno = 346;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[28]);
        if (tmp_called_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_10);

            exception_lineno = 346;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_14 = mod_consts[14];
        CHECK_OBJECT(par_rate);
        tmp_right_name_14 = par_rate;
        tmp_args_element_name_8 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_left_name_14, tmp_right_name_14);
        if (tmp_args_element_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_10);
            Py_DECREF(tmp_called_name_9);

            exception_lineno = 346;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        frame_7e07cfcc5627d252ef682fb900dc814b->m_frame.f_lineno = 346;
        tmp_right_name_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_9, tmp_args_element_name_8);
        Py_DECREF(tmp_called_name_9);
        Py_DECREF(tmp_args_element_name_8);
        if (tmp_right_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_10);

            exception_lineno = 346;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_22 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_name_10, tmp_right_name_13);
        Py_DECREF(tmp_left_name_10);
        Py_DECREF(tmp_right_name_13);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        assert(var_B == NULL);
        var_B = tmp_assign_source_22;
    }
    {
        PyObject *tmp_called_name_10;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        tmp_expression_name_7 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_7 == NULL)) {
            tmp_expression_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[15]);
        if (tmp_called_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_rate);
        tmp_compexpr_left_5 = par_rate;
        tmp_compexpr_right_5 = mod_consts[16];
        tmp_args_element_name_9 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
        if (tmp_args_element_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_10);

            exception_lineno = 347;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_A);
        tmp_args_element_name_10 = var_A;
        CHECK_OBJECT(var_B);
        tmp_args_element_name_11 = var_B;
        frame_7e07cfcc5627d252ef682fb900dc814b->m_frame.f_lineno = 347;
        {
            PyObject *call_args[] = {tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_10, call_args);
        }

        Py_DECREF(tmp_called_name_10);
        Py_DECREF(tmp_args_element_name_9);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "ooooobooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_6:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7e07cfcc5627d252ef682fb900dc814b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_7e07cfcc5627d252ef682fb900dc814b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7e07cfcc5627d252ef682fb900dc814b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7e07cfcc5627d252ef682fb900dc814b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7e07cfcc5627d252ef682fb900dc814b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7e07cfcc5627d252ef682fb900dc814b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7e07cfcc5627d252ef682fb900dc814b,
        type_description_1,
        par_rate,
        par_pmt,
        par_pv,
        par_fv,
        par_when,
        (int)var_use_zero_rate,
        var_z,
        var_A,
        var_B
    );


    // Release cached frame if used for exception.
    if (frame_7e07cfcc5627d252ef682fb900dc814b == cache_frame_7e07cfcc5627d252ef682fb900dc814b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_7e07cfcc5627d252ef682fb900dc814b);
        cache_frame_7e07cfcc5627d252ef682fb900dc814b = NULL;
    }

    assertFrameObject(frame_7e07cfcc5627d252ef682fb900dc814b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_rate);
    Py_DECREF(par_rate);
    par_rate = NULL;
    CHECK_OBJECT(par_pmt);
    Py_DECREF(par_pmt);
    par_pmt = NULL;
    CHECK_OBJECT(par_pv);
    Py_DECREF(par_pv);
    par_pv = NULL;
    CHECK_OBJECT(par_fv);
    Py_DECREF(par_fv);
    par_fv = NULL;
    CHECK_OBJECT(par_when);
    Py_DECREF(par_when);
    par_when = NULL;
    var_use_zero_rate = NUITKA_BOOL_UNASSIGNED;
    Py_XDECREF(var_z);
    var_z = NULL;
    Py_XDECREF(var_A);
    var_A = NULL;
    Py_XDECREF(var_B);
    var_B = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_rate);
    Py_DECREF(par_rate);
    par_rate = NULL;
    CHECK_OBJECT(par_pmt);
    Py_DECREF(par_pmt);
    par_pmt = NULL;
    CHECK_OBJECT(par_pv);
    Py_DECREF(par_pv);
    par_pv = NULL;
    CHECK_OBJECT(par_fv);
    Py_DECREF(par_fv);
    par_fv = NULL;
    CHECK_OBJECT(par_when);
    Py_DECREF(par_when);
    par_when = NULL;
    var_use_zero_rate = NUITKA_BOOL_UNASSIGNED;
    Py_XDECREF(var_z);
    var_z = NULL;
    Py_XDECREF(var_A);
    var_A = NULL;
    Py_XDECREF(var_B);
    var_B = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$financial$$$function_8__ipmt_dispatcher(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_rate = python_pars[0];
    PyObject *par_per = python_pars[1];
    PyObject *par_nper = python_pars[2];
    PyObject *par_pv = python_pars[3];
    PyObject *par_fv = python_pars[4];
    PyObject *par_when = python_pars[5];
    struct Nuitka_FrameObject *frame_ec63e62f022e53f8054ae13da908b473;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ec63e62f022e53f8054ae13da908b473 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ec63e62f022e53f8054ae13da908b473)) {
        Py_XDECREF(cache_frame_ec63e62f022e53f8054ae13da908b473);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ec63e62f022e53f8054ae13da908b473 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ec63e62f022e53f8054ae13da908b473 = MAKE_FUNCTION_FRAME(codeobj_ec63e62f022e53f8054ae13da908b473, module_numpy$lib$financial, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ec63e62f022e53f8054ae13da908b473->m_type_description == NULL);
    frame_ec63e62f022e53f8054ae13da908b473 = cache_frame_ec63e62f022e53f8054ae13da908b473;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ec63e62f022e53f8054ae13da908b473);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ec63e62f022e53f8054ae13da908b473) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_kw_name_2;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[5]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 351;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[7]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 351;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = PyDict_Copy(mod_consts[31]);
        frame_ec63e62f022e53f8054ae13da908b473->m_frame.f_lineno = 351;
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_2, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 351;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "oooooo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kw_name_2 = PyDict_Copy(mod_consts[10]);
        frame_ec63e62f022e53f8054ae13da908b473->m_frame.f_lineno = 351;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_2);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ec63e62f022e53f8054ae13da908b473);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ec63e62f022e53f8054ae13da908b473);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ec63e62f022e53f8054ae13da908b473, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ec63e62f022e53f8054ae13da908b473->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ec63e62f022e53f8054ae13da908b473, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ec63e62f022e53f8054ae13da908b473,
        type_description_1,
        par_rate,
        par_per,
        par_nper,
        par_pv,
        par_fv,
        par_when
    );


    // Release cached frame if used for exception.
    if (frame_ec63e62f022e53f8054ae13da908b473 == cache_frame_ec63e62f022e53f8054ae13da908b473) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ec63e62f022e53f8054ae13da908b473);
        cache_frame_ec63e62f022e53f8054ae13da908b473 = NULL;
    }

    assertFrameObject(frame_ec63e62f022e53f8054ae13da908b473);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(par_rate);
        tmp_tuple_element_2 = par_rate;
        tmp_return_value = PyTuple_New(5);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_per);
        tmp_tuple_element_2 = par_per;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
        CHECK_OBJECT(par_nper);
        tmp_tuple_element_2 = par_nper;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_2);
        CHECK_OBJECT(par_pv);
        tmp_tuple_element_2 = par_pv;
        PyTuple_SET_ITEM0(tmp_return_value, 3, tmp_tuple_element_2);
        CHECK_OBJECT(par_fv);
        tmp_tuple_element_2 = par_fv;
        PyTuple_SET_ITEM0(tmp_return_value, 4, tmp_tuple_element_2);
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_rate);
    Py_DECREF(par_rate);
    CHECK_OBJECT(par_per);
    Py_DECREF(par_per);
    CHECK_OBJECT(par_nper);
    Py_DECREF(par_nper);
    CHECK_OBJECT(par_pv);
    Py_DECREF(par_pv);
    CHECK_OBJECT(par_fv);
    Py_DECREF(par_fv);
    CHECK_OBJECT(par_when);
    Py_DECREF(par_when);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_rate);
    Py_DECREF(par_rate);
    CHECK_OBJECT(par_per);
    Py_DECREF(par_per);
    CHECK_OBJECT(par_nper);
    Py_DECREF(par_nper);
    CHECK_OBJECT(par_pv);
    Py_DECREF(par_pv);
    CHECK_OBJECT(par_fv);
    Py_DECREF(par_fv);
    CHECK_OBJECT(par_when);
    Py_DECREF(par_when);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$financial$$$function_9_ipmt(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_rate = python_pars[0];
    PyObject *par_per = python_pars[1];
    PyObject *par_nper = python_pars[2];
    PyObject *par_pv = python_pars[3];
    PyObject *par_fv = python_pars[4];
    PyObject *par_when = python_pars[5];
    PyObject *var_total_pmt = NULL;
    PyObject *var_ipmt = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__element_6 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_c1a5f214900fcfa6267061ca6e2392fb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c1a5f214900fcfa6267061ca6e2392fb = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c1a5f214900fcfa6267061ca6e2392fb)) {
        Py_XDECREF(cache_frame_c1a5f214900fcfa6267061ca6e2392fb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c1a5f214900fcfa6267061ca6e2392fb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c1a5f214900fcfa6267061ca6e2392fb = MAKE_FUNCTION_FRAME(codeobj_c1a5f214900fcfa6267061ca6e2392fb, module_numpy$lib$financial, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c1a5f214900fcfa6267061ca6e2392fb->m_type_description == NULL);
    frame_c1a5f214900fcfa6267061ca6e2392fb = cache_frame_c1a5f214900fcfa6267061ca6e2392fb;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c1a5f214900fcfa6267061ca6e2392fb);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c1a5f214900fcfa6267061ca6e2392fb) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_when);
        tmp_args_element_name_1 = par_when;
        frame_c1a5f214900fcfa6267061ca6e2392fb->m_frame.f_lineno = 451;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_when;
            assert(old != NULL);
            par_when = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_rate);
        tmp_args_element_name_2 = par_rate;
        CHECK_OBJECT(par_per);
        tmp_args_element_name_3 = par_per;
        CHECK_OBJECT(par_nper);
        tmp_args_element_name_4 = par_nper;
        CHECK_OBJECT(par_pv);
        tmp_args_element_name_5 = par_pv;
        CHECK_OBJECT(par_fv);
        tmp_args_element_name_6 = par_fv;
        CHECK_OBJECT(par_when);
        tmp_args_element_name_7 = par_when;
        frame_c1a5f214900fcfa6267061ca6e2392fb->m_frame.f_lineno = 452;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7};
            tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS6(tmp_called_instance_1, mod_consts[32], call_args);
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_1, 0, 6);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 452;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_2, 1, 6);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 452;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_3, 2, 6);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 452;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_4, 3, 6);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 452;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_4 == NULL);
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_5, 4, 6);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 452;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_5 == NULL);
        tmp_tuple_unpack_1__element_5 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_6, 5, 6);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 452;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_6 == NULL);
        tmp_tuple_unpack_1__element_6 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooo";
                    exception_lineno = 452;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[33];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooo";
            exception_lineno = 452;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_6);
    tmp_tuple_unpack_1__element_6 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_rate;
            assert(old != NULL);
            par_rate = tmp_assign_source_9;
            Py_INCREF(par_rate);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_per;
            assert(old != NULL);
            par_per = tmp_assign_source_10;
            Py_INCREF(par_per);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = par_nper;
            assert(old != NULL);
            par_nper = tmp_assign_source_11;
            Py_INCREF(par_nper);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_4;
        {
            PyObject *old = par_pv;
            assert(old != NULL);
            par_pv = tmp_assign_source_12;
            Py_INCREF(par_pv);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_5);
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_5;
        {
            PyObject *old = par_fv;
            assert(old != NULL);
            par_fv = tmp_assign_source_13;
            Py_INCREF(par_fv);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_6);
        tmp_assign_source_14 = tmp_tuple_unpack_1__element_6;
        {
            PyObject *old = par_when;
            assert(old != NULL);
            par_when = tmp_assign_source_14;
            Py_INCREF(par_when);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_6);
    tmp_tuple_unpack_1__element_6 = NULL;

    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_rate);
        tmp_args_element_name_8 = par_rate;
        CHECK_OBJECT(par_nper);
        tmp_args_element_name_9 = par_nper;
        CHECK_OBJECT(par_pv);
        tmp_args_element_name_10 = par_pv;
        CHECK_OBJECT(par_fv);
        tmp_args_element_name_11 = par_fv;
        CHECK_OBJECT(par_when);
        tmp_args_element_name_12 = par_when;
        frame_c1a5f214900fcfa6267061ca6e2392fb->m_frame.f_lineno = 454;
        {
            PyObject *call_args[] = {tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12};
            tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS5(tmp_called_name_2, call_args);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_total_pmt == NULL);
        var_total_pmt = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_right_name_1;
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_rate);
        tmp_args_element_name_13 = par_rate;
        CHECK_OBJECT(par_per);
        tmp_args_element_name_14 = par_per;
        CHECK_OBJECT(var_total_pmt);
        tmp_args_element_name_15 = var_total_pmt;
        CHECK_OBJECT(par_pv);
        tmp_args_element_name_16 = par_pv;
        CHECK_OBJECT(par_when);
        tmp_args_element_name_17 = par_when;
        frame_c1a5f214900fcfa6267061ca6e2392fb->m_frame.f_lineno = 455;
        {
            PyObject *call_args[] = {tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17};
            tmp_left_name_1 = CALL_FUNCTION_WITH_ARGS5(tmp_called_name_3, call_args);
        }

        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_rate);
        tmp_right_name_1 = par_rate;
        tmp_assign_source_16 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ipmt == NULL);
        var_ipmt = tmp_assign_source_16;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_args_element_name_20;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[15]);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_when);
        tmp_compexpr_left_1 = par_when;
        tmp_compexpr_right_1 = mod_consts[14];
        tmp_args_element_name_18 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_args_element_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 457;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_ipmt);
        tmp_left_name_2 = var_ipmt;
        tmp_left_name_3 = mod_consts[14];
        CHECK_OBJECT(par_rate);
        tmp_right_name_3 = par_rate;
        tmp_right_name_2 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_left_name_3, tmp_right_name_3);
        if (tmp_right_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_args_element_name_18);

            exception_lineno = 457;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        tmp_args_element_name_19 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_args_element_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_args_element_name_18);

            exception_lineno = 457;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_ipmt);
        tmp_args_element_name_20 = var_ipmt;
        frame_c1a5f214900fcfa6267061ca6e2392fb->m_frame.f_lineno = 457;
        {
            PyObject *call_args[] = {tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20};
            tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_4, call_args);
        }

        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_element_name_18);
        Py_DECREF(tmp_args_element_name_19);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_ipmt;
            assert(old != NULL);
            var_ipmt = tmp_assign_source_17;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_called_name_6;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_args_element_name_25;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[15]);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);

            exception_lineno = 458;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[36]);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);

            exception_lineno = 458;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_when);
        tmp_compexpr_left_2 = par_when;
        tmp_compexpr_right_2 = mod_consts[14];
        tmp_args_element_name_22 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_args_element_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);
            Py_DECREF(tmp_called_name_6);

            exception_lineno = 458;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_per);
        tmp_compexpr_left_3 = par_per;
        tmp_compexpr_right_3 = mod_consts[14];
        tmp_args_element_name_23 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        if (tmp_args_element_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_args_element_name_22);

            exception_lineno = 458;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        frame_c1a5f214900fcfa6267061ca6e2392fb->m_frame.f_lineno = 458;
        {
            PyObject *call_args[] = {tmp_args_element_name_22, tmp_args_element_name_23};
            tmp_args_element_name_21 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_6, call_args);
        }

        Py_DECREF(tmp_called_name_6);
        Py_DECREF(tmp_args_element_name_22);
        Py_DECREF(tmp_args_element_name_23);
        if (tmp_args_element_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);

            exception_lineno = 458;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        tmp_args_element_name_24 = mod_consts[16];
        CHECK_OBJECT(var_ipmt);
        tmp_args_element_name_25 = var_ipmt;
        frame_c1a5f214900fcfa6267061ca6e2392fb->m_frame.f_lineno = 458;
        {
            PyObject *call_args[] = {tmp_args_element_name_21, tmp_args_element_name_24, tmp_args_element_name_25};
            tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_5, call_args);
        }

        Py_DECREF(tmp_called_name_5);
        Py_DECREF(tmp_args_element_name_21);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_ipmt;
            assert(old != NULL);
            var_ipmt = tmp_assign_source_18;
            Py_DECREF(old);
        }

    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_type_1);
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_value_1);
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF(exception_preserved_tb_1);

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_c1a5f214900fcfa6267061ca6e2392fb, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_c1a5f214900fcfa6267061ca6e2392fb, exception_keeper_lineno_3);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_3, exception_keeper_tb_3);
    PUBLISH_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        tmp_compexpr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_4 = PyExc_IndexError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_4, tmp_compexpr_right_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 456;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_c1a5f214900fcfa6267061ca6e2392fb->m_frame) frame_c1a5f214900fcfa6267061ca6e2392fb->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooo";
    goto try_except_handler_5;
    branch_no_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    goto try_end_3;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_3:;
    if (var_ipmt == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 461;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_ipmt;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c1a5f214900fcfa6267061ca6e2392fb);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c1a5f214900fcfa6267061ca6e2392fb);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c1a5f214900fcfa6267061ca6e2392fb);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c1a5f214900fcfa6267061ca6e2392fb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c1a5f214900fcfa6267061ca6e2392fb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c1a5f214900fcfa6267061ca6e2392fb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c1a5f214900fcfa6267061ca6e2392fb,
        type_description_1,
        par_rate,
        par_per,
        par_nper,
        par_pv,
        par_fv,
        par_when,
        var_total_pmt,
        var_ipmt
    );


    // Release cached frame if used for exception.
    if (frame_c1a5f214900fcfa6267061ca6e2392fb == cache_frame_c1a5f214900fcfa6267061ca6e2392fb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c1a5f214900fcfa6267061ca6e2392fb);
        cache_frame_c1a5f214900fcfa6267061ca6e2392fb = NULL;
    }

    assertFrameObject(frame_c1a5f214900fcfa6267061ca6e2392fb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_rate);
    Py_DECREF(par_rate);
    par_rate = NULL;
    CHECK_OBJECT(par_per);
    Py_DECREF(par_per);
    par_per = NULL;
    CHECK_OBJECT(par_nper);
    Py_DECREF(par_nper);
    par_nper = NULL;
    CHECK_OBJECT(par_pv);
    Py_DECREF(par_pv);
    par_pv = NULL;
    CHECK_OBJECT(par_fv);
    Py_DECREF(par_fv);
    par_fv = NULL;
    CHECK_OBJECT(par_when);
    Py_DECREF(par_when);
    par_when = NULL;
    CHECK_OBJECT(var_total_pmt);
    Py_DECREF(var_total_pmt);
    var_total_pmt = NULL;
    Py_XDECREF(var_ipmt);
    var_ipmt = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_rate);
    Py_DECREF(par_rate);
    par_rate = NULL;
    CHECK_OBJECT(par_per);
    Py_DECREF(par_per);
    par_per = NULL;
    CHECK_OBJECT(par_nper);
    Py_DECREF(par_nper);
    par_nper = NULL;
    CHECK_OBJECT(par_pv);
    Py_DECREF(par_pv);
    par_pv = NULL;
    CHECK_OBJECT(par_fv);
    Py_DECREF(par_fv);
    par_fv = NULL;
    CHECK_OBJECT(par_when);
    Py_DECREF(par_when);
    par_when = NULL;
    Py_XDECREF(var_total_pmt);
    var_total_pmt = NULL;
    Py_XDECREF(var_ipmt);
    var_ipmt = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$financial$$$function_10__rbl(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_rate = python_pars[0];
    PyObject *par_per = python_pars[1];
    PyObject *par_pmt = python_pars[2];
    PyObject *par_pv = python_pars[3];
    PyObject *par_when = python_pars[4];
    struct Nuitka_FrameObject *frame_a1d36f025e8a1dca78612709ec1b3eef;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a1d36f025e8a1dca78612709ec1b3eef = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a1d36f025e8a1dca78612709ec1b3eef)) {
        Py_XDECREF(cache_frame_a1d36f025e8a1dca78612709ec1b3eef);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a1d36f025e8a1dca78612709ec1b3eef == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a1d36f025e8a1dca78612709ec1b3eef = MAKE_FUNCTION_FRAME(codeobj_a1d36f025e8a1dca78612709ec1b3eef, module_numpy$lib$financial, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a1d36f025e8a1dca78612709ec1b3eef->m_type_description == NULL);
    frame_a1d36f025e8a1dca78612709ec1b3eef = cache_frame_a1d36f025e8a1dca78612709ec1b3eef;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a1d36f025e8a1dca78612709ec1b3eef);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a1d36f025e8a1dca78612709ec1b3eef) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_rate);
        tmp_args_element_name_1 = par_rate;
        CHECK_OBJECT(par_per);
        tmp_left_name_1 = par_per;
        tmp_right_name_1 = mod_consts[14];
        tmp_args_element_name_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_1, tmp_right_name_1);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_pmt);
        tmp_args_element_name_3 = par_pmt;
        CHECK_OBJECT(par_pv);
        tmp_args_element_name_4 = par_pv;
        CHECK_OBJECT(par_when);
        tmp_args_element_name_5 = par_when;
        frame_a1d36f025e8a1dca78612709ec1b3eef->m_frame.f_lineno = 471;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_args_element_name_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a1d36f025e8a1dca78612709ec1b3eef);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a1d36f025e8a1dca78612709ec1b3eef);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a1d36f025e8a1dca78612709ec1b3eef);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a1d36f025e8a1dca78612709ec1b3eef, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a1d36f025e8a1dca78612709ec1b3eef->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a1d36f025e8a1dca78612709ec1b3eef, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a1d36f025e8a1dca78612709ec1b3eef,
        type_description_1,
        par_rate,
        par_per,
        par_pmt,
        par_pv,
        par_when
    );


    // Release cached frame if used for exception.
    if (frame_a1d36f025e8a1dca78612709ec1b3eef == cache_frame_a1d36f025e8a1dca78612709ec1b3eef) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a1d36f025e8a1dca78612709ec1b3eef);
        cache_frame_a1d36f025e8a1dca78612709ec1b3eef = NULL;
    }

    assertFrameObject(frame_a1d36f025e8a1dca78612709ec1b3eef);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_rate);
    Py_DECREF(par_rate);
    CHECK_OBJECT(par_per);
    Py_DECREF(par_per);
    CHECK_OBJECT(par_pmt);
    Py_DECREF(par_pmt);
    CHECK_OBJECT(par_pv);
    Py_DECREF(par_pv);
    CHECK_OBJECT(par_when);
    Py_DECREF(par_when);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_rate);
    Py_DECREF(par_rate);
    CHECK_OBJECT(par_per);
    Py_DECREF(par_per);
    CHECK_OBJECT(par_pmt);
    Py_DECREF(par_pmt);
    CHECK_OBJECT(par_pv);
    Py_DECREF(par_pv);
    CHECK_OBJECT(par_when);
    Py_DECREF(par_when);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$financial$$$function_11__ppmt_dispatcher(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_rate = python_pars[0];
    PyObject *par_per = python_pars[1];
    PyObject *par_nper = python_pars[2];
    PyObject *par_pv = python_pars[3];
    PyObject *par_fv = python_pars[4];
    PyObject *par_when = python_pars[5];
    struct Nuitka_FrameObject *frame_472144e55f798cc4cfa6d22aa99220b4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_472144e55f798cc4cfa6d22aa99220b4 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_472144e55f798cc4cfa6d22aa99220b4)) {
        Py_XDECREF(cache_frame_472144e55f798cc4cfa6d22aa99220b4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_472144e55f798cc4cfa6d22aa99220b4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_472144e55f798cc4cfa6d22aa99220b4 = MAKE_FUNCTION_FRAME(codeobj_472144e55f798cc4cfa6d22aa99220b4, module_numpy$lib$financial, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_472144e55f798cc4cfa6d22aa99220b4->m_type_description == NULL);
    frame_472144e55f798cc4cfa6d22aa99220b4 = cache_frame_472144e55f798cc4cfa6d22aa99220b4;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_472144e55f798cc4cfa6d22aa99220b4);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_472144e55f798cc4cfa6d22aa99220b4) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_kw_name_2;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[5]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 475;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[7]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 475;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = PyDict_Copy(mod_consts[41]);
        frame_472144e55f798cc4cfa6d22aa99220b4->m_frame.f_lineno = 475;
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_2, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 475;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "oooooo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kw_name_2 = PyDict_Copy(mod_consts[10]);
        frame_472144e55f798cc4cfa6d22aa99220b4->m_frame.f_lineno = 475;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_2);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_472144e55f798cc4cfa6d22aa99220b4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_472144e55f798cc4cfa6d22aa99220b4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_472144e55f798cc4cfa6d22aa99220b4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_472144e55f798cc4cfa6d22aa99220b4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_472144e55f798cc4cfa6d22aa99220b4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_472144e55f798cc4cfa6d22aa99220b4,
        type_description_1,
        par_rate,
        par_per,
        par_nper,
        par_pv,
        par_fv,
        par_when
    );


    // Release cached frame if used for exception.
    if (frame_472144e55f798cc4cfa6d22aa99220b4 == cache_frame_472144e55f798cc4cfa6d22aa99220b4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_472144e55f798cc4cfa6d22aa99220b4);
        cache_frame_472144e55f798cc4cfa6d22aa99220b4 = NULL;
    }

    assertFrameObject(frame_472144e55f798cc4cfa6d22aa99220b4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(par_rate);
        tmp_tuple_element_2 = par_rate;
        tmp_return_value = PyTuple_New(5);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_per);
        tmp_tuple_element_2 = par_per;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
        CHECK_OBJECT(par_nper);
        tmp_tuple_element_2 = par_nper;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_2);
        CHECK_OBJECT(par_pv);
        tmp_tuple_element_2 = par_pv;
        PyTuple_SET_ITEM0(tmp_return_value, 3, tmp_tuple_element_2);
        CHECK_OBJECT(par_fv);
        tmp_tuple_element_2 = par_fv;
        PyTuple_SET_ITEM0(tmp_return_value, 4, tmp_tuple_element_2);
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_rate);
    Py_DECREF(par_rate);
    CHECK_OBJECT(par_per);
    Py_DECREF(par_per);
    CHECK_OBJECT(par_nper);
    Py_DECREF(par_nper);
    CHECK_OBJECT(par_pv);
    Py_DECREF(par_pv);
    CHECK_OBJECT(par_fv);
    Py_DECREF(par_fv);
    CHECK_OBJECT(par_when);
    Py_DECREF(par_when);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_rate);
    Py_DECREF(par_rate);
    CHECK_OBJECT(par_per);
    Py_DECREF(par_per);
    CHECK_OBJECT(par_nper);
    Py_DECREF(par_nper);
    CHECK_OBJECT(par_pv);
    Py_DECREF(par_pv);
    CHECK_OBJECT(par_fv);
    Py_DECREF(par_fv);
    CHECK_OBJECT(par_when);
    Py_DECREF(par_when);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$financial$$$function_12_ppmt(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_rate = python_pars[0];
    PyObject *par_per = python_pars[1];
    PyObject *par_nper = python_pars[2];
    PyObject *par_pv = python_pars[3];
    PyObject *par_fv = python_pars[4];
    PyObject *par_when = python_pars[5];
    PyObject *var_total = NULL;
    struct Nuitka_FrameObject *frame_a3b6beed179f3ec06ea084751caee02e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a3b6beed179f3ec06ea084751caee02e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a3b6beed179f3ec06ea084751caee02e)) {
        Py_XDECREF(cache_frame_a3b6beed179f3ec06ea084751caee02e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a3b6beed179f3ec06ea084751caee02e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a3b6beed179f3ec06ea084751caee02e = MAKE_FUNCTION_FRAME(codeobj_a3b6beed179f3ec06ea084751caee02e, module_numpy$lib$financial, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a3b6beed179f3ec06ea084751caee02e->m_type_description == NULL);
    frame_a3b6beed179f3ec06ea084751caee02e = cache_frame_a3b6beed179f3ec06ea084751caee02e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a3b6beed179f3ec06ea084751caee02e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a3b6beed179f3ec06ea084751caee02e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_rate);
        tmp_args_element_name_1 = par_rate;
        CHECK_OBJECT(par_nper);
        tmp_args_element_name_2 = par_nper;
        CHECK_OBJECT(par_pv);
        tmp_args_element_name_3 = par_pv;
        CHECK_OBJECT(par_fv);
        tmp_args_element_name_4 = par_fv;
        CHECK_OBJECT(par_when);
        tmp_args_element_name_5 = par_when;
        frame_a3b6beed179f3ec06ea084751caee02e->m_frame.f_lineno = 517;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS5(tmp_called_name_1, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_total == NULL);
        var_total = tmp_assign_source_1;
    }
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        CHECK_OBJECT(var_total);
        tmp_left_name_1 = var_total;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_rate);
        tmp_args_element_name_6 = par_rate;
        CHECK_OBJECT(par_per);
        tmp_args_element_name_7 = par_per;
        CHECK_OBJECT(par_nper);
        tmp_args_element_name_8 = par_nper;
        CHECK_OBJECT(par_pv);
        tmp_args_element_name_9 = par_pv;
        CHECK_OBJECT(par_fv);
        tmp_args_element_name_10 = par_fv;
        CHECK_OBJECT(par_when);
        tmp_args_element_name_11 = par_when;
        frame_a3b6beed179f3ec06ea084751caee02e->m_frame.f_lineno = 518;
        {
            PyObject *call_args[] = {tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11};
            tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS6(tmp_called_name_2, call_args);
        }

        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a3b6beed179f3ec06ea084751caee02e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a3b6beed179f3ec06ea084751caee02e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a3b6beed179f3ec06ea084751caee02e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a3b6beed179f3ec06ea084751caee02e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a3b6beed179f3ec06ea084751caee02e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a3b6beed179f3ec06ea084751caee02e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a3b6beed179f3ec06ea084751caee02e,
        type_description_1,
        par_rate,
        par_per,
        par_nper,
        par_pv,
        par_fv,
        par_when,
        var_total
    );


    // Release cached frame if used for exception.
    if (frame_a3b6beed179f3ec06ea084751caee02e == cache_frame_a3b6beed179f3ec06ea084751caee02e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a3b6beed179f3ec06ea084751caee02e);
        cache_frame_a3b6beed179f3ec06ea084751caee02e = NULL;
    }

    assertFrameObject(frame_a3b6beed179f3ec06ea084751caee02e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_total);
    Py_DECREF(var_total);
    var_total = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_total);
    var_total = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_rate);
    Py_DECREF(par_rate);
    CHECK_OBJECT(par_per);
    Py_DECREF(par_per);
    CHECK_OBJECT(par_nper);
    Py_DECREF(par_nper);
    CHECK_OBJECT(par_pv);
    Py_DECREF(par_pv);
    CHECK_OBJECT(par_fv);
    Py_DECREF(par_fv);
    CHECK_OBJECT(par_when);
    Py_DECREF(par_when);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_rate);
    Py_DECREF(par_rate);
    CHECK_OBJECT(par_per);
    Py_DECREF(par_per);
    CHECK_OBJECT(par_nper);
    Py_DECREF(par_nper);
    CHECK_OBJECT(par_pv);
    Py_DECREF(par_pv);
    CHECK_OBJECT(par_fv);
    Py_DECREF(par_fv);
    CHECK_OBJECT(par_when);
    Py_DECREF(par_when);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$financial$$$function_13__pv_dispatcher(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_rate = python_pars[0];
    PyObject *par_nper = python_pars[1];
    PyObject *par_pmt = python_pars[2];
    PyObject *par_fv = python_pars[3];
    PyObject *par_when = python_pars[4];
    struct Nuitka_FrameObject *frame_caad8a0da1b2130f5f932f1ad9e431f7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_caad8a0da1b2130f5f932f1ad9e431f7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_caad8a0da1b2130f5f932f1ad9e431f7)) {
        Py_XDECREF(cache_frame_caad8a0da1b2130f5f932f1ad9e431f7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_caad8a0da1b2130f5f932f1ad9e431f7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_caad8a0da1b2130f5f932f1ad9e431f7 = MAKE_FUNCTION_FRAME(codeobj_caad8a0da1b2130f5f932f1ad9e431f7, module_numpy$lib$financial, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_caad8a0da1b2130f5f932f1ad9e431f7->m_type_description == NULL);
    frame_caad8a0da1b2130f5f932f1ad9e431f7 = cache_frame_caad8a0da1b2130f5f932f1ad9e431f7;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_caad8a0da1b2130f5f932f1ad9e431f7);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_caad8a0da1b2130f5f932f1ad9e431f7) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_kw_name_2;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[5]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 522;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[7]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 522;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = PyDict_Copy(mod_consts[43]);
        frame_caad8a0da1b2130f5f932f1ad9e431f7->m_frame.f_lineno = 522;
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_2, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 522;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;
            type_description_1 = "ooooo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kw_name_2 = PyDict_Copy(mod_consts[10]);
        frame_caad8a0da1b2130f5f932f1ad9e431f7->m_frame.f_lineno = 522;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_2);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(par_rate);
        tmp_tuple_element_2 = par_rate;
        tmp_return_value = PyTuple_New(5);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_nper);
        tmp_tuple_element_2 = par_nper;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
        CHECK_OBJECT(par_nper);
        tmp_tuple_element_2 = par_nper;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 524;
            type_description_1 = "ooooo";
            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_return_value, 3, tmp_tuple_element_2);
        CHECK_OBJECT(par_fv);
        tmp_tuple_element_2 = par_fv;
        PyTuple_SET_ITEM0(tmp_return_value, 4, tmp_tuple_element_2);
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_caad8a0da1b2130f5f932f1ad9e431f7);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_caad8a0da1b2130f5f932f1ad9e431f7);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_caad8a0da1b2130f5f932f1ad9e431f7);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_caad8a0da1b2130f5f932f1ad9e431f7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_caad8a0da1b2130f5f932f1ad9e431f7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_caad8a0da1b2130f5f932f1ad9e431f7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_caad8a0da1b2130f5f932f1ad9e431f7,
        type_description_1,
        par_rate,
        par_nper,
        par_pmt,
        par_fv,
        par_when
    );


    // Release cached frame if used for exception.
    if (frame_caad8a0da1b2130f5f932f1ad9e431f7 == cache_frame_caad8a0da1b2130f5f932f1ad9e431f7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_caad8a0da1b2130f5f932f1ad9e431f7);
        cache_frame_caad8a0da1b2130f5f932f1ad9e431f7 = NULL;
    }

    assertFrameObject(frame_caad8a0da1b2130f5f932f1ad9e431f7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_rate);
    Py_DECREF(par_rate);
    CHECK_OBJECT(par_nper);
    Py_DECREF(par_nper);
    CHECK_OBJECT(par_pmt);
    Py_DECREF(par_pmt);
    CHECK_OBJECT(par_fv);
    Py_DECREF(par_fv);
    CHECK_OBJECT(par_when);
    Py_DECREF(par_when);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_rate);
    Py_DECREF(par_rate);
    CHECK_OBJECT(par_nper);
    Py_DECREF(par_nper);
    CHECK_OBJECT(par_pmt);
    Py_DECREF(par_pmt);
    CHECK_OBJECT(par_fv);
    Py_DECREF(par_fv);
    CHECK_OBJECT(par_when);
    Py_DECREF(par_when);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$financial$$$function_14_pv(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_rate = python_pars[0];
    PyObject *par_nper = python_pars[1];
    PyObject *par_pmt = python_pars[2];
    PyObject *par_fv = python_pars[3];
    PyObject *par_when = python_pars[4];
    PyObject *var_temp = NULL;
    PyObject *var_fact = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_31bdb694842f4dff65d4e395dccc78b2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_31bdb694842f4dff65d4e395dccc78b2 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_31bdb694842f4dff65d4e395dccc78b2)) {
        Py_XDECREF(cache_frame_31bdb694842f4dff65d4e395dccc78b2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_31bdb694842f4dff65d4e395dccc78b2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_31bdb694842f4dff65d4e395dccc78b2 = MAKE_FUNCTION_FRAME(codeobj_31bdb694842f4dff65d4e395dccc78b2, module_numpy$lib$financial, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_31bdb694842f4dff65d4e395dccc78b2->m_type_description == NULL);
    frame_31bdb694842f4dff65d4e395dccc78b2 = cache_frame_31bdb694842f4dff65d4e395dccc78b2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_31bdb694842f4dff65d4e395dccc78b2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_31bdb694842f4dff65d4e395dccc78b2) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 622;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_when);
        tmp_args_element_name_1 = par_when;
        frame_31bdb694842f4dff65d4e395dccc78b2->m_frame.f_lineno = 622;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 622;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_when;
            assert(old != NULL);
            par_when = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_list_element_1;
        tmp_called_name_2 = (PyObject *)&PyMap_Type;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 623;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[12]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 623;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_rate);
        tmp_list_element_1 = par_rate;
        tmp_args_element_name_3 = PyList_New(5);
        PyList_SET_ITEM0(tmp_args_element_name_3, 0, tmp_list_element_1);
        CHECK_OBJECT(par_nper);
        tmp_list_element_1 = par_nper;
        PyList_SET_ITEM0(tmp_args_element_name_3, 1, tmp_list_element_1);
        CHECK_OBJECT(par_pmt);
        tmp_list_element_1 = par_pmt;
        PyList_SET_ITEM0(tmp_args_element_name_3, 2, tmp_list_element_1);
        CHECK_OBJECT(par_fv);
        tmp_list_element_1 = par_fv;
        PyList_SET_ITEM0(tmp_args_element_name_3, 3, tmp_list_element_1);
        CHECK_OBJECT(par_when);
        tmp_list_element_1 = par_when;
        PyList_SET_ITEM0(tmp_args_element_name_3, 4, tmp_list_element_1);
        frame_31bdb694842f4dff65d4e395dccc78b2->m_frame.f_lineno = 623;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 623;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 623;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_1, 0, 5);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 623;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_2, 1, 5);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 623;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_3, 2, 5);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 623;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_4, 3, 5);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 623;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_4 == NULL);
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_5, 4, 5);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 623;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_5 == NULL);
        tmp_tuple_unpack_1__element_5 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooo";
                    exception_lineno = 623;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[13];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooo";
            exception_lineno = 623;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_rate;
            assert(old != NULL);
            par_rate = tmp_assign_source_8;
            Py_INCREF(par_rate);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_nper;
            assert(old != NULL);
            par_nper = tmp_assign_source_9;
            Py_INCREF(par_nper);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = par_pmt;
            assert(old != NULL);
            par_pmt = tmp_assign_source_10;
            Py_INCREF(par_pmt);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_4;
        {
            PyObject *old = par_fv;
            assert(old != NULL);
            par_fv = tmp_assign_source_11;
            Py_INCREF(par_fv);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_5);
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_5;
        {
            PyObject *old = par_when;
            assert(old != NULL);
            par_when = tmp_assign_source_12;
            Py_INCREF(par_when);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;

    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        tmp_left_name_2 = mod_consts[14];
        CHECK_OBJECT(par_rate);
        tmp_right_name_1 = par_rate;
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_left_name_2, tmp_right_name_1);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 624;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_nper);
        tmp_right_name_2 = par_nper;
        tmp_assign_source_13 = BINARY_OPERATION_POW_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_2);
        Py_DECREF(tmp_left_name_1);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 624;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_temp == NULL);
        var_temp = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_3;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_4;
        PyObject *tmp_right_name_5;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_6;
        PyObject *tmp_right_name_7;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 625;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[15]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 625;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_rate);
        tmp_compexpr_left_1 = par_rate;
        tmp_compexpr_right_1 = mod_consts[16];
        tmp_args_element_name_4 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 625;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_nper);
        tmp_args_element_name_5 = par_nper;
        tmp_left_name_5 = mod_consts[14];
        CHECK_OBJECT(par_rate);
        tmp_left_name_6 = par_rate;
        CHECK_OBJECT(par_when);
        tmp_right_name_4 = par_when;
        tmp_right_name_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_6, tmp_right_name_4);
        if (tmp_right_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_4);

            exception_lineno = 625;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_4 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_left_name_5, tmp_right_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_left_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_4);

            exception_lineno = 625;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_temp);
        tmp_left_name_7 = var_temp;
        tmp_right_name_6 = mod_consts[14];
        tmp_right_name_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_7, tmp_right_name_6);
        if (tmp_right_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_4);
            Py_DECREF(tmp_left_name_4);

            exception_lineno = 625;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_4, tmp_right_name_5);
        Py_DECREF(tmp_left_name_4);
        Py_DECREF(tmp_right_name_5);
        if (tmp_left_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_4);

            exception_lineno = 625;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_rate);
        tmp_right_name_7 = par_rate;
        tmp_args_element_name_6 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_name_3, tmp_right_name_7);
        Py_DECREF(tmp_left_name_3);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_4);

            exception_lineno = 625;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_31bdb694842f4dff65d4e395dccc78b2->m_frame.f_lineno = 625;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_3, call_args);
        }

        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_4);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 625;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_fact == NULL);
        var_fact = tmp_assign_source_14;
    }
    {
        PyObject *tmp_left_name_8;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_8;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_9;
        PyObject *tmp_right_name_10;
        CHECK_OBJECT(par_fv);
        tmp_left_name_9 = par_fv;
        CHECK_OBJECT(par_pmt);
        tmp_left_name_10 = par_pmt;
        CHECK_OBJECT(var_fact);
        tmp_right_name_9 = var_fact;
        tmp_right_name_8 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_10, tmp_right_name_9);
        if (tmp_right_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 626;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_9, tmp_right_name_8);
        Py_DECREF(tmp_right_name_8);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 626;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_8 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_left_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 626;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_temp);
        tmp_right_name_10 = var_temp;
        tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_name_8, tmp_right_name_10);
        Py_DECREF(tmp_left_name_8);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 626;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_31bdb694842f4dff65d4e395dccc78b2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_31bdb694842f4dff65d4e395dccc78b2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_31bdb694842f4dff65d4e395dccc78b2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_31bdb694842f4dff65d4e395dccc78b2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_31bdb694842f4dff65d4e395dccc78b2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_31bdb694842f4dff65d4e395dccc78b2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_31bdb694842f4dff65d4e395dccc78b2,
        type_description_1,
        par_rate,
        par_nper,
        par_pmt,
        par_fv,
        par_when,
        var_temp,
        var_fact
    );


    // Release cached frame if used for exception.
    if (frame_31bdb694842f4dff65d4e395dccc78b2 == cache_frame_31bdb694842f4dff65d4e395dccc78b2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_31bdb694842f4dff65d4e395dccc78b2);
        cache_frame_31bdb694842f4dff65d4e395dccc78b2 = NULL;
    }

    assertFrameObject(frame_31bdb694842f4dff65d4e395dccc78b2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_rate);
    Py_DECREF(par_rate);
    par_rate = NULL;
    CHECK_OBJECT(par_nper);
    Py_DECREF(par_nper);
    par_nper = NULL;
    CHECK_OBJECT(par_pmt);
    Py_DECREF(par_pmt);
    par_pmt = NULL;
    CHECK_OBJECT(par_fv);
    Py_DECREF(par_fv);
    par_fv = NULL;
    CHECK_OBJECT(par_when);
    Py_DECREF(par_when);
    par_when = NULL;
    CHECK_OBJECT(var_temp);
    Py_DECREF(var_temp);
    var_temp = NULL;
    CHECK_OBJECT(var_fact);
    Py_DECREF(var_fact);
    var_fact = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_rate);
    Py_DECREF(par_rate);
    par_rate = NULL;
    CHECK_OBJECT(par_nper);
    Py_DECREF(par_nper);
    par_nper = NULL;
    CHECK_OBJECT(par_pmt);
    Py_DECREF(par_pmt);
    par_pmt = NULL;
    CHECK_OBJECT(par_fv);
    Py_DECREF(par_fv);
    par_fv = NULL;
    CHECK_OBJECT(par_when);
    Py_DECREF(par_when);
    par_when = NULL;
    Py_XDECREF(var_temp);
    var_temp = NULL;
    Py_XDECREF(var_fact);
    var_fact = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$financial$$$function_15__g_div_gp(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_r = python_pars[0];
    PyObject *par_n = python_pars[1];
    PyObject *par_p = python_pars[2];
    PyObject *par_x = python_pars[3];
    PyObject *par_y = python_pars[4];
    PyObject *par_w = python_pars[5];
    PyObject *var_t1 = NULL;
    PyObject *var_t2 = NULL;
    struct Nuitka_FrameObject *frame_df7c931562d79469f54979e1a28a601b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_df7c931562d79469f54979e1a28a601b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_df7c931562d79469f54979e1a28a601b)) {
        Py_XDECREF(cache_frame_df7c931562d79469f54979e1a28a601b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_df7c931562d79469f54979e1a28a601b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_df7c931562d79469f54979e1a28a601b = MAKE_FUNCTION_FRAME(codeobj_df7c931562d79469f54979e1a28a601b, module_numpy$lib$financial, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_df7c931562d79469f54979e1a28a601b->m_type_description == NULL);
    frame_df7c931562d79469f54979e1a28a601b = cache_frame_df7c931562d79469f54979e1a28a601b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_df7c931562d79469f54979e1a28a601b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_df7c931562d79469f54979e1a28a601b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT(par_r);
        tmp_left_name_2 = par_r;
        tmp_right_name_1 = mod_consts[14];
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_name_2, tmp_right_name_1);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 634;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n);
        tmp_right_name_2 = par_n;
        tmp_assign_source_1 = BINARY_OPERATION_POW_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_2);
        Py_DECREF(tmp_left_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 634;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_t1 == NULL);
        var_t1 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_3;
        PyObject *tmp_right_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        CHECK_OBJECT(par_r);
        tmp_left_name_4 = par_r;
        tmp_right_name_3 = mod_consts[14];
        tmp_left_name_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_name_4, tmp_right_name_3);
        if (tmp_left_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 635;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n);
        tmp_left_name_5 = par_n;
        tmp_right_name_5 = mod_consts[14];
        tmp_right_name_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_5, tmp_right_name_5);
        if (tmp_right_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_3);

            exception_lineno = 635;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_POW_OBJECT_OBJECT_OBJECT(tmp_left_name_3, tmp_right_name_4);
        Py_DECREF(tmp_left_name_3);
        Py_DECREF(tmp_right_name_4);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 635;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_t2 == NULL);
        var_t2 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_left_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_6;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_7;
        PyObject *tmp_right_name_8;
        PyObject *tmp_left_name_10;
        PyObject *tmp_left_name_11;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_9;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_10;
        PyObject *tmp_right_name_11;
        PyObject *tmp_left_name_14;
        PyObject *tmp_left_name_15;
        PyObject *tmp_right_name_12;
        PyObject *tmp_right_name_13;
        PyObject *tmp_right_name_14;
        PyObject *tmp_right_name_15;
        PyObject *tmp_left_name_16;
        PyObject *tmp_left_name_17;
        PyObject *tmp_left_name_18;
        PyObject *tmp_left_name_19;
        PyObject *tmp_left_name_20;
        PyObject *tmp_right_name_16;
        PyObject *tmp_right_name_17;
        PyObject *tmp_right_name_18;
        PyObject *tmp_left_name_21;
        PyObject *tmp_left_name_22;
        PyObject *tmp_left_name_23;
        PyObject *tmp_right_name_19;
        PyObject *tmp_left_name_24;
        PyObject *tmp_right_name_20;
        PyObject *tmp_right_name_21;
        PyObject *tmp_left_name_25;
        PyObject *tmp_left_name_26;
        PyObject *tmp_right_name_22;
        PyObject *tmp_right_name_23;
        PyObject *tmp_right_name_24;
        PyObject *tmp_left_name_27;
        PyObject *tmp_right_name_25;
        PyObject *tmp_right_name_26;
        PyObject *tmp_left_name_28;
        PyObject *tmp_left_name_29;
        PyObject *tmp_left_name_30;
        PyObject *tmp_left_name_31;
        PyObject *tmp_right_name_27;
        PyObject *tmp_right_name_28;
        PyObject *tmp_right_name_29;
        PyObject *tmp_left_name_32;
        PyObject *tmp_left_name_33;
        PyObject *tmp_right_name_30;
        PyObject *tmp_right_name_31;
        PyObject *tmp_right_name_32;
        PyObject *tmp_right_name_33;
        PyObject *tmp_left_name_34;
        PyObject *tmp_left_name_35;
        PyObject *tmp_left_name_36;
        PyObject *tmp_right_name_34;
        PyObject *tmp_left_name_37;
        PyObject *tmp_right_name_35;
        PyObject *tmp_right_name_36;
        PyObject *tmp_right_name_37;
        CHECK_OBJECT(par_y);
        tmp_left_name_8 = par_y;
        CHECK_OBJECT(var_t1);
        tmp_left_name_9 = var_t1;
        CHECK_OBJECT(par_x);
        tmp_right_name_7 = par_x;
        tmp_right_name_6 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_9, tmp_right_name_7);
        if (tmp_right_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 636;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_8, tmp_right_name_6);
        Py_DECREF(tmp_right_name_6);
        if (tmp_left_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 636;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_p);
        tmp_left_name_12 = par_p;
        CHECK_OBJECT(var_t1);
        tmp_left_name_13 = var_t1;
        tmp_right_name_10 = mod_consts[14];
        tmp_right_name_9 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_13, tmp_right_name_10);
        if (tmp_right_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_7);

            exception_lineno = 636;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_11 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_12, tmp_right_name_9);
        Py_DECREF(tmp_right_name_9);
        if (tmp_left_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_7);

            exception_lineno = 636;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_r);
        tmp_left_name_15 = par_r;
        CHECK_OBJECT(par_w);
        tmp_right_name_12 = par_w;
        tmp_left_name_14 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_15, tmp_right_name_12);
        if (tmp_left_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_7);
            Py_DECREF(tmp_left_name_11);

            exception_lineno = 636;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_13 = mod_consts[14];
        tmp_right_name_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_name_14, tmp_right_name_13);
        Py_DECREF(tmp_left_name_14);
        if (tmp_right_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_7);
            Py_DECREF(tmp_left_name_11);

            exception_lineno = 636;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_10 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_11, tmp_right_name_11);
        Py_DECREF(tmp_left_name_11);
        Py_DECREF(tmp_right_name_11);
        if (tmp_left_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_7);

            exception_lineno = 636;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_r);
        tmp_right_name_14 = par_r;
        tmp_right_name_8 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_name_10, tmp_right_name_14);
        Py_DECREF(tmp_left_name_10);
        if (tmp_right_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_7);

            exception_lineno = 636;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_7, tmp_right_name_8);
        Py_DECREF(tmp_left_name_7);
        Py_DECREF(tmp_right_name_8);
        if (tmp_left_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 636;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n);
        tmp_left_name_20 = par_n;
        CHECK_OBJECT(var_t2);
        tmp_right_name_16 = var_t2;
        tmp_left_name_19 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_20, tmp_right_name_16);
        if (tmp_left_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_6);

            exception_lineno = 637;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_right_name_17 = par_x;
        tmp_left_name_18 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_19, tmp_right_name_17);
        Py_DECREF(tmp_left_name_19);
        if (tmp_left_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_6);

            exception_lineno = 637;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_p);
        tmp_left_name_23 = par_p;
        CHECK_OBJECT(var_t1);
        tmp_left_name_24 = var_t1;
        tmp_right_name_20 = mod_consts[14];
        tmp_right_name_19 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_24, tmp_right_name_20);
        if (tmp_right_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_6);
            Py_DECREF(tmp_left_name_18);

            exception_lineno = 637;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_22 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_23, tmp_right_name_19);
        Py_DECREF(tmp_right_name_19);
        if (tmp_left_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_6);
            Py_DECREF(tmp_left_name_18);

            exception_lineno = 637;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_r);
        tmp_left_name_26 = par_r;
        CHECK_OBJECT(par_w);
        tmp_right_name_22 = par_w;
        tmp_left_name_25 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_26, tmp_right_name_22);
        if (tmp_left_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_6);
            Py_DECREF(tmp_left_name_18);
            Py_DECREF(tmp_left_name_22);

            exception_lineno = 637;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_23 = mod_consts[14];
        tmp_right_name_21 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_name_25, tmp_right_name_23);
        Py_DECREF(tmp_left_name_25);
        if (tmp_right_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_6);
            Py_DECREF(tmp_left_name_18);
            Py_DECREF(tmp_left_name_22);

            exception_lineno = 637;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_21 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_22, tmp_right_name_21);
        Py_DECREF(tmp_left_name_22);
        Py_DECREF(tmp_right_name_21);
        if (tmp_left_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_6);
            Py_DECREF(tmp_left_name_18);

            exception_lineno = 637;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_r);
        tmp_left_name_27 = par_r;
        tmp_right_name_25 = mod_consts[46];
        tmp_right_name_24 = BINARY_OPERATION_POW_OBJECT_OBJECT_LONG(tmp_left_name_27, tmp_right_name_25);
        if (tmp_right_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_6);
            Py_DECREF(tmp_left_name_18);
            Py_DECREF(tmp_left_name_21);

            exception_lineno = 637;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_18 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_name_21, tmp_right_name_24);
        Py_DECREF(tmp_left_name_21);
        Py_DECREF(tmp_right_name_24);
        if (tmp_right_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_6);
            Py_DECREF(tmp_left_name_18);

            exception_lineno = 637;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_17 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_18, tmp_right_name_18);
        Py_DECREF(tmp_left_name_18);
        Py_DECREF(tmp_right_name_18);
        if (tmp_left_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_6);

            exception_lineno = 637;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n);
        tmp_left_name_31 = par_n;
        CHECK_OBJECT(par_p);
        tmp_right_name_27 = par_p;
        tmp_left_name_30 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_31, tmp_right_name_27);
        if (tmp_left_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_6);
            Py_DECREF(tmp_left_name_17);

            exception_lineno = 637;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_t2);
        tmp_right_name_28 = var_t2;
        tmp_left_name_29 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_30, tmp_right_name_28);
        Py_DECREF(tmp_left_name_30);
        if (tmp_left_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_6);
            Py_DECREF(tmp_left_name_17);

            exception_lineno = 637;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_r);
        tmp_left_name_33 = par_r;
        CHECK_OBJECT(par_w);
        tmp_right_name_30 = par_w;
        tmp_left_name_32 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_33, tmp_right_name_30);
        if (tmp_left_name_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_6);
            Py_DECREF(tmp_left_name_17);
            Py_DECREF(tmp_left_name_29);

            exception_lineno = 637;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_31 = mod_consts[14];
        tmp_right_name_29 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_name_32, tmp_right_name_31);
        Py_DECREF(tmp_left_name_32);
        if (tmp_right_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_6);
            Py_DECREF(tmp_left_name_17);
            Py_DECREF(tmp_left_name_29);

            exception_lineno = 637;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_28 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_29, tmp_right_name_29);
        Py_DECREF(tmp_left_name_29);
        Py_DECREF(tmp_right_name_29);
        if (tmp_left_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_6);
            Py_DECREF(tmp_left_name_17);

            exception_lineno = 637;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_r);
        tmp_right_name_32 = par_r;
        tmp_right_name_26 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_name_28, tmp_right_name_32);
        Py_DECREF(tmp_left_name_28);
        if (tmp_right_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_6);
            Py_DECREF(tmp_left_name_17);

            exception_lineno = 637;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_16 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_17, tmp_right_name_26);
        Py_DECREF(tmp_left_name_17);
        Py_DECREF(tmp_right_name_26);
        if (tmp_left_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_6);

            exception_lineno = 637;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_p);
        tmp_left_name_36 = par_p;
        CHECK_OBJECT(var_t1);
        tmp_left_name_37 = var_t1;
        tmp_right_name_35 = mod_consts[14];
        tmp_right_name_34 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_37, tmp_right_name_35);
        if (tmp_right_name_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_6);
            Py_DECREF(tmp_left_name_16);

            exception_lineno = 638;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_35 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_36, tmp_right_name_34);
        Py_DECREF(tmp_right_name_34);
        if (tmp_left_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_6);
            Py_DECREF(tmp_left_name_16);

            exception_lineno = 638;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_w);
        tmp_right_name_36 = par_w;
        tmp_left_name_34 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_35, tmp_right_name_36);
        Py_DECREF(tmp_left_name_35);
        if (tmp_left_name_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_6);
            Py_DECREF(tmp_left_name_16);

            exception_lineno = 638;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_r);
        tmp_right_name_37 = par_r;
        tmp_right_name_33 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_name_34, tmp_right_name_37);
        Py_DECREF(tmp_left_name_34);
        if (tmp_right_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_6);
            Py_DECREF(tmp_left_name_16);

            exception_lineno = 638;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_15 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_16, tmp_right_name_33);
        Py_DECREF(tmp_left_name_16);
        Py_DECREF(tmp_right_name_33);
        if (tmp_right_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_6);

            exception_lineno = 637;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_name_6, tmp_right_name_15);
        Py_DECREF(tmp_left_name_6);
        Py_DECREF(tmp_right_name_15);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 636;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_df7c931562d79469f54979e1a28a601b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_df7c931562d79469f54979e1a28a601b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_df7c931562d79469f54979e1a28a601b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_df7c931562d79469f54979e1a28a601b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_df7c931562d79469f54979e1a28a601b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_df7c931562d79469f54979e1a28a601b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_df7c931562d79469f54979e1a28a601b,
        type_description_1,
        par_r,
        par_n,
        par_p,
        par_x,
        par_y,
        par_w,
        var_t1,
        var_t2
    );


    // Release cached frame if used for exception.
    if (frame_df7c931562d79469f54979e1a28a601b == cache_frame_df7c931562d79469f54979e1a28a601b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_df7c931562d79469f54979e1a28a601b);
        cache_frame_df7c931562d79469f54979e1a28a601b = NULL;
    }

    assertFrameObject(frame_df7c931562d79469f54979e1a28a601b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_t1);
    Py_DECREF(var_t1);
    var_t1 = NULL;
    CHECK_OBJECT(var_t2);
    Py_DECREF(var_t2);
    var_t2 = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_t1);
    var_t1 = NULL;
    Py_XDECREF(var_t2);
    var_t2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_r);
    Py_DECREF(par_r);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    CHECK_OBJECT(par_w);
    Py_DECREF(par_w);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_r);
    Py_DECREF(par_r);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    CHECK_OBJECT(par_w);
    Py_DECREF(par_w);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$financial$$$function_16__rate_dispatcher(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_nper = python_pars[0];
    PyObject *par_pmt = python_pars[1];
    PyObject *par_pv = python_pars[2];
    PyObject *par_fv = python_pars[3];
    PyObject *par_when = python_pars[4];
    PyObject *par_guess = python_pars[5];
    PyObject *par_tol = python_pars[6];
    PyObject *par_maxiter = python_pars[7];
    struct Nuitka_FrameObject *frame_169c24406f4eda16c9545bf68f033ce2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_169c24406f4eda16c9545bf68f033ce2 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_169c24406f4eda16c9545bf68f033ce2)) {
        Py_XDECREF(cache_frame_169c24406f4eda16c9545bf68f033ce2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_169c24406f4eda16c9545bf68f033ce2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_169c24406f4eda16c9545bf68f033ce2 = MAKE_FUNCTION_FRAME(codeobj_169c24406f4eda16c9545bf68f033ce2, module_numpy$lib$financial, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_169c24406f4eda16c9545bf68f033ce2->m_type_description == NULL);
    frame_169c24406f4eda16c9545bf68f033ce2 = cache_frame_169c24406f4eda16c9545bf68f033ce2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_169c24406f4eda16c9545bf68f033ce2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_169c24406f4eda16c9545bf68f033ce2) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_kw_name_2;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 643;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[5]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 643;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 643;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[7]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 643;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = PyDict_Copy(mod_consts[47]);
        frame_169c24406f4eda16c9545bf68f033ce2->m_frame.f_lineno = 643;
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_2, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 643;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 644;
            type_description_1 = "oooooooo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kw_name_2 = PyDict_Copy(mod_consts[10]);
        frame_169c24406f4eda16c9545bf68f033ce2->m_frame.f_lineno = 643;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_2);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 643;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_169c24406f4eda16c9545bf68f033ce2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_169c24406f4eda16c9545bf68f033ce2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_169c24406f4eda16c9545bf68f033ce2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_169c24406f4eda16c9545bf68f033ce2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_169c24406f4eda16c9545bf68f033ce2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_169c24406f4eda16c9545bf68f033ce2,
        type_description_1,
        par_nper,
        par_pmt,
        par_pv,
        par_fv,
        par_when,
        par_guess,
        par_tol,
        par_maxiter
    );


    // Release cached frame if used for exception.
    if (frame_169c24406f4eda16c9545bf68f033ce2 == cache_frame_169c24406f4eda16c9545bf68f033ce2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_169c24406f4eda16c9545bf68f033ce2);
        cache_frame_169c24406f4eda16c9545bf68f033ce2 = NULL;
    }

    assertFrameObject(frame_169c24406f4eda16c9545bf68f033ce2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(par_nper);
        tmp_tuple_element_2 = par_nper;
        tmp_return_value = PyTuple_New(4);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_pmt);
        tmp_tuple_element_2 = par_pmt;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
        CHECK_OBJECT(par_pv);
        tmp_tuple_element_2 = par_pv;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_2);
        CHECK_OBJECT(par_fv);
        tmp_tuple_element_2 = par_fv;
        PyTuple_SET_ITEM0(tmp_return_value, 3, tmp_tuple_element_2);
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_nper);
    Py_DECREF(par_nper);
    CHECK_OBJECT(par_pmt);
    Py_DECREF(par_pmt);
    CHECK_OBJECT(par_pv);
    Py_DECREF(par_pv);
    CHECK_OBJECT(par_fv);
    Py_DECREF(par_fv);
    CHECK_OBJECT(par_when);
    Py_DECREF(par_when);
    CHECK_OBJECT(par_guess);
    Py_DECREF(par_guess);
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);
    CHECK_OBJECT(par_maxiter);
    Py_DECREF(par_maxiter);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_nper);
    Py_DECREF(par_nper);
    CHECK_OBJECT(par_pmt);
    Py_DECREF(par_pmt);
    CHECK_OBJECT(par_pv);
    Py_DECREF(par_pv);
    CHECK_OBJECT(par_fv);
    Py_DECREF(par_fv);
    CHECK_OBJECT(par_when);
    Py_DECREF(par_when);
    CHECK_OBJECT(par_guess);
    Py_DECREF(par_guess);
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);
    CHECK_OBJECT(par_maxiter);
    Py_DECREF(par_maxiter);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$financial$$$function_17_rate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_nper = python_pars[0];
    PyObject *par_pmt = python_pars[1];
    PyObject *par_pv = python_pars[2];
    PyObject *par_fv = python_pars[3];
    PyObject *par_when = python_pars[4];
    PyObject *par_guess = python_pars[5];
    PyObject *par_tol = python_pars[6];
    PyObject *par_maxiter = python_pars[7];
    PyObject *var_default_type = NULL;
    PyObject *var_rn = NULL;
    PyObject *var_iterator = NULL;
    PyObject *var_close = NULL;
    PyObject *var_rnp1 = NULL;
    PyObject *var_diff = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_f5bb60273e0ac25e4949495174ce4622;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f5bb60273e0ac25e4949495174ce4622 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f5bb60273e0ac25e4949495174ce4622)) {
        Py_XDECREF(cache_frame_f5bb60273e0ac25e4949495174ce4622);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f5bb60273e0ac25e4949495174ce4622 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f5bb60273e0ac25e4949495174ce4622 = MAKE_FUNCTION_FRAME(codeobj_f5bb60273e0ac25e4949495174ce4622, module_numpy$lib$financial, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f5bb60273e0ac25e4949495174ce4622->m_type_description == NULL);
    frame_f5bb60273e0ac25e4949495174ce4622 = cache_frame_f5bb60273e0ac25e4949495174ce4622;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f5bb60273e0ac25e4949495174ce4622);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f5bb60273e0ac25e4949495174ce4622) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 708;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_when);
        tmp_args_element_name_1 = par_when;
        frame_f5bb60273e0ac25e4949495174ce4622->m_frame.f_lineno = 708;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 708;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_when;
            assert(old != NULL);
            par_when = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_pmt);
        tmp_isinstance_inst_1 = par_pmt;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 709;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 709;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_assign_source_2 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_assign_source_2 == NULL)) {
            tmp_assign_source_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 709;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_2 = (PyObject *)&PyFloat_Type;
        condexpr_end_1:;
        assert(var_default_type == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_default_type = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_guess);
        tmp_compexpr_left_1 = par_guess;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        CHECK_OBJECT(var_default_type);
        tmp_called_name_2 = var_default_type;
        frame_f5bb60273e0ac25e4949495174ce4622->m_frame.f_lineno = 714;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, mod_consts[49]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 714;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_guess;
            assert(old != NULL);
            par_guess = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(par_tol);
        tmp_compexpr_left_2 = par_tol;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_3 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_3;
        CHECK_OBJECT(var_default_type);
        tmp_called_name_3 = var_default_type;
        frame_f5bb60273e0ac25e4949495174ce4622->m_frame.f_lineno = 717;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, mod_consts[50]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 717;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_tol;
            assert(old != NULL);
            par_tol = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_list_element_1;
        tmp_called_name_4 = (PyObject *)&PyMap_Type;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 719;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[12]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 719;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_nper);
        tmp_list_element_1 = par_nper;
        tmp_args_element_name_3 = PyList_New(5);
        PyList_SET_ITEM0(tmp_args_element_name_3, 0, tmp_list_element_1);
        CHECK_OBJECT(par_pmt);
        tmp_list_element_1 = par_pmt;
        PyList_SET_ITEM0(tmp_args_element_name_3, 1, tmp_list_element_1);
        CHECK_OBJECT(par_pv);
        tmp_list_element_1 = par_pv;
        PyList_SET_ITEM0(tmp_args_element_name_3, 2, tmp_list_element_1);
        CHECK_OBJECT(par_fv);
        tmp_list_element_1 = par_fv;
        PyList_SET_ITEM0(tmp_args_element_name_3, 3, tmp_list_element_1);
        CHECK_OBJECT(par_when);
        tmp_list_element_1 = par_when;
        PyList_SET_ITEM0(tmp_args_element_name_3, 4, tmp_list_element_1);
        frame_f5bb60273e0ac25e4949495174ce4622->m_frame.f_lineno = 719;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_4, call_args);
        }

        Py_DECREF(tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 719;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 719;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_1, 0, 5);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooo";
            exception_lineno = 719;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_2, 1, 5);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooo";
            exception_lineno = 719;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_3, 2, 5);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooo";
            exception_lineno = 719;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_4, 3, 5);
        if (tmp_assign_source_9 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooo";
            exception_lineno = 719;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_4 == NULL);
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_5, 4, 5);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooo";
            exception_lineno = 719;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_5 == NULL);
        tmp_tuple_unpack_1__element_5 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooooooooo";
                    exception_lineno = 719;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[13];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooo";
            exception_lineno = 719;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_nper;
            assert(old != NULL);
            par_nper = tmp_assign_source_11;
            Py_INCREF(par_nper);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_pmt;
            assert(old != NULL);
            par_pmt = tmp_assign_source_12;
            Py_INCREF(par_pmt);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = par_pv;
            assert(old != NULL);
            par_pv = tmp_assign_source_13;
            Py_INCREF(par_pv);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_14 = tmp_tuple_unpack_1__element_4;
        {
            PyObject *old = par_fv;
            assert(old != NULL);
            par_fv = tmp_assign_source_14;
            Py_INCREF(par_fv);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_5);
        tmp_assign_source_15 = tmp_tuple_unpack_1__element_5;
        {
            PyObject *old = par_when;
            assert(old != NULL);
            par_when = tmp_assign_source_15;
            Py_INCREF(par_when);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;

    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(par_guess);
        tmp_assign_source_16 = par_guess;
        assert(var_rn == NULL);
        Py_INCREF(tmp_assign_source_16);
        var_rn = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[16];
        assert(var_iterator == NULL);
        Py_INCREF(tmp_assign_source_17);
        var_iterator = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = Py_False;
        assert(var_close == NULL);
        Py_INCREF(tmp_assign_source_18);
        var_close = tmp_assign_source_18;
    }
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_operand_name_1;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_operand_name_2;
        if (var_iterator == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 724;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_3 = var_iterator;
        if (par_maxiter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 724;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_3 = par_maxiter;
        tmp_and_left_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        if (tmp_and_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 724;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_1);

            exception_lineno = 724;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        Py_DECREF(tmp_and_left_value_1);
        if (var_close == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 724;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_name_2 = var_close;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 724;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? Py_True : Py_False;
        Py_INCREF(tmp_and_right_value_1);
        tmp_operand_name_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_operand_name_1 = tmp_and_left_value_1;
        and_end_1:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 724;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    goto loop_end_1;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        if (var_rn == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 725;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_1 = var_rn;
        tmp_called_name_5 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_called_name_5 == NULL)) {
            tmp_called_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 725;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_rn == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 725;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_4 = var_rn;
        if (par_nper == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 725;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_5 = par_nper;
        if (par_pmt == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 725;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_6 = par_pmt;
        if (par_pv == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 725;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_7 = par_pv;
        if (par_fv == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 725;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_8 = par_fv;
        if (par_when == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 725;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_9 = par_when;
        frame_f5bb60273e0ac25e4949495174ce4622->m_frame.f_lineno = 725;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9};
            tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS6(tmp_called_name_5, call_args);
        }

        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 725;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 725;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_rnp1;
            var_rnp1 = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_abs_arg_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT(var_rnp1);
        tmp_left_name_2 = var_rnp1;
        if (var_rn == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 726;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_2 = var_rn;
        tmp_abs_arg_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_2);
        if (tmp_abs_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 726;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_20 = BUILTIN_ABS(tmp_abs_arg_1);
        Py_DECREF(tmp_abs_arg_1);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 726;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_diff;
            var_diff = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_name_6;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 727;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[58]);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 727;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_diff);
        tmp_compexpr_left_4 = var_diff;
        if (par_tol == NULL) {
            Py_DECREF(tmp_called_name_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 727;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_4 = par_tol;
        tmp_args_element_name_10 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        if (tmp_args_element_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);

            exception_lineno = 727;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_f5bb60273e0ac25e4949495174ce4622->m_frame.f_lineno = 727;
        tmp_assign_source_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_10);
        Py_DECREF(tmp_called_name_6);
        Py_DECREF(tmp_args_element_name_10);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 727;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_close;
            var_close = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        if (var_iterator == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 728;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_3 = var_iterator;
        tmp_right_name_3 = mod_consts[14];
        tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE(&tmp_left_name_3, tmp_right_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 728;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_22 = tmp_left_name_3;
        var_iterator = tmp_assign_source_22;

    }
    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(var_rnp1);
        tmp_assign_source_23 = var_rnp1;
        {
            PyObject *old = var_rn;
            var_rn = tmp_assign_source_23;
            Py_INCREF(var_rn);
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 724;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_operand_name_3;
        if (var_close == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 730;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_name_3 = var_close;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 730;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_left_name_4;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_right_name_4;
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 732;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[60]);
        if (tmp_left_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 732;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_rn == NULL) {
            Py_DECREF(tmp_left_name_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 732;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_4 = var_rn;
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_4, tmp_right_name_4);
        Py_DECREF(tmp_left_name_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 732;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_4;
    branch_no_4:;
    if (var_rn == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 734;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_rn;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_end_4:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f5bb60273e0ac25e4949495174ce4622);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f5bb60273e0ac25e4949495174ce4622);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f5bb60273e0ac25e4949495174ce4622);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f5bb60273e0ac25e4949495174ce4622, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f5bb60273e0ac25e4949495174ce4622->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f5bb60273e0ac25e4949495174ce4622, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f5bb60273e0ac25e4949495174ce4622,
        type_description_1,
        par_nper,
        par_pmt,
        par_pv,
        par_fv,
        par_when,
        par_guess,
        par_tol,
        par_maxiter,
        var_default_type,
        var_rn,
        var_iterator,
        var_close,
        var_rnp1,
        var_diff
    );


    // Release cached frame if used for exception.
    if (frame_f5bb60273e0ac25e4949495174ce4622 == cache_frame_f5bb60273e0ac25e4949495174ce4622) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_f5bb60273e0ac25e4949495174ce4622);
        cache_frame_f5bb60273e0ac25e4949495174ce4622 = NULL;
    }

    assertFrameObject(frame_f5bb60273e0ac25e4949495174ce4622);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_nper);
    par_nper = NULL;
    Py_XDECREF(par_pmt);
    par_pmt = NULL;
    Py_XDECREF(par_pv);
    par_pv = NULL;
    Py_XDECREF(par_fv);
    par_fv = NULL;
    Py_XDECREF(par_when);
    par_when = NULL;
    CHECK_OBJECT(par_guess);
    Py_DECREF(par_guess);
    par_guess = NULL;
    Py_XDECREF(par_tol);
    par_tol = NULL;
    CHECK_OBJECT(var_default_type);
    Py_DECREF(var_default_type);
    var_default_type = NULL;
    Py_XDECREF(var_rn);
    var_rn = NULL;
    Py_XDECREF(var_iterator);
    var_iterator = NULL;
    Py_XDECREF(var_close);
    var_close = NULL;
    Py_XDECREF(var_rnp1);
    var_rnp1 = NULL;
    Py_XDECREF(var_diff);
    var_diff = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_nper);
    par_nper = NULL;
    Py_XDECREF(par_pmt);
    par_pmt = NULL;
    Py_XDECREF(par_pv);
    par_pv = NULL;
    Py_XDECREF(par_fv);
    par_fv = NULL;
    Py_XDECREF(par_when);
    par_when = NULL;
    Py_XDECREF(par_guess);
    par_guess = NULL;
    Py_XDECREF(par_tol);
    par_tol = NULL;
    Py_XDECREF(var_default_type);
    var_default_type = NULL;
    Py_XDECREF(var_rn);
    var_rn = NULL;
    Py_XDECREF(var_iterator);
    var_iterator = NULL;
    Py_XDECREF(var_close);
    var_close = NULL;
    Py_XDECREF(var_rnp1);
    var_rnp1 = NULL;
    Py_XDECREF(var_diff);
    var_diff = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_maxiter);
    Py_DECREF(par_maxiter);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_maxiter);
    Py_DECREF(par_maxiter);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$financial$$$function_18__irr_dispatcher(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_values = python_pars[0];
    struct Nuitka_FrameObject *frame_ac7522ed11325e06c39bf83f9992097d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ac7522ed11325e06c39bf83f9992097d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ac7522ed11325e06c39bf83f9992097d)) {
        Py_XDECREF(cache_frame_ac7522ed11325e06c39bf83f9992097d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ac7522ed11325e06c39bf83f9992097d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ac7522ed11325e06c39bf83f9992097d = MAKE_FUNCTION_FRAME(codeobj_ac7522ed11325e06c39bf83f9992097d, module_numpy$lib$financial, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ac7522ed11325e06c39bf83f9992097d->m_type_description == NULL);
    frame_ac7522ed11325e06c39bf83f9992097d = cache_frame_ac7522ed11325e06c39bf83f9992097d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ac7522ed11325e06c39bf83f9992097d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ac7522ed11325e06c39bf83f9992097d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_kw_name_2;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 738;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[5]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 738;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 738;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[7]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 738;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = PyDict_Copy(mod_consts[62]);
        frame_ac7522ed11325e06c39bf83f9992097d->m_frame.f_lineno = 738;
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_2, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 738;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 739;
            type_description_1 = "o";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kw_name_2 = PyDict_Copy(mod_consts[10]);
        frame_ac7522ed11325e06c39bf83f9992097d->m_frame.f_lineno = 738;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_2);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 738;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ac7522ed11325e06c39bf83f9992097d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ac7522ed11325e06c39bf83f9992097d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ac7522ed11325e06c39bf83f9992097d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ac7522ed11325e06c39bf83f9992097d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ac7522ed11325e06c39bf83f9992097d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ac7522ed11325e06c39bf83f9992097d,
        type_description_1,
        par_values
    );


    // Release cached frame if used for exception.
    if (frame_ac7522ed11325e06c39bf83f9992097d == cache_frame_ac7522ed11325e06c39bf83f9992097d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ac7522ed11325e06c39bf83f9992097d);
        cache_frame_ac7522ed11325e06c39bf83f9992097d = NULL;
    }

    assertFrameObject(frame_ac7522ed11325e06c39bf83f9992097d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(par_values);
        tmp_tuple_element_2 = par_values;
        tmp_return_value = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$financial$$$function_19_irr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_values = python_pars[0];
    PyObject *var_res = NULL;
    PyObject *var_mask = NULL;
    PyObject *var_rate = NULL;
    struct Nuitka_FrameObject *frame_52851e846834440c173ed3ec0926ff85;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_52851e846834440c173ed3ec0926ff85 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_52851e846834440c173ed3ec0926ff85)) {
        Py_XDECREF(cache_frame_52851e846834440c173ed3ec0926ff85);

#if _DEBUG_REFCOUNTS
        if (cache_frame_52851e846834440c173ed3ec0926ff85 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_52851e846834440c173ed3ec0926ff85 = MAKE_FUNCTION_FRAME(codeobj_52851e846834440c173ed3ec0926ff85, module_numpy$lib$financial, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_52851e846834440c173ed3ec0926ff85->m_type_description == NULL);
    frame_52851e846834440c173ed3ec0926ff85 = cache_frame_52851e846834440c173ed3ec0926ff85;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_52851e846834440c173ed3ec0926ff85);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_52851e846834440c173ed3ec0926ff85) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 818;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[63]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 818;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_values);
        tmp_expression_name_2 = par_values;
        tmp_subscript_name_1 = mod_consts[64];
        tmp_args_element_name_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_1);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 818;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_52851e846834440c173ed3ec0926ff85->m_frame.f_lineno = 818;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 818;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_res == NULL);
        var_res = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_expression_name_4;
        CHECK_OBJECT(var_res);
        tmp_expression_name_3 = var_res;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[65]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 819;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = mod_consts[16];
        tmp_left_name_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 819;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (var_res == NULL) {
            Py_DECREF(tmp_left_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[66]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 819;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = var_res;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[67]);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 819;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = mod_consts[16];
        tmp_right_name_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 819;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 819;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_mask == NULL);
        var_mask = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_mask);
        tmp_called_instance_1 = var_mask;
        frame_52851e846834440c173ed3ec0926ff85->m_frame.f_lineno = 820;
        tmp_operand_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[68]);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 820;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 820;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_expression_name_5;
        tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_5 == NULL)) {
            tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 821;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[60]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 821;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_subscript_name_2;
        if (var_res == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[66]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 822;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_7 = var_res;
        if (var_mask == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[69]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 822;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_2 = var_mask;
        tmp_expression_name_6 = LOOKUP_SUBSCRIPT(tmp_expression_name_7, tmp_subscript_name_2);
        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 822;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[67]);
        Py_DECREF(tmp_expression_name_6);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 822;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_res;
            var_res = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        tmp_left_name_3 = mod_consts[14];
        CHECK_OBJECT(var_res);
        tmp_right_name_2 = var_res;
        tmp_left_name_2 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_OBJECT(tmp_left_name_3, tmp_right_name_2);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 825;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = mod_consts[14];
        tmp_assign_source_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_2, tmp_right_name_3);
        Py_DECREF(tmp_left_name_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 825;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_rate == NULL);
        var_rate = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT(var_rate);
        tmp_expression_name_8 = var_rate;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[70]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 826;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_9 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_9 == NULL)) {
            tmp_expression_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 826;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[71]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 826;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_10 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_10 == NULL)) {
            tmp_expression_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 826;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[72]);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 826;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (var_rate == NULL) {
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_called_name_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[73]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 826;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_4 = var_rate;
        frame_52851e846834440c173ed3ec0926ff85->m_frame.f_lineno = 826;
        tmp_args_element_name_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_4);
        Py_DECREF(tmp_called_name_4);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 826;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_52851e846834440c173ed3ec0926ff85->m_frame.f_lineno = 826;
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_3);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 826;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_52851e846834440c173ed3ec0926ff85->m_frame.f_lineno = 826;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 826;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_rate;
            var_rate = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_52851e846834440c173ed3ec0926ff85);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_52851e846834440c173ed3ec0926ff85);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_52851e846834440c173ed3ec0926ff85);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_52851e846834440c173ed3ec0926ff85, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_52851e846834440c173ed3ec0926ff85->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_52851e846834440c173ed3ec0926ff85, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_52851e846834440c173ed3ec0926ff85,
        type_description_1,
        par_values,
        var_res,
        var_mask,
        var_rate
    );


    // Release cached frame if used for exception.
    if (frame_52851e846834440c173ed3ec0926ff85 == cache_frame_52851e846834440c173ed3ec0926ff85) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_52851e846834440c173ed3ec0926ff85);
        cache_frame_52851e846834440c173ed3ec0926ff85 = NULL;
    }

    assertFrameObject(frame_52851e846834440c173ed3ec0926ff85);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_rate);
    tmp_return_value = var_rate;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_res);
    var_res = NULL;
    Py_XDECREF(var_mask);
    var_mask = NULL;
    Py_XDECREF(var_rate);
    var_rate = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_res);
    var_res = NULL;
    Py_XDECREF(var_mask);
    var_mask = NULL;
    Py_XDECREF(var_rate);
    var_rate = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$financial$$$function_20__npv_dispatcher(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_rate = python_pars[0];
    PyObject *par_values = python_pars[1];
    struct Nuitka_FrameObject *frame_42cc692680ea556e217c971e8e3a2aa6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_42cc692680ea556e217c971e8e3a2aa6 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_42cc692680ea556e217c971e8e3a2aa6)) {
        Py_XDECREF(cache_frame_42cc692680ea556e217c971e8e3a2aa6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_42cc692680ea556e217c971e8e3a2aa6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_42cc692680ea556e217c971e8e3a2aa6 = MAKE_FUNCTION_FRAME(codeobj_42cc692680ea556e217c971e8e3a2aa6, module_numpy$lib$financial, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_42cc692680ea556e217c971e8e3a2aa6->m_type_description == NULL);
    frame_42cc692680ea556e217c971e8e3a2aa6 = cache_frame_42cc692680ea556e217c971e8e3a2aa6;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_42cc692680ea556e217c971e8e3a2aa6);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_42cc692680ea556e217c971e8e3a2aa6) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_kw_name_2;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 831;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[5]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 831;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 831;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[7]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 831;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = PyDict_Copy(mod_consts[75]);
        frame_42cc692680ea556e217c971e8e3a2aa6->m_frame.f_lineno = 831;
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_2, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 831;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 832;
            type_description_1 = "oo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kw_name_2 = PyDict_Copy(mod_consts[10]);
        frame_42cc692680ea556e217c971e8e3a2aa6->m_frame.f_lineno = 831;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_2);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 831;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_42cc692680ea556e217c971e8e3a2aa6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_42cc692680ea556e217c971e8e3a2aa6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_42cc692680ea556e217c971e8e3a2aa6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_42cc692680ea556e217c971e8e3a2aa6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_42cc692680ea556e217c971e8e3a2aa6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_42cc692680ea556e217c971e8e3a2aa6,
        type_description_1,
        par_rate,
        par_values
    );


    // Release cached frame if used for exception.
    if (frame_42cc692680ea556e217c971e8e3a2aa6 == cache_frame_42cc692680ea556e217c971e8e3a2aa6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_42cc692680ea556e217c971e8e3a2aa6);
        cache_frame_42cc692680ea556e217c971e8e3a2aa6 = NULL;
    }

    assertFrameObject(frame_42cc692680ea556e217c971e8e3a2aa6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(par_values);
        tmp_tuple_element_2 = par_values;
        tmp_return_value = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_rate);
    Py_DECREF(par_rate);
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_rate);
    Py_DECREF(par_rate);
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$financial$$$function_21_npv(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_rate = python_pars[0];
    PyObject *par_values = python_pars[1];
    struct Nuitka_FrameObject *frame_aa7f98d1334b74466e76789f563a034a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_aa7f98d1334b74466e76789f563a034a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_aa7f98d1334b74466e76789f563a034a)) {
        Py_XDECREF(cache_frame_aa7f98d1334b74466e76789f563a034a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_aa7f98d1334b74466e76789f563a034a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_aa7f98d1334b74466e76789f563a034a = MAKE_FUNCTION_FRAME(codeobj_aa7f98d1334b74466e76789f563a034a, module_numpy$lib$financial, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_aa7f98d1334b74466e76789f563a034a->m_type_description == NULL);
    frame_aa7f98d1334b74466e76789f563a034a = cache_frame_aa7f98d1334b74466e76789f563a034a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_aa7f98d1334b74466e76789f563a034a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_aa7f98d1334b74466e76789f563a034a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 910;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_values);
        tmp_args_element_name_1 = par_values;
        frame_aa7f98d1334b74466e76789f563a034a->m_frame.f_lineno = 910;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[12], tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 910;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_values;
            assert(old != NULL);
            par_values = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_kw_name_1;
        CHECK_OBJECT(par_values);
        tmp_left_name_1 = par_values;
        tmp_left_name_3 = mod_consts[14];
        CHECK_OBJECT(par_rate);
        tmp_right_name_2 = par_rate;
        tmp_left_name_2 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_left_name_3, tmp_right_name_2);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 911;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_2);

            exception_lineno = 911;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[76]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_2);

            exception_lineno = 911;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = mod_consts[16];
        CHECK_OBJECT(par_values);
        tmp_len_arg_1 = par_values;
        tmp_args_element_name_3 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_2);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 911;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_aa7f98d1334b74466e76789f563a034a->m_frame.f_lineno = 911;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_right_name_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_right_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_2);

            exception_lineno = 911;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = BINARY_OPERATION_POW_OBJECT_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_3);
        Py_DECREF(tmp_left_name_2);
        Py_DECREF(tmp_right_name_3);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 911;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 911;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[77]);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 911;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = PyDict_Copy(mod_consts[78]);
        frame_aa7f98d1334b74466e76789f563a034a->m_frame.f_lineno = 911;
        tmp_return_value = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 911;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_aa7f98d1334b74466e76789f563a034a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_aa7f98d1334b74466e76789f563a034a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_aa7f98d1334b74466e76789f563a034a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_aa7f98d1334b74466e76789f563a034a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_aa7f98d1334b74466e76789f563a034a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_aa7f98d1334b74466e76789f563a034a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_aa7f98d1334b74466e76789f563a034a,
        type_description_1,
        par_rate,
        par_values
    );


    // Release cached frame if used for exception.
    if (frame_aa7f98d1334b74466e76789f563a034a == cache_frame_aa7f98d1334b74466e76789f563a034a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_aa7f98d1334b74466e76789f563a034a);
        cache_frame_aa7f98d1334b74466e76789f563a034a = NULL;
    }

    assertFrameObject(frame_aa7f98d1334b74466e76789f563a034a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);
    par_values = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);
    par_values = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_rate);
    Py_DECREF(par_rate);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_rate);
    Py_DECREF(par_rate);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$financial$$$function_22__mirr_dispatcher(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_values = python_pars[0];
    PyObject *par_finance_rate = python_pars[1];
    PyObject *par_reinvest_rate = python_pars[2];
    struct Nuitka_FrameObject *frame_7f5331cbe30f33ddb8f9e754313ed604;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7f5331cbe30f33ddb8f9e754313ed604 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7f5331cbe30f33ddb8f9e754313ed604)) {
        Py_XDECREF(cache_frame_7f5331cbe30f33ddb8f9e754313ed604);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7f5331cbe30f33ddb8f9e754313ed604 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7f5331cbe30f33ddb8f9e754313ed604 = MAKE_FUNCTION_FRAME(codeobj_7f5331cbe30f33ddb8f9e754313ed604, module_numpy$lib$financial, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7f5331cbe30f33ddb8f9e754313ed604->m_type_description == NULL);
    frame_7f5331cbe30f33ddb8f9e754313ed604 = cache_frame_7f5331cbe30f33ddb8f9e754313ed604;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7f5331cbe30f33ddb8f9e754313ed604);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7f5331cbe30f33ddb8f9e754313ed604) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_kw_name_2;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 915;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[5]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 915;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 915;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[7]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 915;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = PyDict_Copy(mod_consts[80]);
        frame_7f5331cbe30f33ddb8f9e754313ed604->m_frame.f_lineno = 915;
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_2, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 915;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 916;
            type_description_1 = "ooo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kw_name_2 = PyDict_Copy(mod_consts[10]);
        frame_7f5331cbe30f33ddb8f9e754313ed604->m_frame.f_lineno = 915;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_2);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 915;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7f5331cbe30f33ddb8f9e754313ed604);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7f5331cbe30f33ddb8f9e754313ed604);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7f5331cbe30f33ddb8f9e754313ed604, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7f5331cbe30f33ddb8f9e754313ed604->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7f5331cbe30f33ddb8f9e754313ed604, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7f5331cbe30f33ddb8f9e754313ed604,
        type_description_1,
        par_values,
        par_finance_rate,
        par_reinvest_rate
    );


    // Release cached frame if used for exception.
    if (frame_7f5331cbe30f33ddb8f9e754313ed604 == cache_frame_7f5331cbe30f33ddb8f9e754313ed604) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_7f5331cbe30f33ddb8f9e754313ed604);
        cache_frame_7f5331cbe30f33ddb8f9e754313ed604 = NULL;
    }

    assertFrameObject(frame_7f5331cbe30f33ddb8f9e754313ed604);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(par_values);
        tmp_tuple_element_2 = par_values;
        tmp_return_value = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);
    CHECK_OBJECT(par_finance_rate);
    Py_DECREF(par_finance_rate);
    CHECK_OBJECT(par_reinvest_rate);
    Py_DECREF(par_reinvest_rate);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);
    CHECK_OBJECT(par_finance_rate);
    Py_DECREF(par_finance_rate);
    CHECK_OBJECT(par_reinvest_rate);
    Py_DECREF(par_reinvest_rate);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$financial$$$function_23_mirr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_values = python_pars[0];
    PyObject *par_finance_rate = python_pars[1];
    PyObject *par_reinvest_rate = python_pars[2];
    PyObject *var_n = NULL;
    PyObject *var_pos = NULL;
    PyObject *var_neg = NULL;
    PyObject *var_numer = NULL;
    PyObject *var_denom = NULL;
    struct Nuitka_FrameObject *frame_c3837951d77b068441532c1918822769;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c3837951d77b068441532c1918822769 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c3837951d77b068441532c1918822769)) {
        Py_XDECREF(cache_frame_c3837951d77b068441532c1918822769);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c3837951d77b068441532c1918822769 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c3837951d77b068441532c1918822769 = MAKE_FUNCTION_FRAME(codeobj_c3837951d77b068441532c1918822769, module_numpy$lib$financial, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c3837951d77b068441532c1918822769->m_type_description == NULL);
    frame_c3837951d77b068441532c1918822769 = cache_frame_c3837951d77b068441532c1918822769;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c3837951d77b068441532c1918822769);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c3837951d77b068441532c1918822769) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 952;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_values);
        tmp_args_element_name_1 = par_values;
        frame_c3837951d77b068441532c1918822769->m_frame.f_lineno = 952;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[12], tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 952;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_values;
            assert(old != NULL);
            par_values = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_values);
        tmp_expression_name_1 = par_values;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[81]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 953;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_n == NULL);
        var_n = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_finance_rate);
        tmp_isinstance_inst_1 = par_finance_rate;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 958;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 958;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 959;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_n);
        tmp_args_element_name_2 = var_n;
        frame_c3837951d77b068441532c1918822769->m_frame.f_lineno = 959;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 959;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_n;
            assert(old != NULL);
            var_n = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        if (par_values == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[82]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 961;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_1 = par_values;
        tmp_compexpr_right_1 = mod_consts[16];
        tmp_assign_source_4 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 961;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pos == NULL);
        var_pos = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        if (par_values == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[82]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 962;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_2 = par_values;
        tmp_compexpr_right_2 = mod_consts[16];
        tmp_assign_source_5 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 962;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_neg == NULL);
        var_neg = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(var_pos);
        tmp_called_instance_2 = var_pos;
        frame_c3837951d77b068441532c1918822769->m_frame.f_lineno = 963;
        tmp_and_left_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[68]);
        if (tmp_and_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 963;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_1);

            exception_lineno = 963;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        Py_DECREF(tmp_and_left_value_1);
        CHECK_OBJECT(var_neg);
        tmp_called_instance_3 = var_neg;
        frame_c3837951d77b068441532c1918822769->m_frame.f_lineno = 963;
        tmp_and_right_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[68]);
        if (tmp_and_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 963;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_operand_name_1 = tmp_and_left_value_1;
        and_end_1:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 963;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_expression_name_2;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 964;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[60]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 964;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 965;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[72]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 965;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 965;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_reinvest_rate);
        tmp_args_element_name_4 = par_reinvest_rate;
        if (par_values == NULL) {
            Py_DECREF(tmp_called_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[82]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 965;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_1 = par_values;
        if (var_pos == NULL) {
            Py_DECREF(tmp_called_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[84]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 965;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_1 = var_pos;
        tmp_args_element_name_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 965;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_c3837951d77b068441532c1918822769->m_frame.f_lineno = 965;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_3, call_args);
        }

        Py_DECREF(tmp_args_element_name_5);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 965;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_c3837951d77b068441532c1918822769->m_frame.f_lineno = 965;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_3);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 965;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_numer == NULL);
        var_numer = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_4 == NULL)) {
            tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 966;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[72]);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 966;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_5 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_called_name_5 == NULL)) {
            tmp_called_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 966;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_finance_rate);
        tmp_args_element_name_7 = par_finance_rate;
        if (par_values == NULL) {
            Py_DECREF(tmp_called_name_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[82]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 966;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_2 = par_values;
        if (var_neg == NULL) {
            Py_DECREF(tmp_called_name_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[85]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 966;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_2 = var_neg;
        tmp_args_element_name_8 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_2);
        if (tmp_args_element_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 966;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_c3837951d77b068441532c1918822769->m_frame.f_lineno = 966;
        {
            PyObject *call_args[] = {tmp_args_element_name_7, tmp_args_element_name_8};
            tmp_args_element_name_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_5, call_args);
        }

        Py_DECREF(tmp_args_element_name_8);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 966;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_c3837951d77b068441532c1918822769->m_frame.f_lineno = 966;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_6);
        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 966;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_denom == NULL);
        var_denom = tmp_assign_source_7;
    }
    {
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_3;
        PyObject *tmp_right_name_4;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_5;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_6;
        PyObject *tmp_right_name_7;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_8;
        PyObject *tmp_right_name_9;
        CHECK_OBJECT(var_numer);
        tmp_left_name_6 = var_numer;
        CHECK_OBJECT(var_denom);
        tmp_right_name_3 = var_denom;
        tmp_left_name_5 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_name_6, tmp_right_name_3);
        if (tmp_left_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 967;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_7 = mod_consts[14];
        CHECK_OBJECT(var_n);
        tmp_left_name_8 = var_n;
        tmp_right_name_6 = mod_consts[14];
        tmp_right_name_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_8, tmp_right_name_6);
        if (tmp_right_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_5);

            exception_lineno = 967;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_4 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_OBJECT(tmp_left_name_7, tmp_right_name_5);
        Py_DECREF(tmp_right_name_5);
        if (tmp_right_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_5);

            exception_lineno = 967;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_4 = BINARY_OPERATION_POW_OBJECT_OBJECT_OBJECT(tmp_left_name_5, tmp_right_name_4);
        Py_DECREF(tmp_left_name_5);
        Py_DECREF(tmp_right_name_4);
        if (tmp_left_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 967;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_9 = mod_consts[14];
        CHECK_OBJECT(par_reinvest_rate);
        tmp_right_name_8 = par_reinvest_rate;
        tmp_right_name_7 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_left_name_9, tmp_right_name_8);
        if (tmp_right_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_4);

            exception_lineno = 967;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_4, tmp_right_name_7);
        Py_DECREF(tmp_left_name_4);
        Py_DECREF(tmp_right_name_7);
        if (tmp_left_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 967;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_9 = mod_consts[14];
        tmp_return_value = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_3, tmp_right_name_9);
        Py_DECREF(tmp_left_name_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 967;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c3837951d77b068441532c1918822769);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c3837951d77b068441532c1918822769);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c3837951d77b068441532c1918822769);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c3837951d77b068441532c1918822769, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c3837951d77b068441532c1918822769->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c3837951d77b068441532c1918822769, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c3837951d77b068441532c1918822769,
        type_description_1,
        par_values,
        par_finance_rate,
        par_reinvest_rate,
        var_n,
        var_pos,
        var_neg,
        var_numer,
        var_denom
    );


    // Release cached frame if used for exception.
    if (frame_c3837951d77b068441532c1918822769 == cache_frame_c3837951d77b068441532c1918822769) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c3837951d77b068441532c1918822769);
        cache_frame_c3837951d77b068441532c1918822769 = NULL;
    }

    assertFrameObject(frame_c3837951d77b068441532c1918822769);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_values);
    par_values = NULL;
    CHECK_OBJECT(var_n);
    Py_DECREF(var_n);
    var_n = NULL;
    Py_XDECREF(var_pos);
    var_pos = NULL;
    Py_XDECREF(var_neg);
    var_neg = NULL;
    Py_XDECREF(var_numer);
    var_numer = NULL;
    Py_XDECREF(var_denom);
    var_denom = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_values);
    par_values = NULL;
    Py_XDECREF(var_n);
    var_n = NULL;
    Py_XDECREF(var_pos);
    var_pos = NULL;
    Py_XDECREF(var_neg);
    var_neg = NULL;
    Py_XDECREF(var_numer);
    var_numer = NULL;
    Py_XDECREF(var_denom);
    var_denom = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_finance_rate);
    Py_DECREF(par_finance_rate);
    CHECK_OBJECT(par_reinvest_rate);
    Py_DECREF(par_reinvest_rate);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_finance_rate);
    Py_DECREF(par_finance_rate);
    CHECK_OBJECT(par_reinvest_rate);
    Py_DECREF(par_reinvest_rate);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_10__rbl() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$financial$$$function_10__rbl,
        mod_consts[35],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a1d36f025e8a1dca78612709ec1b3eef,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$financial,
        mod_consts[40],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_11__ppmt_dispatcher(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$financial$$$function_11__ppmt_dispatcher,
        mod_consts[117],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_472144e55f798cc4cfa6d22aa99220b4,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$financial,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_12_ppmt(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$financial$$$function_12_ppmt,
        mod_consts[118],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a3b6beed179f3ec06ea084751caee02e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$financial,
        mod_consts[42],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_13__pv_dispatcher(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$financial$$$function_13__pv_dispatcher,
        mod_consts[119],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_caad8a0da1b2130f5f932f1ad9e431f7,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$financial,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_14_pv(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$financial$$$function_14_pv,
        mod_consts[44],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_31bdb694842f4dff65d4e395dccc78b2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$financial,
        mod_consts[45],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_15__g_div_gp() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$financial$$$function_15__g_div_gp,
        mod_consts[55],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_df7c931562d79469f54979e1a28a601b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$financial,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_16__rate_dispatcher(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$financial$$$function_16__rate_dispatcher,
        mod_consts[121],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_169c24406f4eda16c9545bf68f033ce2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$financial,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_17_rate(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$financial$$$function_17_rate,
        mod_consts[73],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f5bb60273e0ac25e4949495174ce4622,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$financial,
        mod_consts[61],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_18__irr_dispatcher() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$financial$$$function_18__irr_dispatcher,
        mod_consts[123],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ac7522ed11325e06c39bf83f9992097d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$financial,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_19_irr() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$financial$$$function_19_irr,
        mod_consts[124],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_52851e846834440c173ed3ec0926ff85,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$financial,
        mod_consts[74],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_1__convert_when() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$financial$$$function_1__convert_when,
        mod_consts[11],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_068531bf9118e45e5883edb90b26c51f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$financial,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_20__npv_dispatcher() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$financial$$$function_20__npv_dispatcher,
        mod_consts[125],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_42cc692680ea556e217c971e8e3a2aa6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$financial,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_21_npv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$financial$$$function_21_npv,
        mod_consts[83],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_aa7f98d1334b74466e76789f563a034a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$financial,
        mod_consts[79],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_22__mirr_dispatcher() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$financial$$$function_22__mirr_dispatcher,
        mod_consts[126],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7f5331cbe30f33ddb8f9e754313ed604,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$financial,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_23_mirr() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$financial$$$function_23_mirr,
        mod_consts[127],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c3837951d77b068441532c1918822769,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$financial,
        mod_consts[86],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_2__fv_dispatcher(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$financial$$$function_2__fv_dispatcher,
        mod_consts[110],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d2a2b1f028dfb5c86b8e69bd0c22a948,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$financial,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_3_fv(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$financial$$$function_3_fv,
        mod_consts[39],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_15905f607522cd46129ee9813db081bf,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$financial,
        mod_consts[17],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_4__pmt_dispatcher(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$financial$$$function_4__pmt_dispatcher,
        mod_consts[113],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c8aa3dc6e9bb8adbaa9d53ce9215cf1a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$financial,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_5_pmt(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$financial$$$function_5_pmt,
        mod_consts[34],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_bae565da51e6d21e370bf7253437e58d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$financial,
        mod_consts[20],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_6__nper_dispatcher(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$financial$$$function_6__nper_dispatcher,
        mod_consts[115],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_86ea398df6aa04b60426f566a97089be,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$financial,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_7_nper(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$financial$$$function_7_nper,
        mod_consts[56],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7e07cfcc5627d252ef682fb900dc814b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$financial,
        mod_consts[30],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_8__ipmt_dispatcher(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$financial$$$function_8__ipmt_dispatcher,
        mod_consts[116],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ec63e62f022e53f8054ae13da908b473,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$financial,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_9_ipmt(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$financial$$$function_9_ipmt,
        mod_consts[37],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c1a5f214900fcfa6267061ca6e2392fb,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$financial,
        mod_consts[38],
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill

function_impl_code functable_numpy$lib$financial[] = {
    impl_numpy$lib$financial$$$function_1__convert_when,
    impl_numpy$lib$financial$$$function_2__fv_dispatcher,
    impl_numpy$lib$financial$$$function_3_fv,
    impl_numpy$lib$financial$$$function_4__pmt_dispatcher,
    impl_numpy$lib$financial$$$function_5_pmt,
    impl_numpy$lib$financial$$$function_6__nper_dispatcher,
    impl_numpy$lib$financial$$$function_7_nper,
    impl_numpy$lib$financial$$$function_8__ipmt_dispatcher,
    impl_numpy$lib$financial$$$function_9_ipmt,
    impl_numpy$lib$financial$$$function_10__rbl,
    impl_numpy$lib$financial$$$function_11__ppmt_dispatcher,
    impl_numpy$lib$financial$$$function_12_ppmt,
    impl_numpy$lib$financial$$$function_13__pv_dispatcher,
    impl_numpy$lib$financial$$$function_14_pv,
    impl_numpy$lib$financial$$$function_15__g_div_gp,
    impl_numpy$lib$financial$$$function_16__rate_dispatcher,
    impl_numpy$lib$financial$$$function_17_rate,
    impl_numpy$lib$financial$$$function_18__irr_dispatcher,
    impl_numpy$lib$financial$$$function_19_irr,
    impl_numpy$lib$financial$$$function_20__npv_dispatcher,
    impl_numpy$lib$financial$$$function_21_npv,
    impl_numpy$lib$financial$$$function_22__mirr_dispatcher,
    impl_numpy$lib$financial$$$function_23_mirr,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_numpy$lib$financial;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_numpy$lib$financial) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    // TODO: More stuff needed for Python3, best to re-order arguments of MAKE_CODEOBJECT.
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_numpy$lib$financial[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_numpy$lib$financial,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Actual name might be different when loaded as a package.
NUITKA_MAY_BE_UNUSED static char const *module_full_name = "numpy.lib.financial";

// Internal entry point for module code.
PyObject *modulecode_numpy$lib$financial(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_numpy$lib$financial = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
#ifdef _NUITKA_TRACE
        PRINT_STRING("numpy.lib.financial: Skipping module init, already done.\n");
#endif

        return module_numpy$lib$financial;
    } else {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // May have to activate constants blob.
#if defined(_NUITKA_CONSTANTS_FROM_RESOURCE)
    loadConstantsResource();
#endif

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    PRINT_STRING("numpy.lib.financial: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("numpy.lib.financial: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("numpy.lib.financial: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initnumpy$lib$financial\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_numpy$lib$financial = MODULE_DICT(module_numpy$lib$financial);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        PyObject *function_tables = PyObject_GetAttrString((PyObject *)builtin_module, "compiled_function_tables");
        if (function_tables == NULL) {
            DROP_ERROR_OCCURRED();
            function_tables = PyDict_New();
        }
        PyObject_SetAttrString((PyObject *)builtin_module, "compiled_function_tables", function_tables);
        PyObject *funcs = PyTuple_New(2);
        PyTuple_SET_ITEM(funcs, 0, PyCFunction_New(&_method_def_reduce_compiled_function, NULL));
        PyTuple_SET_ITEM(funcs, 1, PyCFunction_New(&_method_def_create_compiled_function, NULL));
        PyDict_SetItemString(function_tables, module_full_name, funcs);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_numpy$lib$financial,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_numpy$lib$financial,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_numpy$lib$financial,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$financial,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$financial,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_numpy$lib$financial);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_numpy$lib$financial);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT(spec_value);

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_85828734932ec425d81e301753a3ba3f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[87];
        UPDATE_STRING_DICT0(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[89];
        UPDATE_STRING_DICT0(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_85828734932ec425d81e301753a3ba3f = MAKE_MODULE_FRAME(codeobj_85828734932ec425d81e301753a3ba3f, module_numpy$lib$financial);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_85828734932ec425d81e301753a3ba3f);
    assert(Py_REFCNT(frame_85828734932ec425d81e301753a3ba3f) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = mod_consts[89];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[92], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[93], tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[4];
        tmp_globals_name_1 = (PyObject *)moduledict_numpy$lib$financial;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = mod_consts[16];
        frame_85828734932ec425d81e301753a3ba3f->m_frame.f_lineno = 13;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[95];
        tmp_globals_name_2 = (PyObject *)moduledict_numpy$lib$financial;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = mod_consts[96];
        tmp_level_name_2 = mod_consts[16];
        frame_85828734932ec425d81e301753a3ba3f->m_frame.f_lineno = 14;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_numpy$lib$financial,
                mod_consts[48],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[48]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = mod_consts[97];
        tmp_globals_name_3 = (PyObject *)moduledict_numpy$lib$financial;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = mod_consts[16];
        frame_85828734932ec425d81e301753a3ba3f->m_frame.f_lineno = 15;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = mod_consts[98];
        tmp_globals_name_4 = (PyObject *)moduledict_numpy$lib$financial;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_4 = mod_consts[16];
        frame_85828734932ec425d81e301753a3ba3f->m_frame.f_lineno = 17;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = mod_consts[99];
        tmp_globals_name_5 = (PyObject *)moduledict_numpy$lib$financial;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = mod_consts[100];
        tmp_level_name_5 = mod_consts[16];
        frame_85828734932ec425d81e301753a3ba3f->m_frame.f_lineno = 18;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_numpy$lib$financial,
                mod_consts[101],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[101]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[102];
        UPDATE_STRING_DICT0(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_kw_name_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[103]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[101]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[104]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_kw_name_1 = PyDict_Copy(mod_consts[105]);
        frame_85828734932ec425d81e301753a3ba3f->m_frame.f_lineno = 25;
        tmp_assign_source_10 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = LIST_COPY(mod_consts[106]);
        UPDATE_STRING_DICT1(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = PyDict_Copy(mod_consts[108]);
        UPDATE_STRING_DICT1(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;


        tmp_assign_source_13 = MAKE_FUNCTION_numpy$lib$financial$$$function_1__convert_when();

        UPDATE_STRING_DICT1(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[109];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_14 = MAKE_FUNCTION_numpy$lib$financial$$$function_2__fv_dispatcher(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_name_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_defaults_2;
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        assert(!(tmp_called_name_3 == NULL));
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_args_element_name_1 == NULL)) {
            tmp_args_element_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        assert(!(tmp_args_element_name_1 == NULL));
        frame_85828734932ec425d81e301753a3ba3f->m_frame.f_lineno = 56;
        tmp_called_name_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_1);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        tmp_defaults_2 = mod_consts[111];
        Py_INCREF(tmp_defaults_2);


        tmp_args_element_name_2 = MAKE_FUNCTION_numpy$lib$financial$$$function_3_fv(tmp_defaults_2);

        frame_85828734932ec425d81e301753a3ba3f->m_frame.f_lineno = 56;
        tmp_assign_source_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = mod_consts[112];
        Py_INCREF(tmp_defaults_3);


        tmp_assign_source_16 = MAKE_FUNCTION_numpy$lib$financial$$$function_4__pmt_dispatcher(tmp_defaults_3);

        UPDATE_STRING_DICT1(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_name_4;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_defaults_4;
        tmp_called_name_5 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_called_name_5 == NULL)) {
            tmp_called_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_args_element_name_3 == NULL)) {
            tmp_args_element_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
        }

        assert(!(tmp_args_element_name_3 == NULL));
        frame_85828734932ec425d81e301753a3ba3f->m_frame.f_lineno = 161;
        tmp_called_name_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_3);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_defaults_4 = mod_consts[114];
        Py_INCREF(tmp_defaults_4);


        tmp_args_element_name_4 = MAKE_FUNCTION_numpy$lib$financial$$$function_5_pmt(tmp_defaults_4);

        frame_85828734932ec425d81e301753a3ba3f->m_frame.f_lineno = 161;
        tmp_assign_source_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_4);
        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_defaults_5;
        tmp_defaults_5 = mod_consts[112];
        Py_INCREF(tmp_defaults_5);


        tmp_assign_source_18 = MAKE_FUNCTION_numpy$lib$financial$$$function_6__nper_dispatcher(tmp_defaults_5);

        UPDATE_STRING_DICT1(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_name_6;
        PyObject *tmp_called_name_7;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_defaults_6;
        tmp_called_name_7 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_called_name_7 == NULL)) {
            tmp_called_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_args_element_name_5 == NULL)) {
            tmp_args_element_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        assert(!(tmp_args_element_name_5 == NULL));
        frame_85828734932ec425d81e301753a3ba3f->m_frame.f_lineno = 269;
        tmp_called_name_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_5);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        tmp_defaults_6 = mod_consts[114];
        Py_INCREF(tmp_defaults_6);


        tmp_args_element_name_6 = MAKE_FUNCTION_numpy$lib$financial$$$function_7_nper(tmp_defaults_6);

        frame_85828734932ec425d81e301753a3ba3f->m_frame.f_lineno = 269;
        tmp_assign_source_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_6);
        Py_DECREF(tmp_called_name_6);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_defaults_7;
        tmp_defaults_7 = mod_consts[112];
        Py_INCREF(tmp_defaults_7);


        tmp_assign_source_20 = MAKE_FUNCTION_numpy$lib$financial$$$function_8__ipmt_dispatcher(tmp_defaults_7);

        UPDATE_STRING_DICT1(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_name_8;
        PyObject *tmp_called_name_9;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_defaults_8;
        tmp_called_name_9 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_called_name_9 == NULL)) {
            tmp_called_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_called_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_7 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_args_element_name_7 == NULL)) {
            tmp_args_element_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        assert(!(tmp_args_element_name_7 == NULL));
        frame_85828734932ec425d81e301753a3ba3f->m_frame.f_lineno = 356;
        tmp_called_name_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_9, tmp_args_element_name_7);
        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;

            goto frame_exception_exit_1;
        }
        tmp_defaults_8 = mod_consts[114];
        Py_INCREF(tmp_defaults_8);


        tmp_args_element_name_8 = MAKE_FUNCTION_numpy$lib$financial$$$function_9_ipmt(tmp_defaults_8);

        frame_85828734932ec425d81e301753a3ba3f->m_frame.f_lineno = 356;
        tmp_assign_source_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_8);
        Py_DECREF(tmp_called_name_8);
        Py_DECREF(tmp_args_element_name_8);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;


        tmp_assign_source_22 = MAKE_FUNCTION_numpy$lib$financial$$$function_10__rbl();

        UPDATE_STRING_DICT1(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_defaults_9;
        tmp_defaults_9 = mod_consts[112];
        Py_INCREF(tmp_defaults_9);


        tmp_assign_source_23 = MAKE_FUNCTION_numpy$lib$financial$$$function_11__ppmt_dispatcher(tmp_defaults_9);

        UPDATE_STRING_DICT1(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_name_10;
        PyObject *tmp_called_name_11;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_defaults_10;
        tmp_called_name_11 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_called_name_11 == NULL)) {
            tmp_called_name_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_called_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_9 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[117]);

        if (unlikely(tmp_args_element_name_9 == NULL)) {
            tmp_args_element_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[117]);
        }

        assert(!(tmp_args_element_name_9 == NULL));
        frame_85828734932ec425d81e301753a3ba3f->m_frame.f_lineno = 480;
        tmp_called_name_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_11, tmp_args_element_name_9);
        if (tmp_called_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;

            goto frame_exception_exit_1;
        }
        tmp_defaults_10 = mod_consts[114];
        Py_INCREF(tmp_defaults_10);


        tmp_args_element_name_10 = MAKE_FUNCTION_numpy$lib$financial$$$function_12_ppmt(tmp_defaults_10);

        frame_85828734932ec425d81e301753a3ba3f->m_frame.f_lineno = 480;
        tmp_assign_source_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_10, tmp_args_element_name_10);
        Py_DECREF(tmp_called_name_10);
        Py_DECREF(tmp_args_element_name_10);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_defaults_11;
        tmp_defaults_11 = mod_consts[112];
        Py_INCREF(tmp_defaults_11);


        tmp_assign_source_25 = MAKE_FUNCTION_numpy$lib$financial$$$function_13__pv_dispatcher(tmp_defaults_11);

        UPDATE_STRING_DICT1(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_name_12;
        PyObject *tmp_called_name_13;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_defaults_12;
        tmp_called_name_13 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_called_name_13 == NULL)) {
            tmp_called_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_called_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_11 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_args_element_name_11 == NULL)) {
            tmp_args_element_name_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
        }

        assert(!(tmp_args_element_name_11 == NULL));
        frame_85828734932ec425d81e301753a3ba3f->m_frame.f_lineno = 527;
        tmp_called_name_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_13, tmp_args_element_name_11);
        if (tmp_called_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;

            goto frame_exception_exit_1;
        }
        tmp_defaults_12 = mod_consts[114];
        Py_INCREF(tmp_defaults_12);


        tmp_args_element_name_12 = MAKE_FUNCTION_numpy$lib$financial$$$function_14_pv(tmp_defaults_12);

        frame_85828734932ec425d81e301753a3ba3f->m_frame.f_lineno = 527;
        tmp_assign_source_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_12, tmp_args_element_name_12);
        Py_DECREF(tmp_called_name_12);
        Py_DECREF(tmp_args_element_name_12);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;


        tmp_assign_source_27 = MAKE_FUNCTION_numpy$lib$financial$$$function_15__g_div_gp();

        UPDATE_STRING_DICT1(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_defaults_13;
        tmp_defaults_13 = mod_consts[120];
        Py_INCREF(tmp_defaults_13);


        tmp_assign_source_28 = MAKE_FUNCTION_numpy$lib$financial$$$function_16__rate_dispatcher(tmp_defaults_13);

        UPDATE_STRING_DICT1(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_name_14;
        PyObject *tmp_called_name_15;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_defaults_14;
        tmp_called_name_15 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_called_name_15 == NULL)) {
            tmp_called_name_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_called_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 655;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_13 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_args_element_name_13 == NULL)) {
            tmp_args_element_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        assert(!(tmp_args_element_name_13 == NULL));
        frame_85828734932ec425d81e301753a3ba3f->m_frame.f_lineno = 655;
        tmp_called_name_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_15, tmp_args_element_name_13);
        if (tmp_called_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 655;

            goto frame_exception_exit_1;
        }
        tmp_defaults_14 = mod_consts[122];
        Py_INCREF(tmp_defaults_14);


        tmp_args_element_name_14 = MAKE_FUNCTION_numpy$lib$financial$$$function_17_rate(tmp_defaults_14);

        frame_85828734932ec425d81e301753a3ba3f->m_frame.f_lineno = 655;
        tmp_assign_source_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_14, tmp_args_element_name_14);
        Py_DECREF(tmp_called_name_14);
        Py_DECREF(tmp_args_element_name_14);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 655;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;


        tmp_assign_source_30 = MAKE_FUNCTION_numpy$lib$financial$$$function_18__irr_dispatcher();

        UPDATE_STRING_DICT1(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_name_16;
        PyObject *tmp_called_name_17;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_args_element_name_16;
        tmp_called_name_17 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_called_name_17 == NULL)) {
            tmp_called_name_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_called_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 743;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_15 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_args_element_name_15 == NULL)) {
            tmp_args_element_name_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        assert(!(tmp_args_element_name_15 == NULL));
        frame_85828734932ec425d81e301753a3ba3f->m_frame.f_lineno = 743;
        tmp_called_name_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_17, tmp_args_element_name_15);
        if (tmp_called_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 743;

            goto frame_exception_exit_1;
        }


        tmp_args_element_name_16 = MAKE_FUNCTION_numpy$lib$financial$$$function_19_irr();

        frame_85828734932ec425d81e301753a3ba3f->m_frame.f_lineno = 743;
        tmp_assign_source_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_16, tmp_args_element_name_16);
        Py_DECREF(tmp_called_name_16);
        Py_DECREF(tmp_args_element_name_16);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 743;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;


        tmp_assign_source_32 = MAKE_FUNCTION_numpy$lib$financial$$$function_20__npv_dispatcher();

        UPDATE_STRING_DICT1(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_name_18;
        PyObject *tmp_called_name_19;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_args_element_name_18;
        tmp_called_name_19 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_called_name_19 == NULL)) {
            tmp_called_name_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_called_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 836;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_17 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_args_element_name_17 == NULL)) {
            tmp_args_element_name_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[125]);
        }

        assert(!(tmp_args_element_name_17 == NULL));
        frame_85828734932ec425d81e301753a3ba3f->m_frame.f_lineno = 836;
        tmp_called_name_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_19, tmp_args_element_name_17);
        if (tmp_called_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 836;

            goto frame_exception_exit_1;
        }


        tmp_args_element_name_18 = MAKE_FUNCTION_numpy$lib$financial$$$function_21_npv();

        frame_85828734932ec425d81e301753a3ba3f->m_frame.f_lineno = 836;
        tmp_assign_source_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_18, tmp_args_element_name_18);
        Py_DECREF(tmp_called_name_18);
        Py_DECREF(tmp_args_element_name_18);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 836;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;


        tmp_assign_source_34 = MAKE_FUNCTION_numpy$lib$financial$$$function_22__mirr_dispatcher();

        UPDATE_STRING_DICT1(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_name_20;
        PyObject *tmp_called_name_21;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_args_element_name_20;
        tmp_called_name_21 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_called_name_21 == NULL)) {
            tmp_called_name_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_called_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 920;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_19 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_args_element_name_19 == NULL)) {
            tmp_args_element_name_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
        }

        assert(!(tmp_args_element_name_19 == NULL));
        frame_85828734932ec425d81e301753a3ba3f->m_frame.f_lineno = 920;
        tmp_called_name_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_21, tmp_args_element_name_19);
        if (tmp_called_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 920;

            goto frame_exception_exit_1;
        }


        tmp_args_element_name_20 = MAKE_FUNCTION_numpy$lib$financial$$$function_23_mirr();

        frame_85828734932ec425d81e301753a3ba3f->m_frame.f_lineno = 920;
        tmp_assign_source_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_20, tmp_args_element_name_20);
        Py_DECREF(tmp_called_name_20);
        Py_DECREF(tmp_args_element_name_20);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 920;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$lib$financial, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_35);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_85828734932ec425d81e301753a3ba3f);
#endif
    popFrameStack();

    assertFrameObject(frame_85828734932ec425d81e301753a3ba3f);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_85828734932ec425d81e301753a3ba3f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_85828734932ec425d81e301753a3ba3f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_85828734932ec425d81e301753a3ba3f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_85828734932ec425d81e301753a3ba3f, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    return module_numpy$lib$financial;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

