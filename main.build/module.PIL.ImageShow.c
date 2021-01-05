/* Generated code for Python module 'PIL.ImageShow'
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

/* The "module_PIL$ImageShow" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_PIL$ImageShow;
PyDictObject *moduledict_PIL$ImageShow;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[147];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    loadConstantsBlob(&mod_consts[0], "PIL.ImageShow", 147);

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
void checkModuleConstants_PIL$ImageShow(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "PIL.ImageShow", 147);
}
#endif

// The module code objects.
static PyCodeObject *codeobj_715a9122371f1315c4968ada47220423;
static PyCodeObject *codeobj_5ac3b53fa818def85aed60cc0757a83c;
static PyCodeObject *codeobj_02d23532147a4a2747ae898a645e667f;
static PyCodeObject *codeobj_d9cc1af8889b9305d3cde967d6161540;
static PyCodeObject *codeobj_ab160c17dda465036ae9d8df253ebfa5;
static PyCodeObject *codeobj_d2aaa140733cc6a7a4e99d3c5a987a08;
static PyCodeObject *codeobj_9a00f5eb61b74b421ef99c82cb056089;
static PyCodeObject *codeobj_f42e6bf5cb1a19adc70bcca2aedcfa8b;
static PyCodeObject *codeobj_b12357fa835dd0178400ed6f1f699fa3;
static PyCodeObject *codeobj_166c5746c17a65a880dc717df8c0fb42;
static PyCodeObject *codeobj_13de5ea7edf574bc30a5a6da4844425e;
static PyCodeObject *codeobj_3e704057a92b0ddbf7aff60056af9fcf;
static PyCodeObject *codeobj_3a82ffaaab0338e30ffcff9dba58539e;
static PyCodeObject *codeobj_c217f9e2a569be17150ada9eaf904129;
static PyCodeObject *codeobj_049f2c82b273922987612f001ad363c5;
static PyCodeObject *codeobj_8639a9b793a7fbc63988ea1cbd124349;
static PyCodeObject *codeobj_b90b3b075d998db4044875686503d60f;
static PyCodeObject *codeobj_6136274c2053036ad660a9814affaecb;
static PyCodeObject *codeobj_4bc249ea325b9a576a877258c2fb1e65;
static PyCodeObject *codeobj_5e56cc7c5b9c3fef2ae6947b2c0e7f83;
static PyCodeObject *codeobj_3880d9a2998425f206cfcc719a4539e9;
static PyCodeObject *codeobj_788ea6bbca36b74416c8a9fcf57fe145;
static PyCodeObject *codeobj_28aab8f2b8cda3854d5037013d09d129;
static PyCodeObject *codeobj_6224ba19984b0f223723f42f45b62b5d;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[70]; CHECK_OBJECT(module_filename_obj);
    codeobj_715a9122371f1315c4968ada47220423 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[134], NULL, NULL, 0, 0, 0);
    codeobj_5ac3b53fa818def85aed60cc0757a83c = MAKE_CODEOBJECT(module_filename_obj, 190, CO_NOFREE, mod_consts[118], mod_consts[135], NULL, 0, 0, 0);
    codeobj_02d23532147a4a2747ae898a645e667f = MAKE_CODEOBJECT(module_filename_obj, 198, CO_NOFREE, mod_consts[122], mod_consts[135], NULL, 0, 0, 0);
    codeobj_d9cc1af8889b9305d3cde967d6161540 = MAKE_CODEOBJECT(module_filename_obj, 136, CO_NOFREE, mod_consts[110], mod_consts[135], NULL, 0, 0, 0);
    codeobj_ab160c17dda465036ae9d8df253ebfa5 = MAKE_CODEOBJECT(module_filename_obj, 168, CO_NOFREE, mod_consts[115], mod_consts[135], NULL, 0, 0, 0);
    codeobj_d2aaa140733cc6a7a4e99d3c5a987a08 = MAKE_CODEOBJECT(module_filename_obj, 61, CO_NOFREE, mod_consts[1], mod_consts[135], NULL, 0, 0, 0);
    codeobj_9a00f5eb61b74b421ef99c82cb056089 = MAKE_CODEOBJECT(module_filename_obj, 118, CO_NOFREE, mod_consts[103], mod_consts[135], NULL, 0, 0, 0);
    codeobj_f42e6bf5cb1a19adc70bcca2aedcfa8b = MAKE_CODEOBJECT(module_filename_obj, 206, CO_NOFREE, mod_consts[126], mod_consts[135], NULL, 0, 0, 0);
    codeobj_b12357fa835dd0178400ed6f1f699fa3 = MAKE_CODEOBJECT(module_filename_obj, 94, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[35], mod_consts[136], NULL, 2, 0, 0);
    codeobj_166c5746c17a65a880dc717df8c0fb42 = MAKE_CODEOBJECT(module_filename_obj, 124, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[35], mod_consts[136], NULL, 2, 0, 0);
    codeobj_13de5ea7edf574bc30a5a6da4844425e = MAKE_CODEOBJECT(module_filename_obj, 142, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[35], mod_consts[137], NULL, 2, 0, 0);
    codeobj_3e704057a92b0ddbf7aff60056af9fcf = MAKE_CODEOBJECT(module_filename_obj, 172, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[35], mod_consts[137], NULL, 2, 0, 0);
    codeobj_3a82ffaaab0338e30ffcff9dba58539e = MAKE_CODEOBJECT(module_filename_obj, 193, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[61], mod_consts[138], NULL, 2, 0, 0);
    codeobj_c217f9e2a569be17150ada9eaf904129 = MAKE_CODEOBJECT(module_filename_obj, 201, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[61], mod_consts[138], NULL, 2, 0, 0);
    codeobj_049f2c82b273922987612f001ad363c5 = MAKE_CODEOBJECT(module_filename_obj, 212, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[61], mod_consts[139], NULL, 3, 0, 0);
    codeobj_8639a9b793a7fbc63988ea1cbd124349 = MAKE_CODEOBJECT(module_filename_obj, 90, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[28], mod_consts[140], NULL, 2, 0, 0);
    codeobj_b90b3b075d998db4044875686503d60f = MAKE_CODEOBJECT(module_filename_obj, 26, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[83], mod_consts[141], NULL, 2, 0, 0);
    codeobj_6136274c2053036ad660a9814affaecb = MAKE_CODEOBJECT(module_filename_obj, 101, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[31], mod_consts[140], NULL, 2, 0, 0);
    codeobj_4bc249ea325b9a576a877258c2fb1e65 = MAKE_CODEOBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[8], mod_consts[142], NULL, 2, 0, 0);
    codeobj_5e56cc7c5b9c3fef2ae6947b2c0e7f83 = MAKE_CODEOBJECT(module_filename_obj, 66, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[8], mod_consts[143], NULL, 2, 0, 0);
    codeobj_3880d9a2998425f206cfcc719a4539e9 = MAKE_CODEOBJECT(module_filename_obj, 109, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[30], mod_consts[136], NULL, 2, 0, 0);
    codeobj_788ea6bbca36b74416c8a9fcf57fe145 = MAKE_CODEOBJECT(module_filename_obj, 149, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[30], mod_consts[144], NULL, 2, 0, 0);
    codeobj_28aab8f2b8cda3854d5037013d09d129 = MAKE_CODEOBJECT(module_filename_obj, 176, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[30], mod_consts[145], NULL, 2, 0, 0);
    codeobj_6224ba19984b0f223723f42f45b62b5d = MAKE_CODEOBJECT(module_filename_obj, 105, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[23], mod_consts[146], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function_9__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function_18_complex_call_helper_pos_keywords_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function_12_complex_call_helper_pos_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function_19_complex_call_helper_keywords_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_PIL$ImageShow$$$function_10_get_command();


static PyObject *MAKE_FUNCTION_PIL$ImageShow$$$function_11_show_file();


static PyObject *MAKE_FUNCTION_PIL$ImageShow$$$function_12_get_command();


static PyObject *MAKE_FUNCTION_PIL$ImageShow$$$function_13_show_file();


static PyObject *MAKE_FUNCTION_PIL$ImageShow$$$function_14_get_command_ex();


static PyObject *MAKE_FUNCTION_PIL$ImageShow$$$function_15_get_command_ex();


static PyObject *MAKE_FUNCTION_PIL$ImageShow$$$function_16_get_command_ex(PyObject *defaults);


static PyObject *MAKE_FUNCTION_PIL$ImageShow$$$function_1_register(PyObject *defaults);


static PyObject *MAKE_FUNCTION_PIL$ImageShow$$$function_2_show(PyObject *defaults);


static PyObject *MAKE_FUNCTION_PIL$ImageShow$$$function_3_show();


static PyObject *MAKE_FUNCTION_PIL$ImageShow$$$function_4_get_format();


static PyObject *MAKE_FUNCTION_PIL$ImageShow$$$function_5_get_command();


static PyObject *MAKE_FUNCTION_PIL$ImageShow$$$function_6_save_image();


static PyObject *MAKE_FUNCTION_PIL$ImageShow$$$function_7_show_image();


static PyObject *MAKE_FUNCTION_PIL$ImageShow$$$function_8_show_file();


static PyObject *MAKE_FUNCTION_PIL$ImageShow$$$function_9_get_command();


// The module function definitions.
static PyObject *impl_PIL$ImageShow$$$function_1_register(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_viewer = python_pars[0];
    PyObject *par_order = python_pars[1];
    struct Nuitka_FrameObject *frame_b90b3b075d998db4044875686503d60f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_b90b3b075d998db4044875686503d60f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b90b3b075d998db4044875686503d60f)) {
        Py_XDECREF(cache_frame_b90b3b075d998db4044875686503d60f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b90b3b075d998db4044875686503d60f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b90b3b075d998db4044875686503d60f = MAKE_FUNCTION_FRAME(codeobj_b90b3b075d998db4044875686503d60f, module_PIL$ImageShow, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b90b3b075d998db4044875686503d60f->m_type_description == NULL);
    frame_b90b3b075d998db4044875686503d60f = cache_frame_b90b3b075d998db4044875686503d60f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b90b3b075d998db4044875686503d60f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b90b3b075d998db4044875686503d60f) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        int tmp_truth_name_1;
        tmp_called_name_1 = LOOKUP_BUILTIN(mod_consts[0]);
        assert(tmp_called_name_1 != NULL);
        CHECK_OBJECT(par_viewer);
        tmp_args_element_name_1 = par_viewer;
        tmp_args_element_name_2 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_args_element_name_2 == NULL)) {
            tmp_args_element_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_b90b3b075d998db4044875686503d60f->m_frame.f_lineno = 36;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 36;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_2;
        CHECK_OBJECT(par_viewer);
        tmp_called_name_2 = par_viewer;
        frame_b90b3b075d998db4044875686503d60f->m_frame.f_lineno = 37;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_name_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = par_viewer;
            assert(old != NULL);
            par_viewer = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_b90b3b075d998db4044875686503d60f, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_b90b3b075d998db4044875686503d60f, exception_keeper_lineno_1);
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
        tmp_compexpr_right_1 = PyExc_TypeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 35;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_b90b3b075d998db4044875686503d60f->m_frame) frame_b90b3b075d998db4044875686503d60f->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_3;
    branch_no_2:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_tmp_condition_result_3_object_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_order);
        tmp_compexpr_left_2 = par_order;
        tmp_compexpr_right_2 = mod_consts[2];
        tmp_tmp_condition_result_3_object_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_tmp_condition_result_3_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_condition_result_3_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_3_object_1);

            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_3_object_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_3;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[4]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_viewer == NULL) {
            Py_DECREF(tmp_called_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 41;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = par_viewer;
        frame_b90b3b075d998db4044875686503d60f->m_frame.f_lineno = 41;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_3);
        Py_DECREF(tmp_called_name_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[6]);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = mod_consts[2];
        if (par_viewer == NULL) {
            Py_DECREF(tmp_called_name_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_5 = par_viewer;
        frame_b90b3b075d998db4044875686503d60f->m_frame.f_lineno = 43;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_4, call_args);
        }

        Py_DECREF(tmp_called_name_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_end_3:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b90b3b075d998db4044875686503d60f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b90b3b075d998db4044875686503d60f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b90b3b075d998db4044875686503d60f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b90b3b075d998db4044875686503d60f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b90b3b075d998db4044875686503d60f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b90b3b075d998db4044875686503d60f,
        type_description_1,
        par_viewer,
        par_order
    );


    // Release cached frame if used for exception.
    if (frame_b90b3b075d998db4044875686503d60f == cache_frame_b90b3b075d998db4044875686503d60f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b90b3b075d998db4044875686503d60f);
        cache_frame_b90b3b075d998db4044875686503d60f = NULL;
    }

    assertFrameObject(frame_b90b3b075d998db4044875686503d60f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_viewer);
    par_viewer = NULL;
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

    Py_XDECREF(par_viewer);
    par_viewer = NULL;
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
    CHECK_OBJECT(par_order);
    Py_DECREF(par_order);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_order);
    Py_DECREF(par_order);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageShow$$$function_2_show(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_image = python_pars[0];
    PyObject *par_title = python_pars[1];
    PyObject *par_options = python_pars[2];
    PyObject *var_viewer = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_4bc249ea325b9a576a877258c2fb1e65;
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
    static struct Nuitka_FrameObject *cache_frame_4bc249ea325b9a576a877258c2fb1e65 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4bc249ea325b9a576a877258c2fb1e65)) {
        Py_XDECREF(cache_frame_4bc249ea325b9a576a877258c2fb1e65);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4bc249ea325b9a576a877258c2fb1e65 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4bc249ea325b9a576a877258c2fb1e65 = MAKE_FUNCTION_FRAME(codeobj_4bc249ea325b9a576a877258c2fb1e65, module_PIL$ImageShow, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_4bc249ea325b9a576a877258c2fb1e65->m_type_description == NULL);
    frame_4bc249ea325b9a576a877258c2fb1e65 = cache_frame_4bc249ea325b9a576a877258c2fb1e65;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_4bc249ea325b9a576a877258c2fb1e65);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4bc249ea325b9a576a877258c2fb1e65) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_iter_arg_1 == NULL)) {
            tmp_iter_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_2 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooo";
                exception_lineno = 55;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_3 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_viewer;
            var_viewer = tmp_assign_source_3;
            Py_INCREF(var_viewer);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg4_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_viewer);
        tmp_expression_name_1 = var_viewer;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[8]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        if (par_image == NULL) {
            Py_DECREF(tmp_dircall_arg1_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 56;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_tuple_element_1 = par_image;
        tmp_dircall_arg2_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[10];
        if (par_title == NULL) {
            Py_DECREF(tmp_dircall_arg1_1);
            Py_DECREF(tmp_dircall_arg2_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 56;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_dict_value_1 = par_title;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        if (par_options == NULL) {
            Py_DECREF(tmp_dircall_arg1_1);
            Py_DECREF(tmp_dircall_arg2_1);
            Py_DECREF(tmp_dircall_arg3_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 56;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_dircall_arg4_1 = par_options;
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_call_result_1 = impl___main__$$$function_18_complex_call_helper_pos_keywords_star_dict(dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 56;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = mod_consts[12];
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 55;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT(tmp_for_loop_1__iter_value);
    Py_DECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4bc249ea325b9a576a877258c2fb1e65);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_4bc249ea325b9a576a877258c2fb1e65);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4bc249ea325b9a576a877258c2fb1e65);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4bc249ea325b9a576a877258c2fb1e65, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4bc249ea325b9a576a877258c2fb1e65->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4bc249ea325b9a576a877258c2fb1e65, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4bc249ea325b9a576a877258c2fb1e65,
        type_description_1,
        par_image,
        par_title,
        par_options,
        var_viewer
    );


    // Release cached frame if used for exception.
    if (frame_4bc249ea325b9a576a877258c2fb1e65 == cache_frame_4bc249ea325b9a576a877258c2fb1e65) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_4bc249ea325b9a576a877258c2fb1e65);
        cache_frame_4bc249ea325b9a576a877258c2fb1e65 = NULL;
    }

    assertFrameObject(frame_4bc249ea325b9a576a877258c2fb1e65);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    tmp_return_value = mod_consts[2];
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_viewer);
    var_viewer = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_viewer);
    var_viewer = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_image);
    Py_DECREF(par_image);
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_image);
    Py_DECREF(par_image);
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageShow$$$function_3_show(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_image = python_pars[1];
    PyObject *par_options = python_pars[2];
    PyObject *var_base = NULL;
    struct Nuitka_FrameObject *frame_5e56cc7c5b9c3fef2ae6947b2c0e7f83;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5e56cc7c5b9c3fef2ae6947b2c0e7f83 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5e56cc7c5b9c3fef2ae6947b2c0e7f83)) {
        Py_XDECREF(cache_frame_5e56cc7c5b9c3fef2ae6947b2c0e7f83);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5e56cc7c5b9c3fef2ae6947b2c0e7f83 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5e56cc7c5b9c3fef2ae6947b2c0e7f83 = MAKE_FUNCTION_FRAME(codeobj_5e56cc7c5b9c3fef2ae6947b2c0e7f83, module_PIL$ImageShow, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5e56cc7c5b9c3fef2ae6947b2c0e7f83->m_type_description == NULL);
    frame_5e56cc7c5b9c3fef2ae6947b2c0e7f83 = cache_frame_5e56cc7c5b9c3fef2ae6947b2c0e7f83;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5e56cc7c5b9c3fef2ae6947b2c0e7f83);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5e56cc7c5b9c3fef2ae6947b2c0e7f83) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_expression_name_3;
        CHECK_OBJECT(par_image);
        tmp_expression_name_1 = par_image;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[14]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = mod_consts[15];
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = (tmp_res == 1) ? Py_True : Py_False;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[16]);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = mod_consts[17];
        tmp_and_left_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        if (tmp_and_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_1);

            exception_lineno = 75;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        Py_DECREF(tmp_and_left_value_1);
        if (par_image == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 75;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_image;
        tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[14]);
        if (tmp_compexpr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = mod_consts[18];
        tmp_res = PySequence_Contains(tmp_compexpr_right_3, tmp_compexpr_left_3);
        Py_DECREF(tmp_compexpr_left_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 1) ? Py_True : Py_False;
        Py_INCREF(tmp_and_right_value_1);
        tmp_or_right_value_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_or_right_value_1 = tmp_and_left_value_1;
        and_end_1:;
        tmp_operand_name_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        Py_INCREF(tmp_or_left_value_1);
        tmp_operand_name_1 = tmp_or_left_value_1;
        or_end_1:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_5;
        tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_name_4 == NULL)) {
            tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[20]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_image == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 77;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_5 = par_image;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[14]);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 77;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_5e56cc7c5b9c3fef2ae6947b2c0e7f83->m_frame.f_lineno = 77;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_base == NULL);
        var_base = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_expression_name_6;
        if (par_image == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 78;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_6 = par_image;
        tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[14]);
        if (tmp_compexpr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_base);
        tmp_compexpr_right_4 = var_base;
        tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        Py_DECREF(tmp_compexpr_left_4);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        assert(tmp_condition_result_2 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_2;
        if (par_image == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 79;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = par_image;
        CHECK_OBJECT(var_base);
        tmp_args_element_name_2 = var_base;
        frame_5e56cc7c5b9c3fef2ae6947b2c0e7f83->m_frame.f_lineno = 79;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[21], tmp_args_element_name_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_image;
            par_image = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    branch_no_2:;
    branch_no_1:;
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 81;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_7 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[23]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_image == NULL) {
            Py_DECREF(tmp_dircall_arg1_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 81;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = par_image;
        tmp_dircall_arg2_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_options);
        tmp_dircall_arg3_1 = par_options;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function_12_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5e56cc7c5b9c3fef2ae6947b2c0e7f83);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5e56cc7c5b9c3fef2ae6947b2c0e7f83);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5e56cc7c5b9c3fef2ae6947b2c0e7f83);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5e56cc7c5b9c3fef2ae6947b2c0e7f83, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5e56cc7c5b9c3fef2ae6947b2c0e7f83->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5e56cc7c5b9c3fef2ae6947b2c0e7f83, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5e56cc7c5b9c3fef2ae6947b2c0e7f83,
        type_description_1,
        par_self,
        par_image,
        par_options,
        var_base
    );


    // Release cached frame if used for exception.
    if (frame_5e56cc7c5b9c3fef2ae6947b2c0e7f83 == cache_frame_5e56cc7c5b9c3fef2ae6947b2c0e7f83) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_5e56cc7c5b9c3fef2ae6947b2c0e7f83);
        cache_frame_5e56cc7c5b9c3fef2ae6947b2c0e7f83 = NULL;
    }

    assertFrameObject(frame_5e56cc7c5b9c3fef2ae6947b2c0e7f83);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_image);
    par_image = NULL;
    Py_XDECREF(var_base);
    var_base = NULL;
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

    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_image);
    par_image = NULL;
    Py_XDECREF(var_base);
    var_base = NULL;
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
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageShow$$$function_4_get_format(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_image = python_pars[1];
    struct Nuitka_FrameObject *frame_8639a9b793a7fbc63988ea1cbd124349;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8639a9b793a7fbc63988ea1cbd124349 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8639a9b793a7fbc63988ea1cbd124349)) {
        Py_XDECREF(cache_frame_8639a9b793a7fbc63988ea1cbd124349);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8639a9b793a7fbc63988ea1cbd124349 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8639a9b793a7fbc63988ea1cbd124349 = MAKE_FUNCTION_FRAME(codeobj_8639a9b793a7fbc63988ea1cbd124349, module_PIL$ImageShow, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_8639a9b793a7fbc63988ea1cbd124349->m_type_description == NULL);
    frame_8639a9b793a7fbc63988ea1cbd124349 = cache_frame_8639a9b793a7fbc63988ea1cbd124349;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8639a9b793a7fbc63988ea1cbd124349);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8639a9b793a7fbc63988ea1cbd124349) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[16]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8639a9b793a7fbc63988ea1cbd124349);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_8639a9b793a7fbc63988ea1cbd124349);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8639a9b793a7fbc63988ea1cbd124349);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8639a9b793a7fbc63988ea1cbd124349, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8639a9b793a7fbc63988ea1cbd124349->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8639a9b793a7fbc63988ea1cbd124349, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8639a9b793a7fbc63988ea1cbd124349,
        type_description_1,
        par_self,
        par_image
    );


    // Release cached frame if used for exception.
    if (frame_8639a9b793a7fbc63988ea1cbd124349 == cache_frame_8639a9b793a7fbc63988ea1cbd124349) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_8639a9b793a7fbc63988ea1cbd124349);
        cache_frame_8639a9b793a7fbc63988ea1cbd124349 = NULL;
    }

    assertFrameObject(frame_8639a9b793a7fbc63988ea1cbd124349);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
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

    Py_XDECREF(par_self);
    par_self = NULL;
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
    CHECK_OBJECT(par_image);
    Py_DECREF(par_image);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_image);
    Py_DECREF(par_image);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageShow$$$function_5_get_command(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_file = python_pars[1];
    PyObject *par_options = python_pars[2];
    struct Nuitka_FrameObject *frame_b12357fa835dd0178400ed6f1f699fa3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b12357fa835dd0178400ed6f1f699fa3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b12357fa835dd0178400ed6f1f699fa3)) {
        Py_XDECREF(cache_frame_b12357fa835dd0178400ed6f1f699fa3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b12357fa835dd0178400ed6f1f699fa3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b12357fa835dd0178400ed6f1f699fa3 = MAKE_FUNCTION_FRAME(codeobj_b12357fa835dd0178400ed6f1f699fa3, module_PIL$ImageShow, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b12357fa835dd0178400ed6f1f699fa3->m_type_description == NULL);
    frame_b12357fa835dd0178400ed6f1f699fa3 = cache_frame_b12357fa835dd0178400ed6f1f699fa3;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b12357fa835dd0178400ed6f1f699fa3);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b12357fa835dd0178400ed6f1f699fa3) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_NotImplementedError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 99;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b12357fa835dd0178400ed6f1f699fa3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b12357fa835dd0178400ed6f1f699fa3);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b12357fa835dd0178400ed6f1f699fa3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b12357fa835dd0178400ed6f1f699fa3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b12357fa835dd0178400ed6f1f699fa3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b12357fa835dd0178400ed6f1f699fa3,
        type_description_1,
        par_self,
        par_file,
        par_options
    );


    // Release cached frame if used for exception.
    if (frame_b12357fa835dd0178400ed6f1f699fa3 == cache_frame_b12357fa835dd0178400ed6f1f699fa3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b12357fa835dd0178400ed6f1f699fa3);
        cache_frame_b12357fa835dd0178400ed6f1f699fa3 = NULL;
    }

    assertFrameObject(frame_b12357fa835dd0178400ed6f1f699fa3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_file);
    Py_DECREF(par_file);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_PIL$ImageShow$$$function_6_save_image(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_image = python_pars[1];
    struct Nuitka_FrameObject *frame_6136274c2053036ad660a9814affaecb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_6136274c2053036ad660a9814affaecb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6136274c2053036ad660a9814affaecb)) {
        Py_XDECREF(cache_frame_6136274c2053036ad660a9814affaecb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6136274c2053036ad660a9814affaecb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6136274c2053036ad660a9814affaecb = MAKE_FUNCTION_FRAME(codeobj_6136274c2053036ad660a9814affaecb, module_PIL$ImageShow, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6136274c2053036ad660a9814affaecb->m_type_description == NULL);
    frame_6136274c2053036ad660a9814affaecb = cache_frame_6136274c2053036ad660a9814affaecb;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6136274c2053036ad660a9814affaecb);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6136274c2053036ad660a9814affaecb) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_expression_name_3;
        CHECK_OBJECT(par_image);
        tmp_expression_name_1 = par_image;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[27]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[16];
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[28]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 103;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_image == NULL) {
            Py_DECREF(tmp_dircall_arg1_1);
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 103;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = par_image;
        frame_6136274c2053036ad660a9814affaecb->m_frame.f_lineno = 103;
        tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 103;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        if (par_self == NULL) {
            Py_DECREF(tmp_dircall_arg1_1);
            Py_DECREF(tmp_dircall_arg2_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 103;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_self;
        tmp_dircall_arg3_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[11]);
        if (tmp_dircall_arg3_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 103;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function_19_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6136274c2053036ad660a9814affaecb);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6136274c2053036ad660a9814affaecb);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6136274c2053036ad660a9814affaecb);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6136274c2053036ad660a9814affaecb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6136274c2053036ad660a9814affaecb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6136274c2053036ad660a9814affaecb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6136274c2053036ad660a9814affaecb,
        type_description_1,
        par_self,
        par_image
    );


    // Release cached frame if used for exception.
    if (frame_6136274c2053036ad660a9814affaecb == cache_frame_6136274c2053036ad660a9814affaecb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6136274c2053036ad660a9814affaecb);
        cache_frame_6136274c2053036ad660a9814affaecb = NULL;
    }

    assertFrameObject(frame_6136274c2053036ad660a9814affaecb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_image);
    par_image = NULL;
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

    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_image);
    par_image = NULL;
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


static PyObject *impl_PIL$ImageShow$$$function_7_show_image(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_image = python_pars[1];
    PyObject *par_options = python_pars[2];
    struct Nuitka_FrameObject *frame_6224ba19984b0f223723f42f45b62b5d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6224ba19984b0f223723f42f45b62b5d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6224ba19984b0f223723f42f45b62b5d)) {
        Py_XDECREF(cache_frame_6224ba19984b0f223723f42f45b62b5d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6224ba19984b0f223723f42f45b62b5d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6224ba19984b0f223723f42f45b62b5d = MAKE_FUNCTION_FRAME(codeobj_6224ba19984b0f223723f42f45b62b5d, module_PIL$ImageShow, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6224ba19984b0f223723f42f45b62b5d->m_type_description == NULL);
    frame_6224ba19984b0f223723f42f45b62b5d = cache_frame_6224ba19984b0f223723f42f45b62b5d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6224ba19984b0f223723f42f45b62b5d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6224ba19984b0f223723f42f45b62b5d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[30]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_dircall_arg1_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 107;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_image);
        tmp_args_element_name_1 = par_image;
        frame_6224ba19984b0f223723f42f45b62b5d->m_frame.f_lineno = 107;
        tmp_tuple_element_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[31], tmp_args_element_name_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 107;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_options);
        tmp_dircall_arg3_1 = par_options;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function_12_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6224ba19984b0f223723f42f45b62b5d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6224ba19984b0f223723f42f45b62b5d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6224ba19984b0f223723f42f45b62b5d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6224ba19984b0f223723f42f45b62b5d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6224ba19984b0f223723f42f45b62b5d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6224ba19984b0f223723f42f45b62b5d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6224ba19984b0f223723f42f45b62b5d,
        type_description_1,
        par_self,
        par_image,
        par_options
    );


    // Release cached frame if used for exception.
    if (frame_6224ba19984b0f223723f42f45b62b5d == cache_frame_6224ba19984b0f223723f42f45b62b5d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6224ba19984b0f223723f42f45b62b5d);
        cache_frame_6224ba19984b0f223723f42f45b62b5d = NULL;
    }

    assertFrameObject(frame_6224ba19984b0f223723f42f45b62b5d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
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

    Py_XDECREF(par_self);
    par_self = NULL;
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
    CHECK_OBJECT(par_image);
    Py_DECREF(par_image);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_image);
    Py_DECREF(par_image);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageShow$$$function_8_show_file(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_file = python_pars[1];
    PyObject *par_options = python_pars[2];
    struct Nuitka_FrameObject *frame_3880d9a2998425f206cfcc719a4539e9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3880d9a2998425f206cfcc719a4539e9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3880d9a2998425f206cfcc719a4539e9)) {
        Py_XDECREF(cache_frame_3880d9a2998425f206cfcc719a4539e9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3880d9a2998425f206cfcc719a4539e9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3880d9a2998425f206cfcc719a4539e9 = MAKE_FUNCTION_FRAME(codeobj_3880d9a2998425f206cfcc719a4539e9, module_PIL$ImageShow, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_3880d9a2998425f206cfcc719a4539e9->m_type_description == NULL);
    frame_3880d9a2998425f206cfcc719a4539e9 = cache_frame_3880d9a2998425f206cfcc719a4539e9;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3880d9a2998425f206cfcc719a4539e9);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3880d9a2998425f206cfcc719a4539e9) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[34]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[35]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 111;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_file);
        tmp_tuple_element_1 = par_file;
        tmp_dircall_arg2_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_options);
        tmp_dircall_arg3_1 = par_options;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_args_element_name_1 = impl___main__$$$function_12_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 111;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_3880d9a2998425f206cfcc719a4539e9->m_frame.f_lineno = 111;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3880d9a2998425f206cfcc719a4539e9);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3880d9a2998425f206cfcc719a4539e9);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3880d9a2998425f206cfcc719a4539e9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3880d9a2998425f206cfcc719a4539e9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3880d9a2998425f206cfcc719a4539e9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3880d9a2998425f206cfcc719a4539e9,
        type_description_1,
        par_self,
        par_file,
        par_options
    );


    // Release cached frame if used for exception.
    if (frame_3880d9a2998425f206cfcc719a4539e9 == cache_frame_3880d9a2998425f206cfcc719a4539e9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_3880d9a2998425f206cfcc719a4539e9);
        cache_frame_3880d9a2998425f206cfcc719a4539e9 = NULL;
    }

    assertFrameObject(frame_3880d9a2998425f206cfcc719a4539e9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = mod_consts[12];
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
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

    Py_XDECREF(par_self);
    par_self = NULL;
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
    CHECK_OBJECT(par_file);
    Py_DECREF(par_file);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_file);
    Py_DECREF(par_file);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageShow$$$function_9_get_command(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_file = python_pars[1];
    PyObject *par_options = python_pars[2];
    struct Nuitka_FrameObject *frame_166c5746c17a65a880dc717df8c0fb42;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_166c5746c17a65a880dc717df8c0fb42 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_166c5746c17a65a880dc717df8c0fb42)) {
        Py_XDECREF(cache_frame_166c5746c17a65a880dc717df8c0fb42);

#if _DEBUG_REFCOUNTS
        if (cache_frame_166c5746c17a65a880dc717df8c0fb42 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_166c5746c17a65a880dc717df8c0fb42 = MAKE_FUNCTION_FRAME(codeobj_166c5746c17a65a880dc717df8c0fb42, module_PIL$ImageShow, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_166c5746c17a65a880dc717df8c0fb42->m_type_description == NULL);
    frame_166c5746c17a65a880dc717df8c0fb42 = cache_frame_166c5746c17a65a880dc717df8c0fb42;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_166c5746c17a65a880dc717df8c0fb42);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_166c5746c17a65a880dc717df8c0fb42) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[37];
        tmp_string_concat_values_1 = PyTuple_New(5);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_file);
            tmp_format_value_1 = par_file;
            tmp_format_spec_1 = mod_consts[38];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[39];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_file);
            tmp_format_value_2 = par_file;
            tmp_format_spec_2 = mod_consts[38];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[40];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[38], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_166c5746c17a65a880dc717df8c0fb42);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_166c5746c17a65a880dc717df8c0fb42);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_166c5746c17a65a880dc717df8c0fb42);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_166c5746c17a65a880dc717df8c0fb42, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_166c5746c17a65a880dc717df8c0fb42->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_166c5746c17a65a880dc717df8c0fb42, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_166c5746c17a65a880dc717df8c0fb42,
        type_description_1,
        par_self,
        par_file,
        par_options
    );


    // Release cached frame if used for exception.
    if (frame_166c5746c17a65a880dc717df8c0fb42 == cache_frame_166c5746c17a65a880dc717df8c0fb42) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_166c5746c17a65a880dc717df8c0fb42);
        cache_frame_166c5746c17a65a880dc717df8c0fb42 = NULL;
    }

    assertFrameObject(frame_166c5746c17a65a880dc717df8c0fb42);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_file);
    Py_DECREF(par_file);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_file);
    Py_DECREF(par_file);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageShow$$$function_10_get_command(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_file = python_pars[1];
    PyObject *par_options = python_pars[2];
    PyObject *var_command = NULL;
    struct Nuitka_FrameObject *frame_13de5ea7edf574bc30a5a6da4844425e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_13de5ea7edf574bc30a5a6da4844425e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_13de5ea7edf574bc30a5a6da4844425e)) {
        Py_XDECREF(cache_frame_13de5ea7edf574bc30a5a6da4844425e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_13de5ea7edf574bc30a5a6da4844425e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_13de5ea7edf574bc30a5a6da4844425e = MAKE_FUNCTION_FRAME(codeobj_13de5ea7edf574bc30a5a6da4844425e, module_PIL$ImageShow, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_13de5ea7edf574bc30a5a6da4844425e->m_type_description == NULL);
    frame_13de5ea7edf574bc30a5a6da4844425e = cache_frame_13de5ea7edf574bc30a5a6da4844425e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_13de5ea7edf574bc30a5a6da4844425e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_13de5ea7edf574bc30a5a6da4844425e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[41];
        tmp_string_concat_values_1 = PyTuple_New(5);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[42]);

            if (unlikely(tmp_called_name_1 == NULL)) {
                tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
            }

            if (tmp_called_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(par_file);
            tmp_args_element_name_1 = par_file;
            frame_13de5ea7edf574bc30a5a6da4844425e->m_frame.f_lineno = 146;
            tmp_format_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[38];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[42]);

            if (unlikely(tmp_called_name_2 == NULL)) {
                tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
            }

            if (tmp_called_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(par_file);
            tmp_args_element_name_2 = par_file;
            frame_13de5ea7edf574bc30a5a6da4844425e->m_frame.f_lineno = 146;
            tmp_format_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[38];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[44];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_1 = PyUnicode_Join(mod_consts[38], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_command == NULL);
        var_command = tmp_assign_source_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_13de5ea7edf574bc30a5a6da4844425e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_13de5ea7edf574bc30a5a6da4844425e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_13de5ea7edf574bc30a5a6da4844425e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_13de5ea7edf574bc30a5a6da4844425e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_13de5ea7edf574bc30a5a6da4844425e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_13de5ea7edf574bc30a5a6da4844425e,
        type_description_1,
        par_self,
        par_file,
        par_options,
        var_command
    );


    // Release cached frame if used for exception.
    if (frame_13de5ea7edf574bc30a5a6da4844425e == cache_frame_13de5ea7edf574bc30a5a6da4844425e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_13de5ea7edf574bc30a5a6da4844425e);
        cache_frame_13de5ea7edf574bc30a5a6da4844425e = NULL;
    }

    assertFrameObject(frame_13de5ea7edf574bc30a5a6da4844425e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_command);
    tmp_return_value = var_command;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_command);
    Py_DECREF(var_command);
    var_command = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_file);
    Py_DECREF(par_file);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_file);
    Py_DECREF(par_file);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageShow$$$function_11_show_file(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_file = python_pars[1];
    PyObject *par_options = python_pars[2];
    PyObject *var_fd = NULL;
    PyObject *var_path = NULL;
    PyObject *var_f = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    PyObject *tmp_with_2__enter = NULL;
    PyObject *tmp_with_2__exit = NULL;
    nuitka_bool tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_2__source = NULL;
    struct Nuitka_FrameObject *frame_788ea6bbca36b74416c8a9fcf57fe145;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    static struct Nuitka_FrameObject *cache_frame_788ea6bbca36b74416c8a9fcf57fe145 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_788ea6bbca36b74416c8a9fcf57fe145)) {
        Py_XDECREF(cache_frame_788ea6bbca36b74416c8a9fcf57fe145);

#if _DEBUG_REFCOUNTS
        if (cache_frame_788ea6bbca36b74416c8a9fcf57fe145 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_788ea6bbca36b74416c8a9fcf57fe145 = MAKE_FUNCTION_FRAME(codeobj_788ea6bbca36b74416c8a9fcf57fe145, module_PIL$ImageShow, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_788ea6bbca36b74416c8a9fcf57fe145->m_type_description == NULL);
    frame_788ea6bbca36b74416c8a9fcf57fe145 = cache_frame_788ea6bbca36b74416c8a9fcf57fe145;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_788ea6bbca36b74416c8a9fcf57fe145);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_788ea6bbca36b74416c8a9fcf57fe145) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        frame_788ea6bbca36b74416c8a9fcf57fe145->m_frame.f_lineno = 151;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[46]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 151;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 151;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
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

                    type_description_1 = "oooooo";
                    exception_lineno = 151;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[47];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooo";
            exception_lineno = 151;
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
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert(var_fd == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_fd = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var_path == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_path = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_fd);
        tmp_args_element_name_1 = var_fd;
        tmp_args_element_name_2 = mod_consts[49];
        frame_788ea6bbca36b74416c8a9fcf57fe145->m_frame.f_lineno = 152;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_assign_source_6 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_2, mod_consts[48], call_args);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_name_1 = tmp_with_1__source;
        tmp_called_name_1 = LOOKUP_SPECIAL(tmp_expression_name_1, mod_consts[50]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        frame_788ea6bbca36b74416c8a9fcf57fe145->m_frame.f_lineno = 152;
        tmp_assign_source_7 = CALL_FUNCTION_NO_ARGS(tmp_called_name_1);
        Py_DECREF(tmp_called_name_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_name_2 = tmp_with_1__source;
        tmp_assign_source_8 = LOOKUP_SPECIAL(tmp_expression_name_2, mod_consts[51]);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_8;
    }
    {
        nuitka_bool tmp_assign_source_9;
        tmp_assign_source_9 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_with_1__enter);
        tmp_assign_source_10 = tmp_with_1__enter;
        assert(var_f == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_f = tmp_assign_source_10;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT(var_f);
        tmp_called_instance_3 = var_f;
        CHECK_OBJECT(par_file);
        tmp_args_element_name_3 = par_file;
        frame_788ea6bbca36b74416c8a9fcf57fe145->m_frame.f_lineno = 153;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[52], tmp_args_element_name_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
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
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_788ea6bbca36b74416c8a9fcf57fe145, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_788ea6bbca36b74416c8a9fcf57fe145, exception_keeper_lineno_3);
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
        tmp_compexpr_right_1 = PyExc_BaseException;
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
        nuitka_bool tmp_assign_source_11;
        tmp_assign_source_11 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_11;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_name_2 = tmp_with_1__exit;
        tmp_args_element_name_4 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_name_5 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_name_6 = EXC_TRACEBACK(PyThreadState_GET());
        frame_788ea6bbca36b74416c8a9fcf57fe145->m_frame.f_lineno = 153;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_2, call_args);
        }

        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooooo";
            goto try_except_handler_7;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooooo";
            goto try_except_handler_7;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 153;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_788ea6bbca36b74416c8a9fcf57fe145->m_frame) frame_788ea6bbca36b74416c8a9fcf57fe145->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto try_except_handler_7;
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 152;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_788ea6bbca36b74416c8a9fcf57fe145->m_frame) frame_788ea6bbca36b74416c8a9fcf57fe145->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto try_except_handler_7;
    branch_end_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_7:;
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

    goto try_except_handler_5;
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
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_3;
        nuitka_bool tmp_compexpr_left_2;
        nuitka_bool tmp_compexpr_right_2;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_2 = tmp_with_1__indicator;
        tmp_compexpr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_3 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_name_3 = tmp_with_1__exit;
        frame_788ea6bbca36b74416c8a9fcf57fe145->m_frame.f_lineno = 153;
        tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_3, &PyTuple_GET_ITEM(mod_consts[53], 0));

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_5);
            Py_XDECREF(exception_keeper_value_5);
            Py_XDECREF(exception_keeper_tb_5);

            exception_lineno = 153;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_3:;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_4;
    // End of try:
    try_end_5:;
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
        PyObject *tmp_called_name_4;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_name_4 = tmp_with_1__exit;
        frame_788ea6bbca36b74416c8a9fcf57fe145->m_frame.f_lineno = 153;
        tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_4, &PyTuple_GET_ITEM(mod_consts[53], 0));

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_4:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    CHECK_OBJECT(tmp_with_1__exit);
    Py_DECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_open_filename_1;
        CHECK_OBJECT(var_path);
        tmp_open_filename_1 = var_path;
        tmp_assign_source_12 = BUILTIN_OPEN(tmp_open_filename_1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oooooo";
            goto try_except_handler_8;
        }
        assert(tmp_with_2__source == NULL);
        tmp_with_2__source = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_3;
        CHECK_OBJECT(tmp_with_2__source);
        tmp_expression_name_3 = tmp_with_2__source;
        tmp_called_name_5 = LOOKUP_SPECIAL(tmp_expression_name_3, mod_consts[50]);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oooooo";
            goto try_except_handler_8;
        }
        frame_788ea6bbca36b74416c8a9fcf57fe145->m_frame.f_lineno = 154;
        tmp_assign_source_13 = CALL_FUNCTION_NO_ARGS(tmp_called_name_5);
        Py_DECREF(tmp_called_name_5);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oooooo";
            goto try_except_handler_8;
        }
        assert(tmp_with_2__enter == NULL);
        tmp_with_2__enter = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_expression_name_4;
        CHECK_OBJECT(tmp_with_2__source);
        tmp_expression_name_4 = tmp_with_2__source;
        tmp_assign_source_14 = LOOKUP_SPECIAL(tmp_expression_name_4, mod_consts[51]);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oooooo";
            goto try_except_handler_8;
        }
        assert(tmp_with_2__exit == NULL);
        tmp_with_2__exit = tmp_assign_source_14;
    }
    {
        nuitka_bool tmp_assign_source_15;
        tmp_assign_source_15 = NUITKA_BOOL_TRUE;
        tmp_with_2__indicator = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_with_2__enter);
        tmp_assign_source_16 = tmp_with_2__enter;
        {
            PyObject *old = var_f;
            var_f = tmp_assign_source_16;
            Py_INCREF(var_f);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_name_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_expression_name_5 == NULL)) {
            tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooo";
            goto try_except_handler_10;
        }
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[55]);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooo";
            goto try_except_handler_10;
        }
        tmp_args_name_1 = DEEP_COPY(mod_consts[56]);
        tmp_dict_key_1 = mod_consts[57];
        tmp_dict_value_1 = Py_True;
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[58];
        CHECK_OBJECT(var_f);
        tmp_dict_value_1 = var_f;
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_788ea6bbca36b74416c8a9fcf57fe145->m_frame.f_lineno = 155;
        tmp_call_result_4 = CALL_FUNCTION(tmp_called_name_6, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_6);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooo";
            goto try_except_handler_10;
        }
        Py_DECREF(tmp_call_result_4);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
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

    if (exception_keeper_tb_7 == NULL) {
        exception_keeper_tb_7 = MAKE_TRACEBACK(frame_788ea6bbca36b74416c8a9fcf57fe145, exception_keeper_lineno_7);
    } else if (exception_keeper_lineno_7 != 0) {
        exception_keeper_tb_7 = ADD_TRACEBACK(exception_keeper_tb_7, frame_788ea6bbca36b74416c8a9fcf57fe145, exception_keeper_lineno_7);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_7, exception_keeper_tb_7);
    PUBLISH_EXCEPTION(&exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7);
    // Tried code:
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        tmp_compexpr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_4 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_4, tmp_compexpr_right_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        nuitka_bool tmp_assign_source_17;
        tmp_assign_source_17 = NUITKA_BOOL_FALSE;
        tmp_with_2__indicator = tmp_assign_source_17;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_called_name_7;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_name_7 = tmp_with_2__exit;
        tmp_args_element_name_7 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_name_8 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_name_9 = EXC_TRACEBACK(PyThreadState_GET());
        frame_788ea6bbca36b74416c8a9fcf57fe145->m_frame.f_lineno = 158;
        {
            PyObject *call_args[] = {tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9};
            tmp_operand_name_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_7, call_args);
        }

        if (tmp_operand_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooooo";
            goto try_except_handler_11;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        Py_DECREF(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooooo";
            goto try_except_handler_11;
        }
        tmp_condition_result_6 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 158;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_788ea6bbca36b74416c8a9fcf57fe145->m_frame) frame_788ea6bbca36b74416c8a9fcf57fe145->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto try_except_handler_11;
    branch_no_6:;
    goto branch_end_5;
    branch_no_5:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 154;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_788ea6bbca36b74416c8a9fcf57fe145->m_frame) frame_788ea6bbca36b74416c8a9fcf57fe145->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto try_except_handler_11;
    branch_end_5:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_9;
    // End of try:
    try_end_8:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);
    goto try_end_7;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_7:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_7;
        nuitka_bool tmp_compexpr_left_5;
        nuitka_bool tmp_compexpr_right_5;
        assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_5 = tmp_with_2__indicator;
        tmp_compexpr_right_5 = NUITKA_BOOL_TRUE;
        tmp_condition_result_7 = (tmp_compexpr_left_5 == tmp_compexpr_right_5) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_name_8;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_name_8 = tmp_with_2__exit;
        frame_788ea6bbca36b74416c8a9fcf57fe145->m_frame.f_lineno = 158;
        tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_8, &PyTuple_GET_ITEM(mod_consts[53], 0));

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_9);
            Py_XDECREF(exception_keeper_value_9);
            Py_XDECREF(exception_keeper_tb_9);

            exception_lineno = 158;
            type_description_1 = "oooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_7:;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_8;
    // End of try:
    try_end_9:;
    {
        bool tmp_condition_result_8;
        nuitka_bool tmp_compexpr_left_6;
        nuitka_bool tmp_compexpr_right_6;
        assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_6 = tmp_with_2__indicator;
        tmp_compexpr_right_6 = NUITKA_BOOL_TRUE;
        tmp_condition_result_8 = (tmp_compexpr_left_6 == tmp_compexpr_right_6) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_called_name_9;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_name_9 = tmp_with_2__exit;
        frame_788ea6bbca36b74416c8a9fcf57fe145->m_frame.f_lineno = 158;
        tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_9, &PyTuple_GET_ITEM(mod_consts[53], 0));

        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_no_8:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_2__source);
    tmp_with_2__source = NULL;
    Py_XDECREF(tmp_with_2__enter);
    tmp_with_2__enter = NULL;
    Py_XDECREF(tmp_with_2__exit);
    tmp_with_2__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_with_2__source);
    Py_DECREF(tmp_with_2__source);
    tmp_with_2__source = NULL;
    CHECK_OBJECT(tmp_with_2__enter);
    Py_DECREF(tmp_with_2__enter);
    tmp_with_2__enter = NULL;
    CHECK_OBJECT(tmp_with_2__exit);
    Py_DECREF(tmp_with_2__exit);
    tmp_with_2__exit = NULL;
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_name_10;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_path);
        tmp_args_element_name_10 = var_path;
        frame_788ea6bbca36b74416c8a9fcf57fe145->m_frame.f_lineno = 160;
        tmp_call_result_7 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[59], tmp_args_element_name_10);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_788ea6bbca36b74416c8a9fcf57fe145);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_788ea6bbca36b74416c8a9fcf57fe145);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_788ea6bbca36b74416c8a9fcf57fe145, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_788ea6bbca36b74416c8a9fcf57fe145->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_788ea6bbca36b74416c8a9fcf57fe145, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_788ea6bbca36b74416c8a9fcf57fe145,
        type_description_1,
        par_self,
        par_file,
        par_options,
        var_fd,
        var_path,
        var_f
    );


    // Release cached frame if used for exception.
    if (frame_788ea6bbca36b74416c8a9fcf57fe145 == cache_frame_788ea6bbca36b74416c8a9fcf57fe145) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_788ea6bbca36b74416c8a9fcf57fe145);
        cache_frame_788ea6bbca36b74416c8a9fcf57fe145 = NULL;
    }

    assertFrameObject(frame_788ea6bbca36b74416c8a9fcf57fe145);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = mod_consts[12];
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_fd);
    Py_DECREF(var_fd);
    var_fd = NULL;
    CHECK_OBJECT(var_path);
    Py_DECREF(var_path);
    var_path = NULL;
    CHECK_OBJECT(var_f);
    Py_DECREF(var_f);
    var_f = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_fd);
    var_fd = NULL;
    Py_XDECREF(var_path);
    var_path = NULL;
    Py_XDECREF(var_f);
    var_f = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_file);
    Py_DECREF(par_file);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_file);
    Py_DECREF(par_file);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageShow$$$function_12_get_command(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_file = python_pars[1];
    PyObject *par_options = python_pars[2];
    PyObject *var_command = NULL;
    struct Nuitka_FrameObject *frame_3e704057a92b0ddbf7aff60056af9fcf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3e704057a92b0ddbf7aff60056af9fcf = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3e704057a92b0ddbf7aff60056af9fcf)) {
        Py_XDECREF(cache_frame_3e704057a92b0ddbf7aff60056af9fcf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3e704057a92b0ddbf7aff60056af9fcf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3e704057a92b0ddbf7aff60056af9fcf = MAKE_FUNCTION_FRAME(codeobj_3e704057a92b0ddbf7aff60056af9fcf, module_PIL$ImageShow, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_3e704057a92b0ddbf7aff60056af9fcf->m_type_description == NULL);
    frame_3e704057a92b0ddbf7aff60056af9fcf = cache_frame_3e704057a92b0ddbf7aff60056af9fcf;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3e704057a92b0ddbf7aff60056af9fcf);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3e704057a92b0ddbf7aff60056af9fcf) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[61]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_file);
        tmp_tuple_element_1 = par_file;
        tmp_dircall_arg2_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_options);
        tmp_dircall_arg3_1 = par_options;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_expression_name_1 = impl___main__$$$function_12_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = mod_consts[2];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_command == NULL);
        var_command = tmp_assign_source_1;
    }
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = mod_consts[62];
        tmp_string_concat_values_1 = PyTuple_New(7);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_called_name_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_format_spec_2;
            PyObject *tmp_format_value_3;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(var_command);
            tmp_format_value_1 = var_command;
            tmp_format_spec_1 = mod_consts[38];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[63];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_2);
            tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[42]);

            if (unlikely(tmp_called_name_1 == NULL)) {
                tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
            }

            if (tmp_called_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(par_file);
            tmp_args_element_name_1 = par_file;
            frame_3e704057a92b0ddbf7aff60056af9fcf->m_frame.f_lineno = 174;
            tmp_format_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[38];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[64];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_2);
            tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[42]);

            if (unlikely(tmp_called_name_2 == NULL)) {
                tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
            }

            if (tmp_called_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(par_file);
            tmp_args_element_name_2 = par_file;
            frame_3e704057a92b0ddbf7aff60056af9fcf->m_frame.f_lineno = 174;
            tmp_format_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
            if (tmp_format_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_3 = mod_consts[38];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
            Py_DECREF(tmp_format_value_3);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 5, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[44];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 6, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[38], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3e704057a92b0ddbf7aff60056af9fcf);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3e704057a92b0ddbf7aff60056af9fcf);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3e704057a92b0ddbf7aff60056af9fcf);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3e704057a92b0ddbf7aff60056af9fcf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3e704057a92b0ddbf7aff60056af9fcf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3e704057a92b0ddbf7aff60056af9fcf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3e704057a92b0ddbf7aff60056af9fcf,
        type_description_1,
        par_self,
        par_file,
        par_options,
        var_command
    );


    // Release cached frame if used for exception.
    if (frame_3e704057a92b0ddbf7aff60056af9fcf == cache_frame_3e704057a92b0ddbf7aff60056af9fcf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_3e704057a92b0ddbf7aff60056af9fcf);
        cache_frame_3e704057a92b0ddbf7aff60056af9fcf = NULL;
    }

    assertFrameObject(frame_3e704057a92b0ddbf7aff60056af9fcf);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(var_command);
    Py_DECREF(var_command);
    var_command = NULL;
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

    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(var_command);
    var_command = NULL;
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
    CHECK_OBJECT(par_file);
    Py_DECREF(par_file);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_file);
    Py_DECREF(par_file);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageShow$$$function_13_show_file(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_file = python_pars[1];
    PyObject *par_options = python_pars[2];
    PyObject *var_fd = NULL;
    PyObject *var_path = NULL;
    PyObject *var_f = NULL;
    PyObject *var_command = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    PyObject *tmp_with_2__enter = NULL;
    PyObject *tmp_with_2__exit = NULL;
    nuitka_bool tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_2__source = NULL;
    struct Nuitka_FrameObject *frame_28aab8f2b8cda3854d5037013d09d129;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    static struct Nuitka_FrameObject *cache_frame_28aab8f2b8cda3854d5037013d09d129 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_28aab8f2b8cda3854d5037013d09d129)) {
        Py_XDECREF(cache_frame_28aab8f2b8cda3854d5037013d09d129);

#if _DEBUG_REFCOUNTS
        if (cache_frame_28aab8f2b8cda3854d5037013d09d129 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_28aab8f2b8cda3854d5037013d09d129 = MAKE_FUNCTION_FRAME(codeobj_28aab8f2b8cda3854d5037013d09d129, module_PIL$ImageShow, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_28aab8f2b8cda3854d5037013d09d129->m_type_description == NULL);
    frame_28aab8f2b8cda3854d5037013d09d129 = cache_frame_28aab8f2b8cda3854d5037013d09d129;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_28aab8f2b8cda3854d5037013d09d129);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_28aab8f2b8cda3854d5037013d09d129) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        frame_28aab8f2b8cda3854d5037013d09d129->m_frame.f_lineno = 178;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[46]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 178;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
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
            exception_lineno = 178;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
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
                    exception_lineno = 178;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[47];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooo";
            exception_lineno = 178;
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
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert(var_fd == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_fd = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var_path == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_path = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_fd);
        tmp_args_element_name_1 = var_fd;
        tmp_args_element_name_2 = mod_consts[49];
        frame_28aab8f2b8cda3854d5037013d09d129->m_frame.f_lineno = 179;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_assign_source_6 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_2, mod_consts[48], call_args);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_name_1 = tmp_with_1__source;
        tmp_called_name_1 = LOOKUP_SPECIAL(tmp_expression_name_1, mod_consts[50]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        frame_28aab8f2b8cda3854d5037013d09d129->m_frame.f_lineno = 179;
        tmp_assign_source_7 = CALL_FUNCTION_NO_ARGS(tmp_called_name_1);
        Py_DECREF(tmp_called_name_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_name_2 = tmp_with_1__source;
        tmp_assign_source_8 = LOOKUP_SPECIAL(tmp_expression_name_2, mod_consts[51]);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_8;
    }
    {
        nuitka_bool tmp_assign_source_9;
        tmp_assign_source_9 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_with_1__enter);
        tmp_assign_source_10 = tmp_with_1__enter;
        assert(var_f == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_f = tmp_assign_source_10;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT(var_f);
        tmp_called_instance_3 = var_f;
        CHECK_OBJECT(par_file);
        tmp_args_element_name_3 = par_file;
        frame_28aab8f2b8cda3854d5037013d09d129->m_frame.f_lineno = 180;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[52], tmp_args_element_name_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
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
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_28aab8f2b8cda3854d5037013d09d129, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_28aab8f2b8cda3854d5037013d09d129, exception_keeper_lineno_3);
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
        tmp_compexpr_right_1 = PyExc_BaseException;
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
        nuitka_bool tmp_assign_source_11;
        tmp_assign_source_11 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_11;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_name_2 = tmp_with_1__exit;
        tmp_args_element_name_4 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_name_5 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_name_6 = EXC_TRACEBACK(PyThreadState_GET());
        frame_28aab8f2b8cda3854d5037013d09d129->m_frame.f_lineno = 180;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_2, call_args);
        }

        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooooo";
            goto try_except_handler_7;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooooo";
            goto try_except_handler_7;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 180;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_28aab8f2b8cda3854d5037013d09d129->m_frame) frame_28aab8f2b8cda3854d5037013d09d129->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooo";
    goto try_except_handler_7;
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 179;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_28aab8f2b8cda3854d5037013d09d129->m_frame) frame_28aab8f2b8cda3854d5037013d09d129->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooo";
    goto try_except_handler_7;
    branch_end_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_7:;
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

    goto try_except_handler_5;
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
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_3;
        nuitka_bool tmp_compexpr_left_2;
        nuitka_bool tmp_compexpr_right_2;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_2 = tmp_with_1__indicator;
        tmp_compexpr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_3 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_name_3 = tmp_with_1__exit;
        frame_28aab8f2b8cda3854d5037013d09d129->m_frame.f_lineno = 180;
        tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_3, &PyTuple_GET_ITEM(mod_consts[53], 0));

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_5);
            Py_XDECREF(exception_keeper_value_5);
            Py_XDECREF(exception_keeper_tb_5);

            exception_lineno = 180;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_3:;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_4;
    // End of try:
    try_end_5:;
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
        PyObject *tmp_called_name_4;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_name_4 = tmp_with_1__exit;
        frame_28aab8f2b8cda3854d5037013d09d129->m_frame.f_lineno = 180;
        tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_4, &PyTuple_GET_ITEM(mod_consts[53], 0));

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_4:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    CHECK_OBJECT(tmp_with_1__exit);
    Py_DECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_open_filename_1;
        CHECK_OBJECT(var_path);
        tmp_open_filename_1 = var_path;
        tmp_assign_source_12 = BUILTIN_OPEN(tmp_open_filename_1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        assert(tmp_with_2__source == NULL);
        tmp_with_2__source = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_3;
        CHECK_OBJECT(tmp_with_2__source);
        tmp_expression_name_3 = tmp_with_2__source;
        tmp_called_name_5 = LOOKUP_SPECIAL(tmp_expression_name_3, mod_consts[50]);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        frame_28aab8f2b8cda3854d5037013d09d129->m_frame.f_lineno = 181;
        tmp_assign_source_13 = CALL_FUNCTION_NO_ARGS(tmp_called_name_5);
        Py_DECREF(tmp_called_name_5);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        assert(tmp_with_2__enter == NULL);
        tmp_with_2__enter = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_expression_name_4;
        CHECK_OBJECT(tmp_with_2__source);
        tmp_expression_name_4 = tmp_with_2__source;
        tmp_assign_source_14 = LOOKUP_SPECIAL(tmp_expression_name_4, mod_consts[51]);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        assert(tmp_with_2__exit == NULL);
        tmp_with_2__exit = tmp_assign_source_14;
    }
    {
        nuitka_bool tmp_assign_source_15;
        tmp_assign_source_15 = NUITKA_BOOL_TRUE;
        tmp_with_2__indicator = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_with_2__enter);
        tmp_assign_source_16 = tmp_with_2__enter;
        {
            PyObject *old = var_f;
            var_f = tmp_assign_source_16;
            Py_INCREF(var_f);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_6 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[61]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooooooo";
            goto try_except_handler_10;
        }
        CHECK_OBJECT(par_file);
        tmp_tuple_element_1 = par_file;
        tmp_dircall_arg2_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_options);
        tmp_dircall_arg3_1 = par_options;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_expression_name_5 = impl___main__$$$function_12_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooooooo";
            goto try_except_handler_10;
        }
        tmp_subscript_name_1 = mod_consts[2];
        tmp_assign_source_17 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_5, tmp_subscript_name_1, 0);
        Py_DECREF(tmp_expression_name_5);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooooooo";
            goto try_except_handler_10;
        }
        assert(var_command == NULL);
        var_command = tmp_assign_source_17;
    }
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_list_element_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_expression_name_7 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_expression_name_7 == NULL)) {
            tmp_expression_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_expression_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooooo";
            goto try_except_handler_10;
        }
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[55]);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooooo";
            goto try_except_handler_10;
        }
        tmp_left_name_2 = mod_consts[65];
        CHECK_OBJECT(var_command);
        tmp_right_name_1 = var_command;
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_2, tmp_right_name_1);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);

            exception_lineno = 184;
            type_description_1 = "ooooooo";
            goto try_except_handler_10;
        }
        tmp_right_name_2 = mod_consts[66];
        tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_1, tmp_right_name_2);
        Py_DECREF(tmp_left_name_1);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);

            exception_lineno = 184;
            type_description_1 = "ooooooo";
            goto try_except_handler_10;
        }
        tmp_tuple_element_2 = PyList_New(1);
        PyList_SET_ITEM(tmp_tuple_element_2, 0, tmp_list_element_1);
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_2);
        tmp_dict_key_1 = mod_consts[57];
        tmp_dict_value_1 = Py_True;
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[58];
        CHECK_OBJECT(var_f);
        tmp_dict_value_1 = var_f;
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_28aab8f2b8cda3854d5037013d09d129->m_frame.f_lineno = 183;
        tmp_call_result_4 = CALL_FUNCTION(tmp_called_name_6, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_6);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooooo";
            goto try_except_handler_10;
        }
        Py_DECREF(tmp_call_result_4);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
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

    if (exception_keeper_tb_7 == NULL) {
        exception_keeper_tb_7 = MAKE_TRACEBACK(frame_28aab8f2b8cda3854d5037013d09d129, exception_keeper_lineno_7);
    } else if (exception_keeper_lineno_7 != 0) {
        exception_keeper_tb_7 = ADD_TRACEBACK(exception_keeper_tb_7, frame_28aab8f2b8cda3854d5037013d09d129, exception_keeper_lineno_7);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_7, exception_keeper_tb_7);
    PUBLISH_EXCEPTION(&exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7);
    // Tried code:
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        tmp_compexpr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_4 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_4, tmp_compexpr_right_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        nuitka_bool tmp_assign_source_18;
        tmp_assign_source_18 = NUITKA_BOOL_FALSE;
        tmp_with_2__indicator = tmp_assign_source_18;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_called_name_7;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_name_7 = tmp_with_2__exit;
        tmp_args_element_name_7 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_name_8 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_name_9 = EXC_TRACEBACK(PyThreadState_GET());
        frame_28aab8f2b8cda3854d5037013d09d129->m_frame.f_lineno = 184;
        {
            PyObject *call_args[] = {tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9};
            tmp_operand_name_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_7, call_args);
        }

        if (tmp_operand_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooooooo";
            goto try_except_handler_11;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        Py_DECREF(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooooooo";
            goto try_except_handler_11;
        }
        tmp_condition_result_6 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 184;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_28aab8f2b8cda3854d5037013d09d129->m_frame) frame_28aab8f2b8cda3854d5037013d09d129->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooo";
    goto try_except_handler_11;
    branch_no_6:;
    goto branch_end_5;
    branch_no_5:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 181;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_28aab8f2b8cda3854d5037013d09d129->m_frame) frame_28aab8f2b8cda3854d5037013d09d129->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooo";
    goto try_except_handler_11;
    branch_end_5:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_9;
    // End of try:
    try_end_8:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);
    goto try_end_7;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_7:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_7;
        nuitka_bool tmp_compexpr_left_5;
        nuitka_bool tmp_compexpr_right_5;
        assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_5 = tmp_with_2__indicator;
        tmp_compexpr_right_5 = NUITKA_BOOL_TRUE;
        tmp_condition_result_7 = (tmp_compexpr_left_5 == tmp_compexpr_right_5) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_name_8;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_name_8 = tmp_with_2__exit;
        frame_28aab8f2b8cda3854d5037013d09d129->m_frame.f_lineno = 184;
        tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_8, &PyTuple_GET_ITEM(mod_consts[53], 0));

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_9);
            Py_XDECREF(exception_keeper_value_9);
            Py_XDECREF(exception_keeper_tb_9);

            exception_lineno = 184;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_7:;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_8;
    // End of try:
    try_end_9:;
    {
        bool tmp_condition_result_8;
        nuitka_bool tmp_compexpr_left_6;
        nuitka_bool tmp_compexpr_right_6;
        assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_6 = tmp_with_2__indicator;
        tmp_compexpr_right_6 = NUITKA_BOOL_TRUE;
        tmp_condition_result_8 = (tmp_compexpr_left_6 == tmp_compexpr_right_6) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_called_name_9;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_name_9 = tmp_with_2__exit;
        frame_28aab8f2b8cda3854d5037013d09d129->m_frame.f_lineno = 184;
        tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_9, &PyTuple_GET_ITEM(mod_consts[53], 0));

        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_no_8:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_2__source);
    tmp_with_2__source = NULL;
    Py_XDECREF(tmp_with_2__enter);
    tmp_with_2__enter = NULL;
    Py_XDECREF(tmp_with_2__exit);
    tmp_with_2__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_with_2__source);
    Py_DECREF(tmp_with_2__source);
    tmp_with_2__source = NULL;
    CHECK_OBJECT(tmp_with_2__enter);
    Py_DECREF(tmp_with_2__enter);
    tmp_with_2__enter = NULL;
    CHECK_OBJECT(tmp_with_2__exit);
    Py_DECREF(tmp_with_2__exit);
    tmp_with_2__exit = NULL;
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_name_10;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_path);
        tmp_args_element_name_10 = var_path;
        frame_28aab8f2b8cda3854d5037013d09d129->m_frame.f_lineno = 186;
        tmp_call_result_7 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[59], tmp_args_element_name_10);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_28aab8f2b8cda3854d5037013d09d129);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_28aab8f2b8cda3854d5037013d09d129);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_28aab8f2b8cda3854d5037013d09d129, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_28aab8f2b8cda3854d5037013d09d129->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_28aab8f2b8cda3854d5037013d09d129, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_28aab8f2b8cda3854d5037013d09d129,
        type_description_1,
        par_self,
        par_file,
        par_options,
        var_fd,
        var_path,
        var_f,
        var_command
    );


    // Release cached frame if used for exception.
    if (frame_28aab8f2b8cda3854d5037013d09d129 == cache_frame_28aab8f2b8cda3854d5037013d09d129) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_28aab8f2b8cda3854d5037013d09d129);
        cache_frame_28aab8f2b8cda3854d5037013d09d129 = NULL;
    }

    assertFrameObject(frame_28aab8f2b8cda3854d5037013d09d129);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = mod_consts[12];
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(var_fd);
    Py_DECREF(var_fd);
    var_fd = NULL;
    CHECK_OBJECT(var_path);
    Py_DECREF(var_path);
    var_path = NULL;
    CHECK_OBJECT(var_f);
    Py_DECREF(var_f);
    var_f = NULL;
    Py_XDECREF(var_command);
    var_command = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(var_fd);
    var_fd = NULL;
    Py_XDECREF(var_path);
    var_path = NULL;
    Py_XDECREF(var_f);
    var_f = NULL;
    Py_XDECREF(var_command);
    var_command = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_file);
    Py_DECREF(par_file);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_file);
    Py_DECREF(par_file);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageShow$$$function_16_get_command_ex(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_file = python_pars[1];
    PyObject *par_title = python_pars[2];
    PyObject *par_options = python_pars[3];
    PyObject *var_command = NULL;
    struct Nuitka_FrameObject *frame_049f2c82b273922987612f001ad363c5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_049f2c82b273922987612f001ad363c5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[67];
        assert(var_command == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_command = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_049f2c82b273922987612f001ad363c5)) {
        Py_XDECREF(cache_frame_049f2c82b273922987612f001ad363c5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_049f2c82b273922987612f001ad363c5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_049f2c82b273922987612f001ad363c5 = MAKE_FUNCTION_FRAME(codeobj_049f2c82b273922987612f001ad363c5, module_PIL$ImageShow, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_049f2c82b273922987612f001ad363c5->m_type_description == NULL);
    frame_049f2c82b273922987612f001ad363c5 = cache_frame_049f2c82b273922987612f001ad363c5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_049f2c82b273922987612f001ad363c5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_049f2c82b273922987612f001ad363c5) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_title);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_title);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_command);
        tmp_left_name_1 = var_command;
        tmp_tuple_element_1 = mod_consts[68];
        tmp_string_concat_values_1 = PyTuple_New(2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[42]);

            if (unlikely(tmp_called_name_1 == NULL)) {
                tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
            }

            if (tmp_called_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
                type_description_1 = "oooooN";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(par_title);
            tmp_args_element_name_1 = par_title;
            frame_049f2c82b273922987612f001ad363c5->m_frame.f_lineno = 217;
            tmp_format_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
                type_description_1 = "oooooN";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[38];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
                type_description_1 = "oooooN";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_right_name_1 = PyUnicode_Join(mod_consts[38], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_ADD_UNICODE_UNICODE_INPLACE(&tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        assert(!(tmp_result == false));
        tmp_assign_source_2 = tmp_left_name_1;
        var_command = tmp_assign_source_2;

    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_049f2c82b273922987612f001ad363c5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_049f2c82b273922987612f001ad363c5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_049f2c82b273922987612f001ad363c5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_049f2c82b273922987612f001ad363c5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_049f2c82b273922987612f001ad363c5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_049f2c82b273922987612f001ad363c5,
        type_description_1,
        par_self,
        par_file,
        par_title,
        par_options,
        var_command,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_049f2c82b273922987612f001ad363c5 == cache_frame_049f2c82b273922987612f001ad363c5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_049f2c82b273922987612f001ad363c5);
        cache_frame_049f2c82b273922987612f001ad363c5 = NULL;
    }

    assertFrameObject(frame_049f2c82b273922987612f001ad363c5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(var_command);
        tmp_tuple_element_2 = var_command;
        tmp_return_value = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = mod_consts[67];
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_command);
    Py_DECREF(var_command);
    var_command = NULL;
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

    CHECK_OBJECT(var_command);
    Py_DECREF(var_command);
    var_command = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_file);
    Py_DECREF(par_file);
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_file);
    Py_DECREF(par_file);
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_PIL$ImageShow$$$function_10_get_command() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageShow$$$function_10_get_command,
        mod_consts[35],
#if PYTHON_VERSION >= 300
        mod_consts[112],
#endif
        codeobj_13de5ea7edf574bc30a5a6da4844425e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$ImageShow,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageShow$$$function_11_show_file() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageShow$$$function_11_show_file,
        mod_consts[30],
#if PYTHON_VERSION >= 300
        mod_consts[113],
#endif
        codeobj_788ea6bbca36b74416c8a9fcf57fe145,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$ImageShow,
        mod_consts[60],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageShow$$$function_12_get_command() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageShow$$$function_12_get_command,
        mod_consts[35],
#if PYTHON_VERSION >= 300
        mod_consts[116],
#endif
        codeobj_3e704057a92b0ddbf7aff60056af9fcf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$ImageShow,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageShow$$$function_13_show_file() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageShow$$$function_13_show_file,
        mod_consts[30],
#if PYTHON_VERSION >= 300
        mod_consts[117],
#endif
        codeobj_28aab8f2b8cda3854d5037013d09d129,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$ImageShow,
        mod_consts[60],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageShow$$$function_14_get_command_ex() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[61],
#if PYTHON_VERSION >= 300
        mod_consts[121],
#endif
        codeobj_3a82ffaaab0338e30ffcff9dba58539e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$ImageShow,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[120]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageShow$$$function_15_get_command_ex() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[61],
#if PYTHON_VERSION >= 300
        mod_consts[125],
#endif
        codeobj_c217f9e2a569be17150ada9eaf904129,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$ImageShow,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[124]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageShow$$$function_16_get_command_ex(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageShow$$$function_16_get_command_ex,
        mod_consts[61],
#if PYTHON_VERSION >= 300
        mod_consts[128],
#endif
        codeobj_049f2c82b273922987612f001ad363c5,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$ImageShow,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageShow$$$function_1_register(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageShow$$$function_1_register,
        mod_consts[83],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b90b3b075d998db4044875686503d60f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$ImageShow,
        mod_consts[7],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageShow$$$function_2_show(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageShow$$$function_2_show,
        mod_consts[8],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4bc249ea325b9a576a877258c2fb1e65,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$ImageShow,
        mod_consts[13],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageShow$$$function_3_show() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageShow$$$function_3_show,
        mod_consts[8],
#if PYTHON_VERSION >= 300
        mod_consts[97],
#endif
        codeobj_5e56cc7c5b9c3fef2ae6947b2c0e7f83,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$ImageShow,
        mod_consts[24],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageShow$$$function_4_get_format() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageShow$$$function_4_get_format,
        mod_consts[28],
#if PYTHON_VERSION >= 300
        mod_consts[98],
#endif
        codeobj_8639a9b793a7fbc63988ea1cbd124349,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$ImageShow,
        mod_consts[25],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageShow$$$function_5_get_command() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageShow$$$function_5_get_command,
        mod_consts[35],
#if PYTHON_VERSION >= 300
        mod_consts[99],
#endif
        codeobj_b12357fa835dd0178400ed6f1f699fa3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$ImageShow,
        mod_consts[26],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageShow$$$function_6_save_image() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageShow$$$function_6_save_image,
        mod_consts[31],
#if PYTHON_VERSION >= 300
        mod_consts[100],
#endif
        codeobj_6136274c2053036ad660a9814affaecb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$ImageShow,
        mod_consts[29],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageShow$$$function_7_show_image() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageShow$$$function_7_show_image,
        mod_consts[23],
#if PYTHON_VERSION >= 300
        mod_consts[101],
#endif
        codeobj_6224ba19984b0f223723f42f45b62b5d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$ImageShow,
        mod_consts[32],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageShow$$$function_8_show_file() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageShow$$$function_8_show_file,
        mod_consts[30],
#if PYTHON_VERSION >= 300
        mod_consts[102],
#endif
        codeobj_3880d9a2998425f206cfcc719a4539e9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$ImageShow,
        mod_consts[36],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageShow$$$function_9_get_command() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageShow$$$function_9_get_command,
        mod_consts[35],
#if PYTHON_VERSION >= 300
        mod_consts[106],
#endif
        codeobj_166c5746c17a65a880dc717df8c0fb42,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$ImageShow,
        NULL,
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

function_impl_code functable_PIL$ImageShow[] = {
    impl_PIL$ImageShow$$$function_1_register,
    impl_PIL$ImageShow$$$function_2_show,
    impl_PIL$ImageShow$$$function_3_show,
    impl_PIL$ImageShow$$$function_4_get_format,
    impl_PIL$ImageShow$$$function_5_get_command,
    impl_PIL$ImageShow$$$function_6_save_image,
    impl_PIL$ImageShow$$$function_7_show_image,
    impl_PIL$ImageShow$$$function_8_show_file,
    impl_PIL$ImageShow$$$function_9_get_command,
    impl_PIL$ImageShow$$$function_10_get_command,
    impl_PIL$ImageShow$$$function_11_show_file,
    impl_PIL$ImageShow$$$function_12_get_command,
    impl_PIL$ImageShow$$$function_13_show_file,
    NULL,
    NULL,
    impl_PIL$ImageShow$$$function_16_get_command_ex,
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

    function_impl_code *current = functable_PIL$ImageShow;
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

    if (offset > sizeof(functable_PIL$ImageShow) || offset < 0) {
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
        functable_PIL$ImageShow[offset],
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
        module_PIL$ImageShow,
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
NUITKA_MAY_BE_UNUSED static char const *module_full_name = "PIL.ImageShow";

// Internal entry point for module code.
PyObject *modulecode_PIL$ImageShow(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_PIL$ImageShow = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
#ifdef _NUITKA_TRACE
        PRINT_STRING("PIL.ImageShow: Skipping module init, already done.\n");
#endif

        return module_PIL$ImageShow;
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
    PRINT_STRING("PIL.ImageShow: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("PIL.ImageShow: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("PIL.ImageShow: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initPIL$ImageShow\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_PIL$ImageShow = MODULE_DICT(module_PIL$ImageShow);

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
        moduledict_PIL$ImageShow,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_PIL$ImageShow,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_PIL$ImageShow,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$ImageShow,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$ImageShow,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_PIL$ImageShow);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_PIL$ImageShow, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_PIL$ImageShow, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_PIL$ImageShow, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_PIL$ImageShow);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT(spec_value);

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_PIL$ImageShow, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *outline_6_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__bases_orig = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__bases_orig = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__bases_orig = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_class_creation_7__bases = NULL;
    PyObject *tmp_class_creation_7__bases_orig = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    struct Nuitka_FrameObject *frame_715a9122371f1315c4968ada47220423;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_PIL$ImageShow$$$class_1_Viewer_61 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_d2aaa140733cc6a7a4e99d3c5a987a08_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_d2aaa140733cc6a7a4e99d3c5a987a08_2 = NULL;
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
    PyObject *locals_PIL$ImageShow$$$class_2_WindowsViewer_118 = NULL;
    struct Nuitka_FrameObject *frame_9a00f5eb61b74b421ef99c82cb056089_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_9a00f5eb61b74b421ef99c82cb056089_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *locals_PIL$ImageShow$$$class_3_MacViewer_136 = NULL;
    struct Nuitka_FrameObject *frame_d9cc1af8889b9305d3cde967d6161540_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    static struct Nuitka_FrameObject *cache_frame_d9cc1af8889b9305d3cde967d6161540_4 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *locals_PIL$ImageShow$$$class_4_UnixViewer_168 = NULL;
    struct Nuitka_FrameObject *frame_ab160c17dda465036ae9d8df253ebfa5_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    static struct Nuitka_FrameObject *cache_frame_ab160c17dda465036ae9d8df253ebfa5_5 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *locals_PIL$ImageShow$$$class_5_DisplayViewer_190 = NULL;
    struct Nuitka_FrameObject *frame_5ac3b53fa818def85aed60cc0757a83c_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    static struct Nuitka_FrameObject *cache_frame_5ac3b53fa818def85aed60cc0757a83c_6 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *locals_PIL$ImageShow$$$class_6_EogViewer_198 = NULL;
    struct Nuitka_FrameObject *frame_02d23532147a4a2747ae898a645e667f_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    static struct Nuitka_FrameObject *cache_frame_02d23532147a4a2747ae898a645e667f_7 = NULL;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *locals_PIL$ImageShow$$$class_7_XVViewer_206 = NULL;
    struct Nuitka_FrameObject *frame_f42e6bf5cb1a19adc70bcca2aedcfa8b_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    static struct Nuitka_FrameObject *cache_frame_f42e6bf5cb1a19adc70bcca2aedcfa8b_8 = NULL;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[70];
        UPDATE_STRING_DICT0(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_715a9122371f1315c4968ada47220423 = MAKE_MODULE_FRAME(codeobj_715a9122371f1315c4968ada47220423, module_PIL$ImageShow);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_715a9122371f1315c4968ada47220423);
    assert(Py_REFCNT(frame_715a9122371f1315c4968ada47220423) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = mod_consts[70];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[73], tmp_assattr_name_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[74], tmp_assattr_name_2);
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
        UPDATE_STRING_DICT0(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[33];
        tmp_globals_name_1 = (PyObject *)moduledict_PIL$ImageShow;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = mod_consts[2];
        frame_715a9122371f1315c4968ada47220423->m_frame.f_lineno = 14;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[76];
        tmp_globals_name_2 = (PyObject *)moduledict_PIL$ImageShow;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = mod_consts[2];
        frame_715a9122371f1315c4968ada47220423->m_frame.f_lineno = 15;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = mod_consts[54];
        tmp_globals_name_3 = (PyObject *)moduledict_PIL$ImageShow;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = mod_consts[2];
        frame_715a9122371f1315c4968ada47220423->m_frame.f_lineno = 16;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = mod_consts[77];
        tmp_globals_name_4 = (PyObject *)moduledict_PIL$ImageShow;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_4 = mod_consts[2];
        frame_715a9122371f1315c4968ada47220423->m_frame.f_lineno = 17;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        assert(!(tmp_assign_source_7 == NULL));
        UPDATE_STRING_DICT1(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = mod_consts[45];
        tmp_globals_name_5 = (PyObject *)moduledict_PIL$ImageShow;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = Py_None;
        tmp_level_name_5 = mod_consts[2];
        frame_715a9122371f1315c4968ada47220423->m_frame.f_lineno = 18;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = mod_consts[78];
        tmp_globals_name_6 = (PyObject *)moduledict_PIL$ImageShow;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = mod_consts[79];
        tmp_level_name_6 = mod_consts[2];
        frame_715a9122371f1315c4968ada47220423->m_frame.f_lineno = 19;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_PIL$ImageShow,
                mod_consts[42],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[42]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = mod_consts[80];
        tmp_globals_name_7 = (PyObject *)moduledict_PIL$ImageShow;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = mod_consts[81];
        tmp_level_name_7 = mod_consts[2];
        frame_715a9122371f1315c4968ada47220423->m_frame.f_lineno = 21;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_PIL$ImageShow,
                mod_consts[19],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[19]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = PyList_New(0);
        UPDATE_STRING_DICT1(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[82];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_12 = MAKE_FUNCTION_PIL$ImageShow$$$function_1_register(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[84];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_13 = MAKE_FUNCTION_PIL$ImageShow$$$function_2_show(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_dict_name_2;
        PyObject *tmp_key_name_2;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = mod_consts[85];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_name_1, tmp_key_name_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_name_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_name_2 = mod_consts[85];
        tmp_metaclass_name_1 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_2, tmp_key_name_2);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_1);
        condexpr_end_1:;
        tmp_bases_name_1 = mod_consts[86];
        tmp_assign_source_15 = SELECT_METACLASS(tmp_metaclass_name_1, tmp_bases_name_1);
        Py_DECREF(tmp_metaclass_name_1);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_15;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_name_3;
        tmp_key_name_3 = mod_consts[85];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_name_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_name_3, tmp_key_name_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = mod_consts[85];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 61;

        goto try_except_handler_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_1 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_1, mod_consts[87]);
        tmp_condition_result_3 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_kw_name_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_2 = tmp_class_creation_1__metaclass;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[87]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_1;
        }
        tmp_args_name_1 = mod_consts[88];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
        frame_715a9122371f1315c4968ada47220423->m_frame.f_lineno = 61;
        tmp_assign_source_16 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_16;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_expression_name_3;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_name_3 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_3, mod_consts[89]);
        tmp_operand_name_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_1;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_left_name_1 = mod_consts[90];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[91];
        tmp_getattr_default_1 = mod_consts[92];
        tmp_tuple_element_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_1;
        }
        tmp_right_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_4;
            PyObject *tmp_type_arg_1;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_1 = tmp_class_creation_1__prepared;
            tmp_expression_name_4 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_expression_name_4 == NULL));
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[91]);
            Py_DECREF(tmp_expression_name_4);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 61;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_17;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_18;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_PIL$ImageShow$$$class_1_Viewer_61 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[93];
        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_1_Viewer_61, mod_consts[94], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[95];
        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_1_Viewer_61, mod_consts[69], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[1];
        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_1_Viewer_61, mod_consts[96], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_3;
        }
        if (isFrameUnusable(cache_frame_d2aaa140733cc6a7a4e99d3c5a987a08_2)) {
            Py_XDECREF(cache_frame_d2aaa140733cc6a7a4e99d3c5a987a08_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_d2aaa140733cc6a7a4e99d3c5a987a08_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_d2aaa140733cc6a7a4e99d3c5a987a08_2 = MAKE_FUNCTION_FRAME(codeobj_d2aaa140733cc6a7a4e99d3c5a987a08, module_PIL$ImageShow, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_d2aaa140733cc6a7a4e99d3c5a987a08_2->m_type_description == NULL);
        frame_d2aaa140733cc6a7a4e99d3c5a987a08_2 = cache_frame_d2aaa140733cc6a7a4e99d3c5a987a08_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_d2aaa140733cc6a7a4e99d3c5a987a08_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_d2aaa140733cc6a7a4e99d3c5a987a08_2) == 2); // Frame stack

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_PIL$ImageShow$$$function_3_show();

        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_1_Viewer_61, mod_consts[8], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_1_Viewer_61, mod_consts[16], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = PyDict_New();
        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_1_Viewer_61, mod_consts[11], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_PIL$ImageShow$$$function_4_get_format();

        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_1_Viewer_61, mod_consts[28], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_PIL$ImageShow$$$function_5_get_command();

        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_1_Viewer_61, mod_consts[35], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_PIL$ImageShow$$$function_6_save_image();

        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_1_Viewer_61, mod_consts[31], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_PIL$ImageShow$$$function_7_show_image();

        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_1_Viewer_61, mod_consts[23], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_PIL$ImageShow$$$function_8_show_file();

        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_1_Viewer_61, mod_consts[30], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_d2aaa140733cc6a7a4e99d3c5a987a08_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_d2aaa140733cc6a7a4e99d3c5a987a08_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d2aaa140733cc6a7a4e99d3c5a987a08_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d2aaa140733cc6a7a4e99d3c5a987a08_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d2aaa140733cc6a7a4e99d3c5a987a08_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d2aaa140733cc6a7a4e99d3c5a987a08_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_d2aaa140733cc6a7a4e99d3c5a987a08_2 == cache_frame_d2aaa140733cc6a7a4e99d3c5a987a08_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_d2aaa140733cc6a7a4e99d3c5a987a08_2);
            cache_frame_d2aaa140733cc6a7a4e99d3c5a987a08_2 = NULL;
        }

        assertFrameObject(frame_d2aaa140733cc6a7a4e99d3c5a987a08_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_2 = mod_consts[1];
            tmp_args_name_2 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_2, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[86];
            PyTuple_SET_ITEM0(tmp_args_name_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = locals_PIL$ImageShow$$$class_1_Viewer_61;
            PyTuple_SET_ITEM0(tmp_args_name_2, 2, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_715a9122371f1315c4968ada47220423->m_frame.f_lineno = 61;
            tmp_assign_source_19 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2);
            Py_DECREF(tmp_args_name_2);
            if (tmp_assign_source_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_19;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_18 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_18);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_PIL$ImageShow$$$class_1_Viewer_61);
        locals_PIL$ImageShow$$$class_1_Viewer_61 = NULL;
        goto try_return_handler_2;
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

        Py_DECREF(locals_PIL$ImageShow$$$class_1_Viewer_61);
        locals_PIL$ImageShow$$$class_1_Viewer_61 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
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

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 61;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_18);
    }
    goto try_end_1;
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

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_tuple_element_3;
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_4;
        }
        tmp_assign_source_20 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_20, 0, tmp_tuple_element_3);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_21 = impl___main__$$$function_9__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = PyDict_New();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_metaclass_name_2;
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_key_name_4;
        PyObject *tmp_dict_name_4;
        PyObject *tmp_dict_name_5;
        PyObject *tmp_key_name_5;
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_2;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_bases_name_2;
        tmp_key_name_4 = mod_consts[85];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_name_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_name_4, tmp_key_name_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_name_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_name_5 = mod_consts[85];
        tmp_metaclass_name_2 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_5, tmp_key_name_5);
        if (tmp_metaclass_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_4;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_4;
        }
        tmp_condition_result_6 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_name_5 = tmp_class_creation_2__bases;
        tmp_subscript_name_1 = mod_consts[2];
        tmp_type_arg_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_5, tmp_subscript_name_1, 0);
        if (tmp_type_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_4;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1(tmp_type_arg_2);
        Py_DECREF(tmp_type_arg_2);
        if (tmp_metaclass_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_4;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_2);
        condexpr_end_3:;
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_name_2 = tmp_class_creation_2__bases;
        tmp_assign_source_23 = SELECT_METACLASS(tmp_metaclass_name_2, tmp_bases_name_2);
        Py_DECREF(tmp_metaclass_name_2);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_23;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_key_name_6;
        PyObject *tmp_dict_name_6;
        tmp_key_name_6 = mod_consts[85];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_name_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_name_6, tmp_key_name_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
    tmp_dictdel_key = mod_consts[85];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 118;

        goto try_except_handler_4;
    }
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_expression_name_6;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_name_6 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_6, mod_consts[87]);
        tmp_condition_result_8 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kw_name_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_name_7 = tmp_class_creation_2__metaclass;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[87]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_4;
        }
        tmp_tuple_element_4 = mod_consts[103];
        tmp_args_name_3 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_3, 0, tmp_tuple_element_4);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_4 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_name_3, 1, tmp_tuple_element_4);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
        frame_715a9122371f1315c4968ada47220423->m_frame.f_lineno = 118;
        tmp_assign_source_24 = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_name_3);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_24;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_expression_name_8;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_name_8 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_8, mod_consts[89]);
        tmp_operand_name_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_4;
        }
        tmp_condition_result_9 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_left_name_2 = mod_consts[90];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[91];
        tmp_getattr_default_2 = mod_consts[92];
        tmp_tuple_element_5 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_4;
        }
        tmp_right_name_2 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_9;
            PyObject *tmp_type_arg_3;
            PyTuple_SET_ITEM(tmp_right_name_2, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_3 = tmp_class_creation_2__prepared;
            tmp_expression_name_9 = BUILTIN_TYPE1(tmp_type_arg_3);
            assert(!(tmp_expression_name_9 == NULL));
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[91]);
            Py_DECREF(tmp_expression_name_9);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_right_name_2, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_right_name_2);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 118;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_6:;
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = PyDict_New();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_25;
    }
    branch_end_5:;
    {
        PyObject *tmp_assign_source_26;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_PIL$ImageShow$$$class_2_WindowsViewer_118 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[93];
        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_2_WindowsViewer_118, mod_consts[94], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[104];
        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_2_WindowsViewer_118, mod_consts[69], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[103];
        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_2_WindowsViewer_118, mod_consts[96], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_6;
        }
        if (isFrameUnusable(cache_frame_9a00f5eb61b74b421ef99c82cb056089_3)) {
            Py_XDECREF(cache_frame_9a00f5eb61b74b421ef99c82cb056089_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_9a00f5eb61b74b421ef99c82cb056089_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_9a00f5eb61b74b421ef99c82cb056089_3 = MAKE_FUNCTION_FRAME(codeobj_9a00f5eb61b74b421ef99c82cb056089, module_PIL$ImageShow, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_9a00f5eb61b74b421ef99c82cb056089_3->m_type_description == NULL);
        frame_9a00f5eb61b74b421ef99c82cb056089_3 = cache_frame_9a00f5eb61b74b421ef99c82cb056089_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_9a00f5eb61b74b421ef99c82cb056089_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_9a00f5eb61b74b421ef99c82cb056089_3) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = mod_consts[17];
        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_2_WindowsViewer_118, mod_consts[16], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = PyDict_Copy(mod_consts[105]);
        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_2_WindowsViewer_118, mod_consts[11], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_PIL$ImageShow$$$function_9_get_command();

        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_2_WindowsViewer_118, mod_consts[35], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_9a00f5eb61b74b421ef99c82cb056089_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_9a00f5eb61b74b421ef99c82cb056089_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_9a00f5eb61b74b421ef99c82cb056089_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_9a00f5eb61b74b421ef99c82cb056089_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_9a00f5eb61b74b421ef99c82cb056089_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_9a00f5eb61b74b421ef99c82cb056089_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_9a00f5eb61b74b421ef99c82cb056089_3 == cache_frame_9a00f5eb61b74b421ef99c82cb056089_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_9a00f5eb61b74b421ef99c82cb056089_3);
            cache_frame_9a00f5eb61b74b421ef99c82cb056089_3 = NULL;
        }

        assertFrameObject(frame_9a00f5eb61b74b421ef99c82cb056089_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_6;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_compexpr_left_1 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_compexpr_right_1 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_10 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_1, tmp_compexpr_right_1);
            if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                goto branch_yes_7;
            } else {
                goto branch_no_7;
            }
            assert(tmp_condition_result_10 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_7:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_2_WindowsViewer_118, mod_consts[107], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_6;
        }
        branch_no_7:;
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kw_name_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_name_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_6 = mod_consts[103];
            tmp_args_name_4 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_4, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_6 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_name_4, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = locals_PIL$ImageShow$$$class_2_WindowsViewer_118;
            PyTuple_SET_ITEM0(tmp_args_name_4, 2, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_715a9122371f1315c4968ada47220423->m_frame.f_lineno = 118;
            tmp_assign_source_27 = CALL_FUNCTION(tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4);
            Py_DECREF(tmp_args_name_4);
            if (tmp_assign_source_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;

                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_27;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_26 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_26);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_PIL$ImageShow$$$class_2_WindowsViewer_118);
        locals_PIL$ImageShow$$$class_2_WindowsViewer_118 = NULL;
        goto try_return_handler_5;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_PIL$ImageShow$$$class_2_WindowsViewer_118);
        locals_PIL$ImageShow$$$class_2_WindowsViewer_118 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 118;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_26);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_2__bases);
    Py_DECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_tmp_condition_result_11_object_1;
        int tmp_truth_name_2;
        tmp_expression_name_10 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_expression_name_10 == NULL)) {
            tmp_expression_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_expression_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[108]);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = mod_consts[109];
        tmp_tmp_condition_result_11_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        if (tmp_tmp_condition_result_11_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_condition_result_11_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_11_object_1);

            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_11 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_11_object_1);
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_5 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_called_name_5 == NULL)) {
            tmp_called_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_args_element_name_1 == NULL)) {
            tmp_args_element_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
        }

        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        frame_715a9122371f1315c4968ada47220423->m_frame.f_lineno = 133;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_8:;
    // Tried code:
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_tuple_element_7;
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto try_except_handler_7;
        }
        tmp_assign_source_28 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_28, 0, tmp_tuple_element_7);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_29 = impl___main__$$$function_9__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = PyDict_New();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_metaclass_name_3;
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_key_name_7;
        PyObject *tmp_dict_name_7;
        PyObject *tmp_dict_name_8;
        PyObject *tmp_key_name_8;
        nuitka_bool tmp_condition_result_13;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_4;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_bases_name_3;
        tmp_key_name_7 = mod_consts[85];
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_name_7 = tmp_class_creation_3__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_name_7, tmp_key_name_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_12 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_name_8 = tmp_class_creation_3__class_decl_dict;
        tmp_key_name_8 = mod_consts[85];
        tmp_metaclass_name_3 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_8, tmp_key_name_8);
        if (tmp_metaclass_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto try_except_handler_7;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto try_except_handler_7;
        }
        tmp_condition_result_13 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_name_11 = tmp_class_creation_3__bases;
        tmp_subscript_name_2 = mod_consts[2];
        tmp_type_arg_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_11, tmp_subscript_name_2, 0);
        if (tmp_type_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto try_except_handler_7;
        }
        tmp_metaclass_name_3 = BUILTIN_TYPE1(tmp_type_arg_4);
        Py_DECREF(tmp_type_arg_4);
        if (tmp_metaclass_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto try_except_handler_7;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_name_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_3);
        condexpr_end_5:;
        condexpr_end_4:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_name_3 = tmp_class_creation_3__bases;
        tmp_assign_source_31 = SELECT_METACLASS(tmp_metaclass_name_3, tmp_bases_name_3);
        Py_DECREF(tmp_metaclass_name_3);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_31;
    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_key_name_9;
        PyObject *tmp_dict_name_9;
        tmp_key_name_9 = mod_consts[85];
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_name_9 = tmp_class_creation_3__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_name_9, tmp_key_name_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_14 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;
    tmp_dictdel_key = mod_consts[85];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 136;

        goto try_except_handler_7;
    }
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_expression_name_12;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_name_12 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_12, mod_consts[87]);
        tmp_condition_result_15 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_name_6;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_args_name_5;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_kw_name_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_name_13 = tmp_class_creation_3__metaclass;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[87]);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto try_except_handler_7;
        }
        tmp_tuple_element_8 = mod_consts[110];
        tmp_args_name_5 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_5, 0, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_8 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_name_5, 1, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;
        frame_715a9122371f1315c4968ada47220423->m_frame.f_lineno = 136;
        tmp_assign_source_32 = CALL_FUNCTION(tmp_called_name_6, tmp_args_name_5, tmp_kw_name_5);
        Py_DECREF(tmp_called_name_6);
        Py_DECREF(tmp_args_name_5);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_32;
    }
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_expression_name_14;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_name_14 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_14, mod_consts[89]);
        tmp_operand_name_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto try_except_handler_7;
        }
        tmp_condition_result_16 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_left_name_3 = mod_consts[90];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[91];
        tmp_getattr_default_3 = mod_consts[92];
        tmp_tuple_element_9 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto try_except_handler_7;
        }
        tmp_right_name_3 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_15;
            PyObject *tmp_type_arg_5;
            PyTuple_SET_ITEM(tmp_right_name_3, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_5 = tmp_class_creation_3__prepared;
            tmp_expression_name_15 = BUILTIN_TYPE1(tmp_type_arg_5);
            assert(!(tmp_expression_name_15 == NULL));
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, mod_consts[91]);
            Py_DECREF(tmp_expression_name_15);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_right_name_3, 1, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_right_name_3);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 136;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = PyDict_New();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_33;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_34;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_PIL$ImageShow$$$class_3_MacViewer_136 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[93];
        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_3_MacViewer_136, mod_consts[94], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[111];
        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_3_MacViewer_136, mod_consts[69], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[110];
        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_3_MacViewer_136, mod_consts[96], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto try_except_handler_9;
        }
        if (isFrameUnusable(cache_frame_d9cc1af8889b9305d3cde967d6161540_4)) {
            Py_XDECREF(cache_frame_d9cc1af8889b9305d3cde967d6161540_4);

#if _DEBUG_REFCOUNTS
            if (cache_frame_d9cc1af8889b9305d3cde967d6161540_4 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_d9cc1af8889b9305d3cde967d6161540_4 = MAKE_FUNCTION_FRAME(codeobj_d9cc1af8889b9305d3cde967d6161540, module_PIL$ImageShow, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_d9cc1af8889b9305d3cde967d6161540_4->m_type_description == NULL);
        frame_d9cc1af8889b9305d3cde967d6161540_4 = cache_frame_d9cc1af8889b9305d3cde967d6161540_4;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_d9cc1af8889b9305d3cde967d6161540_4);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_d9cc1af8889b9305d3cde967d6161540_4) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = mod_consts[17];
        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_3_MacViewer_136, mod_consts[16], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = PyDict_Copy(mod_consts[105]);
        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_3_MacViewer_136, mod_consts[11], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_PIL$ImageShow$$$function_10_get_command();

        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_3_MacViewer_136, mod_consts[35], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_PIL$ImageShow$$$function_11_show_file();

        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_3_MacViewer_136, mod_consts[30], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_d9cc1af8889b9305d3cde967d6161540_4);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_d9cc1af8889b9305d3cde967d6161540_4);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d9cc1af8889b9305d3cde967d6161540_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d9cc1af8889b9305d3cde967d6161540_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d9cc1af8889b9305d3cde967d6161540_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d9cc1af8889b9305d3cde967d6161540_4,
            type_description_2,
            outline_2_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_d9cc1af8889b9305d3cde967d6161540_4 == cache_frame_d9cc1af8889b9305d3cde967d6161540_4) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_d9cc1af8889b9305d3cde967d6161540_4);
            cache_frame_d9cc1af8889b9305d3cde967d6161540_4 = NULL;
        }

        assertFrameObject(frame_d9cc1af8889b9305d3cde967d6161540_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_9;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_compexpr_left_3 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_compexpr_right_3 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_17 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_3, tmp_compexpr_right_3);
            if (tmp_condition_result_17 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;

                goto try_except_handler_9;
            }
            if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
            assert(tmp_condition_result_17 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_12:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_3_MacViewer_136, mod_consts[107], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto try_except_handler_9;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_called_name_7;
            PyObject *tmp_args_name_6;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kw_name_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_name_7 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_10 = mod_consts[110];
            tmp_args_name_6 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_6, 0, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_10 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_name_6, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = locals_PIL$ImageShow$$$class_3_MacViewer_136;
            PyTuple_SET_ITEM0(tmp_args_name_6, 2, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;
            frame_715a9122371f1315c4968ada47220423->m_frame.f_lineno = 136;
            tmp_assign_source_35 = CALL_FUNCTION(tmp_called_name_7, tmp_args_name_6, tmp_kw_name_6);
            Py_DECREF(tmp_args_name_6);
            if (tmp_assign_source_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;

                goto try_except_handler_9;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_35;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_34 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_34);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_PIL$ImageShow$$$class_3_MacViewer_136);
        locals_PIL$ImageShow$$$class_3_MacViewer_136 = NULL;
        goto try_return_handler_8;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_PIL$ImageShow$$$class_3_MacViewer_136);
        locals_PIL$ImageShow$$$class_3_MacViewer_136 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 136;
        goto try_except_handler_7;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_34);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_class_creation_3__bases_orig);
    Py_DECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_3__bases);
    Py_DECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_expression_name_16;
        PyObject *tmp_tmp_condition_result_18_object_1;
        int tmp_truth_name_4;
        tmp_expression_name_16 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_expression_name_16 == NULL)) {
            tmp_expression_name_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_expression_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, mod_consts[108]);
        if (tmp_compexpr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_4 = mod_consts[114];
        tmp_tmp_condition_result_18_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        Py_DECREF(tmp_compexpr_left_4);
        if (tmp_tmp_condition_result_18_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_tmp_condition_result_18_object_1);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_18_object_1);

            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_18 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_18_object_1);
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_called_name_8;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_8 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_called_name_8 == NULL)) {
            tmp_called_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_args_element_name_2 == NULL)) {
            tmp_args_element_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        frame_715a9122371f1315c4968ada47220423->m_frame.f_lineno = 165;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_13:;
    // Tried code:
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_tuple_element_11;
        tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_tuple_element_11 == NULL)) {
            tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto try_except_handler_10;
        }
        tmp_assign_source_36 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_36, 0, tmp_tuple_element_11);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_37 = impl___main__$$$function_9__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = PyDict_New();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_metaclass_name_4;
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_key_name_10;
        PyObject *tmp_dict_name_10;
        PyObject *tmp_dict_name_11;
        PyObject *tmp_key_name_11;
        nuitka_bool tmp_condition_result_20;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_6;
        PyObject *tmp_expression_name_17;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_bases_name_4;
        tmp_key_name_10 = mod_consts[85];
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_name_10 = tmp_class_creation_4__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_name_10, tmp_key_name_10);
        assert(!(tmp_res == -1));
        tmp_condition_result_19 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_name_11 = tmp_class_creation_4__class_decl_dict;
        tmp_key_name_11 = mod_consts[85];
        tmp_metaclass_name_4 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_11, tmp_key_name_11);
        if (tmp_metaclass_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto try_except_handler_10;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto try_except_handler_10;
        }
        tmp_condition_result_20 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_name_17 = tmp_class_creation_4__bases;
        tmp_subscript_name_3 = mod_consts[2];
        tmp_type_arg_6 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_17, tmp_subscript_name_3, 0);
        if (tmp_type_arg_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto try_except_handler_10;
        }
        tmp_metaclass_name_4 = BUILTIN_TYPE1(tmp_type_arg_6);
        Py_DECREF(tmp_type_arg_6);
        if (tmp_metaclass_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto try_except_handler_10;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        tmp_metaclass_name_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_4);
        condexpr_end_7:;
        condexpr_end_6:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_name_4 = tmp_class_creation_4__bases;
        tmp_assign_source_39 = SELECT_METACLASS(tmp_metaclass_name_4, tmp_bases_name_4);
        Py_DECREF(tmp_metaclass_name_4);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_39;
    }
    {
        nuitka_bool tmp_condition_result_21;
        PyObject *tmp_key_name_12;
        PyObject *tmp_dict_name_12;
        tmp_key_name_12 = mod_consts[85];
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_name_12 = tmp_class_creation_4__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_name_12, tmp_key_name_12);
        assert(!(tmp_res == -1));
        tmp_condition_result_21 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_4__class_decl_dict;
    tmp_dictdel_key = mod_consts[85];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 168;

        goto try_except_handler_10;
    }
    branch_no_14:;
    {
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_expression_name_18;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_name_18 = tmp_class_creation_4__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_18, mod_consts[87]);
        tmp_condition_result_22 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_name_9;
        PyObject *tmp_expression_name_19;
        PyObject *tmp_args_name_7;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_kw_name_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_name_19 = tmp_class_creation_4__metaclass;
        tmp_called_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_19, mod_consts[87]);
        if (tmp_called_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto try_except_handler_10;
        }
        tmp_tuple_element_12 = mod_consts[115];
        tmp_args_name_7 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_7, 0, tmp_tuple_element_12);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_12 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_name_7, 1, tmp_tuple_element_12);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kw_name_7 = tmp_class_creation_4__class_decl_dict;
        frame_715a9122371f1315c4968ada47220423->m_frame.f_lineno = 168;
        tmp_assign_source_40 = CALL_FUNCTION(tmp_called_name_9, tmp_args_name_7, tmp_kw_name_7);
        Py_DECREF(tmp_called_name_9);
        Py_DECREF(tmp_args_name_7);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_40;
    }
    {
        nuitka_bool tmp_condition_result_23;
        PyObject *tmp_operand_name_4;
        PyObject *tmp_expression_name_20;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_name_20 = tmp_class_creation_4__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_20, mod_consts[89]);
        tmp_operand_name_4 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto try_except_handler_10;
        }
        tmp_condition_result_23 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_getattr_target_4;
        PyObject *tmp_getattr_attr_4;
        PyObject *tmp_getattr_default_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_left_name_4 = mod_consts[90];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_getattr_target_4 = tmp_class_creation_4__metaclass;
        tmp_getattr_attr_4 = mod_consts[91];
        tmp_getattr_default_4 = mod_consts[92];
        tmp_tuple_element_13 = BUILTIN_GETATTR(tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4);
        if (tmp_tuple_element_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto try_except_handler_10;
        }
        tmp_right_name_4 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_21;
            PyObject *tmp_type_arg_7;
            PyTuple_SET_ITEM(tmp_right_name_4, 0, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_7 = tmp_class_creation_4__prepared;
            tmp_expression_name_21 = BUILTIN_TYPE1(tmp_type_arg_7);
            assert(!(tmp_expression_name_21 == NULL));
            tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_21, mod_consts[91]);
            Py_DECREF(tmp_expression_name_21);
            if (tmp_tuple_element_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_right_name_4, 1, tmp_tuple_element_13);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_right_name_4);
        goto try_except_handler_10;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_4, tmp_right_name_4);
        Py_DECREF(tmp_right_name_4);
        if (tmp_raise_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto try_except_handler_10;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 168;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_10;
    }
    branch_no_16:;
    goto branch_end_15;
    branch_no_15:;
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = PyDict_New();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_41;
    }
    branch_end_15:;
    {
        PyObject *tmp_assign_source_42;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_PIL$ImageShow$$$class_4_UnixViewer_168 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[93];
        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_4_UnixViewer_168, mod_consts[94], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[115];
        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_4_UnixViewer_168, mod_consts[96], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto try_except_handler_12;
        }
        if (isFrameUnusable(cache_frame_ab160c17dda465036ae9d8df253ebfa5_5)) {
            Py_XDECREF(cache_frame_ab160c17dda465036ae9d8df253ebfa5_5);

#if _DEBUG_REFCOUNTS
            if (cache_frame_ab160c17dda465036ae9d8df253ebfa5_5 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_ab160c17dda465036ae9d8df253ebfa5_5 = MAKE_FUNCTION_FRAME(codeobj_ab160c17dda465036ae9d8df253ebfa5, module_PIL$ImageShow, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_ab160c17dda465036ae9d8df253ebfa5_5->m_type_description == NULL);
        frame_ab160c17dda465036ae9d8df253ebfa5_5 = cache_frame_ab160c17dda465036ae9d8df253ebfa5_5;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_ab160c17dda465036ae9d8df253ebfa5_5);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_ab160c17dda465036ae9d8df253ebfa5_5) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = mod_consts[17];
        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_4_UnixViewer_168, mod_consts[16], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_dictset_value = PyDict_Copy(mod_consts[105]);
        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_4_UnixViewer_168, mod_consts[11], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_PIL$ImageShow$$$function_12_get_command();

        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_4_UnixViewer_168, mod_consts[35], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_PIL$ImageShow$$$function_13_show_file();

        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_4_UnixViewer_168, mod_consts[30], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_ab160c17dda465036ae9d8df253ebfa5_5);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;

        frame_exception_exit_5:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_ab160c17dda465036ae9d8df253ebfa5_5);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ab160c17dda465036ae9d8df253ebfa5_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ab160c17dda465036ae9d8df253ebfa5_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ab160c17dda465036ae9d8df253ebfa5_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ab160c17dda465036ae9d8df253ebfa5_5,
            type_description_2,
            outline_3_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_ab160c17dda465036ae9d8df253ebfa5_5 == cache_frame_ab160c17dda465036ae9d8df253ebfa5_5) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_ab160c17dda465036ae9d8df253ebfa5_5);
            cache_frame_ab160c17dda465036ae9d8df253ebfa5_5 = NULL;
        }

        assertFrameObject(frame_ab160c17dda465036ae9d8df253ebfa5_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;

        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_12;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_compexpr_left_5 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_compexpr_right_5 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_24 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_5, tmp_compexpr_right_5);
            if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto try_except_handler_12;
            }
            if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
                goto branch_yes_17;
            } else {
                goto branch_no_17;
            }
            assert(tmp_condition_result_24 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_17:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_4_UnixViewer_168, mod_consts[107], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto try_except_handler_12;
        }
        branch_no_17:;
        {
            PyObject *tmp_assign_source_43;
            PyObject *tmp_called_name_10;
            PyObject *tmp_args_name_8;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_kw_name_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_name_10 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_14 = mod_consts[115];
            tmp_args_name_8 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_8, 0, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_14 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_name_8, 1, tmp_tuple_element_14);
            tmp_tuple_element_14 = locals_PIL$ImageShow$$$class_4_UnixViewer_168;
            PyTuple_SET_ITEM0(tmp_args_name_8, 2, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kw_name_8 = tmp_class_creation_4__class_decl_dict;
            frame_715a9122371f1315c4968ada47220423->m_frame.f_lineno = 168;
            tmp_assign_source_43 = CALL_FUNCTION(tmp_called_name_10, tmp_args_name_8, tmp_kw_name_8);
            Py_DECREF(tmp_args_name_8);
            if (tmp_assign_source_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto try_except_handler_12;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_43;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_42 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_42);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_PIL$ImageShow$$$class_4_UnixViewer_168);
        locals_PIL$ImageShow$$$class_4_UnixViewer_168 = NULL;
        goto try_return_handler_11;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_PIL$ImageShow$$$class_4_UnixViewer_168);
        locals_PIL$ImageShow$$$class_4_UnixViewer_168 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 168;
        goto try_except_handler_10;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_42);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_4__bases_orig);
    Py_DECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_4__bases);
    Py_DECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_tuple_element_15;
        tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_tuple_element_15 == NULL)) {
            tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_tuple_element_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_13;
        }
        tmp_assign_source_44 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_44, 0, tmp_tuple_element_15);
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_45 = impl___main__$$$function_9__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = PyDict_New();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_metaclass_name_5;
        nuitka_bool tmp_condition_result_25;
        PyObject *tmp_key_name_13;
        PyObject *tmp_dict_name_13;
        PyObject *tmp_dict_name_14;
        PyObject *tmp_key_name_14;
        nuitka_bool tmp_condition_result_26;
        int tmp_truth_name_6;
        PyObject *tmp_type_arg_8;
        PyObject *tmp_expression_name_22;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_bases_name_5;
        tmp_key_name_13 = mod_consts[85];
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_name_13 = tmp_class_creation_5__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_name_13, tmp_key_name_13);
        assert(!(tmp_res == -1));
        tmp_condition_result_25 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_name_14 = tmp_class_creation_5__class_decl_dict;
        tmp_key_name_14 = mod_consts[85];
        tmp_metaclass_name_5 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_14, tmp_key_name_14);
        if (tmp_metaclass_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_13;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_13;
        }
        tmp_condition_result_26 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_9;
        } else {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_name_22 = tmp_class_creation_5__bases;
        tmp_subscript_name_4 = mod_consts[2];
        tmp_type_arg_8 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_22, tmp_subscript_name_4, 0);
        if (tmp_type_arg_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_13;
        }
        tmp_metaclass_name_5 = BUILTIN_TYPE1(tmp_type_arg_8);
        Py_DECREF(tmp_type_arg_8);
        if (tmp_metaclass_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_13;
        }
        goto condexpr_end_9;
        condexpr_false_9:;
        tmp_metaclass_name_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_5);
        condexpr_end_9:;
        condexpr_end_8:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_name_5 = tmp_class_creation_5__bases;
        tmp_assign_source_47 = SELECT_METACLASS(tmp_metaclass_name_5, tmp_bases_name_5);
        Py_DECREF(tmp_metaclass_name_5);
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_47;
    }
    {
        nuitka_bool tmp_condition_result_27;
        PyObject *tmp_key_name_15;
        PyObject *tmp_dict_name_15;
        tmp_key_name_15 = mod_consts[85];
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_name_15 = tmp_class_creation_5__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_name_15, tmp_key_name_15);
        assert(!(tmp_res == -1));
        tmp_condition_result_27 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_5__class_decl_dict;
    tmp_dictdel_key = mod_consts[85];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 190;

        goto try_except_handler_13;
    }
    branch_no_18:;
    {
        nuitka_bool tmp_condition_result_28;
        PyObject *tmp_expression_name_23;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_name_23 = tmp_class_creation_5__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_23, mod_consts[87]);
        tmp_condition_result_28 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_name_11;
        PyObject *tmp_expression_name_24;
        PyObject *tmp_args_name_9;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_kw_name_9;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_name_24 = tmp_class_creation_5__metaclass;
        tmp_called_name_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_24, mod_consts[87]);
        if (tmp_called_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_13;
        }
        tmp_tuple_element_16 = mod_consts[118];
        tmp_args_name_9 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_9, 0, tmp_tuple_element_16);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_16 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_name_9, 1, tmp_tuple_element_16);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kw_name_9 = tmp_class_creation_5__class_decl_dict;
        frame_715a9122371f1315c4968ada47220423->m_frame.f_lineno = 190;
        tmp_assign_source_48 = CALL_FUNCTION(tmp_called_name_11, tmp_args_name_9, tmp_kw_name_9);
        Py_DECREF(tmp_called_name_11);
        Py_DECREF(tmp_args_name_9);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_48;
    }
    {
        nuitka_bool tmp_condition_result_29;
        PyObject *tmp_operand_name_5;
        PyObject *tmp_expression_name_25;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_name_25 = tmp_class_creation_5__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_25, mod_consts[89]);
        tmp_operand_name_5 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_13;
        }
        tmp_condition_result_29 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_raise_value_5;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_getattr_target_5;
        PyObject *tmp_getattr_attr_5;
        PyObject *tmp_getattr_default_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_left_name_5 = mod_consts[90];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_getattr_target_5 = tmp_class_creation_5__metaclass;
        tmp_getattr_attr_5 = mod_consts[91];
        tmp_getattr_default_5 = mod_consts[92];
        tmp_tuple_element_17 = BUILTIN_GETATTR(tmp_getattr_target_5, tmp_getattr_attr_5, tmp_getattr_default_5);
        if (tmp_tuple_element_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_13;
        }
        tmp_right_name_5 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_26;
            PyObject *tmp_type_arg_9;
            PyTuple_SET_ITEM(tmp_right_name_5, 0, tmp_tuple_element_17);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_9 = tmp_class_creation_5__prepared;
            tmp_expression_name_26 = BUILTIN_TYPE1(tmp_type_arg_9);
            assert(!(tmp_expression_name_26 == NULL));
            tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tmp_expression_name_26, mod_consts[91]);
            Py_DECREF(tmp_expression_name_26);
            if (tmp_tuple_element_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_right_name_5, 1, tmp_tuple_element_17);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_right_name_5);
        goto try_except_handler_13;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_5, tmp_right_name_5);
        Py_DECREF(tmp_right_name_5);
        if (tmp_raise_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_13;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 190;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_13;
    }
    branch_no_20:;
    goto branch_end_19;
    branch_no_19:;
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = PyDict_New();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_49;
    }
    branch_end_19:;
    {
        PyObject *tmp_assign_source_50;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_PIL$ImageShow$$$class_5_DisplayViewer_190 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[93];
        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_5_DisplayViewer_190, mod_consts[94], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[119];
        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_5_DisplayViewer_190, mod_consts[69], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[118];
        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_5_DisplayViewer_190, mod_consts[96], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_15;
        }
        if (isFrameUnusable(cache_frame_5ac3b53fa818def85aed60cc0757a83c_6)) {
            Py_XDECREF(cache_frame_5ac3b53fa818def85aed60cc0757a83c_6);

#if _DEBUG_REFCOUNTS
            if (cache_frame_5ac3b53fa818def85aed60cc0757a83c_6 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_5ac3b53fa818def85aed60cc0757a83c_6 = MAKE_FUNCTION_FRAME(codeobj_5ac3b53fa818def85aed60cc0757a83c, module_PIL$ImageShow, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_5ac3b53fa818def85aed60cc0757a83c_6->m_type_description == NULL);
        frame_5ac3b53fa818def85aed60cc0757a83c_6 = cache_frame_5ac3b53fa818def85aed60cc0757a83c_6;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_5ac3b53fa818def85aed60cc0757a83c_6);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_5ac3b53fa818def85aed60cc0757a83c_6) == 2); // Frame stack

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_PIL$ImageShow$$$function_14_get_command_ex();

        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_5_DisplayViewer_190, mod_consts[61], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_5ac3b53fa818def85aed60cc0757a83c_6);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;

        frame_exception_exit_6:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_5ac3b53fa818def85aed60cc0757a83c_6);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_5ac3b53fa818def85aed60cc0757a83c_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_5ac3b53fa818def85aed60cc0757a83c_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_5ac3b53fa818def85aed60cc0757a83c_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_5ac3b53fa818def85aed60cc0757a83c_6,
            type_description_2,
            outline_4_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_5ac3b53fa818def85aed60cc0757a83c_6 == cache_frame_5ac3b53fa818def85aed60cc0757a83c_6) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_5ac3b53fa818def85aed60cc0757a83c_6);
            cache_frame_5ac3b53fa818def85aed60cc0757a83c_6 = NULL;
        }

        assertFrameObject(frame_5ac3b53fa818def85aed60cc0757a83c_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;

        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_15;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_30;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_compexpr_left_6 = tmp_class_creation_5__bases;
            CHECK_OBJECT(tmp_class_creation_5__bases_orig);
            tmp_compexpr_right_6 = tmp_class_creation_5__bases_orig;
            tmp_condition_result_30 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_6, tmp_compexpr_right_6);
            if (tmp_condition_result_30 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;

                goto try_except_handler_15;
            }
            if (tmp_condition_result_30 == NUITKA_BOOL_TRUE) {
                goto branch_yes_21;
            } else {
                goto branch_no_21;
            }
            assert(tmp_condition_result_30 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_21:;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dictset_value = tmp_class_creation_5__bases_orig;
        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_5_DisplayViewer_190, mod_consts[107], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_15;
        }
        branch_no_21:;
        {
            PyObject *tmp_assign_source_51;
            PyObject *tmp_called_name_12;
            PyObject *tmp_args_name_10;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_kw_name_10;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_name_12 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_18 = mod_consts[118];
            tmp_args_name_10 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_10, 0, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_18 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_name_10, 1, tmp_tuple_element_18);
            tmp_tuple_element_18 = locals_PIL$ImageShow$$$class_5_DisplayViewer_190;
            PyTuple_SET_ITEM0(tmp_args_name_10, 2, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kw_name_10 = tmp_class_creation_5__class_decl_dict;
            frame_715a9122371f1315c4968ada47220423->m_frame.f_lineno = 190;
            tmp_assign_source_51 = CALL_FUNCTION(tmp_called_name_12, tmp_args_name_10, tmp_kw_name_10);
            Py_DECREF(tmp_args_name_10);
            if (tmp_assign_source_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;

                goto try_except_handler_15;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_51;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_50 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_50);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_PIL$ImageShow$$$class_5_DisplayViewer_190);
        locals_PIL$ImageShow$$$class_5_DisplayViewer_190 = NULL;
        goto try_return_handler_14;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_PIL$ImageShow$$$class_5_DisplayViewer_190);
        locals_PIL$ImageShow$$$class_5_DisplayViewer_190 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 190;
        goto try_except_handler_13;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_50);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    Py_XDECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_class_creation_5__bases_orig);
    Py_DECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_5__bases);
    Py_DECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_tuple_element_19;
        tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_tuple_element_19 == NULL)) {
            tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_tuple_element_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_16;
        }
        tmp_assign_source_52 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_52, 0, tmp_tuple_element_19);
        assert(tmp_class_creation_6__bases_orig == NULL);
        tmp_class_creation_6__bases_orig = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dircall_arg1_5 = tmp_class_creation_6__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_53 = impl___main__$$$function_9__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = PyDict_New();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_54;
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_metaclass_name_6;
        nuitka_bool tmp_condition_result_31;
        PyObject *tmp_key_name_16;
        PyObject *tmp_dict_name_16;
        PyObject *tmp_dict_name_17;
        PyObject *tmp_key_name_17;
        nuitka_bool tmp_condition_result_32;
        int tmp_truth_name_7;
        PyObject *tmp_type_arg_10;
        PyObject *tmp_expression_name_27;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_bases_name_6;
        tmp_key_name_16 = mod_consts[85];
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_dict_name_16 = tmp_class_creation_6__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_name_16, tmp_key_name_16);
        assert(!(tmp_res == -1));
        tmp_condition_result_31 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_31 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_10;
        } else {
            goto condexpr_false_10;
        }
        condexpr_true_10:;
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_dict_name_17 = tmp_class_creation_6__class_decl_dict;
        tmp_key_name_17 = mod_consts[85];
        tmp_metaclass_name_6 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_17, tmp_key_name_17);
        if (tmp_metaclass_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_16;
        }
        goto condexpr_end_10;
        condexpr_false_10:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_creation_6__bases);
        if (tmp_truth_name_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_16;
        }
        tmp_condition_result_32 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_11;
        } else {
            goto condexpr_false_11;
        }
        condexpr_true_11:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_expression_name_27 = tmp_class_creation_6__bases;
        tmp_subscript_name_5 = mod_consts[2];
        tmp_type_arg_10 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_27, tmp_subscript_name_5, 0);
        if (tmp_type_arg_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_16;
        }
        tmp_metaclass_name_6 = BUILTIN_TYPE1(tmp_type_arg_10);
        Py_DECREF(tmp_type_arg_10);
        if (tmp_metaclass_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_16;
        }
        goto condexpr_end_11;
        condexpr_false_11:;
        tmp_metaclass_name_6 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_6);
        condexpr_end_11:;
        condexpr_end_10:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_bases_name_6 = tmp_class_creation_6__bases;
        tmp_assign_source_55 = SELECT_METACLASS(tmp_metaclass_name_6, tmp_bases_name_6);
        Py_DECREF(tmp_metaclass_name_6);
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_55;
    }
    {
        nuitka_bool tmp_condition_result_33;
        PyObject *tmp_key_name_18;
        PyObject *tmp_dict_name_18;
        tmp_key_name_18 = mod_consts[85];
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_dict_name_18 = tmp_class_creation_6__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_name_18, tmp_key_name_18);
        assert(!(tmp_res == -1));
        tmp_condition_result_33 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_6__class_decl_dict;
    tmp_dictdel_key = mod_consts[85];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 198;

        goto try_except_handler_16;
    }
    branch_no_22:;
    {
        nuitka_bool tmp_condition_result_34;
        PyObject *tmp_expression_name_28;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_name_28 = tmp_class_creation_6__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_28, mod_consts[87]);
        tmp_condition_result_34 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_34 == NUITKA_BOOL_TRUE) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_called_name_13;
        PyObject *tmp_expression_name_29;
        PyObject *tmp_args_name_11;
        PyObject *tmp_tuple_element_20;
        PyObject *tmp_kw_name_11;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_name_29 = tmp_class_creation_6__metaclass;
        tmp_called_name_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_29, mod_consts[87]);
        if (tmp_called_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_16;
        }
        tmp_tuple_element_20 = mod_consts[122];
        tmp_args_name_11 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_11, 0, tmp_tuple_element_20);
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_tuple_element_20 = tmp_class_creation_6__bases;
        PyTuple_SET_ITEM0(tmp_args_name_11, 1, tmp_tuple_element_20);
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kw_name_11 = tmp_class_creation_6__class_decl_dict;
        frame_715a9122371f1315c4968ada47220423->m_frame.f_lineno = 198;
        tmp_assign_source_56 = CALL_FUNCTION(tmp_called_name_13, tmp_args_name_11, tmp_kw_name_11);
        Py_DECREF(tmp_called_name_13);
        Py_DECREF(tmp_args_name_11);
        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_56;
    }
    {
        nuitka_bool tmp_condition_result_35;
        PyObject *tmp_operand_name_6;
        PyObject *tmp_expression_name_30;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_name_30 = tmp_class_creation_6__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_30, mod_consts[89]);
        tmp_operand_name_6 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_16;
        }
        tmp_condition_result_35 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_35 == NUITKA_BOOL_TRUE) {
            goto branch_yes_24;
        } else {
            goto branch_no_24;
        }
    }
    branch_yes_24:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_raise_value_6;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_tuple_element_21;
        PyObject *tmp_getattr_target_6;
        PyObject *tmp_getattr_attr_6;
        PyObject *tmp_getattr_default_6;
        tmp_raise_type_6 = PyExc_TypeError;
        tmp_left_name_6 = mod_consts[90];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_getattr_target_6 = tmp_class_creation_6__metaclass;
        tmp_getattr_attr_6 = mod_consts[91];
        tmp_getattr_default_6 = mod_consts[92];
        tmp_tuple_element_21 = BUILTIN_GETATTR(tmp_getattr_target_6, tmp_getattr_attr_6, tmp_getattr_default_6);
        if (tmp_tuple_element_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_16;
        }
        tmp_right_name_6 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_31;
            PyObject *tmp_type_arg_11;
            PyTuple_SET_ITEM(tmp_right_name_6, 0, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_11 = tmp_class_creation_6__prepared;
            tmp_expression_name_31 = BUILTIN_TYPE1(tmp_type_arg_11);
            assert(!(tmp_expression_name_31 == NULL));
            tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tmp_expression_name_31, mod_consts[91]);
            Py_DECREF(tmp_expression_name_31);
            if (tmp_tuple_element_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_right_name_6, 1, tmp_tuple_element_21);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_right_name_6);
        goto try_except_handler_16;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_6, tmp_right_name_6);
        Py_DECREF(tmp_right_name_6);
        if (tmp_raise_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_16;
        }
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_value = tmp_raise_value_6;
        exception_lineno = 198;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_16;
    }
    branch_no_24:;
    goto branch_end_23;
    branch_no_23:;
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = PyDict_New();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_57;
    }
    branch_end_23:;
    {
        PyObject *tmp_assign_source_58;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_PIL$ImageShow$$$class_6_EogViewer_198 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[93];
        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_6_EogViewer_198, mod_consts[94], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_18;
        }
        tmp_dictset_value = mod_consts[123];
        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_6_EogViewer_198, mod_consts[69], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_18;
        }
        tmp_dictset_value = mod_consts[122];
        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_6_EogViewer_198, mod_consts[96], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_18;
        }
        if (isFrameUnusable(cache_frame_02d23532147a4a2747ae898a645e667f_7)) {
            Py_XDECREF(cache_frame_02d23532147a4a2747ae898a645e667f_7);

#if _DEBUG_REFCOUNTS
            if (cache_frame_02d23532147a4a2747ae898a645e667f_7 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_02d23532147a4a2747ae898a645e667f_7 = MAKE_FUNCTION_FRAME(codeobj_02d23532147a4a2747ae898a645e667f, module_PIL$ImageShow, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_02d23532147a4a2747ae898a645e667f_7->m_type_description == NULL);
        frame_02d23532147a4a2747ae898a645e667f_7 = cache_frame_02d23532147a4a2747ae898a645e667f_7;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_02d23532147a4a2747ae898a645e667f_7);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_02d23532147a4a2747ae898a645e667f_7) == 2); // Frame stack

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_PIL$ImageShow$$$function_15_get_command_ex();

        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_6_EogViewer_198, mod_consts[61], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_2 = "o";
            goto frame_exception_exit_7;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_02d23532147a4a2747ae898a645e667f_7);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_6;

        frame_exception_exit_7:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_02d23532147a4a2747ae898a645e667f_7);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_02d23532147a4a2747ae898a645e667f_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_02d23532147a4a2747ae898a645e667f_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_02d23532147a4a2747ae898a645e667f_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_02d23532147a4a2747ae898a645e667f_7,
            type_description_2,
            outline_5_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_02d23532147a4a2747ae898a645e667f_7 == cache_frame_02d23532147a4a2747ae898a645e667f_7) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_02d23532147a4a2747ae898a645e667f_7);
            cache_frame_02d23532147a4a2747ae898a645e667f_7 = NULL;
        }

        assertFrameObject(frame_02d23532147a4a2747ae898a645e667f_7);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_6;

        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_18;
        skip_nested_handling_6:;
        {
            nuitka_bool tmp_condition_result_36;
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_compexpr_left_7 = tmp_class_creation_6__bases;
            CHECK_OBJECT(tmp_class_creation_6__bases_orig);
            tmp_compexpr_right_7 = tmp_class_creation_6__bases_orig;
            tmp_condition_result_36 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_7, tmp_compexpr_right_7);
            if (tmp_condition_result_36 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;

                goto try_except_handler_18;
            }
            if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
                goto branch_yes_25;
            } else {
                goto branch_no_25;
            }
            assert(tmp_condition_result_36 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_25:;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dictset_value = tmp_class_creation_6__bases_orig;
        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_6_EogViewer_198, mod_consts[107], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_18;
        }
        branch_no_25:;
        {
            PyObject *tmp_assign_source_59;
            PyObject *tmp_called_name_14;
            PyObject *tmp_args_name_12;
            PyObject *tmp_tuple_element_22;
            PyObject *tmp_kw_name_12;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_name_14 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_22 = mod_consts[122];
            tmp_args_name_12 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_12, 0, tmp_tuple_element_22);
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_tuple_element_22 = tmp_class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_name_12, 1, tmp_tuple_element_22);
            tmp_tuple_element_22 = locals_PIL$ImageShow$$$class_6_EogViewer_198;
            PyTuple_SET_ITEM0(tmp_args_name_12, 2, tmp_tuple_element_22);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kw_name_12 = tmp_class_creation_6__class_decl_dict;
            frame_715a9122371f1315c4968ada47220423->m_frame.f_lineno = 198;
            tmp_assign_source_59 = CALL_FUNCTION(tmp_called_name_14, tmp_args_name_12, tmp_kw_name_12);
            Py_DECREF(tmp_args_name_12);
            if (tmp_assign_source_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;

                goto try_except_handler_18;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_59;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_assign_source_58 = outline_5_var___class__;
        Py_INCREF(tmp_assign_source_58);
        goto try_return_handler_18;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        Py_DECREF(locals_PIL$ImageShow$$$class_6_EogViewer_198);
        locals_PIL$ImageShow$$$class_6_EogViewer_198 = NULL;
        goto try_return_handler_17;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_PIL$ImageShow$$$class_6_EogViewer_198);
        locals_PIL$ImageShow$$$class_6_EogViewer_198 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto try_except_handler_17;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 198;
        goto try_except_handler_16;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_58);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    Py_XDECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_class_creation_6__bases_orig);
    Py_DECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_6__bases);
    Py_DECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    Py_DECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_6__prepared);
    Py_DECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_tuple_element_23;
        tmp_tuple_element_23 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_tuple_element_23 == NULL)) {
            tmp_tuple_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_tuple_element_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto try_except_handler_19;
        }
        tmp_assign_source_60 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_60, 0, tmp_tuple_element_23);
        assert(tmp_class_creation_7__bases_orig == NULL);
        tmp_class_creation_7__bases_orig = tmp_assign_source_60;
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_dircall_arg1_6;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dircall_arg1_6 = tmp_class_creation_7__bases_orig;
        Py_INCREF(tmp_dircall_arg1_6);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
            tmp_assign_source_61 = impl___main__$$$function_9__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_7__bases == NULL);
        tmp_class_creation_7__bases = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = PyDict_New();
        assert(tmp_class_creation_7__class_decl_dict == NULL);
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_62;
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_metaclass_name_7;
        nuitka_bool tmp_condition_result_37;
        PyObject *tmp_key_name_19;
        PyObject *tmp_dict_name_19;
        PyObject *tmp_dict_name_20;
        PyObject *tmp_key_name_20;
        nuitka_bool tmp_condition_result_38;
        int tmp_truth_name_8;
        PyObject *tmp_type_arg_12;
        PyObject *tmp_expression_name_32;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_bases_name_7;
        tmp_key_name_19 = mod_consts[85];
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_dict_name_19 = tmp_class_creation_7__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_name_19, tmp_key_name_19);
        assert(!(tmp_res == -1));
        tmp_condition_result_37 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_12;
        } else {
            goto condexpr_false_12;
        }
        condexpr_true_12:;
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_dict_name_20 = tmp_class_creation_7__class_decl_dict;
        tmp_key_name_20 = mod_consts[85];
        tmp_metaclass_name_7 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_20, tmp_key_name_20);
        if (tmp_metaclass_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto try_except_handler_19;
        }
        goto condexpr_end_12;
        condexpr_false_12:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_creation_7__bases);
        if (tmp_truth_name_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto try_except_handler_19;
        }
        tmp_condition_result_38 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_38 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_13;
        } else {
            goto condexpr_false_13;
        }
        condexpr_true_13:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_expression_name_32 = tmp_class_creation_7__bases;
        tmp_subscript_name_6 = mod_consts[2];
        tmp_type_arg_12 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_32, tmp_subscript_name_6, 0);
        if (tmp_type_arg_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto try_except_handler_19;
        }
        tmp_metaclass_name_7 = BUILTIN_TYPE1(tmp_type_arg_12);
        Py_DECREF(tmp_type_arg_12);
        if (tmp_metaclass_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto try_except_handler_19;
        }
        goto condexpr_end_13;
        condexpr_false_13:;
        tmp_metaclass_name_7 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_7);
        condexpr_end_13:;
        condexpr_end_12:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_bases_name_7 = tmp_class_creation_7__bases;
        tmp_assign_source_63 = SELECT_METACLASS(tmp_metaclass_name_7, tmp_bases_name_7);
        Py_DECREF(tmp_metaclass_name_7);
        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_63;
    }
    {
        nuitka_bool tmp_condition_result_39;
        PyObject *tmp_key_name_21;
        PyObject *tmp_dict_name_21;
        tmp_key_name_21 = mod_consts[85];
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_dict_name_21 = tmp_class_creation_7__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_name_21, tmp_key_name_21);
        assert(!(tmp_res == -1));
        tmp_condition_result_39 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_39 == NUITKA_BOOL_TRUE) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_7__class_decl_dict;
    tmp_dictdel_key = mod_consts[85];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 206;

        goto try_except_handler_19;
    }
    branch_no_26:;
    {
        nuitka_bool tmp_condition_result_40;
        PyObject *tmp_expression_name_33;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_name_33 = tmp_class_creation_7__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_33, mod_consts[87]);
        tmp_condition_result_40 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
            goto branch_yes_27;
        } else {
            goto branch_no_27;
        }
    }
    branch_yes_27:;
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_called_name_15;
        PyObject *tmp_expression_name_34;
        PyObject *tmp_args_name_13;
        PyObject *tmp_tuple_element_24;
        PyObject *tmp_kw_name_13;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_name_34 = tmp_class_creation_7__metaclass;
        tmp_called_name_15 = LOOKUP_ATTRIBUTE(tmp_expression_name_34, mod_consts[87]);
        if (tmp_called_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto try_except_handler_19;
        }
        tmp_tuple_element_24 = mod_consts[126];
        tmp_args_name_13 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_13, 0, tmp_tuple_element_24);
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_tuple_element_24 = tmp_class_creation_7__bases;
        PyTuple_SET_ITEM0(tmp_args_name_13, 1, tmp_tuple_element_24);
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_kw_name_13 = tmp_class_creation_7__class_decl_dict;
        frame_715a9122371f1315c4968ada47220423->m_frame.f_lineno = 206;
        tmp_assign_source_64 = CALL_FUNCTION(tmp_called_name_15, tmp_args_name_13, tmp_kw_name_13);
        Py_DECREF(tmp_called_name_15);
        Py_DECREF(tmp_args_name_13);
        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_64;
    }
    {
        nuitka_bool tmp_condition_result_41;
        PyObject *tmp_operand_name_7;
        PyObject *tmp_expression_name_35;
        CHECK_OBJECT(tmp_class_creation_7__prepared);
        tmp_expression_name_35 = tmp_class_creation_7__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_35, mod_consts[89]);
        tmp_operand_name_7 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto try_except_handler_19;
        }
        tmp_condition_result_41 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_41 == NUITKA_BOOL_TRUE) {
            goto branch_yes_28;
        } else {
            goto branch_no_28;
        }
    }
    branch_yes_28:;
    {
        PyObject *tmp_raise_type_7;
        PyObject *tmp_raise_value_7;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_tuple_element_25;
        PyObject *tmp_getattr_target_7;
        PyObject *tmp_getattr_attr_7;
        PyObject *tmp_getattr_default_7;
        tmp_raise_type_7 = PyExc_TypeError;
        tmp_left_name_7 = mod_consts[90];
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_getattr_target_7 = tmp_class_creation_7__metaclass;
        tmp_getattr_attr_7 = mod_consts[91];
        tmp_getattr_default_7 = mod_consts[92];
        tmp_tuple_element_25 = BUILTIN_GETATTR(tmp_getattr_target_7, tmp_getattr_attr_7, tmp_getattr_default_7);
        if (tmp_tuple_element_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto try_except_handler_19;
        }
        tmp_right_name_7 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_36;
            PyObject *tmp_type_arg_13;
            PyTuple_SET_ITEM(tmp_right_name_7, 0, tmp_tuple_element_25);
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_type_arg_13 = tmp_class_creation_7__prepared;
            tmp_expression_name_36 = BUILTIN_TYPE1(tmp_type_arg_13);
            assert(!(tmp_expression_name_36 == NULL));
            tmp_tuple_element_25 = LOOKUP_ATTRIBUTE(tmp_expression_name_36, mod_consts[91]);
            Py_DECREF(tmp_expression_name_36);
            if (tmp_tuple_element_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_right_name_7, 1, tmp_tuple_element_25);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_right_name_7);
        goto try_except_handler_19;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_raise_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_7, tmp_right_name_7);
        Py_DECREF(tmp_right_name_7);
        if (tmp_raise_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto try_except_handler_19;
        }
        exception_type = tmp_raise_type_7;
        Py_INCREF(tmp_raise_type_7);
        exception_value = tmp_raise_value_7;
        exception_lineno = 206;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_19;
    }
    branch_no_28:;
    goto branch_end_27;
    branch_no_27:;
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = PyDict_New();
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_65;
    }
    branch_end_27:;
    {
        PyObject *tmp_assign_source_66;
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_PIL$ImageShow$$$class_7_XVViewer_206 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[93];
        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_7_XVViewer_206, mod_consts[94], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto try_except_handler_21;
        }
        tmp_dictset_value = mod_consts[127];
        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_7_XVViewer_206, mod_consts[69], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto try_except_handler_21;
        }
        tmp_dictset_value = mod_consts[126];
        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_7_XVViewer_206, mod_consts[96], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto try_except_handler_21;
        }
        if (isFrameUnusable(cache_frame_f42e6bf5cb1a19adc70bcca2aedcfa8b_8)) {
            Py_XDECREF(cache_frame_f42e6bf5cb1a19adc70bcca2aedcfa8b_8);

#if _DEBUG_REFCOUNTS
            if (cache_frame_f42e6bf5cb1a19adc70bcca2aedcfa8b_8 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_f42e6bf5cb1a19adc70bcca2aedcfa8b_8 = MAKE_FUNCTION_FRAME(codeobj_f42e6bf5cb1a19adc70bcca2aedcfa8b, module_PIL$ImageShow, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_f42e6bf5cb1a19adc70bcca2aedcfa8b_8->m_type_description == NULL);
        frame_f42e6bf5cb1a19adc70bcca2aedcfa8b_8 = cache_frame_f42e6bf5cb1a19adc70bcca2aedcfa8b_8;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_f42e6bf5cb1a19adc70bcca2aedcfa8b_8);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_f42e6bf5cb1a19adc70bcca2aedcfa8b_8) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = mod_consts[84];
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_PIL$ImageShow$$$function_16_get_command_ex(tmp_defaults_3);

            tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_7_XVViewer_206, mod_consts[61], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_f42e6bf5cb1a19adc70bcca2aedcfa8b_8);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_7;

        frame_exception_exit_8:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_f42e6bf5cb1a19adc70bcca2aedcfa8b_8);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f42e6bf5cb1a19adc70bcca2aedcfa8b_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f42e6bf5cb1a19adc70bcca2aedcfa8b_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f42e6bf5cb1a19adc70bcca2aedcfa8b_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f42e6bf5cb1a19adc70bcca2aedcfa8b_8,
            type_description_2,
            outline_6_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_f42e6bf5cb1a19adc70bcca2aedcfa8b_8 == cache_frame_f42e6bf5cb1a19adc70bcca2aedcfa8b_8) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_f42e6bf5cb1a19adc70bcca2aedcfa8b_8);
            cache_frame_f42e6bf5cb1a19adc70bcca2aedcfa8b_8 = NULL;
        }

        assertFrameObject(frame_f42e6bf5cb1a19adc70bcca2aedcfa8b_8);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_7;

        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_7:;

        goto try_except_handler_21;
        skip_nested_handling_7:;
        {
            nuitka_bool tmp_condition_result_42;
            PyObject *tmp_compexpr_left_8;
            PyObject *tmp_compexpr_right_8;
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_compexpr_left_8 = tmp_class_creation_7__bases;
            CHECK_OBJECT(tmp_class_creation_7__bases_orig);
            tmp_compexpr_right_8 = tmp_class_creation_7__bases_orig;
            tmp_condition_result_42 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_8, tmp_compexpr_right_8);
            if (tmp_condition_result_42 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;

                goto try_except_handler_21;
            }
            if (tmp_condition_result_42 == NUITKA_BOOL_TRUE) {
                goto branch_yes_29;
            } else {
                goto branch_no_29;
            }
            assert(tmp_condition_result_42 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_29:;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dictset_value = tmp_class_creation_7__bases_orig;
        tmp_res = PyObject_SetItem(locals_PIL$ImageShow$$$class_7_XVViewer_206, mod_consts[107], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto try_except_handler_21;
        }
        branch_no_29:;
        {
            PyObject *tmp_assign_source_67;
            PyObject *tmp_called_name_16;
            PyObject *tmp_args_name_14;
            PyObject *tmp_tuple_element_26;
            PyObject *tmp_kw_name_14;
            CHECK_OBJECT(tmp_class_creation_7__metaclass);
            tmp_called_name_16 = tmp_class_creation_7__metaclass;
            tmp_tuple_element_26 = mod_consts[126];
            tmp_args_name_14 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_14, 0, tmp_tuple_element_26);
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_tuple_element_26 = tmp_class_creation_7__bases;
            PyTuple_SET_ITEM0(tmp_args_name_14, 1, tmp_tuple_element_26);
            tmp_tuple_element_26 = locals_PIL$ImageShow$$$class_7_XVViewer_206;
            PyTuple_SET_ITEM0(tmp_args_name_14, 2, tmp_tuple_element_26);
            CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
            tmp_kw_name_14 = tmp_class_creation_7__class_decl_dict;
            frame_715a9122371f1315c4968ada47220423->m_frame.f_lineno = 206;
            tmp_assign_source_67 = CALL_FUNCTION(tmp_called_name_16, tmp_args_name_14, tmp_kw_name_14);
            Py_DECREF(tmp_args_name_14);
            if (tmp_assign_source_67 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;

                goto try_except_handler_21;
            }
            assert(outline_6_var___class__ == NULL);
            outline_6_var___class__ = tmp_assign_source_67;
        }
        CHECK_OBJECT(outline_6_var___class__);
        tmp_assign_source_66 = outline_6_var___class__;
        Py_INCREF(tmp_assign_source_66);
        goto try_return_handler_21;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_21:;
        Py_DECREF(locals_PIL$ImageShow$$$class_7_XVViewer_206);
        locals_PIL$ImageShow$$$class_7_XVViewer_206 = NULL;
        goto try_return_handler_20;
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_type_19 = exception_type;
        exception_keeper_value_19 = exception_value;
        exception_keeper_tb_19 = exception_tb;
        exception_keeper_lineno_19 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_PIL$ImageShow$$$class_7_XVViewer_206);
        locals_PIL$ImageShow$$$class_7_XVViewer_206 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto try_except_handler_20;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_20:;
        CHECK_OBJECT(outline_6_var___class__);
        Py_DECREF(outline_6_var___class__);
        outline_6_var___class__ = NULL;
        goto outline_result_7;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 206;
        goto try_except_handler_19;
        outline_result_7:;
        UPDATE_STRING_DICT1(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_66);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    Py_XDECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_class_creation_7__bases_orig);
    Py_DECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_7__bases);
    Py_DECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    Py_DECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_7__prepared);
    Py_DECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    {
        bool tmp_condition_result_43;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        PyObject *tmp_expression_name_37;
        tmp_expression_name_37 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_expression_name_37 == NULL)) {
            tmp_expression_name_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_expression_name_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_37, mod_consts[108]);
        if (tmp_compexpr_left_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_9 = mod_consts[129];
        tmp_res = PySequence_Contains(tmp_compexpr_right_9, tmp_compexpr_left_9);
        Py_DECREF(tmp_compexpr_left_9);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_43 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_43 != false) {
            goto branch_yes_30;
        } else {
            goto branch_no_30;
        }
    }
    branch_yes_30:;
    {
        nuitka_bool tmp_condition_result_44;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_3;
        int tmp_truth_name_9;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;

            goto frame_exception_exit_1;
        }
        frame_715a9122371f1315c4968ada47220423->m_frame.f_lineno = 222;
        tmp_call_result_3 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, mod_consts[130], &PyTuple_GET_ITEM(mod_consts[131], 0));

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_9 = CHECK_IF_TRUE(tmp_call_result_3);
        if (tmp_truth_name_9 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_3);

            exception_lineno = 222;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_44 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_3);
        if (tmp_condition_result_44 == NUITKA_BOOL_TRUE) {
            goto branch_yes_31;
        } else {
            goto branch_no_31;
        }
    }
    branch_yes_31:;
    {
        PyObject *tmp_called_name_17;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_3;
        tmp_called_name_17 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_called_name_17 == NULL)) {
            tmp_called_name_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_called_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_args_element_name_3 == NULL)) {
            tmp_args_element_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
        }

        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        frame_715a9122371f1315c4968ada47220423->m_frame.f_lineno = 223;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_17, tmp_args_element_name_3);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_31:;
    {
        nuitka_bool tmp_condition_result_45;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_5;
        int tmp_truth_name_10;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        frame_715a9122371f1315c4968ada47220423->m_frame.f_lineno = 224;
        tmp_call_result_5 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, mod_consts[130], &PyTuple_GET_ITEM(mod_consts[132], 0));

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_10 = CHECK_IF_TRUE(tmp_call_result_5);
        if (tmp_truth_name_10 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_5);

            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_45 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_5);
        if (tmp_condition_result_45 == NUITKA_BOOL_TRUE) {
            goto branch_yes_32;
        } else {
            goto branch_no_32;
        }
    }
    branch_yes_32:;
    {
        PyObject *tmp_called_name_18;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_name_4;
        tmp_called_name_18 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_called_name_18 == NULL)) {
            tmp_called_name_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_called_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_args_element_name_4 == NULL)) {
            tmp_args_element_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
        }

        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
        frame_715a9122371f1315c4968ada47220423->m_frame.f_lineno = 225;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_18, tmp_args_element_name_4);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_no_32:;
    {
        nuitka_bool tmp_condition_result_46;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_7;
        int tmp_truth_name_11;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        frame_715a9122371f1315c4968ada47220423->m_frame.f_lineno = 226;
        tmp_call_result_7 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, mod_consts[130], &PyTuple_GET_ITEM(mod_consts[133], 0));

        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_11 = CHECK_IF_TRUE(tmp_call_result_7);
        if (tmp_truth_name_11 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_7);

            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_46 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_7);
        if (tmp_condition_result_46 == NUITKA_BOOL_TRUE) {
            goto branch_yes_33;
        } else {
            goto branch_no_33;
        }
    }
    branch_yes_33:;
    {
        PyObject *tmp_called_name_19;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_name_5;
        tmp_called_name_19 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_called_name_19 == NULL)) {
            tmp_called_name_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_called_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageShow, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_args_element_name_5 == NULL)) {
            tmp_args_element_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
        }

        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        frame_715a9122371f1315c4968ada47220423->m_frame.f_lineno = 227;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_19, tmp_args_element_name_5);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    branch_no_33:;
    branch_no_30:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_715a9122371f1315c4968ada47220423);
#endif
    popFrameStack();

    assertFrameObject(frame_715a9122371f1315c4968ada47220423);

    goto frame_no_exception_8;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_715a9122371f1315c4968ada47220423);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_715a9122371f1315c4968ada47220423, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_715a9122371f1315c4968ada47220423->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_715a9122371f1315c4968ada47220423, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_8:;

    return module_PIL$ImageShow;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

