/* Generated code for Python module '__main__'
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

/* The "module___main__" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module___main__;
PyDictObject *moduledict___main__;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[168];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    loadConstantsBlob(&mod_consts[0], "__main__", 168);

    constants_created = true;
}

/* For multiprocessing, we want to be able to initialize the __main__ constants. */
#if _NUITKA_PLUGIN_MULTIPROCESSING_ENABLED && 1
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants___main__(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "__main__", 168);
}
#endif

// The module code objects.
static PyCodeObject *codeobj_9c8047c2dc862e3789a92abadcaaa63f;
static PyCodeObject *codeobj_234d8d3da167a1fbabf7ce656e6b0517;
static PyCodeObject *codeobj_e5ec73fa93e02c35212c0f17f0263603;
static PyCodeObject *codeobj_4bddd9a7f328bd6e41b082651bf26699;
static PyCodeObject *codeobj_11efa462501e88341b0424ff769c2db2;
static PyCodeObject *codeobj_bf273f05645cf3458ddac416b5c6c336;
static PyCodeObject *codeobj_df81e1c6681aebde4a68e7583e7aa55c;
static PyCodeObject *codeobj_0dfbd77b0aa1176c43b210c109bdf06b;
static PyCodeObject *codeobj_00887f4ae38267481a82cd5dd899165f;
static PyCodeObject *codeobj_94f03dcc58b13e0cd553d193f714fcad;
static PyCodeObject *codeobj_6aff1a0d56205e41b73c0f46332cbec1;
static PyCodeObject *codeobj_168c262041bad7b77b39f6f9f042f8a6;
static PyCodeObject *codeobj_0d824fdf44f71f4351836c168ab175e4;
static PyCodeObject *codeobj_6638ce512c71e7ef6a45f0ade782a596;
static PyCodeObject *codeobj_a7782b4a2d51c31d37a52180c696d5b4;
static PyCodeObject *codeobj_dcfee97de3a930eb6a17514a79e28e5c;
static PyCodeObject *codeobj_0055136d44e50362e7e9ceeeead19616;
/* For use in "MainProgram.c". */
PyCodeObject *codeobj_main = NULL;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[128]; CHECK_OBJECT(module_filename_obj);
    codeobj_9c8047c2dc862e3789a92abadcaaa63f = MAKE_CODEOBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[33], mod_consts[156], mod_consts[157], 1, 0, 0);
    codeobj_234d8d3da167a1fbabf7ce656e6b0517 = MAKE_CODEOBJECT(module_filename_obj, 50, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[33], mod_consts[156], mod_consts[157], 1, 0, 0);
    codeobj_e5ec73fa93e02c35212c0f17f0263603 = MAKE_CODEOBJECT(module_filename_obj, 43, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[33], mod_consts[158], mod_consts[159], 1, 0, 0);
    codeobj_4bddd9a7f328bd6e41b082651bf26699 = MAKE_CODEOBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[33], mod_consts[158], mod_consts[159], 1, 0, 0);
    codeobj_11efa462501e88341b0424ff769c2db2 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[160], NULL, NULL, 0, 0, 0);
    codeobj_bf273f05645cf3458ddac416b5c6c336 = MAKE_CODEOBJECT(module_filename_obj, 24, CO_NOFREE, mod_consts[2], mod_consts[161], NULL, 0, 0, 0);
    codeobj_df81e1c6681aebde4a68e7583e7aa55c = MAKE_CODEOBJECT(module_filename_obj, 30, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[162], NULL, 1, 0, 0);
    codeobj_0dfbd77b0aa1176c43b210c109bdf06b = MAKE_CODEOBJECT(module_filename_obj, 56, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[149], mod_consts[163], NULL, 2, 0, 0);
    codeobj_00887f4ae38267481a82cd5dd899165f = MAKE_CODEOBJECT(module_filename_obj, 64, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[52], NULL, NULL, 0, 0, 0);
    codeobj_94f03dcc58b13e0cd553d193f714fcad = MAKE_CODEOBJECT(module_filename_obj, 142, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[52], NULL, NULL, 0, 0, 0);
    codeobj_6aff1a0d56205e41b73c0f46332cbec1 = MAKE_CODEOBJECT(module_filename_obj, 26, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[3], mod_consts[164], NULL, 1, 0, 0);
    codeobj_168c262041bad7b77b39f6f9f042f8a6 = MAKE_CODEOBJECT(module_filename_obj, 141, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[43], mod_consts[165], NULL, 2, 0, 0);
    codeobj_0d824fdf44f71f4351836c168ab175e4 = MAKE_CODEOBJECT(module_filename_obj, 63, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[40], mod_consts[165], NULL, 2, 0, 0);
    codeobj_6638ce512c71e7ef6a45f0ade782a596 = MAKE_CODEOBJECT(module_filename_obj, 220, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[155], mod_consts[166], NULL, 0, 0, 0);
    codeobj_a7782b4a2d51c31d37a52180c696d5b4 = MAKE_CODEOBJECT(module_filename_obj, 68, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[54], mod_consts[167], NULL, 1, 0, 0);
    codeobj_dcfee97de3a930eb6a17514a79e28e5c = MAKE_CODEOBJECT(module_filename_obj, 146, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[54], mod_consts[167], NULL, 1, 0, 0);
    codeobj_0055136d44e50362e7e9ceeeead19616 = MAKE_CODEOBJECT(module_filename_obj, 59, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[44], mod_consts[157], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function_9__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function_2_complex_call_helper_star_list_star_dict(PyObject **python_pars);


NUITKA_LOCAL_MODULE PyObject *impl___main__$$$function_3_get_callable_name_desc(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function_15_complex_call_helper_pos_star_list_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function_13_complex_call_helper_star_list(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function_11_complex_call_helper_pos_star_list(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function_17_complex_call_helper_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function_19_complex_call_helper_keywords_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function_12_complex_call_helper_pos_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function_18_complex_call_helper_pos_keywords_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function_20_complex_call_helper_keywords_star_list_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function_21_complex_call_helper_keywords_star_list(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function_14_complex_call_helper_pos_keywords_star_list_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function_16__unpack_list(PyObject **python_pars);


static PyObject *MAKE_FUNCTION___main__$$$function_10_main();


static PyObject *MAKE_FUNCTION___main__$$$function_1___init__();


static PyObject *MAKE_FUNCTION___main__$$$function_4_InitUI();


static PyObject *MAKE_FUNCTION___main__$$$function_4_InitUI$$$function_1_lambda(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION___main__$$$function_4_InitUI$$$function_2_lambda(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION___main__$$$function_4_InitUI$$$function_3_lambda(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION___main__$$$function_4_InitUI$$$function_4_lambda(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION___main__$$$function_5_OnClose();


static PyObject *MAKE_FUNCTION___main__$$$function_6_serialEndedMessage();


static PyObject *MAKE_FUNCTION___main__$$$function_7_auto_instax();


static PyObject *MAKE_FUNCTION___main__$$$function_7_auto_instax$$$function_1_ShowMessage();


static PyObject *MAKE_FUNCTION___main__$$$function_7_auto_instax$$$function_2_process();


static PyObject *MAKE_FUNCTION___main__$$$function_8_auto_2r();


static PyObject *MAKE_FUNCTION___main__$$$function_8_auto_2r$$$function_1_ShowMessage();


static PyObject *MAKE_FUNCTION___main__$$$function_8_auto_2r$$$function_2_process();


// The module function definitions.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function_9__mro_entries_conversion(PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *par_bases = python_pars[0];
    PyObject *tmp_base = NULL;
    PyObject *tmp_iter = NULL;
    PyObject *tmp_list = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_bases);
        tmp_iter_arg_1 = par_bases;
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        assert(tmp_iter == NULL);
        tmp_iter = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = PyList_New(0);
        assert(tmp_list == NULL);
        tmp_list = tmp_assign_source_2;
    }
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_iter);
        tmp_next_source_1 = tmp_iter;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                goto try_except_handler_1;
            }
        }

        {
            PyObject *old = tmp_base;
            tmp_base = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(tmp_base);
        tmp_isinstance_inst_1 = tmp_base;
        tmp_isinstance_cls_1 = (PyObject *)&PyType_Type;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
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
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        CHECK_OBJECT(tmp_list);
        tmp_append_list_1 = tmp_list;
        CHECK_OBJECT(tmp_base);
        tmp_append_value_1 = tmp_base;
        assert(PyList_Check(tmp_append_list_1));
        tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(tmp_base);
        tmp_expression_name_1 = tmp_base;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_1, mod_consts[0]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_list_arg_name_1;
        PyObject *tmp_value_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_list_extend_result_1;
        CHECK_OBJECT(tmp_list);
        tmp_list_arg_name_1 = tmp_list;
        CHECK_OBJECT(tmp_base);
        tmp_expression_name_2 = tmp_base;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[0]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        if (par_bases == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[1]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_args_element_name_1 = par_bases;
        tmp_value_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        if (tmp_value_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        assert(PyList_Check(tmp_list_arg_name_1));
        tmp_result = LIST_EXTEND(tmp_list_arg_name_1, tmp_value_name_1);
        Py_DECREF(tmp_value_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_list_extend_result_1 = Py_None;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_append_list_2;
        PyObject *tmp_append_value_2;
        CHECK_OBJECT(tmp_list);
        tmp_append_list_2 = tmp_list;
        CHECK_OBJECT(tmp_base);
        tmp_append_value_2 = tmp_base;
        assert(PyList_Check(tmp_append_list_2));
        tmp_result = LIST_APPEND0(tmp_append_list_2, tmp_append_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
    }
    branch_end_2:;
    branch_end_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




        goto try_except_handler_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_tuple_arg_1;
        CHECK_OBJECT(tmp_list);
        tmp_tuple_arg_1 = tmp_list;
        tmp_return_value = PySequence_Tuple(tmp_tuple_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(tmp_list);
    Py_DECREF(tmp_list);
    tmp_list = NULL;
    CHECK_OBJECT(tmp_iter);
    Py_DECREF(tmp_iter);
    tmp_iter = NULL;
    Py_XDECREF(tmp_base);
    tmp_base = NULL;
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

    Py_XDECREF(tmp_list);
    tmp_list = NULL;
    Py_XDECREF(tmp_iter);
    tmp_iter = NULL;
    Py_XDECREF(tmp_base);
    tmp_base = NULL;
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
    CHECK_OBJECT(par_bases);
    Py_DECREF(par_bases);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_bases);
    Py_DECREF(par_bases);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function_1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_args = python_pars[1];
    PyObject *par_kw = python_pars[2];
    struct Nuitka_FrameObject *frame_6aff1a0d56205e41b73c0f46332cbec1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6aff1a0d56205e41b73c0f46332cbec1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6aff1a0d56205e41b73c0f46332cbec1)) {
        Py_XDECREF(cache_frame_6aff1a0d56205e41b73c0f46332cbec1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6aff1a0d56205e41b73c0f46332cbec1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6aff1a0d56205e41b73c0f46332cbec1 = MAKE_FUNCTION_FRAME(codeobj_6aff1a0d56205e41b73c0f46332cbec1, module___main__, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6aff1a0d56205e41b73c0f46332cbec1->m_type_description == NULL);
    frame_6aff1a0d56205e41b73c0f46332cbec1 = cache_frame_6aff1a0d56205e41b73c0f46332cbec1;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6aff1a0d56205e41b73c0f46332cbec1);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6aff1a0d56205e41b73c0f46332cbec1) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_call_result_1;
        tmp_type_name_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_type_name_1 == NULL)) {
            tmp_type_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_type_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_object_name_1 = par_self;
        tmp_expression_name_1 = BUILTIN_SUPER(tmp_type_name_1, tmp_object_name_1);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[3]);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_args);
        tmp_dircall_arg2_1 = par_args;
        CHECK_OBJECT(par_kw);
        tmp_dircall_arg3_1 = par_kw;
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_call_result_1 = impl___main__$$$function_2_complex_call_helper_star_list_star_dict(dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_6aff1a0d56205e41b73c0f46332cbec1->m_frame.f_lineno = 28;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[4]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6aff1a0d56205e41b73c0f46332cbec1);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6aff1a0d56205e41b73c0f46332cbec1);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6aff1a0d56205e41b73c0f46332cbec1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6aff1a0d56205e41b73c0f46332cbec1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6aff1a0d56205e41b73c0f46332cbec1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6aff1a0d56205e41b73c0f46332cbec1,
        type_description_1,
        par_self,
        par_args,
        par_kw,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_6aff1a0d56205e41b73c0f46332cbec1 == cache_frame_6aff1a0d56205e41b73c0f46332cbec1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6aff1a0d56205e41b73c0f46332cbec1);
        cache_frame_6aff1a0d56205e41b73c0f46332cbec1 = NULL;
    }

    assertFrameObject(frame_6aff1a0d56205e41b73c0f46332cbec1);

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
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function_2_complex_call_helper_star_list_star_dict(PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *par_called = python_pars[0];
    PyObject *par_star_arg_list = python_pars[1];
    PyObject *par_star_arg_dict = python_pars[2];
    PyObject *tmp_mapping_1__dict = NULL;
    PyObject *tmp_mapping_1__iter = NULL;
    PyObject *tmp_mapping_1__key = NULL;
    PyObject *tmp_mapping_1__keys = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(par_star_arg_dict);
        tmp_type_arg_1 = par_star_arg_dict;
        tmp_compexpr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_compexpr_left_1 == NULL));
        tmp_compexpr_right_1 = (PyObject *)&PyDict_Type;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? true : false;
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_star_arg_dict);
        tmp_called_instance_1 = par_star_arg_dict;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[5]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_2;
        }
        assert(tmp_mapping_1__keys == NULL);
        tmp_mapping_1__keys = tmp_assign_source_1;
    }
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

    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = exception_keeper_type_1;
        tmp_compexpr_right_2 = PyExc_AttributeError;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg1_1;
        tmp_left_name_1 = mod_consts[6];
        CHECK_OBJECT(par_called);
        tmp_dircall_arg1_1 = par_called;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_tuple_element_1 = impl___main__$$$function_3_get_callable_name_desc(dir_call_args);
        }
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_1);
            Py_XDECREF(exception_keeper_value_1);
            Py_XDECREF(exception_keeper_tb_1);



            goto try_except_handler_1;
        }
        tmp_right_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_1;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_1);
            if (par_star_arg_dict == NULL) {

                Py_DECREF(exception_keeper_type_1);
                Py_XDECREF(exception_keeper_value_1);
                Py_XDECREF(exception_keeper_tb_1);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
                exception_tb = NULL;
                ADD_EXCEPTION_CONTEXT(&exception_keeper_type_1, &exception_keeper_value_1);



                goto tuple_build_exception_1;
            }

            tmp_type_arg_2 = par_star_arg_dict;
            tmp_expression_name_1 = BUILTIN_TYPE1(tmp_type_arg_2);
            if (tmp_expression_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                Py_DECREF(exception_keeper_type_1);
                Py_XDECREF(exception_keeper_value_1);
                Py_XDECREF(exception_keeper_tb_1);



                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[8]);
            Py_DECREF(tmp_expression_name_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                Py_DECREF(exception_keeper_type_1);
                Py_XDECREF(exception_keeper_value_1);
                Py_XDECREF(exception_keeper_tb_1);



                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_1);
        Py_DECREF(exception_keeper_type_1);
        Py_XDECREF(exception_keeper_value_1);
        Py_XDECREF(exception_keeper_tb_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_1);
            Py_XDECREF(exception_keeper_value_1);
            Py_XDECREF(exception_keeper_tb_1);



            goto try_except_handler_1;
        }
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    goto branch_end_2;
    branch_no_2:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_1;
    branch_end_2:;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(tmp_mapping_1__keys);
        tmp_iter_arg_1 = tmp_mapping_1__keys;
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        assert(tmp_mapping_1__iter == NULL);
        tmp_mapping_1__iter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = PyDict_New();
        assert(tmp_mapping_1__dict == NULL);
        tmp_mapping_1__dict = tmp_assign_source_3;
    }
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_mapping_1__iter);
        tmp_next_source_1 = tmp_mapping_1__iter;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                goto try_except_handler_1;
            }
        }

        {
            PyObject *old = tmp_mapping_1__key;
            tmp_mapping_1__key = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT(tmp_mapping_1__key);
        tmp_compexpr_left_3 = tmp_mapping_1__key;
        if (tmp_mapping_1__dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_compexpr_right_3 = tmp_mapping_1__dict;
        tmp_res = PySequence_Contains(tmp_compexpr_right_3, tmp_compexpr_left_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_condition_result_3 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_dircall_arg1_2;
        tmp_left_name_2 = mod_consts[10];
        if (par_called == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_dircall_arg1_2 = par_called;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_tuple_element_2 = impl___main__$$$function_3_get_callable_name_desc(dir_call_args);
        }
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_right_name_2 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_right_name_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_mapping_1__key);
        tmp_tuple_element_2 = tmp_mapping_1__key;
        PyTuple_SET_ITEM0(tmp_right_name_2, 1, tmp_tuple_element_2);
        tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        if (par_star_arg_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_expression_name_2 = par_star_arg_dict;
        CHECK_OBJECT(tmp_mapping_1__key);
        tmp_subscript_name_1 = tmp_mapping_1__key;
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        CHECK_OBJECT(tmp_mapping_1__dict);
        tmp_ass_subscribed_1 = tmp_mapping_1__dict;
        CHECK_OBJECT(tmp_mapping_1__key);
        tmp_ass_subscript_1 = tmp_mapping_1__key;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




        goto try_except_handler_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_mapping_1__dict);
        tmp_assign_source_5 = tmp_mapping_1__dict;
        {
            PyObject *old = par_star_arg_dict;
            par_star_arg_dict = tmp_assign_source_5;
            Py_INCREF(par_star_arg_dict);
            Py_XDECREF(old);
        }

    }
    branch_no_1:;
    goto try_end_2;
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

    Py_XDECREF(tmp_mapping_1__dict);
    tmp_mapping_1__dict = NULL;
    Py_XDECREF(tmp_mapping_1__iter);
    tmp_mapping_1__iter = NULL;
    Py_XDECREF(tmp_mapping_1__keys);
    tmp_mapping_1__keys = NULL;
    Py_XDECREF(tmp_mapping_1__key);
    tmp_mapping_1__key = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_mapping_1__dict);
    tmp_mapping_1__dict = NULL;
    Py_XDECREF(tmp_mapping_1__iter);
    tmp_mapping_1__iter = NULL;
    Py_XDECREF(tmp_mapping_1__keys);
    tmp_mapping_1__keys = NULL;
    Py_XDECREF(tmp_mapping_1__key);
    tmp_mapping_1__key = NULL;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_type_arg_3;
        CHECK_OBJECT(par_star_arg_list);
        tmp_type_arg_3 = par_star_arg_list;
        tmp_compexpr_left_4 = BUILTIN_TYPE1(tmp_type_arg_3);
        assert(!(tmp_compexpr_left_4 == NULL));
        tmp_compexpr_right_4 = (PyObject *)&PyTuple_Type;
        tmp_condition_result_4 = (tmp_compexpr_left_4 != tmp_compexpr_right_4) ? true : false;
        Py_DECREF(tmp_compexpr_left_4);
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_expression_name_4;
        CHECK_OBJECT(par_star_arg_list);
        tmp_expression_name_3 = par_star_arg_list;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_3, mod_consts[12]);
        tmp_or_left_value_1 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_star_arg_list);
        tmp_expression_name_4 = par_star_arg_list;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_4, mod_consts[13]);
        tmp_or_right_value_1 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_5 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_5 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_tuple_arg_1;
        CHECK_OBJECT(par_star_arg_list);
        tmp_tuple_arg_1 = par_star_arg_list;
        tmp_assign_source_6 = PySequence_Tuple(tmp_tuple_arg_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        {
            PyObject *old = par_star_arg_list;
            assert(old != NULL);
            par_star_arg_list = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_dircall_arg1_3;
        tmp_left_name_3 = mod_consts[14];
        if (par_called == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_dircall_arg1_3 = par_called;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_tuple_element_3 = impl___main__$$$function_3_get_callable_name_desc(dir_call_args);
        }
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        tmp_right_name_3 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_5;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_right_name_3, 0, tmp_tuple_element_3);
            CHECK_OBJECT(par_star_arg_list);
            tmp_type_arg_4 = par_star_arg_list;
            tmp_expression_name_5 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_name_5 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[8]);
            Py_DECREF(tmp_expression_name_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_right_name_3, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_right_name_3);
        goto function_exception_exit;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_make_exception_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_3);
        Py_DECREF(tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto function_exception_exit;
    }
    branch_end_5:;
    branch_no_4:;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_kw_name_1;
        if (par_called == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_called_name_1 = par_called;
        if (par_star_arg_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_args_name_1 = par_star_arg_list;
        CHECK_OBJECT(par_star_arg_dict);
        tmp_kw_name_1 = par_star_arg_dict;
        tmp_return_value = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_called);
    Py_DECREF(par_called);
    CHECK_OBJECT(par_star_arg_list);
    Py_DECREF(par_star_arg_list);
    CHECK_OBJECT(par_star_arg_dict);
    Py_DECREF(par_star_arg_dict);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_called);
    Py_DECREF(par_called);
    CHECK_OBJECT(par_star_arg_list);
    Py_DECREF(par_star_arg_list);
    CHECK_OBJECT(par_star_arg_dict);
    Py_DECREF(par_star_arg_dict);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


NUITKA_LOCAL_MODULE PyObject *impl___main__$$$function_3_get_callable_name_desc(PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *par_called = python_pars[0];
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_called);
        tmp_isinstance_inst_1 = par_called;
        tmp_isinstance_cls_1 = mod_consts[16];
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
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
        PyObject *tmp_left_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(par_called);
        tmp_expression_name_1 = par_called;
        tmp_left_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[8]);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        tmp_right_name_1 = mod_consts[17];
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        goto function_return_exit;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_left_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT(par_called);
        tmp_type_arg_1 = par_called;
        tmp_expression_name_2 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_expression_name_2 == NULL));
        tmp_left_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[8]);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        tmp_right_name_2 = mod_consts[18];
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_left_name_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        goto function_return_exit;
    }
    branch_end_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_called);
    Py_DECREF(par_called);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_called);
    Py_DECREF(par_called);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function_4_InitUI(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    PyObject *var_pnl = NULL;
    struct Nuitka_CellObject *var_closeButton = Nuitka_Cell_Empty();
    PyObject *var_polaroidButton = NULL;
    PyObject *var_regular2RButton = NULL;
    PyObject *var_now = NULL;
    PyObject *var_expire = NULL;
    struct Nuitka_FrameObject *frame_df81e1c6681aebde4a68e7583e7aa55c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_df81e1c6681aebde4a68e7583e7aa55c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_df81e1c6681aebde4a68e7583e7aa55c)) {
        Py_XDECREF(cache_frame_df81e1c6681aebde4a68e7583e7aa55c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_df81e1c6681aebde4a68e7583e7aa55c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_df81e1c6681aebde4a68e7583e7aa55c = MAKE_FUNCTION_FRAME(codeobj_df81e1c6681aebde4a68e7583e7aa55c, module___main__, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_df81e1c6681aebde4a68e7583e7aa55c->m_type_description == NULL);
    frame_df81e1c6681aebde4a68e7583e7aa55c = cache_frame_df81e1c6681aebde4a68e7583e7aa55c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_df81e1c6681aebde4a68e7583e7aa55c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_df81e1c6681aebde4a68e7583e7aa55c) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "cocoooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[20]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "cocoooo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(par_self) == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 32;
            type_description_1 = "cocoooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = Nuitka_Cell_GET(par_self);
        frame_df81e1c6681aebde4a68e7583e7aa55c->m_frame.f_lineno = 32;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "cocoooo";
            goto frame_exception_exit_1;
        }
        assert(var_pnl == NULL);
        var_pnl = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "cocoooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[22]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "cocoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_pnl);
        tmp_tuple_element_1 = var_pnl;
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_kw_name_1 = PyDict_Copy(mod_consts[23]);
        frame_df81e1c6681aebde4a68e7583e7aa55c->m_frame.f_lineno = 33;
        tmp_assign_source_2 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "cocoooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_closeButton) == NULL);
        PyCell_SET(var_closeButton, tmp_assign_source_2);

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_2;
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "cocoooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[24]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "cocoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_pnl);
        tmp_tuple_element_2 = var_pnl;
        tmp_args_name_2 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_2, 0, tmp_tuple_element_2);
        tmp_kw_name_2 = PyDict_Copy(mod_consts[25]);
        frame_df81e1c6681aebde4a68e7583e7aa55c->m_frame.f_lineno = 35;
        tmp_assign_source_3 = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_name_2);
        Py_DECREF(tmp_kw_name_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "cocoooo";
            goto frame_exception_exit_1;
        }
        assert(var_polaroidButton == NULL);
        var_polaroidButton = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kw_name_3;
        tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_name_4 == NULL)) {
            tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "cocoooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[24]);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "cocoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_pnl);
        tmp_tuple_element_3 = var_pnl;
        tmp_args_name_3 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_3, 0, tmp_tuple_element_3);
        tmp_kw_name_3 = PyDict_Copy(mod_consts[26]);
        frame_df81e1c6681aebde4a68e7583e7aa55c->m_frame.f_lineno = 37;
        tmp_assign_source_4 = CALL_FUNCTION(tmp_called_name_4, tmp_args_name_3, tmp_kw_name_3);
        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_name_3);
        Py_DECREF(tmp_kw_name_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "cocoooo";
            goto frame_exception_exit_1;
        }
        assert(var_regular2RButton == NULL);
        var_regular2RButton = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_name_5;
        tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_expression_name_5 == NULL)) {
            tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "cocoooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[27]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "cocoooo";
            goto frame_exception_exit_1;
        }
        frame_df81e1c6681aebde4a68e7583e7aa55c->m_frame.f_lineno = 39;
        tmp_called_instance_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[28]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "cocoooo";
            goto frame_exception_exit_1;
        }
        frame_df81e1c6681aebde4a68e7583e7aa55c->m_frame.f_lineno = 39;
        tmp_assign_source_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[29]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "cocoooo";
            goto frame_exception_exit_1;
        }
        assert(var_now == NULL);
        var_now = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "cocoooo";
            goto frame_exception_exit_1;
        }
        frame_df81e1c6681aebde4a68e7583e7aa55c->m_frame.f_lineno = 40;
        tmp_assign_source_6 = CALL_METHOD_WITH_ARGS3(tmp_called_instance_3, mod_consts[29], &PyTuple_GET_ITEM(mod_consts[30], 0));

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "cocoooo";
            goto frame_exception_exit_1;
        }
        assert(var_expire == NULL);
        var_expire = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(var_now);
        tmp_compexpr_left_1 = var_now;
        CHECK_OBJECT(var_expire);
        tmp_compexpr_right_1 = var_expire;
        tmp_condition_result_1 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "cocoooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        assert(tmp_condition_result_1 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_args_element_name_3;
        struct Nuitka_CellObject *tmp_closure_1[2];
        CHECK_OBJECT(var_polaroidButton);
        tmp_expression_name_6 = var_polaroidButton;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[31]);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "cocoooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_7 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_name_7 == NULL)) {
            tmp_expression_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);

            exception_lineno = 43;
            type_description_1 = "cocoooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[32]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);

            exception_lineno = 43;
            type_description_1 = "cocoooo";
            goto frame_exception_exit_1;
        }

        tmp_closure_1[0] = var_closeButton;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_self;
        Py_INCREF(tmp_closure_1[1]);

        tmp_args_element_name_3 = MAKE_FUNCTION___main__$$$function_4_InitUI$$$function_1_lambda(tmp_closure_1);

        frame_df81e1c6681aebde4a68e7583e7aa55c->m_frame.f_lineno = 42;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_5, call_args);
        }

        Py_DECREF(tmp_called_name_5);
        Py_DECREF(tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "cocoooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_args_element_name_5;
        struct Nuitka_CellObject *tmp_closure_2[2];
        CHECK_OBJECT(var_regular2RButton);
        tmp_expression_name_8 = var_regular2RButton;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[31]);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "cocoooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_9 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_name_9 == NULL)) {
            tmp_expression_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);

            exception_lineno = 45;
            type_description_1 = "cocoooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[32]);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);

            exception_lineno = 45;
            type_description_1 = "cocoooo";
            goto frame_exception_exit_1;
        }

        tmp_closure_2[0] = var_closeButton;
        Py_INCREF(tmp_closure_2[0]);
        tmp_closure_2[1] = par_self;
        Py_INCREF(tmp_closure_2[1]);

        tmp_args_element_name_5 = MAKE_FUNCTION___main__$$$function_4_InitUI$$$function_2_lambda(tmp_closure_2);

        frame_df81e1c6681aebde4a68e7583e7aa55c->m_frame.f_lineno = 44;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_6, call_args);
        }

        Py_DECREF(tmp_called_name_6);
        Py_DECREF(tmp_args_element_name_4);
        Py_DECREF(tmp_args_element_name_5);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "cocoooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_name_7;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_args_element_name_7;
        struct Nuitka_CellObject *tmp_closure_3[1];
        CHECK_OBJECT(var_polaroidButton);
        tmp_expression_name_10 = var_polaroidButton;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[31]);
        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "cocoooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_11 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_name_11 == NULL)) {
            tmp_expression_name_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 48;
            type_description_1 = "cocoooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[32]);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 48;
            type_description_1 = "cocoooo";
            goto frame_exception_exit_1;
        }

        tmp_closure_3[0] = par_self;
        Py_INCREF(tmp_closure_3[0]);

        tmp_args_element_name_7 = MAKE_FUNCTION___main__$$$function_4_InitUI$$$function_3_lambda(tmp_closure_3);

        frame_df81e1c6681aebde4a68e7583e7aa55c->m_frame.f_lineno = 47;
        {
            PyObject *call_args[] = {tmp_args_element_name_6, tmp_args_element_name_7};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_7, call_args);
        }

        Py_DECREF(tmp_called_name_7);
        Py_DECREF(tmp_args_element_name_6);
        Py_DECREF(tmp_args_element_name_7);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "cocoooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_name_8;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_args_element_name_9;
        struct Nuitka_CellObject *tmp_closure_4[1];
        CHECK_OBJECT(var_regular2RButton);
        tmp_expression_name_12 = var_regular2RButton;
        tmp_called_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[31]);
        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "cocoooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_13 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_name_13 == NULL)) {
            tmp_expression_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_8);

            exception_lineno = 50;
            type_description_1 = "cocoooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[32]);
        if (tmp_args_element_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_8);

            exception_lineno = 50;
            type_description_1 = "cocoooo";
            goto frame_exception_exit_1;
        }

        tmp_closure_4[0] = par_self;
        Py_INCREF(tmp_closure_4[0]);

        tmp_args_element_name_9 = MAKE_FUNCTION___main__$$$function_4_InitUI$$$function_4_lambda(tmp_closure_4);

        frame_df81e1c6681aebde4a68e7583e7aa55c->m_frame.f_lineno = 49;
        {
            PyObject *call_args[] = {tmp_args_element_name_8, tmp_args_element_name_9};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_8, call_args);
        }

        Py_DECREF(tmp_called_name_8);
        Py_DECREF(tmp_args_element_name_8);
        Py_DECREF(tmp_args_element_name_9);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "cocoooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_end_1:;
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_5;
        if (Nuitka_Cell_GET(par_self) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 52;
            type_description_1 = "cocoooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = Nuitka_Cell_GET(par_self);
        frame_df81e1c6681aebde4a68e7583e7aa55c->m_frame.f_lineno = 52;
        tmp_call_result_5 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_4, mod_consts[35], &PyTuple_GET_ITEM(mod_consts[36], 0));

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "cocoooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_6;
        if (Nuitka_Cell_GET(par_self) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 53;
            type_description_1 = "cocoooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = Nuitka_Cell_GET(par_self);
        frame_df81e1c6681aebde4a68e7583e7aa55c->m_frame.f_lineno = 53;
        tmp_call_result_6 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_5, mod_consts[37], &PyTuple_GET_ITEM(mod_consts[38], 0));

        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "cocoooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_7;
        if (Nuitka_Cell_GET(par_self) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 54;
            type_description_1 = "cocoooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = Nuitka_Cell_GET(par_self);
        frame_df81e1c6681aebde4a68e7583e7aa55c->m_frame.f_lineno = 54;
        tmp_call_result_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[39]);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "cocoooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_df81e1c6681aebde4a68e7583e7aa55c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_df81e1c6681aebde4a68e7583e7aa55c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_df81e1c6681aebde4a68e7583e7aa55c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_df81e1c6681aebde4a68e7583e7aa55c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_df81e1c6681aebde4a68e7583e7aa55c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_df81e1c6681aebde4a68e7583e7aa55c,
        type_description_1,
        par_self,
        var_pnl,
        var_closeButton,
        var_polaroidButton,
        var_regular2RButton,
        var_now,
        var_expire
    );


    // Release cached frame if used for exception.
    if (frame_df81e1c6681aebde4a68e7583e7aa55c == cache_frame_df81e1c6681aebde4a68e7583e7aa55c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_df81e1c6681aebde4a68e7583e7aa55c);
        cache_frame_df81e1c6681aebde4a68e7583e7aa55c = NULL;
    }

    assertFrameObject(frame_df81e1c6681aebde4a68e7583e7aa55c);

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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(var_pnl);
    Py_DECREF(var_pnl);
    var_pnl = NULL;
    CHECK_OBJECT(var_closeButton);
    Py_DECREF(var_closeButton);
    var_closeButton = NULL;
    Py_XDECREF(var_polaroidButton);
    var_polaroidButton = NULL;
    Py_XDECREF(var_regular2RButton);
    var_regular2RButton = NULL;
    CHECK_OBJECT(var_now);
    Py_DECREF(var_now);
    var_now = NULL;
    CHECK_OBJECT(var_expire);
    Py_DECREF(var_expire);
    var_expire = NULL;
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

    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    Py_XDECREF(var_pnl);
    var_pnl = NULL;
    CHECK_OBJECT(var_closeButton);
    Py_DECREF(var_closeButton);
    var_closeButton = NULL;
    Py_XDECREF(var_polaroidButton);
    var_polaroidButton = NULL;
    Py_XDECREF(var_regular2RButton);
    var_regular2RButton = NULL;
    Py_XDECREF(var_now);
    var_now = NULL;
    Py_XDECREF(var_expire);
    var_expire = NULL;
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


static PyObject *impl___main__$$$function_4_InitUI$$$function_1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_e5ec73fa93e02c35212c0f17f0263603;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e5ec73fa93e02c35212c0f17f0263603 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e5ec73fa93e02c35212c0f17f0263603)) {
        Py_XDECREF(cache_frame_e5ec73fa93e02c35212c0f17f0263603);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e5ec73fa93e02c35212c0f17f0263603 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e5ec73fa93e02c35212c0f17f0263603 = MAKE_FUNCTION_FRAME(codeobj_e5ec73fa93e02c35212c0f17f0263603, module___main__, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e5ec73fa93e02c35212c0f17f0263603->m_type_description == NULL);
    frame_e5ec73fa93e02c35212c0f17f0263603 = cache_frame_e5ec73fa93e02c35212c0f17f0263603;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e5ec73fa93e02c35212c0f17f0263603);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e5ec73fa93e02c35212c0f17f0263603) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 43;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[40]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 43;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_e5ec73fa93e02c35212c0f17f0263603->m_frame.f_lineno = 43;
        tmp_args_element_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[42]);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 43;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        frame_e5ec73fa93e02c35212c0f17f0263603->m_frame.f_lineno = 43;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e5ec73fa93e02c35212c0f17f0263603);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e5ec73fa93e02c35212c0f17f0263603);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e5ec73fa93e02c35212c0f17f0263603);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e5ec73fa93e02c35212c0f17f0263603, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e5ec73fa93e02c35212c0f17f0263603->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e5ec73fa93e02c35212c0f17f0263603, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e5ec73fa93e02c35212c0f17f0263603,
        type_description_1,
        par_event,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_e5ec73fa93e02c35212c0f17f0263603 == cache_frame_e5ec73fa93e02c35212c0f17f0263603) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e5ec73fa93e02c35212c0f17f0263603);
        cache_frame_e5ec73fa93e02c35212c0f17f0263603 = NULL;
    }

    assertFrameObject(frame_e5ec73fa93e02c35212c0f17f0263603);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function_4_InitUI$$$function_2_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_4bddd9a7f328bd6e41b082651bf26699;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4bddd9a7f328bd6e41b082651bf26699 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4bddd9a7f328bd6e41b082651bf26699)) {
        Py_XDECREF(cache_frame_4bddd9a7f328bd6e41b082651bf26699);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4bddd9a7f328bd6e41b082651bf26699 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4bddd9a7f328bd6e41b082651bf26699 = MAKE_FUNCTION_FRAME(codeobj_4bddd9a7f328bd6e41b082651bf26699, module___main__, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_4bddd9a7f328bd6e41b082651bf26699->m_type_description == NULL);
    frame_4bddd9a7f328bd6e41b082651bf26699 = cache_frame_4bddd9a7f328bd6e41b082651bf26699;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_4bddd9a7f328bd6e41b082651bf26699);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4bddd9a7f328bd6e41b082651bf26699) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 45;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[43]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 45;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_4bddd9a7f328bd6e41b082651bf26699->m_frame.f_lineno = 45;
        tmp_args_element_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[42]);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 45;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        frame_4bddd9a7f328bd6e41b082651bf26699->m_frame.f_lineno = 45;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4bddd9a7f328bd6e41b082651bf26699);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_4bddd9a7f328bd6e41b082651bf26699);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4bddd9a7f328bd6e41b082651bf26699);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4bddd9a7f328bd6e41b082651bf26699, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4bddd9a7f328bd6e41b082651bf26699->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4bddd9a7f328bd6e41b082651bf26699, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4bddd9a7f328bd6e41b082651bf26699,
        type_description_1,
        par_event,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_4bddd9a7f328bd6e41b082651bf26699 == cache_frame_4bddd9a7f328bd6e41b082651bf26699) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_4bddd9a7f328bd6e41b082651bf26699);
        cache_frame_4bddd9a7f328bd6e41b082651bf26699 = NULL;
    }

    assertFrameObject(frame_4bddd9a7f328bd6e41b082651bf26699);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function_4_InitUI$$$function_3_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_9c8047c2dc862e3789a92abadcaaa63f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9c8047c2dc862e3789a92abadcaaa63f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9c8047c2dc862e3789a92abadcaaa63f)) {
        Py_XDECREF(cache_frame_9c8047c2dc862e3789a92abadcaaa63f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9c8047c2dc862e3789a92abadcaaa63f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9c8047c2dc862e3789a92abadcaaa63f = MAKE_FUNCTION_FRAME(codeobj_9c8047c2dc862e3789a92abadcaaa63f, module___main__, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9c8047c2dc862e3789a92abadcaaa63f->m_type_description == NULL);
    frame_9c8047c2dc862e3789a92abadcaaa63f = cache_frame_9c8047c2dc862e3789a92abadcaaa63f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9c8047c2dc862e3789a92abadcaaa63f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9c8047c2dc862e3789a92abadcaaa63f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 48;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_9c8047c2dc862e3789a92abadcaaa63f->m_frame.f_lineno = 48;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[44]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9c8047c2dc862e3789a92abadcaaa63f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9c8047c2dc862e3789a92abadcaaa63f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9c8047c2dc862e3789a92abadcaaa63f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9c8047c2dc862e3789a92abadcaaa63f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9c8047c2dc862e3789a92abadcaaa63f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9c8047c2dc862e3789a92abadcaaa63f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9c8047c2dc862e3789a92abadcaaa63f,
        type_description_1,
        par_event,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_9c8047c2dc862e3789a92abadcaaa63f == cache_frame_9c8047c2dc862e3789a92abadcaaa63f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_9c8047c2dc862e3789a92abadcaaa63f);
        cache_frame_9c8047c2dc862e3789a92abadcaaa63f = NULL;
    }

    assertFrameObject(frame_9c8047c2dc862e3789a92abadcaaa63f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function_4_InitUI$$$function_4_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_234d8d3da167a1fbabf7ce656e6b0517;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_234d8d3da167a1fbabf7ce656e6b0517 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_234d8d3da167a1fbabf7ce656e6b0517)) {
        Py_XDECREF(cache_frame_234d8d3da167a1fbabf7ce656e6b0517);

#if _DEBUG_REFCOUNTS
        if (cache_frame_234d8d3da167a1fbabf7ce656e6b0517 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_234d8d3da167a1fbabf7ce656e6b0517 = MAKE_FUNCTION_FRAME(codeobj_234d8d3da167a1fbabf7ce656e6b0517, module___main__, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_234d8d3da167a1fbabf7ce656e6b0517->m_type_description == NULL);
    frame_234d8d3da167a1fbabf7ce656e6b0517 = cache_frame_234d8d3da167a1fbabf7ce656e6b0517;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_234d8d3da167a1fbabf7ce656e6b0517);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_234d8d3da167a1fbabf7ce656e6b0517) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 50;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_234d8d3da167a1fbabf7ce656e6b0517->m_frame.f_lineno = 50;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[44]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_234d8d3da167a1fbabf7ce656e6b0517);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_234d8d3da167a1fbabf7ce656e6b0517);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_234d8d3da167a1fbabf7ce656e6b0517);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_234d8d3da167a1fbabf7ce656e6b0517, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_234d8d3da167a1fbabf7ce656e6b0517->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_234d8d3da167a1fbabf7ce656e6b0517, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_234d8d3da167a1fbabf7ce656e6b0517,
        type_description_1,
        par_event,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_234d8d3da167a1fbabf7ce656e6b0517 == cache_frame_234d8d3da167a1fbabf7ce656e6b0517) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_234d8d3da167a1fbabf7ce656e6b0517);
        cache_frame_234d8d3da167a1fbabf7ce656e6b0517 = NULL;
    }

    assertFrameObject(frame_234d8d3da167a1fbabf7ce656e6b0517);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function_5_OnClose(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    struct Nuitka_FrameObject *frame_0dfbd77b0aa1176c43b210c109bdf06b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0dfbd77b0aa1176c43b210c109bdf06b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0dfbd77b0aa1176c43b210c109bdf06b)) {
        Py_XDECREF(cache_frame_0dfbd77b0aa1176c43b210c109bdf06b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0dfbd77b0aa1176c43b210c109bdf06b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0dfbd77b0aa1176c43b210c109bdf06b = MAKE_FUNCTION_FRAME(codeobj_0dfbd77b0aa1176c43b210c109bdf06b, module___main__, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0dfbd77b0aa1176c43b210c109bdf06b->m_type_description == NULL);
    frame_0dfbd77b0aa1176c43b210c109bdf06b = cache_frame_0dfbd77b0aa1176c43b210c109bdf06b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0dfbd77b0aa1176c43b210c109bdf06b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0dfbd77b0aa1176c43b210c109bdf06b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_0dfbd77b0aa1176c43b210c109bdf06b->m_frame.f_lineno = 57;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, mod_consts[45], &PyTuple_GET_ITEM(mod_consts[46], 0));

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0dfbd77b0aa1176c43b210c109bdf06b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0dfbd77b0aa1176c43b210c109bdf06b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0dfbd77b0aa1176c43b210c109bdf06b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0dfbd77b0aa1176c43b210c109bdf06b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0dfbd77b0aa1176c43b210c109bdf06b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0dfbd77b0aa1176c43b210c109bdf06b,
        type_description_1,
        par_self,
        par_e
    );


    // Release cached frame if used for exception.
    if (frame_0dfbd77b0aa1176c43b210c109bdf06b == cache_frame_0dfbd77b0aa1176c43b210c109bdf06b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_0dfbd77b0aa1176c43b210c109bdf06b);
        cache_frame_0dfbd77b0aa1176c43b210c109bdf06b = NULL;
    }

    assertFrameObject(frame_0dfbd77b0aa1176c43b210c109bdf06b);

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
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function_6_serialEndedMessage(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_0055136d44e50362e7e9ceeeead19616;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0055136d44e50362e7e9ceeeead19616 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0055136d44e50362e7e9ceeeead19616)) {
        Py_XDECREF(cache_frame_0055136d44e50362e7e9ceeeead19616);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0055136d44e50362e7e9ceeeead19616 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0055136d44e50362e7e9ceeeead19616 = MAKE_FUNCTION_FRAME(codeobj_0055136d44e50362e7e9ceeeead19616, module___main__, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0055136d44e50362e7e9ceeeead19616->m_type_description == NULL);
    frame_0055136d44e50362e7e9ceeeead19616 = cache_frame_0055136d44e50362e7e9ceeeead19616;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0055136d44e50362e7e9ceeeead19616);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0055136d44e50362e7e9ceeeead19616) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_expression_name_3;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[47]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = mod_consts[48];
        tmp_args_element_name_2 = mod_consts[49];
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 61;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[50]);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 61;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 61;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[51]);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 61;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 61;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_0055136d44e50362e7e9ceeeead19616->m_frame.f_lineno = 60;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0055136d44e50362e7e9ceeeead19616);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0055136d44e50362e7e9ceeeead19616);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0055136d44e50362e7e9ceeeead19616, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0055136d44e50362e7e9ceeeead19616->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0055136d44e50362e7e9ceeeead19616, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0055136d44e50362e7e9ceeeead19616,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_0055136d44e50362e7e9ceeeead19616 == cache_frame_0055136d44e50362e7e9ceeeead19616) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_0055136d44e50362e7e9ceeeead19616);
        cache_frame_0055136d44e50362e7e9ceeeead19616 = NULL;
    }

    assertFrameObject(frame_0055136d44e50362e7e9ceeeead19616);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function_7_auto_instax(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    PyObject *var_ShowMessage = NULL;
    PyObject *var_process = NULL;
    PyObject *var_i = NULL;
    PyObject *var_cut_line = NULL;
    PyObject *var_filename = NULL;
    PyObject *var_a = NULL;
    PyObject *var_b = NULL;
    PyObject *var_new_im = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_0d824fdf44f71f4351836c168ab175e4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_0d824fdf44f71f4351836c168ab175e4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;


        tmp_assign_source_1 = MAKE_FUNCTION___main__$$$function_7_auto_instax$$$function_1_ShowMessage();

        assert(var_ShowMessage == NULL);
        var_ShowMessage = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;


        tmp_assign_source_2 = MAKE_FUNCTION___main__$$$function_7_auto_instax$$$function_2_process();

        assert(var_process == NULL);
        var_process = tmp_assign_source_2;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_0d824fdf44f71f4351836c168ab175e4)) {
        Py_XDECREF(cache_frame_0d824fdf44f71f4351836c168ab175e4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0d824fdf44f71f4351836c168ab175e4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0d824fdf44f71f4351836c168ab175e4 = MAKE_FUNCTION_FRAME(codeobj_0d824fdf44f71f4351836c168ab175e4, module___main__, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0d824fdf44f71f4351836c168ab175e4->m_type_description == NULL);
    frame_0d824fdf44f71f4351836c168ab175e4 = cache_frame_0d824fdf44f71f4351836c168ab175e4;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0d824fdf44f71f4351836c168ab175e4);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0d824fdf44f71f4351836c168ab175e4) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_format_spec_1;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[57]);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[58]);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 114;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0d824fdf44f71f4351836c168ab175e4->m_frame.f_lineno = 114;
        tmp_unicode_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[60]);
        if (tmp_unicode_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 114;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_format_value_1 = PyObject_Unicode(tmp_unicode_arg_1);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_format_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 114;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_1 = mod_consts[61];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        Py_DECREF(tmp_format_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 114;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[62];
        PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        tmp_args_element_name_1 = PyUnicode_Join(mod_consts[61], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 114;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0d824fdf44f71f4351836c168ab175e4->m_frame.f_lineno = 114;
        tmp_operand_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooooooo";
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
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_format_value_2;
        PyObject *tmp_unicode_arg_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_format_spec_2;
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[63]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 115;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0d824fdf44f71f4351836c168ab175e4->m_frame.f_lineno = 115;
        tmp_unicode_arg_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[60]);
        if (tmp_unicode_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 115;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_format_value_2 = PyObject_Unicode(tmp_unicode_arg_2);
        Py_DECREF(tmp_unicode_arg_2);
        if (tmp_format_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 115;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_2 = mod_consts[61];
        tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
        Py_DECREF(tmp_format_value_2);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 115;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_2 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = mod_consts[62];
        PyTuple_SET_ITEM0(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
        tmp_args_element_name_2 = PyUnicode_Join(mod_consts[61], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 115;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0d824fdf44f71f4351836c168ab175e4->m_frame.f_lineno = 115;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = mod_consts[64];
        assert(var_i == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_i = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0d824fdf44f71f4351836c168ab175e4->m_frame.f_lineno = 119;
        tmp_assign_source_4 = CALL_METHOD_WITH_ARGS3(tmp_called_instance_3, mod_consts[66], &PyTuple_GET_ITEM(mod_consts[67], 0));

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_cut_line == NULL);
        var_cut_line = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_3;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_args_element_name_3 = par_path;
        frame_0d824fdf44f71f4351836c168ab175e4->m_frame.f_lineno = 120;
        tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[68], tmp_args_element_name_3);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_5;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_6 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooo";
                exception_lineno = 120;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_7 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_filename;
            var_filename = tmp_assign_source_7;
            Py_INCREF(var_filename);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_2;
        int tmp_truth_name_1;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_3;
        int tmp_truth_name_2;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_4;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_filename);
        tmp_called_instance_5 = var_filename;
        frame_0d824fdf44f71f4351836c168ab175e4->m_frame.f_lineno = 121;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_5, mod_consts[69], &PyTuple_GET_ITEM(mod_consts[70], 0));

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 121;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        if (var_filename == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[71]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 121;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_6 = var_filename;
        frame_0d824fdf44f71f4351836c168ab175e4->m_frame.f_lineno = 121;
        tmp_call_result_3 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_6, mod_consts[69], &PyTuple_GET_ITEM(mod_consts[72], 0));

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_3);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_3);

            exception_lineno = 121;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_or_left_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_3);
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        if (var_filename == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[71]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 121;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_7 = var_filename;
        frame_0d824fdf44f71f4351836c168ab175e4->m_frame.f_lineno = 121;
        tmp_call_result_4 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_7, mod_consts[69], &PyTuple_GET_ITEM(mod_consts[73], 0));

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_4);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_4);

            exception_lineno = 121;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_or_right_value_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_4);
        tmp_or_right_value_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_or_right_value_1 = tmp_or_left_value_2;
        or_end_2:;
        tmp_condition_result_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_2 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_string_concat_values_3;
        PyObject *tmp_tuple_element_3;
        tmp_called_name_3 = LOOKUP_BUILTIN(mod_consts[74]);
        assert(tmp_called_name_3 != NULL);
        tmp_tuple_element_3 = mod_consts[75];
        tmp_string_concat_values_3 = PyTuple_New(5);
        {
            PyObject *tmp_format_value_3;
            PyObject *tmp_format_spec_3;
            PyObject *tmp_format_value_4;
            PyObject *tmp_format_spec_4;
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
            if (var_i == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 122;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_1;
            }

            tmp_format_value_3 = var_i;
            tmp_format_spec_3 = mod_consts[61];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[77];
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
            if (var_filename == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[71]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 122;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_1;
            }

            tmp_format_value_4 = var_filename;
            tmp_format_spec_4 = mod_consts[61];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_4, tmp_format_spec_4);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 3, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[78];
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 4, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_3);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_name_4 = PyUnicode_Join(mod_consts[61], tmp_string_concat_values_3);
        Py_DECREF(tmp_string_concat_values_3);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        frame_0d824fdf44f71f4351836c168ab175e4->m_frame.f_lineno = 122;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_4);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tmp_condition_result_3_object_1;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 123;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_left_name_1 = var_i;
        tmp_right_name_1 = mod_consts[79];
        tmp_compexpr_left_1 = BINARY_OPERATION_MOD_OBJECT_LONG_LONG(tmp_left_name_1, tmp_right_name_1);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_compexpr_right_1 = mod_consts[64];
        tmp_tmp_condition_result_3_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        assert(!(tmp_tmp_condition_result_3_object_1 == NULL));
        tmp_condition_result_3 = CHECK_IF_TRUE(tmp_tmp_condition_result_3_object_1) == 1;
        Py_DECREF(tmp_tmp_condition_result_3_object_1);
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        if (var_process == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 124;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_4 = var_process;
        if (par_path == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 124;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_left_name_3 = par_path;
        tmp_right_name_2 = mod_consts[80];
        tmp_left_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_3, tmp_right_name_2);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        if (var_filename == NULL) {
            Py_DECREF(tmp_left_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[71]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 124;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_right_name_3 = var_filename;
        tmp_args_element_name_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_3);
        Py_DECREF(tmp_left_name_2);
        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        frame_0d824fdf44f71f4351836c168ab175e4->m_frame.f_lineno = 124;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_5);
        Py_DECREF(tmp_args_element_name_5);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_a;
            var_a = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_left_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_4;
        PyObject *tmp_right_name_5;
        if (var_process == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 127;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_5 = var_process;
        if (par_path == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 127;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_left_name_5 = par_path;
        tmp_right_name_4 = mod_consts[80];
        tmp_left_name_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_5, tmp_right_name_4);
        if (tmp_left_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        if (var_filename == NULL) {
            Py_DECREF(tmp_left_name_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[71]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 127;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_right_name_5 = var_filename;
        tmp_args_element_name_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_4, tmp_right_name_5);
        Py_DECREF(tmp_left_name_4);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        frame_0d824fdf44f71f4351836c168ab175e4->m_frame.f_lineno = 127;
        tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_6);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_b;
            var_b = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_8;
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        frame_0d824fdf44f71f4351836c168ab175e4->m_frame.f_lineno = 128;
        tmp_assign_source_10 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_8, mod_consts[66], &PyTuple_GET_ITEM(mod_consts[81], 0));

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_new_im;
            var_new_im = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        CHECK_OBJECT(var_new_im);
        tmp_expression_name_4 = var_new_im;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[82]);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        if (var_a == NULL) {
            Py_DECREF(tmp_called_name_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[83]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 129;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_7 = var_a;
        tmp_args_element_name_8 = mod_consts[84];
        frame_0d824fdf44f71f4351836c168ab175e4->m_frame.f_lineno = 129;
        {
            PyObject *call_args[] = {tmp_args_element_name_7, tmp_args_element_name_8};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_6, call_args);
        }

        Py_DECREF(tmp_called_name_6);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_name_7;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        if (var_new_im == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[85]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 130;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_name_5 = var_new_im;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[82]);
        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        if (var_cut_line == NULL) {
            Py_DECREF(tmp_called_name_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 130;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_9 = var_cut_line;
        tmp_args_element_name_10 = mod_consts[87];
        if (var_cut_line == NULL) {
            Py_DECREF(tmp_called_name_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 130;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_11 = var_cut_line;
        frame_0d824fdf44f71f4351836c168ab175e4->m_frame.f_lineno = 130;
        {
            PyObject *call_args[] = {tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_7, call_args);
        }

        Py_DECREF(tmp_called_name_7);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        if (var_new_im == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[85]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 131;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_9 = var_new_im;
        CHECK_OBJECT(var_b);
        tmp_args_element_name_12 = var_b;
        tmp_args_element_name_13 = mod_consts[88];
        frame_0d824fdf44f71f4351836c168ab175e4->m_frame.f_lineno = 131;
        {
            PyObject *call_args[] = {tmp_args_element_name_12, tmp_args_element_name_13};
            tmp_call_result_8 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_9, mod_consts[82], call_args);
        }

        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_10;
        if (var_new_im == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[85]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 132;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_10 = var_new_im;
        frame_0d824fdf44f71f4351836c168ab175e4->m_frame.f_lineno = 132;
        tmp_assign_source_11 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_10, mod_consts[89], &PyTuple_GET_ITEM(mod_consts[90], 0));

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_new_im;
            var_new_im = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_8;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_string_concat_values_4;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_format_value_5;
        PyObject *tmp_unicode_arg_3;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_format_spec_5;
        CHECK_OBJECT(var_new_im);
        tmp_expression_name_6 = var_new_im;
        tmp_called_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[91]);
        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_instance_11 == NULL)) {
            tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_called_instance_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_8);

            exception_lineno = 134;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        frame_0d824fdf44f71f4351836c168ab175e4->m_frame.f_lineno = 134;
        tmp_unicode_arg_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_11, mod_consts[60]);
        if (tmp_unicode_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_8);

            exception_lineno = 134;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_format_value_5 = PyObject_Unicode(tmp_unicode_arg_3);
        Py_DECREF(tmp_unicode_arg_3);
        if (tmp_format_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_8);

            exception_lineno = 134;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_format_spec_5 = mod_consts[61];
        tmp_tuple_element_4 = BUILTIN_FORMAT(tmp_format_value_5, tmp_format_spec_5);
        Py_DECREF(tmp_format_value_5);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_8);

            exception_lineno = 134;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_string_concat_values_4 = PyTuple_New(4);
        {
            PyObject *tmp_format_value_6;
            PyObject *tmp_left_name_6;
            PyObject *tmp_right_name_6;
            PyObject *tmp_format_spec_6;
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[62];
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 1, tmp_tuple_element_4);
            if (var_i == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 134;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_2;
            }

            tmp_left_name_6 = var_i;
            tmp_right_name_6 = mod_consts[79];
            tmp_format_value_6 = BINARY_OPERATION_FLOORDIV_OBJECT_LONG_LONG(tmp_left_name_6, tmp_right_name_6);
            if (tmp_format_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_format_spec_6 = mod_consts[61];
            tmp_tuple_element_4 = BUILTIN_FORMAT(tmp_format_value_6, tmp_format_spec_6);
            Py_DECREF(tmp_format_value_6);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 2, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[92];
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 3, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_name_8);
        Py_DECREF(tmp_string_concat_values_4);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_args_element_name_14 = PyUnicode_Join(mod_consts[61], tmp_string_concat_values_4);
        Py_DECREF(tmp_string_concat_values_4);
        if (tmp_args_element_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_8);

            exception_lineno = 134;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        frame_0d824fdf44f71f4351836c168ab175e4->m_frame.f_lineno = 133;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_14);
        Py_DECREF(tmp_called_name_8);
        Py_DECREF(tmp_args_element_name_14);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_9);
    }
    branch_end_3:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 135;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_left_name_7 = var_i;
        tmp_right_name_7 = mod_consts[64];
        tmp_result = BINARY_OPERATION_ADD_LONG_LONG_INPLACE(&tmp_left_name_7, tmp_right_name_7);
        assert(!(tmp_result == false));
        tmp_assign_source_12 = tmp_left_name_7;
        var_i = tmp_assign_source_12;

    }
    goto loop_start_1;
    goto branch_end_2;
    branch_no_2:;
    goto loop_start_1;
    branch_end_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 120;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_name_9;
        PyObject *tmp_call_result_10;
        CHECK_OBJECT(var_ShowMessage);
        tmp_called_name_9 = var_ShowMessage;
        frame_0d824fdf44f71f4351836c168ab175e4->m_frame.f_lineno = 139;
        tmp_call_result_10 = CALL_FUNCTION_NO_ARGS(tmp_called_name_9);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0d824fdf44f71f4351836c168ab175e4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0d824fdf44f71f4351836c168ab175e4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0d824fdf44f71f4351836c168ab175e4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0d824fdf44f71f4351836c168ab175e4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0d824fdf44f71f4351836c168ab175e4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0d824fdf44f71f4351836c168ab175e4,
        type_description_1,
        par_self,
        par_path,
        var_ShowMessage,
        var_process,
        var_i,
        var_cut_line,
        var_filename,
        var_a,
        var_b,
        var_new_im
    );


    // Release cached frame if used for exception.
    if (frame_0d824fdf44f71f4351836c168ab175e4 == cache_frame_0d824fdf44f71f4351836c168ab175e4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_0d824fdf44f71f4351836c168ab175e4);
        cache_frame_0d824fdf44f71f4351836c168ab175e4 = NULL;
    }

    assertFrameObject(frame_0d824fdf44f71f4351836c168ab175e4);

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
    CHECK_OBJECT(var_ShowMessage);
    Py_DECREF(var_ShowMessage);
    var_ShowMessage = NULL;
    Py_XDECREF(var_process);
    var_process = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_cut_line);
    var_cut_line = NULL;
    Py_XDECREF(var_filename);
    var_filename = NULL;
    Py_XDECREF(var_a);
    var_a = NULL;
    Py_XDECREF(var_b);
    var_b = NULL;
    Py_XDECREF(var_new_im);
    var_new_im = NULL;
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

    CHECK_OBJECT(var_ShowMessage);
    Py_DECREF(var_ShowMessage);
    var_ShowMessage = NULL;
    Py_XDECREF(var_process);
    var_process = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_cut_line);
    var_cut_line = NULL;
    Py_XDECREF(var_filename);
    var_filename = NULL;
    Py_XDECREF(var_a);
    var_a = NULL;
    Py_XDECREF(var_b);
    var_b = NULL;
    Py_XDECREF(var_new_im);
    var_new_im = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function_7_auto_instax$$$function_1_ShowMessage(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_00887f4ae38267481a82cd5dd899165f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_00887f4ae38267481a82cd5dd899165f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_00887f4ae38267481a82cd5dd899165f)) {
        Py_XDECREF(cache_frame_00887f4ae38267481a82cd5dd899165f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_00887f4ae38267481a82cd5dd899165f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_00887f4ae38267481a82cd5dd899165f = MAKE_FUNCTION_FRAME(codeobj_00887f4ae38267481a82cd5dd899165f, module___main__, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_00887f4ae38267481a82cd5dd899165f->m_type_description == NULL);
    frame_00887f4ae38267481a82cd5dd899165f = cache_frame_00887f4ae38267481a82cd5dd899165f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_00887f4ae38267481a82cd5dd899165f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_00887f4ae38267481a82cd5dd899165f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_expression_name_3;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[47]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = mod_consts[93];
        tmp_args_element_name_2 = mod_consts[49];
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[50]);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[51]);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        frame_00887f4ae38267481a82cd5dd899165f->m_frame.f_lineno = 65;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_00887f4ae38267481a82cd5dd899165f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_00887f4ae38267481a82cd5dd899165f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_00887f4ae38267481a82cd5dd899165f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_00887f4ae38267481a82cd5dd899165f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_00887f4ae38267481a82cd5dd899165f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_00887f4ae38267481a82cd5dd899165f,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_00887f4ae38267481a82cd5dd899165f == cache_frame_00887f4ae38267481a82cd5dd899165f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_00887f4ae38267481a82cd5dd899165f);
        cache_frame_00887f4ae38267481a82cd5dd899165f = NULL;
    }

    assertFrameObject(frame_00887f4ae38267481a82cd5dd899165f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

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


static PyObject *impl___main__$$$function_7_auto_instax$$$function_2_process(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_filename = python_pars[0];
    PyObject *var_Image = NULL;
    PyObject *var_image = NULL;
    PyObject *var_image_size = NULL;
    PyObject *var_width = NULL;
    PyObject *var_height = NULL;
    PyObject *var_new_width = NULL;
    PyObject *var_new_height = NULL;
    PyObject *var_background = NULL;
    PyObject *var_paper_size = NULL;
    PyObject *var_paper = NULL;
    PyObject *var_offset = NULL;
    struct Nuitka_FrameObject *frame_a7782b4a2d51c31d37a52180c696d5b4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a7782b4a2d51c31d37a52180c696d5b4 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a7782b4a2d51c31d37a52180c696d5b4)) {
        Py_XDECREF(cache_frame_a7782b4a2d51c31d37a52180c696d5b4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a7782b4a2d51c31d37a52180c696d5b4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a7782b4a2d51c31d37a52180c696d5b4 = MAKE_FUNCTION_FRAME(codeobj_a7782b4a2d51c31d37a52180c696d5b4, module___main__, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a7782b4a2d51c31d37a52180c696d5b4->m_type_description == NULL);
    frame_a7782b4a2d51c31d37a52180c696d5b4 = cache_frame_a7782b4a2d51c31d37a52180c696d5b4;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a7782b4a2d51c31d37a52180c696d5b4);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a7782b4a2d51c31d37a52180c696d5b4) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[94];
        tmp_globals_name_1 = (PyObject *)moduledict___main__;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = mod_consts[95];
        tmp_level_name_1 = mod_consts[96];
        frame_a7782b4a2d51c31d37a52180c696d5b4->m_frame.f_lineno = 69;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict___main__,
                mod_consts[65],
                mod_consts[96]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[65]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_Image == NULL);
        var_Image = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT(var_Image);
        tmp_called_instance_1 = var_Image;
        CHECK_OBJECT(par_filename);
        tmp_args_element_name_1 = par_filename;
        tmp_args_element_name_2 = mod_consts[98];
        frame_a7782b4a2d51c31d37a52180c696d5b4->m_frame.f_lineno = 70;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_1, mod_consts[97], call_args);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_image == NULL);
        var_image = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(var_image);
        tmp_expression_name_1 = var_image;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[99]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_image_size == NULL);
        var_image_size = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(var_image_size);
        tmp_expression_name_2 = var_image_size;
        tmp_subscript_name_1 = mod_consts[96];
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_2, tmp_subscript_name_1, 0);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_width == NULL);
        var_width = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT(var_image_size);
        tmp_expression_name_3 = var_image_size;
        tmp_subscript_name_2 = mod_consts[64];
        tmp_assign_source_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_3, tmp_subscript_name_2, 1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_height == NULL);
        var_height = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(var_width);
        tmp_compexpr_left_1 = var_width;
        CHECK_OBJECT(var_height);
        tmp_compexpr_right_1 = var_height;
        tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        assert(tmp_condition_result_1 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_args_name_1;
        PyObject *tmp_kw_name_1;
        if (var_image == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[100]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 76;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = var_image;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[101]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = mod_consts[102];
        tmp_kw_name_1 = PyDict_Copy(mod_consts[103]);
        frame_a7782b4a2d51c31d37a52180c696d5b4->m_frame.f_lineno = 76;
        tmp_assign_source_6 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_image;
            var_image = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_name_5;
        CHECK_OBJECT(var_image);
        tmp_expression_name_5 = var_image;
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[99]);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_image_size;
            assert(old != NULL);
            var_image_size = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT(var_image_size);
        tmp_expression_name_6 = var_image_size;
        tmp_subscript_name_3 = mod_consts[96];
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_6, tmp_subscript_name_3, 0);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_width;
            assert(old != NULL);
            var_width = tmp_assign_source_8;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_subscript_name_4;
        CHECK_OBJECT(var_image_size);
        tmp_expression_name_7 = var_image_size;
        tmp_subscript_name_4 = mod_consts[64];
        tmp_assign_source_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_7, tmp_subscript_name_4, 1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_height;
            assert(old != NULL);
            var_height = tmp_assign_source_9;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[104];
        assert(var_new_width == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_new_width = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[105];
        assert(var_new_height == NULL);
        Py_INCREF(tmp_assign_source_11);
        var_new_height = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        tmp_expression_name_8 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_expression_name_8 == NULL)) {
            tmp_expression_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
        }

        if (tmp_expression_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[107]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_new_width);
        tmp_left_name_2 = var_new_width;
        CHECK_OBJECT(var_width);
        tmp_right_name_1 = var_width;
        tmp_left_name_1 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_OBJECT(tmp_left_name_2, tmp_right_name_1);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 83;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_width);
        tmp_right_name_2 = var_width;
        tmp_args_element_name_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_2);
        Py_DECREF(tmp_left_name_1);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 83;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a7782b4a2d51c31d37a52180c696d5b4->m_frame.f_lineno = 83;
        tmp_assign_source_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_3);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_new_width;
            assert(old != NULL);
            var_new_width = tmp_assign_source_12;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_tuple_element_1;
        if (var_image == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[100]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 84;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_9 = var_image;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[108]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_new_width);
        tmp_tuple_element_1 = var_new_width;
        tmp_args_element_name_4 = PyTuple_New(2);
        {
            PyObject *tmp_called_name_4;
            PyObject *tmp_expression_name_10;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_left_name_3;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_3;
            PyObject *tmp_right_name_4;
            PyTuple_SET_ITEM0(tmp_args_element_name_4, 0, tmp_tuple_element_1);
            tmp_expression_name_10 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[106]);

            if (unlikely(tmp_expression_name_10 == NULL)) {
                tmp_expression_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
            }

            if (tmp_expression_name_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[107]);
            if (tmp_called_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(var_new_width);
            tmp_left_name_4 = var_new_width;
            CHECK_OBJECT(var_width);
            tmp_right_name_3 = var_width;
            tmp_left_name_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_name_4, tmp_right_name_3);
            if (tmp_left_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_4);

                exception_lineno = 85;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(var_height);
            tmp_right_name_4 = var_height;
            tmp_args_element_name_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_3, tmp_right_name_4);
            Py_DECREF(tmp_left_name_3);
            if (tmp_args_element_name_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_4);

                exception_lineno = 85;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_1;
            }
            frame_a7782b4a2d51c31d37a52180c696d5b4->m_frame.f_lineno = 85;
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_5);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_args_element_name_5);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_name_4, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_4);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        frame_a7782b4a2d51c31d37a52180c696d5b4->m_frame.f_lineno = 84;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_4);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_image;
            var_image = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_expression_name_11;
        CHECK_OBJECT(var_image);
        tmp_expression_name_11 = var_image;
        tmp_assign_source_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[99]);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_image_size;
            assert(old != NULL);
            var_image_size = tmp_assign_source_14;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_subscript_name_5;
        CHECK_OBJECT(var_image_size);
        tmp_expression_name_12 = var_image_size;
        tmp_subscript_name_5 = mod_consts[96];
        tmp_assign_source_15 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_12, tmp_subscript_name_5, 0);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_width;
            assert(old != NULL);
            var_width = tmp_assign_source_15;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_subscript_name_6;
        CHECK_OBJECT(var_image_size);
        tmp_expression_name_13 = var_image_size;
        tmp_subscript_name_6 = mod_consts[64];
        tmp_assign_source_16 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_13, tmp_subscript_name_6, 1);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_height;
            assert(old != NULL);
            var_height = tmp_assign_source_16;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_tmp_condition_result_2_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_height);
        tmp_compexpr_left_2 = var_height;
        CHECK_OBJECT(var_new_height);
        tmp_compexpr_right_2 = var_new_height;
        tmp_tmp_condition_result_2_object_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_tmp_condition_result_2_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_2_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_2_object_1);

            exception_lineno = 91;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_2_object_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_left_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_5;
        PyObject *tmp_right_name_6;
        tmp_expression_name_14 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_expression_name_14 == NULL)) {
            tmp_expression_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
        }

        if (tmp_expression_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[107]);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_new_height);
        tmp_left_name_6 = var_new_height;
        CHECK_OBJECT(var_height);
        tmp_right_name_5 = var_height;
        tmp_left_name_5 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_OBJECT(tmp_left_name_6, tmp_right_name_5);
        if (tmp_left_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);

            exception_lineno = 92;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_height);
        tmp_right_name_6 = var_height;
        tmp_args_element_name_6 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_5, tmp_right_name_6);
        Py_DECREF(tmp_left_name_5);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);

            exception_lineno = 92;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a7782b4a2d51c31d37a52180c696d5b4->m_frame.f_lineno = 92;
        tmp_assign_source_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_6);
        Py_DECREF(tmp_called_name_5);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_new_height;
            assert(old != NULL);
            var_new_height = tmp_assign_source_17;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_name_6;
        PyObject *tmp_expression_name_15;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_called_name_7;
        PyObject *tmp_expression_name_16;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_left_name_7;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_7;
        PyObject *tmp_right_name_8;
        if (var_image == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[100]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 93;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_15 = var_image;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, mod_consts[108]);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_16 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_expression_name_16 == NULL)) {
            tmp_expression_name_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
        }

        if (tmp_expression_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);

            exception_lineno = 94;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, mod_consts[107]);
        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);

            exception_lineno = 94;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_new_height);
        tmp_left_name_8 = var_new_height;
        CHECK_OBJECT(var_height);
        tmp_right_name_7 = var_height;
        tmp_left_name_7 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_name_8, tmp_right_name_7);
        if (tmp_left_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 94;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_width);
        tmp_right_name_8 = var_width;
        tmp_args_element_name_8 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_7, tmp_right_name_8);
        Py_DECREF(tmp_left_name_7);
        if (tmp_args_element_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 94;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a7782b4a2d51c31d37a52180c696d5b4->m_frame.f_lineno = 94;
        tmp_tuple_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_8);
        Py_DECREF(tmp_called_name_7);
        Py_DECREF(tmp_args_element_name_8);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);

            exception_lineno = 94;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_7 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_args_element_name_7, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_new_height);
        tmp_tuple_element_2 = var_new_height;
        PyTuple_SET_ITEM0(tmp_args_element_name_7, 1, tmp_tuple_element_2);
        frame_a7782b4a2d51c31d37a52180c696d5b4->m_frame.f_lineno = 93;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_7);
        Py_DECREF(tmp_called_name_6);
        Py_DECREF(tmp_args_element_name_7);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_image;
            var_image = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_expression_name_17;
        CHECK_OBJECT(var_image);
        tmp_expression_name_17 = var_image;
        tmp_assign_source_19 = LOOKUP_ATTRIBUTE(tmp_expression_name_17, mod_consts[99]);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_image_size;
            assert(old != NULL);
            var_image_size = tmp_assign_source_19;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_expression_name_18;
        PyObject *tmp_subscript_name_7;
        CHECK_OBJECT(var_image_size);
        tmp_expression_name_18 = var_image_size;
        tmp_subscript_name_7 = mod_consts[96];
        tmp_assign_source_20 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_18, tmp_subscript_name_7, 0);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_width;
            assert(old != NULL);
            var_width = tmp_assign_source_20;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_expression_name_19;
        PyObject *tmp_subscript_name_8;
        CHECK_OBJECT(var_image_size);
        tmp_expression_name_19 = var_image_size;
        tmp_subscript_name_8 = mod_consts[64];
        tmp_assign_source_21 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_19, tmp_subscript_name_8, 1);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_height;
            assert(old != NULL);
            var_height = tmp_assign_source_21;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_args_element_name_11;
        if (var_Image == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 99;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = var_Image;
        tmp_args_element_name_9 = mod_consts[109];
        CHECK_OBJECT(var_new_width);
        tmp_tuple_element_3 = var_new_width;
        tmp_args_element_name_10 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_element_name_10, 0, tmp_tuple_element_3);
        CHECK_OBJECT(var_new_height);
        tmp_tuple_element_3 = var_new_height;
        PyTuple_SET_ITEM0(tmp_args_element_name_10, 1, tmp_tuple_element_3);
        tmp_args_element_name_11 = mod_consts[110];
        frame_a7782b4a2d51c31d37a52180c696d5b4->m_frame.f_lineno = 99;
        {
            PyObject *call_args[] = {tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11};
            tmp_assign_source_22 = CALL_METHOD_WITH_ARGS3(tmp_called_instance_2, mod_consts[66], call_args);
        }

        Py_DECREF(tmp_args_element_name_10);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_background == NULL);
        var_background = tmp_assign_source_22;
    }
    {
        PyObject *tmp_called_name_8;
        PyObject *tmp_expression_name_20;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        CHECK_OBJECT(var_background);
        tmp_expression_name_20 = var_background;
        tmp_called_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_20, mod_consts[82]);
        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_image == NULL) {
            Py_DECREF(tmp_called_name_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[100]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 101;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_12 = var_image;
        CHECK_OBJECT(var_new_width);
        tmp_left_name_9 = var_new_width;
        CHECK_OBJECT(var_width);
        tmp_right_name_9 = var_width;
        tmp_tuple_element_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_9, tmp_right_name_9);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_8);

            exception_lineno = 101;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_13 = PyTuple_New(2);
        {
            PyObject *tmp_left_name_10;
            PyObject *tmp_right_name_10;
            PyTuple_SET_ITEM(tmp_args_element_name_13, 0, tmp_tuple_element_4);
            CHECK_OBJECT(var_new_height);
            tmp_left_name_10 = var_new_height;
            CHECK_OBJECT(var_height);
            tmp_right_name_10 = var_height;
            tmp_tuple_element_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_10, tmp_right_name_10);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_args_element_name_13, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_name_8);
        Py_DECREF(tmp_args_element_name_13);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        frame_a7782b4a2d51c31d37a52180c696d5b4->m_frame.f_lineno = 101;
        {
            PyObject *call_args[] = {tmp_args_element_name_12, tmp_args_element_name_13};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_8, call_args);
        }

        Py_DECREF(tmp_called_name_8);
        Py_DECREF(tmp_args_element_name_13);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[111];
        assert(var_paper_size == NULL);
        Py_INCREF(tmp_assign_source_23);
        var_paper_size = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_args_element_name_16;
        if (var_Image == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 105;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = var_Image;
        tmp_args_element_name_14 = mod_consts[109];
        CHECK_OBJECT(var_paper_size);
        tmp_args_element_name_15 = var_paper_size;
        tmp_args_element_name_16 = mod_consts[110];
        frame_a7782b4a2d51c31d37a52180c696d5b4->m_frame.f_lineno = 105;
        {
            PyObject *call_args[] = {tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_16};
            tmp_assign_source_24 = CALL_METHOD_WITH_ARGS3(tmp_called_instance_3, mod_consts[66], call_args);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_paper == NULL);
        var_paper = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_called_name_9;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_left_name_11;
        PyObject *tmp_left_name_12;
        PyObject *tmp_expression_name_21;
        PyObject *tmp_subscript_name_9;
        PyObject *tmp_right_name_11;
        PyObject *tmp_right_name_12;
        tmp_called_name_9 = LOOKUP_BUILTIN(mod_consts[112]);
        assert(tmp_called_name_9 != NULL);
        CHECK_OBJECT(var_paper_size);
        tmp_expression_name_21 = var_paper_size;
        tmp_subscript_name_9 = mod_consts[96];
        tmp_left_name_12 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_21, tmp_subscript_name_9, 0);
        if (tmp_left_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_width);
        tmp_right_name_11 = var_width;
        tmp_left_name_11 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_12, tmp_right_name_11);
        Py_DECREF(tmp_left_name_12);
        if (tmp_left_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_12 = mod_consts[79];
        tmp_args_element_name_17 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_name_11, tmp_right_name_12);
        Py_DECREF(tmp_left_name_11);
        if (tmp_args_element_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a7782b4a2d51c31d37a52180c696d5b4->m_frame.f_lineno = 107;
        tmp_tuple_element_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_9, tmp_args_element_name_17);
        Py_DECREF(tmp_args_element_name_17);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_25 = PyTuple_New(2);
        {
            PyObject *tmp_left_name_13;
            PyObject *tmp_right_name_13;
            PyObject *tmp_called_name_10;
            PyObject *tmp_args_element_name_18;
            PyObject *tmp_left_name_14;
            PyObject *tmp_left_name_15;
            PyObject *tmp_right_name_14;
            PyObject *tmp_right_name_15;
            PyTuple_SET_ITEM(tmp_assign_source_25, 0, tmp_tuple_element_5);
            tmp_left_name_13 = mod_consts[113];
            tmp_called_name_10 = LOOKUP_BUILTIN(mod_consts[112]);
            assert(tmp_called_name_10 != NULL);
            CHECK_OBJECT(var_new_height);
            tmp_left_name_15 = var_new_height;
            CHECK_OBJECT(var_height);
            tmp_right_name_14 = var_height;
            tmp_left_name_14 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_15, tmp_right_name_14);
            if (tmp_left_name_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_right_name_15 = mod_consts[79];
            tmp_args_element_name_18 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_name_14, tmp_right_name_15);
            Py_DECREF(tmp_left_name_14);
            if (tmp_args_element_name_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_3;
            }
            frame_a7782b4a2d51c31d37a52180c696d5b4->m_frame.f_lineno = 108;
            tmp_right_name_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_10, tmp_args_element_name_18);
            Py_DECREF(tmp_args_element_name_18);
            if (tmp_right_name_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_tuple_element_5 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_left_name_13, tmp_right_name_13);
            Py_DECREF(tmp_right_name_13);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_25, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_assign_source_25);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        assert(var_offset == NULL);
        var_offset = tmp_assign_source_25;
    }
    {
        PyObject *tmp_called_name_11;
        PyObject *tmp_expression_name_22;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_args_element_name_20;
        CHECK_OBJECT(var_paper);
        tmp_expression_name_22 = var_paper;
        tmp_called_name_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_22, mod_consts[82]);
        if (tmp_called_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_image == NULL) {
            Py_DECREF(tmp_called_name_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[100]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 110;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_19 = var_image;
        CHECK_OBJECT(var_offset);
        tmp_args_element_name_20 = var_offset;
        frame_a7782b4a2d51c31d37a52180c696d5b4->m_frame.f_lineno = 110;
        {
            PyObject *call_args[] = {tmp_args_element_name_19, tmp_args_element_name_20};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_11, call_args);
        }

        Py_DECREF(tmp_called_name_11);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (var_paper == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[114]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 112;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_paper;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a7782b4a2d51c31d37a52180c696d5b4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a7782b4a2d51c31d37a52180c696d5b4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a7782b4a2d51c31d37a52180c696d5b4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a7782b4a2d51c31d37a52180c696d5b4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a7782b4a2d51c31d37a52180c696d5b4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a7782b4a2d51c31d37a52180c696d5b4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a7782b4a2d51c31d37a52180c696d5b4,
        type_description_1,
        par_filename,
        var_Image,
        var_image,
        var_image_size,
        var_width,
        var_height,
        var_new_width,
        var_new_height,
        var_background,
        var_paper_size,
        var_paper,
        var_offset
    );


    // Release cached frame if used for exception.
    if (frame_a7782b4a2d51c31d37a52180c696d5b4 == cache_frame_a7782b4a2d51c31d37a52180c696d5b4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a7782b4a2d51c31d37a52180c696d5b4);
        cache_frame_a7782b4a2d51c31d37a52180c696d5b4 = NULL;
    }

    assertFrameObject(frame_a7782b4a2d51c31d37a52180c696d5b4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_Image);
    var_Image = NULL;
    Py_XDECREF(var_image);
    var_image = NULL;
    CHECK_OBJECT(var_image_size);
    Py_DECREF(var_image_size);
    var_image_size = NULL;
    CHECK_OBJECT(var_width);
    Py_DECREF(var_width);
    var_width = NULL;
    CHECK_OBJECT(var_height);
    Py_DECREF(var_height);
    var_height = NULL;
    CHECK_OBJECT(var_new_width);
    Py_DECREF(var_new_width);
    var_new_width = NULL;
    CHECK_OBJECT(var_new_height);
    Py_DECREF(var_new_height);
    var_new_height = NULL;
    Py_XDECREF(var_background);
    var_background = NULL;
    CHECK_OBJECT(var_paper_size);
    Py_DECREF(var_paper_size);
    var_paper_size = NULL;
    Py_XDECREF(var_paper);
    var_paper = NULL;
    CHECK_OBJECT(var_offset);
    Py_DECREF(var_offset);
    var_offset = NULL;
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

    Py_XDECREF(var_Image);
    var_Image = NULL;
    Py_XDECREF(var_image);
    var_image = NULL;
    Py_XDECREF(var_image_size);
    var_image_size = NULL;
    Py_XDECREF(var_width);
    var_width = NULL;
    Py_XDECREF(var_height);
    var_height = NULL;
    Py_XDECREF(var_new_width);
    var_new_width = NULL;
    Py_XDECREF(var_new_height);
    var_new_height = NULL;
    Py_XDECREF(var_background);
    var_background = NULL;
    Py_XDECREF(var_paper_size);
    var_paper_size = NULL;
    Py_XDECREF(var_paper);
    var_paper = NULL;
    Py_XDECREF(var_offset);
    var_offset = NULL;
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
    CHECK_OBJECT(par_filename);
    Py_DECREF(par_filename);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_filename);
    Py_DECREF(par_filename);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function_8_auto_2r(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    PyObject *var_ShowMessage = NULL;
    PyObject *var_process = NULL;
    PyObject *var_i = NULL;
    PyObject *var_cut_line = NULL;
    PyObject *var_filename = NULL;
    PyObject *var_a = NULL;
    PyObject *var_b = NULL;
    PyObject *var_new_im = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_168c262041bad7b77b39f6f9f042f8a6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_168c262041bad7b77b39f6f9f042f8a6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;


        tmp_assign_source_1 = MAKE_FUNCTION___main__$$$function_8_auto_2r$$$function_1_ShowMessage();

        assert(var_ShowMessage == NULL);
        var_ShowMessage = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;


        tmp_assign_source_2 = MAKE_FUNCTION___main__$$$function_8_auto_2r$$$function_2_process();

        assert(var_process == NULL);
        var_process = tmp_assign_source_2;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_168c262041bad7b77b39f6f9f042f8a6)) {
        Py_XDECREF(cache_frame_168c262041bad7b77b39f6f9f042f8a6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_168c262041bad7b77b39f6f9f042f8a6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_168c262041bad7b77b39f6f9f042f8a6 = MAKE_FUNCTION_FRAME(codeobj_168c262041bad7b77b39f6f9f042f8a6, module___main__, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_168c262041bad7b77b39f6f9f042f8a6->m_type_description == NULL);
    frame_168c262041bad7b77b39f6f9f042f8a6 = cache_frame_168c262041bad7b77b39f6f9f042f8a6;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_168c262041bad7b77b39f6f9f042f8a6);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_168c262041bad7b77b39f6f9f042f8a6) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_format_spec_1;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[57]);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[58]);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 192;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_168c262041bad7b77b39f6f9f042f8a6->m_frame.f_lineno = 192;
        tmp_unicode_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[60]);
        if (tmp_unicode_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 192;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_format_value_1 = PyObject_Unicode(tmp_unicode_arg_1);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_format_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 192;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_1 = mod_consts[61];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        Py_DECREF(tmp_format_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 192;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[62];
        PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        tmp_args_element_name_1 = PyUnicode_Join(mod_consts[61], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 192;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_168c262041bad7b77b39f6f9f042f8a6->m_frame.f_lineno = 192;
        tmp_operand_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooooooooo";
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
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_format_value_2;
        PyObject *tmp_unicode_arg_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_format_spec_2;
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[63]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 193;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_168c262041bad7b77b39f6f9f042f8a6->m_frame.f_lineno = 193;
        tmp_unicode_arg_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[60]);
        if (tmp_unicode_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 193;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_format_value_2 = PyObject_Unicode(tmp_unicode_arg_2);
        Py_DECREF(tmp_unicode_arg_2);
        if (tmp_format_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 193;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_2 = mod_consts[61];
        tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
        Py_DECREF(tmp_format_value_2);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 193;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_2 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = mod_consts[62];
        PyTuple_SET_ITEM0(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
        tmp_args_element_name_2 = PyUnicode_Join(mod_consts[61], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 193;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_168c262041bad7b77b39f6f9f042f8a6->m_frame.f_lineno = 193;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = mod_consts[64];
        assert(var_i == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_i = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_168c262041bad7b77b39f6f9f042f8a6->m_frame.f_lineno = 197;
        tmp_assign_source_4 = CALL_METHOD_WITH_ARGS3(tmp_called_instance_3, mod_consts[66], &PyTuple_GET_ITEM(mod_consts[67], 0));

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_cut_line == NULL);
        var_cut_line = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_3;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_args_element_name_3 = par_path;
        frame_168c262041bad7b77b39f6f9f042f8a6->m_frame.f_lineno = 198;
        tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[68], tmp_args_element_name_3);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_5;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_6 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooo";
                exception_lineno = 198;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_7 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_filename;
            var_filename = tmp_assign_source_7;
            Py_INCREF(var_filename);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_2;
        int tmp_truth_name_1;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_3;
        int tmp_truth_name_2;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_4;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_filename);
        tmp_called_instance_5 = var_filename;
        frame_168c262041bad7b77b39f6f9f042f8a6->m_frame.f_lineno = 199;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_5, mod_consts[69], &PyTuple_GET_ITEM(mod_consts[70], 0));

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 199;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        if (var_filename == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[71]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 199;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_6 = var_filename;
        frame_168c262041bad7b77b39f6f9f042f8a6->m_frame.f_lineno = 199;
        tmp_call_result_3 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_6, mod_consts[69], &PyTuple_GET_ITEM(mod_consts[72], 0));

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_3);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_3);

            exception_lineno = 199;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_or_left_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_3);
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        if (var_filename == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[71]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 199;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_7 = var_filename;
        frame_168c262041bad7b77b39f6f9f042f8a6->m_frame.f_lineno = 199;
        tmp_call_result_4 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_7, mod_consts[69], &PyTuple_GET_ITEM(mod_consts[73], 0));

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_4);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_4);

            exception_lineno = 199;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_or_right_value_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_4);
        tmp_or_right_value_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_or_right_value_1 = tmp_or_left_value_2;
        or_end_2:;
        tmp_condition_result_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_2 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_string_concat_values_3;
        PyObject *tmp_tuple_element_3;
        tmp_called_name_3 = LOOKUP_BUILTIN(mod_consts[74]);
        assert(tmp_called_name_3 != NULL);
        tmp_tuple_element_3 = mod_consts[75];
        tmp_string_concat_values_3 = PyTuple_New(5);
        {
            PyObject *tmp_format_value_3;
            PyObject *tmp_format_spec_3;
            PyObject *tmp_format_value_4;
            PyObject *tmp_format_spec_4;
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
            if (var_i == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 200;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_1;
            }

            tmp_format_value_3 = var_i;
            tmp_format_spec_3 = mod_consts[61];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[77];
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
            if (var_filename == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[71]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 200;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_1;
            }

            tmp_format_value_4 = var_filename;
            tmp_format_spec_4 = mod_consts[61];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_4, tmp_format_spec_4);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 3, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[78];
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 4, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_3);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_name_4 = PyUnicode_Join(mod_consts[61], tmp_string_concat_values_3);
        Py_DECREF(tmp_string_concat_values_3);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        frame_168c262041bad7b77b39f6f9f042f8a6->m_frame.f_lineno = 200;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_4);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tmp_condition_result_3_object_1;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 201;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_left_name_1 = var_i;
        tmp_right_name_1 = mod_consts[79];
        tmp_compexpr_left_1 = BINARY_OPERATION_MOD_OBJECT_LONG_LONG(tmp_left_name_1, tmp_right_name_1);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_compexpr_right_1 = mod_consts[64];
        tmp_tmp_condition_result_3_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        assert(!(tmp_tmp_condition_result_3_object_1 == NULL));
        tmp_condition_result_3 = CHECK_IF_TRUE(tmp_tmp_condition_result_3_object_1) == 1;
        Py_DECREF(tmp_tmp_condition_result_3_object_1);
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        if (var_process == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 202;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_4 = var_process;
        if (par_path == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 202;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_left_name_3 = par_path;
        tmp_right_name_2 = mod_consts[80];
        tmp_left_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_3, tmp_right_name_2);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        if (var_filename == NULL) {
            Py_DECREF(tmp_left_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[71]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 202;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_right_name_3 = var_filename;
        tmp_args_element_name_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_3);
        Py_DECREF(tmp_left_name_2);
        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        frame_168c262041bad7b77b39f6f9f042f8a6->m_frame.f_lineno = 202;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_5);
        Py_DECREF(tmp_args_element_name_5);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_a;
            var_a = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_left_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_4;
        PyObject *tmp_right_name_5;
        if (var_process == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 205;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_5 = var_process;
        if (par_path == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 205;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_left_name_5 = par_path;
        tmp_right_name_4 = mod_consts[80];
        tmp_left_name_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_5, tmp_right_name_4);
        if (tmp_left_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        if (var_filename == NULL) {
            Py_DECREF(tmp_left_name_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[71]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 205;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_right_name_5 = var_filename;
        tmp_args_element_name_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_4, tmp_right_name_5);
        Py_DECREF(tmp_left_name_4);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        frame_168c262041bad7b77b39f6f9f042f8a6->m_frame.f_lineno = 205;
        tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_6);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_b;
            var_b = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_8;
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        frame_168c262041bad7b77b39f6f9f042f8a6->m_frame.f_lineno = 206;
        tmp_assign_source_10 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_8, mod_consts[66], &PyTuple_GET_ITEM(mod_consts[81], 0));

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_new_im;
            var_new_im = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        CHECK_OBJECT(var_new_im);
        tmp_expression_name_4 = var_new_im;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[82]);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        if (var_a == NULL) {
            Py_DECREF(tmp_called_name_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[83]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 207;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_7 = var_a;
        tmp_args_element_name_8 = mod_consts[84];
        frame_168c262041bad7b77b39f6f9f042f8a6->m_frame.f_lineno = 207;
        {
            PyObject *call_args[] = {tmp_args_element_name_7, tmp_args_element_name_8};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_6, call_args);
        }

        Py_DECREF(tmp_called_name_6);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_name_7;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        if (var_new_im == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[85]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 208;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_name_5 = var_new_im;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[82]);
        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        if (var_cut_line == NULL) {
            Py_DECREF(tmp_called_name_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 208;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_9 = var_cut_line;
        tmp_args_element_name_10 = mod_consts[87];
        if (var_cut_line == NULL) {
            Py_DECREF(tmp_called_name_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 208;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_11 = var_cut_line;
        frame_168c262041bad7b77b39f6f9f042f8a6->m_frame.f_lineno = 208;
        {
            PyObject *call_args[] = {tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_7, call_args);
        }

        Py_DECREF(tmp_called_name_7);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        if (var_new_im == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[85]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 209;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_9 = var_new_im;
        CHECK_OBJECT(var_b);
        tmp_args_element_name_12 = var_b;
        tmp_args_element_name_13 = mod_consts[88];
        frame_168c262041bad7b77b39f6f9f042f8a6->m_frame.f_lineno = 209;
        {
            PyObject *call_args[] = {tmp_args_element_name_12, tmp_args_element_name_13};
            tmp_call_result_8 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_9, mod_consts[82], call_args);
        }

        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_10;
        if (var_new_im == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[85]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 210;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_10 = var_new_im;
        frame_168c262041bad7b77b39f6f9f042f8a6->m_frame.f_lineno = 210;
        tmp_assign_source_11 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_10, mod_consts[89], &PyTuple_GET_ITEM(mod_consts[90], 0));

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_new_im;
            var_new_im = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_8;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_string_concat_values_4;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_format_value_5;
        PyObject *tmp_unicode_arg_3;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_format_spec_5;
        CHECK_OBJECT(var_new_im);
        tmp_expression_name_6 = var_new_im;
        tmp_called_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[91]);
        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_instance_11 == NULL)) {
            tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_called_instance_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_8);

            exception_lineno = 212;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        frame_168c262041bad7b77b39f6f9f042f8a6->m_frame.f_lineno = 212;
        tmp_unicode_arg_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_11, mod_consts[60]);
        if (tmp_unicode_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_8);

            exception_lineno = 212;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_format_value_5 = PyObject_Unicode(tmp_unicode_arg_3);
        Py_DECREF(tmp_unicode_arg_3);
        if (tmp_format_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_8);

            exception_lineno = 212;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_format_spec_5 = mod_consts[61];
        tmp_tuple_element_4 = BUILTIN_FORMAT(tmp_format_value_5, tmp_format_spec_5);
        Py_DECREF(tmp_format_value_5);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_8);

            exception_lineno = 212;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_string_concat_values_4 = PyTuple_New(4);
        {
            PyObject *tmp_format_value_6;
            PyObject *tmp_left_name_6;
            PyObject *tmp_right_name_6;
            PyObject *tmp_format_spec_6;
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[62];
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 1, tmp_tuple_element_4);
            if (var_i == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 212;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_2;
            }

            tmp_left_name_6 = var_i;
            tmp_right_name_6 = mod_consts[79];
            tmp_format_value_6 = BINARY_OPERATION_FLOORDIV_OBJECT_LONG_LONG(tmp_left_name_6, tmp_right_name_6);
            if (tmp_format_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_format_spec_6 = mod_consts[61];
            tmp_tuple_element_4 = BUILTIN_FORMAT(tmp_format_value_6, tmp_format_spec_6);
            Py_DECREF(tmp_format_value_6);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 2, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[92];
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 3, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_name_8);
        Py_DECREF(tmp_string_concat_values_4);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_args_element_name_14 = PyUnicode_Join(mod_consts[61], tmp_string_concat_values_4);
        Py_DECREF(tmp_string_concat_values_4);
        if (tmp_args_element_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_8);

            exception_lineno = 212;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        frame_168c262041bad7b77b39f6f9f042f8a6->m_frame.f_lineno = 211;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_14);
        Py_DECREF(tmp_called_name_8);
        Py_DECREF(tmp_args_element_name_14);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_9);
    }
    branch_end_3:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 213;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_left_name_7 = var_i;
        tmp_right_name_7 = mod_consts[64];
        tmp_result = BINARY_OPERATION_ADD_LONG_LONG_INPLACE(&tmp_left_name_7, tmp_right_name_7);
        assert(!(tmp_result == false));
        tmp_assign_source_12 = tmp_left_name_7;
        var_i = tmp_assign_source_12;

    }
    goto loop_start_1;
    goto branch_end_2;
    branch_no_2:;
    goto loop_start_1;
    branch_end_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 198;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_name_9;
        PyObject *tmp_call_result_10;
        CHECK_OBJECT(var_ShowMessage);
        tmp_called_name_9 = var_ShowMessage;
        frame_168c262041bad7b77b39f6f9f042f8a6->m_frame.f_lineno = 217;
        tmp_call_result_10 = CALL_FUNCTION_NO_ARGS(tmp_called_name_9);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_168c262041bad7b77b39f6f9f042f8a6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_168c262041bad7b77b39f6f9f042f8a6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_168c262041bad7b77b39f6f9f042f8a6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_168c262041bad7b77b39f6f9f042f8a6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_168c262041bad7b77b39f6f9f042f8a6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_168c262041bad7b77b39f6f9f042f8a6,
        type_description_1,
        par_self,
        par_path,
        var_ShowMessage,
        var_process,
        var_i,
        var_cut_line,
        var_filename,
        var_a,
        var_b,
        var_new_im
    );


    // Release cached frame if used for exception.
    if (frame_168c262041bad7b77b39f6f9f042f8a6 == cache_frame_168c262041bad7b77b39f6f9f042f8a6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_168c262041bad7b77b39f6f9f042f8a6);
        cache_frame_168c262041bad7b77b39f6f9f042f8a6 = NULL;
    }

    assertFrameObject(frame_168c262041bad7b77b39f6f9f042f8a6);

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
    CHECK_OBJECT(var_ShowMessage);
    Py_DECREF(var_ShowMessage);
    var_ShowMessage = NULL;
    Py_XDECREF(var_process);
    var_process = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_cut_line);
    var_cut_line = NULL;
    Py_XDECREF(var_filename);
    var_filename = NULL;
    Py_XDECREF(var_a);
    var_a = NULL;
    Py_XDECREF(var_b);
    var_b = NULL;
    Py_XDECREF(var_new_im);
    var_new_im = NULL;
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

    CHECK_OBJECT(var_ShowMessage);
    Py_DECREF(var_ShowMessage);
    var_ShowMessage = NULL;
    Py_XDECREF(var_process);
    var_process = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_cut_line);
    var_cut_line = NULL;
    Py_XDECREF(var_filename);
    var_filename = NULL;
    Py_XDECREF(var_a);
    var_a = NULL;
    Py_XDECREF(var_b);
    var_b = NULL;
    Py_XDECREF(var_new_im);
    var_new_im = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function_8_auto_2r$$$function_1_ShowMessage(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_94f03dcc58b13e0cd553d193f714fcad;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_94f03dcc58b13e0cd553d193f714fcad = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_94f03dcc58b13e0cd553d193f714fcad)) {
        Py_XDECREF(cache_frame_94f03dcc58b13e0cd553d193f714fcad);

#if _DEBUG_REFCOUNTS
        if (cache_frame_94f03dcc58b13e0cd553d193f714fcad == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_94f03dcc58b13e0cd553d193f714fcad = MAKE_FUNCTION_FRAME(codeobj_94f03dcc58b13e0cd553d193f714fcad, module___main__, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_94f03dcc58b13e0cd553d193f714fcad->m_type_description == NULL);
    frame_94f03dcc58b13e0cd553d193f714fcad = cache_frame_94f03dcc58b13e0cd553d193f714fcad;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_94f03dcc58b13e0cd553d193f714fcad);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_94f03dcc58b13e0cd553d193f714fcad) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_expression_name_3;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[47]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = mod_consts[117];
        tmp_args_element_name_2 = mod_consts[49];
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[50]);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[51]);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        frame_94f03dcc58b13e0cd553d193f714fcad->m_frame.f_lineno = 143;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_94f03dcc58b13e0cd553d193f714fcad);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_94f03dcc58b13e0cd553d193f714fcad);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_94f03dcc58b13e0cd553d193f714fcad, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_94f03dcc58b13e0cd553d193f714fcad->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_94f03dcc58b13e0cd553d193f714fcad, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_94f03dcc58b13e0cd553d193f714fcad,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_94f03dcc58b13e0cd553d193f714fcad == cache_frame_94f03dcc58b13e0cd553d193f714fcad) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_94f03dcc58b13e0cd553d193f714fcad);
        cache_frame_94f03dcc58b13e0cd553d193f714fcad = NULL;
    }

    assertFrameObject(frame_94f03dcc58b13e0cd553d193f714fcad);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

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


static PyObject *impl___main__$$$function_8_auto_2r$$$function_2_process(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_filename = python_pars[0];
    PyObject *var_Image = NULL;
    PyObject *var_image = NULL;
    PyObject *var_image_size = NULL;
    PyObject *var_width = NULL;
    PyObject *var_height = NULL;
    PyObject *var_new_width = NULL;
    PyObject *var_new_height = NULL;
    PyObject *var_background = NULL;
    PyObject *var_paper_size = NULL;
    PyObject *var_paper = NULL;
    PyObject *var_offset = NULL;
    struct Nuitka_FrameObject *frame_dcfee97de3a930eb6a17514a79e28e5c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_dcfee97de3a930eb6a17514a79e28e5c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_dcfee97de3a930eb6a17514a79e28e5c)) {
        Py_XDECREF(cache_frame_dcfee97de3a930eb6a17514a79e28e5c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dcfee97de3a930eb6a17514a79e28e5c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dcfee97de3a930eb6a17514a79e28e5c = MAKE_FUNCTION_FRAME(codeobj_dcfee97de3a930eb6a17514a79e28e5c, module___main__, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_dcfee97de3a930eb6a17514a79e28e5c->m_type_description == NULL);
    frame_dcfee97de3a930eb6a17514a79e28e5c = cache_frame_dcfee97de3a930eb6a17514a79e28e5c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_dcfee97de3a930eb6a17514a79e28e5c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_dcfee97de3a930eb6a17514a79e28e5c) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[94];
        tmp_globals_name_1 = (PyObject *)moduledict___main__;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = mod_consts[95];
        tmp_level_name_1 = mod_consts[96];
        frame_dcfee97de3a930eb6a17514a79e28e5c->m_frame.f_lineno = 147;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict___main__,
                mod_consts[65],
                mod_consts[96]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[65]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_Image == NULL);
        var_Image = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT(var_Image);
        tmp_called_instance_1 = var_Image;
        CHECK_OBJECT(par_filename);
        tmp_args_element_name_1 = par_filename;
        tmp_args_element_name_2 = mod_consts[98];
        frame_dcfee97de3a930eb6a17514a79e28e5c->m_frame.f_lineno = 148;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_1, mod_consts[97], call_args);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_image == NULL);
        var_image = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(var_image);
        tmp_expression_name_1 = var_image;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[99]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_image_size == NULL);
        var_image_size = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(var_image_size);
        tmp_expression_name_2 = var_image_size;
        tmp_subscript_name_1 = mod_consts[96];
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_2, tmp_subscript_name_1, 0);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_width == NULL);
        var_width = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT(var_image_size);
        tmp_expression_name_3 = var_image_size;
        tmp_subscript_name_2 = mod_consts[64];
        tmp_assign_source_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_3, tmp_subscript_name_2, 1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_height == NULL);
        var_height = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(var_width);
        tmp_compexpr_left_1 = var_width;
        CHECK_OBJECT(var_height);
        tmp_compexpr_right_1 = var_height;
        tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        assert(tmp_condition_result_1 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_args_name_1;
        PyObject *tmp_kw_name_1;
        if (var_image == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[100]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 153;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = var_image;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[101]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = mod_consts[102];
        tmp_kw_name_1 = PyDict_Copy(mod_consts[103]);
        frame_dcfee97de3a930eb6a17514a79e28e5c->m_frame.f_lineno = 153;
        tmp_assign_source_6 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_image;
            var_image = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_name_5;
        CHECK_OBJECT(var_image);
        tmp_expression_name_5 = var_image;
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[99]);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_image_size;
            assert(old != NULL);
            var_image_size = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT(var_image_size);
        tmp_expression_name_6 = var_image_size;
        tmp_subscript_name_3 = mod_consts[96];
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_6, tmp_subscript_name_3, 0);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_width;
            assert(old != NULL);
            var_width = tmp_assign_source_8;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_subscript_name_4;
        CHECK_OBJECT(var_image_size);
        tmp_expression_name_7 = var_image_size;
        tmp_subscript_name_4 = mod_consts[64];
        tmp_assign_source_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_7, tmp_subscript_name_4, 1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_height;
            assert(old != NULL);
            var_height = tmp_assign_source_9;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[118];
        assert(var_new_width == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_new_width = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[119];
        assert(var_new_height == NULL);
        Py_INCREF(tmp_assign_source_11);
        var_new_height = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        tmp_expression_name_8 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_expression_name_8 == NULL)) {
            tmp_expression_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
        }

        if (tmp_expression_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[107]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_new_width);
        tmp_left_name_2 = var_new_width;
        CHECK_OBJECT(var_width);
        tmp_right_name_1 = var_width;
        tmp_left_name_1 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_OBJECT(tmp_left_name_2, tmp_right_name_1);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 161;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_width);
        tmp_right_name_2 = var_width;
        tmp_args_element_name_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_2);
        Py_DECREF(tmp_left_name_1);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 161;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dcfee97de3a930eb6a17514a79e28e5c->m_frame.f_lineno = 161;
        tmp_assign_source_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_3);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_new_width;
            assert(old != NULL);
            var_new_width = tmp_assign_source_12;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_tuple_element_1;
        if (var_image == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[100]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 162;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_9 = var_image;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[108]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_new_width);
        tmp_tuple_element_1 = var_new_width;
        tmp_args_element_name_4 = PyTuple_New(2);
        {
            PyObject *tmp_called_name_4;
            PyObject *tmp_expression_name_10;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_left_name_3;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_3;
            PyObject *tmp_right_name_4;
            PyTuple_SET_ITEM0(tmp_args_element_name_4, 0, tmp_tuple_element_1);
            tmp_expression_name_10 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[106]);

            if (unlikely(tmp_expression_name_10 == NULL)) {
                tmp_expression_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
            }

            if (tmp_expression_name_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[107]);
            if (tmp_called_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(var_new_width);
            tmp_left_name_4 = var_new_width;
            CHECK_OBJECT(var_width);
            tmp_right_name_3 = var_width;
            tmp_left_name_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_name_4, tmp_right_name_3);
            if (tmp_left_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_4);

                exception_lineno = 163;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(var_height);
            tmp_right_name_4 = var_height;
            tmp_args_element_name_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_3, tmp_right_name_4);
            Py_DECREF(tmp_left_name_3);
            if (tmp_args_element_name_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_4);

                exception_lineno = 163;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_1;
            }
            frame_dcfee97de3a930eb6a17514a79e28e5c->m_frame.f_lineno = 163;
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_5);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_args_element_name_5);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_name_4, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_4);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        frame_dcfee97de3a930eb6a17514a79e28e5c->m_frame.f_lineno = 162;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_4);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_image;
            var_image = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_expression_name_11;
        CHECK_OBJECT(var_image);
        tmp_expression_name_11 = var_image;
        tmp_assign_source_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[99]);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_image_size;
            assert(old != NULL);
            var_image_size = tmp_assign_source_14;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_subscript_name_5;
        CHECK_OBJECT(var_image_size);
        tmp_expression_name_12 = var_image_size;
        tmp_subscript_name_5 = mod_consts[96];
        tmp_assign_source_15 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_12, tmp_subscript_name_5, 0);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_width;
            assert(old != NULL);
            var_width = tmp_assign_source_15;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_subscript_name_6;
        CHECK_OBJECT(var_image_size);
        tmp_expression_name_13 = var_image_size;
        tmp_subscript_name_6 = mod_consts[64];
        tmp_assign_source_16 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_13, tmp_subscript_name_6, 1);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_height;
            assert(old != NULL);
            var_height = tmp_assign_source_16;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_tmp_condition_result_2_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_height);
        tmp_compexpr_left_2 = var_height;
        CHECK_OBJECT(var_new_height);
        tmp_compexpr_right_2 = var_new_height;
        tmp_tmp_condition_result_2_object_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_tmp_condition_result_2_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_2_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_2_object_1);

            exception_lineno = 169;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_2_object_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_left_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_5;
        PyObject *tmp_right_name_6;
        tmp_expression_name_14 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_expression_name_14 == NULL)) {
            tmp_expression_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
        }

        if (tmp_expression_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[107]);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_new_height);
        tmp_left_name_6 = var_new_height;
        CHECK_OBJECT(var_height);
        tmp_right_name_5 = var_height;
        tmp_left_name_5 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_OBJECT(tmp_left_name_6, tmp_right_name_5);
        if (tmp_left_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);

            exception_lineno = 170;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_height);
        tmp_right_name_6 = var_height;
        tmp_args_element_name_6 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_5, tmp_right_name_6);
        Py_DECREF(tmp_left_name_5);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);

            exception_lineno = 170;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dcfee97de3a930eb6a17514a79e28e5c->m_frame.f_lineno = 170;
        tmp_assign_source_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_6);
        Py_DECREF(tmp_called_name_5);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_new_height;
            assert(old != NULL);
            var_new_height = tmp_assign_source_17;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_name_6;
        PyObject *tmp_expression_name_15;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_called_name_7;
        PyObject *tmp_expression_name_16;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_left_name_7;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_7;
        PyObject *tmp_right_name_8;
        if (var_image == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[100]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 171;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_15 = var_image;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, mod_consts[108]);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_16 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_expression_name_16 == NULL)) {
            tmp_expression_name_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
        }

        if (tmp_expression_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);

            exception_lineno = 172;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, mod_consts[107]);
        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);

            exception_lineno = 172;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_new_height);
        tmp_left_name_8 = var_new_height;
        CHECK_OBJECT(var_height);
        tmp_right_name_7 = var_height;
        tmp_left_name_7 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_name_8, tmp_right_name_7);
        if (tmp_left_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 172;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_width);
        tmp_right_name_8 = var_width;
        tmp_args_element_name_8 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_7, tmp_right_name_8);
        Py_DECREF(tmp_left_name_7);
        if (tmp_args_element_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 172;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dcfee97de3a930eb6a17514a79e28e5c->m_frame.f_lineno = 172;
        tmp_tuple_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_8);
        Py_DECREF(tmp_called_name_7);
        Py_DECREF(tmp_args_element_name_8);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);

            exception_lineno = 172;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_7 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_args_element_name_7, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_new_height);
        tmp_tuple_element_2 = var_new_height;
        PyTuple_SET_ITEM0(tmp_args_element_name_7, 1, tmp_tuple_element_2);
        frame_dcfee97de3a930eb6a17514a79e28e5c->m_frame.f_lineno = 171;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_7);
        Py_DECREF(tmp_called_name_6);
        Py_DECREF(tmp_args_element_name_7);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_image;
            var_image = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_expression_name_17;
        CHECK_OBJECT(var_image);
        tmp_expression_name_17 = var_image;
        tmp_assign_source_19 = LOOKUP_ATTRIBUTE(tmp_expression_name_17, mod_consts[99]);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_image_size;
            assert(old != NULL);
            var_image_size = tmp_assign_source_19;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_expression_name_18;
        PyObject *tmp_subscript_name_7;
        CHECK_OBJECT(var_image_size);
        tmp_expression_name_18 = var_image_size;
        tmp_subscript_name_7 = mod_consts[96];
        tmp_assign_source_20 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_18, tmp_subscript_name_7, 0);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_width;
            assert(old != NULL);
            var_width = tmp_assign_source_20;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_expression_name_19;
        PyObject *tmp_subscript_name_8;
        CHECK_OBJECT(var_image_size);
        tmp_expression_name_19 = var_image_size;
        tmp_subscript_name_8 = mod_consts[64];
        tmp_assign_source_21 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_19, tmp_subscript_name_8, 1);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_height;
            assert(old != NULL);
            var_height = tmp_assign_source_21;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_args_element_name_11;
        if (var_Image == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 177;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = var_Image;
        tmp_args_element_name_9 = mod_consts[109];
        CHECK_OBJECT(var_new_width);
        tmp_tuple_element_3 = var_new_width;
        tmp_args_element_name_10 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_element_name_10, 0, tmp_tuple_element_3);
        CHECK_OBJECT(var_new_height);
        tmp_tuple_element_3 = var_new_height;
        PyTuple_SET_ITEM0(tmp_args_element_name_10, 1, tmp_tuple_element_3);
        tmp_args_element_name_11 = mod_consts[110];
        frame_dcfee97de3a930eb6a17514a79e28e5c->m_frame.f_lineno = 177;
        {
            PyObject *call_args[] = {tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11};
            tmp_assign_source_22 = CALL_METHOD_WITH_ARGS3(tmp_called_instance_2, mod_consts[66], call_args);
        }

        Py_DECREF(tmp_args_element_name_10);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_background == NULL);
        var_background = tmp_assign_source_22;
    }
    {
        PyObject *tmp_called_name_8;
        PyObject *tmp_expression_name_20;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        CHECK_OBJECT(var_background);
        tmp_expression_name_20 = var_background;
        tmp_called_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_20, mod_consts[82]);
        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_image == NULL) {
            Py_DECREF(tmp_called_name_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[100]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 179;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_12 = var_image;
        CHECK_OBJECT(var_new_width);
        tmp_left_name_9 = var_new_width;
        CHECK_OBJECT(var_width);
        tmp_right_name_9 = var_width;
        tmp_tuple_element_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_9, tmp_right_name_9);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_8);

            exception_lineno = 179;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_13 = PyTuple_New(2);
        {
            PyObject *tmp_left_name_10;
            PyObject *tmp_right_name_10;
            PyTuple_SET_ITEM(tmp_args_element_name_13, 0, tmp_tuple_element_4);
            CHECK_OBJECT(var_new_height);
            tmp_left_name_10 = var_new_height;
            CHECK_OBJECT(var_height);
            tmp_right_name_10 = var_height;
            tmp_tuple_element_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_10, tmp_right_name_10);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_args_element_name_13, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_name_8);
        Py_DECREF(tmp_args_element_name_13);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        frame_dcfee97de3a930eb6a17514a79e28e5c->m_frame.f_lineno = 179;
        {
            PyObject *call_args[] = {tmp_args_element_name_12, tmp_args_element_name_13};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_8, call_args);
        }

        Py_DECREF(tmp_called_name_8);
        Py_DECREF(tmp_args_element_name_13);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[111];
        assert(var_paper_size == NULL);
        Py_INCREF(tmp_assign_source_23);
        var_paper_size = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_args_element_name_16;
        if (var_Image == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 183;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = var_Image;
        tmp_args_element_name_14 = mod_consts[109];
        CHECK_OBJECT(var_paper_size);
        tmp_args_element_name_15 = var_paper_size;
        tmp_args_element_name_16 = mod_consts[110];
        frame_dcfee97de3a930eb6a17514a79e28e5c->m_frame.f_lineno = 183;
        {
            PyObject *call_args[] = {tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_16};
            tmp_assign_source_24 = CALL_METHOD_WITH_ARGS3(tmp_called_instance_3, mod_consts[66], call_args);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_paper == NULL);
        var_paper = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_called_name_9;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_left_name_11;
        PyObject *tmp_left_name_12;
        PyObject *tmp_expression_name_21;
        PyObject *tmp_subscript_name_9;
        PyObject *tmp_right_name_11;
        PyObject *tmp_right_name_12;
        tmp_called_name_9 = LOOKUP_BUILTIN(mod_consts[112]);
        assert(tmp_called_name_9 != NULL);
        CHECK_OBJECT(var_paper_size);
        tmp_expression_name_21 = var_paper_size;
        tmp_subscript_name_9 = mod_consts[96];
        tmp_left_name_12 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_21, tmp_subscript_name_9, 0);
        if (tmp_left_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_width);
        tmp_right_name_11 = var_width;
        tmp_left_name_11 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_12, tmp_right_name_11);
        Py_DECREF(tmp_left_name_12);
        if (tmp_left_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_12 = mod_consts[79];
        tmp_args_element_name_17 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_name_11, tmp_right_name_12);
        Py_DECREF(tmp_left_name_11);
        if (tmp_args_element_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dcfee97de3a930eb6a17514a79e28e5c->m_frame.f_lineno = 185;
        tmp_tuple_element_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_9, tmp_args_element_name_17);
        Py_DECREF(tmp_args_element_name_17);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_25 = PyTuple_New(2);
        {
            PyObject *tmp_called_name_10;
            PyObject *tmp_args_element_name_18;
            PyObject *tmp_left_name_13;
            PyObject *tmp_left_name_14;
            PyObject *tmp_right_name_13;
            PyObject *tmp_right_name_14;
            PyTuple_SET_ITEM(tmp_assign_source_25, 0, tmp_tuple_element_5);
            tmp_called_name_10 = LOOKUP_BUILTIN(mod_consts[112]);
            assert(tmp_called_name_10 != NULL);
            CHECK_OBJECT(var_new_height);
            tmp_left_name_14 = var_new_height;
            CHECK_OBJECT(var_height);
            tmp_right_name_13 = var_height;
            tmp_left_name_13 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_14, tmp_right_name_13);
            if (tmp_left_name_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_right_name_14 = mod_consts[79];
            tmp_args_element_name_18 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_name_13, tmp_right_name_14);
            Py_DECREF(tmp_left_name_13);
            if (tmp_args_element_name_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_3;
            }
            frame_dcfee97de3a930eb6a17514a79e28e5c->m_frame.f_lineno = 186;
            tmp_tuple_element_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_10, tmp_args_element_name_18);
            Py_DECREF(tmp_args_element_name_18);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_25, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_assign_source_25);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        assert(var_offset == NULL);
        var_offset = tmp_assign_source_25;
    }
    {
        PyObject *tmp_called_name_11;
        PyObject *tmp_expression_name_22;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_args_element_name_20;
        CHECK_OBJECT(var_paper);
        tmp_expression_name_22 = var_paper;
        tmp_called_name_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_22, mod_consts[82]);
        if (tmp_called_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_image == NULL) {
            Py_DECREF(tmp_called_name_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[100]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 188;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_19 = var_image;
        CHECK_OBJECT(var_offset);
        tmp_args_element_name_20 = var_offset;
        frame_dcfee97de3a930eb6a17514a79e28e5c->m_frame.f_lineno = 188;
        {
            PyObject *call_args[] = {tmp_args_element_name_19, tmp_args_element_name_20};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_11, call_args);
        }

        Py_DECREF(tmp_called_name_11);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (var_paper == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[114]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 190;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_paper;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_dcfee97de3a930eb6a17514a79e28e5c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_dcfee97de3a930eb6a17514a79e28e5c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_dcfee97de3a930eb6a17514a79e28e5c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dcfee97de3a930eb6a17514a79e28e5c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dcfee97de3a930eb6a17514a79e28e5c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dcfee97de3a930eb6a17514a79e28e5c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dcfee97de3a930eb6a17514a79e28e5c,
        type_description_1,
        par_filename,
        var_Image,
        var_image,
        var_image_size,
        var_width,
        var_height,
        var_new_width,
        var_new_height,
        var_background,
        var_paper_size,
        var_paper,
        var_offset
    );


    // Release cached frame if used for exception.
    if (frame_dcfee97de3a930eb6a17514a79e28e5c == cache_frame_dcfee97de3a930eb6a17514a79e28e5c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_dcfee97de3a930eb6a17514a79e28e5c);
        cache_frame_dcfee97de3a930eb6a17514a79e28e5c = NULL;
    }

    assertFrameObject(frame_dcfee97de3a930eb6a17514a79e28e5c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_Image);
    var_Image = NULL;
    Py_XDECREF(var_image);
    var_image = NULL;
    CHECK_OBJECT(var_image_size);
    Py_DECREF(var_image_size);
    var_image_size = NULL;
    CHECK_OBJECT(var_width);
    Py_DECREF(var_width);
    var_width = NULL;
    CHECK_OBJECT(var_height);
    Py_DECREF(var_height);
    var_height = NULL;
    CHECK_OBJECT(var_new_width);
    Py_DECREF(var_new_width);
    var_new_width = NULL;
    CHECK_OBJECT(var_new_height);
    Py_DECREF(var_new_height);
    var_new_height = NULL;
    Py_XDECREF(var_background);
    var_background = NULL;
    CHECK_OBJECT(var_paper_size);
    Py_DECREF(var_paper_size);
    var_paper_size = NULL;
    Py_XDECREF(var_paper);
    var_paper = NULL;
    CHECK_OBJECT(var_offset);
    Py_DECREF(var_offset);
    var_offset = NULL;
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

    Py_XDECREF(var_Image);
    var_Image = NULL;
    Py_XDECREF(var_image);
    var_image = NULL;
    Py_XDECREF(var_image_size);
    var_image_size = NULL;
    Py_XDECREF(var_width);
    var_width = NULL;
    Py_XDECREF(var_height);
    var_height = NULL;
    Py_XDECREF(var_new_width);
    var_new_width = NULL;
    Py_XDECREF(var_new_height);
    var_new_height = NULL;
    Py_XDECREF(var_background);
    var_background = NULL;
    Py_XDECREF(var_paper_size);
    var_paper_size = NULL;
    Py_XDECREF(var_paper);
    var_paper = NULL;
    Py_XDECREF(var_offset);
    var_offset = NULL;
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
    CHECK_OBJECT(par_filename);
    Py_DECREF(par_filename);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_filename);
    Py_DECREF(par_filename);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function_10_main(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_app = NULL;
    PyObject *var_ex = NULL;
    struct Nuitka_FrameObject *frame_6638ce512c71e7ef6a45f0ade782a596;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_6638ce512c71e7ef6a45f0ade782a596 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6638ce512c71e7ef6a45f0ade782a596)) {
        Py_XDECREF(cache_frame_6638ce512c71e7ef6a45f0ade782a596);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6638ce512c71e7ef6a45f0ade782a596 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6638ce512c71e7ef6a45f0ade782a596 = MAKE_FUNCTION_FRAME(codeobj_6638ce512c71e7ef6a45f0ade782a596, module___main__, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6638ce512c71e7ef6a45f0ade782a596->m_type_description == NULL);
    frame_6638ce512c71e7ef6a45f0ade782a596 = cache_frame_6638ce512c71e7ef6a45f0ade782a596;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6638ce512c71e7ef6a45f0ade782a596);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6638ce512c71e7ef6a45f0ade782a596) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_6638ce512c71e7ef6a45f0ade782a596->m_frame.f_lineno = 222;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[120]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_app == NULL);
        var_app = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_6638ce512c71e7ef6a45f0ade782a596->m_frame.f_lineno = 223;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, Py_None);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_ex == NULL);
        var_ex = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_ex);
        tmp_called_instance_2 = var_ex;
        frame_6638ce512c71e7ef6a45f0ade782a596->m_frame.f_lineno = 224;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[121]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(var_app);
        tmp_called_instance_3 = var_app;
        frame_6638ce512c71e7ef6a45f0ade782a596->m_frame.f_lineno = 225;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[122]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6638ce512c71e7ef6a45f0ade782a596);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6638ce512c71e7ef6a45f0ade782a596);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6638ce512c71e7ef6a45f0ade782a596, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6638ce512c71e7ef6a45f0ade782a596->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6638ce512c71e7ef6a45f0ade782a596, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6638ce512c71e7ef6a45f0ade782a596,
        type_description_1,
        var_app,
        var_ex
    );


    // Release cached frame if used for exception.
    if (frame_6638ce512c71e7ef6a45f0ade782a596 == cache_frame_6638ce512c71e7ef6a45f0ade782a596) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6638ce512c71e7ef6a45f0ade782a596);
        cache_frame_6638ce512c71e7ef6a45f0ade782a596 = NULL;
    }

    assertFrameObject(frame_6638ce512c71e7ef6a45f0ade782a596);

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
    Py_XDECREF(var_app);
    var_app = NULL;
    Py_XDECREF(var_ex);
    var_ex = NULL;
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

    Py_XDECREF(var_app);
    var_app = NULL;
    Py_XDECREF(var_ex);
    var_ex = NULL;
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


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function_15_complex_call_helper_pos_star_list_star_dict(PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *par_called = python_pars[0];
    PyObject *par_args = python_pars[1];
    PyObject *par_star_arg_list = python_pars[2];
    PyObject *par_star_arg_dict = python_pars[3];
    PyObject *tmp_mapping_1__dict = NULL;
    PyObject *tmp_mapping_1__iter = NULL;
    PyObject *tmp_mapping_1__key = NULL;
    PyObject *tmp_mapping_1__keys = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(par_star_arg_list);
        tmp_type_arg_1 = par_star_arg_list;
        tmp_compexpr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_compexpr_left_1 == NULL));
        tmp_compexpr_right_1 = (PyObject *)&PyTuple_Type;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? true : false;
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(par_star_arg_list);
        tmp_expression_name_1 = par_star_arg_list;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_1, mod_consts[12]);
        tmp_or_left_value_1 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_star_arg_list);
        tmp_expression_name_2 = par_star_arg_list;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_2, mod_consts[13]);
        tmp_or_right_value_1 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_2 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_tuple_arg_1;
        CHECK_OBJECT(par_star_arg_list);
        tmp_tuple_arg_1 = par_star_arg_list;
        tmp_assign_source_1 = PySequence_Tuple(tmp_tuple_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        {
            PyObject *old = par_star_arg_list;
            assert(old != NULL);
            par_star_arg_list = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg1_1;
        tmp_left_name_1 = mod_consts[14];
        CHECK_OBJECT(par_called);
        tmp_dircall_arg1_1 = par_called;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_tuple_element_1 = impl___main__$$$function_3_get_callable_name_desc(dir_call_args);
        }
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        tmp_right_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_3;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_star_arg_list);
            tmp_type_arg_2 = par_star_arg_list;
            tmp_expression_name_3 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_name_3 == NULL));
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[8]);
            Py_DECREF(tmp_expression_name_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_1);
        goto function_exception_exit;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto function_exception_exit;
    }
    branch_end_2:;
    branch_no_1:;
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_type_arg_3;
        CHECK_OBJECT(par_star_arg_dict);
        tmp_type_arg_3 = par_star_arg_dict;
        tmp_compexpr_left_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        assert(!(tmp_compexpr_left_2 == NULL));
        tmp_compexpr_right_2 = (PyObject *)&PyDict_Type;
        tmp_condition_result_3 = (tmp_compexpr_left_2 != tmp_compexpr_right_2) ? true : false;
        Py_DECREF(tmp_compexpr_left_2);
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_star_arg_dict);
        tmp_called_instance_1 = par_star_arg_dict;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[5]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_2;
        }
        assert(tmp_mapping_1__keys == NULL);
        tmp_mapping_1__keys = tmp_assign_source_2;
    }
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

    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        tmp_compexpr_left_3 = exception_keeper_type_1;
        tmp_compexpr_right_3 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_3, tmp_compexpr_right_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_dircall_arg1_2;
        tmp_left_name_2 = mod_consts[6];
        CHECK_OBJECT(par_called);
        tmp_dircall_arg1_2 = par_called;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_tuple_element_2 = impl___main__$$$function_3_get_callable_name_desc(dir_call_args);
        }
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_1);
            Py_XDECREF(exception_keeper_value_1);
            Py_XDECREF(exception_keeper_tb_1);



            goto try_except_handler_1;
        }
        tmp_right_name_2 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_4;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_right_name_2, 0, tmp_tuple_element_2);
            if (par_star_arg_dict == NULL) {

                Py_DECREF(exception_keeper_type_1);
                Py_XDECREF(exception_keeper_value_1);
                Py_XDECREF(exception_keeper_tb_1);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
                exception_tb = NULL;
                ADD_EXCEPTION_CONTEXT(&exception_keeper_type_1, &exception_keeper_value_1);



                goto tuple_build_exception_2;
            }

            tmp_type_arg_4 = par_star_arg_dict;
            tmp_expression_name_4 = BUILTIN_TYPE1(tmp_type_arg_4);
            if (tmp_expression_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                Py_DECREF(exception_keeper_type_1);
                Py_XDECREF(exception_keeper_value_1);
                Py_XDECREF(exception_keeper_tb_1);



                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[8]);
            Py_DECREF(tmp_expression_name_4);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                Py_DECREF(exception_keeper_type_1);
                Py_XDECREF(exception_keeper_value_1);
                Py_XDECREF(exception_keeper_tb_1);



                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_right_name_2, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_right_name_2);
        Py_DECREF(exception_keeper_type_1);
        Py_XDECREF(exception_keeper_value_1);
        Py_XDECREF(exception_keeper_tb_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_1);
            Py_XDECREF(exception_keeper_value_1);
            Py_XDECREF(exception_keeper_tb_1);



            goto try_except_handler_1;
        }
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    goto branch_end_4;
    branch_no_4:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_1;
    branch_end_4:;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(tmp_mapping_1__keys);
        tmp_iter_arg_1 = tmp_mapping_1__keys;
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        assert(tmp_mapping_1__iter == NULL);
        tmp_mapping_1__iter = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = PyDict_New();
        assert(tmp_mapping_1__dict == NULL);
        tmp_mapping_1__dict = tmp_assign_source_4;
    }
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_mapping_1__iter);
        tmp_next_source_1 = tmp_mapping_1__iter;
        tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_5 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                goto try_except_handler_1;
            }
        }

        {
            PyObject *old = tmp_mapping_1__key;
            tmp_mapping_1__key = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT(tmp_mapping_1__key);
        tmp_compexpr_left_4 = tmp_mapping_1__key;
        if (tmp_mapping_1__dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_compexpr_right_4 = tmp_mapping_1__dict;
        tmp_res = PySequence_Contains(tmp_compexpr_right_4, tmp_compexpr_left_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_condition_result_5 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_dircall_arg1_3;
        tmp_left_name_3 = mod_consts[10];
        if (par_called == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_dircall_arg1_3 = par_called;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_tuple_element_3 = impl___main__$$$function_3_get_callable_name_desc(dir_call_args);
        }
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_right_name_3 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_right_name_3, 0, tmp_tuple_element_3);
        CHECK_OBJECT(tmp_mapping_1__key);
        tmp_tuple_element_3 = tmp_mapping_1__key;
        PyTuple_SET_ITEM0(tmp_right_name_3, 1, tmp_tuple_element_3);
        tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_make_exception_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_3);
        Py_DECREF(tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_5:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        if (par_star_arg_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_expression_name_5 = par_star_arg_dict;
        CHECK_OBJECT(tmp_mapping_1__key);
        tmp_subscript_name_1 = tmp_mapping_1__key;
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_5, tmp_subscript_name_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        CHECK_OBJECT(tmp_mapping_1__dict);
        tmp_ass_subscribed_1 = tmp_mapping_1__dict;
        CHECK_OBJECT(tmp_mapping_1__key);
        tmp_ass_subscript_1 = tmp_mapping_1__key;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




        goto try_except_handler_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_mapping_1__dict);
        tmp_assign_source_6 = tmp_mapping_1__dict;
        {
            PyObject *old = par_star_arg_dict;
            par_star_arg_dict = tmp_assign_source_6;
            Py_INCREF(par_star_arg_dict);
            Py_XDECREF(old);
        }

    }
    branch_no_3:;
    goto try_end_2;
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

    Py_XDECREF(tmp_mapping_1__dict);
    tmp_mapping_1__dict = NULL;
    Py_XDECREF(tmp_mapping_1__iter);
    tmp_mapping_1__iter = NULL;
    Py_XDECREF(tmp_mapping_1__keys);
    tmp_mapping_1__keys = NULL;
    Py_XDECREF(tmp_mapping_1__key);
    tmp_mapping_1__key = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_mapping_1__dict);
    tmp_mapping_1__dict = NULL;
    Py_XDECREF(tmp_mapping_1__iter);
    tmp_mapping_1__iter = NULL;
    Py_XDECREF(tmp_mapping_1__keys);
    tmp_mapping_1__keys = NULL;
    Py_XDECREF(tmp_mapping_1__key);
    tmp_mapping_1__key = NULL;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_kw_name_1;
        if (par_called == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_called_name_1 = par_called;
        CHECK_OBJECT(par_args);
        tmp_left_name_4 = par_args;
        if (par_star_arg_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_right_name_4 = par_star_arg_list;
        tmp_args_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_4, tmp_right_name_4);
        if (tmp_args_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        CHECK_OBJECT(par_star_arg_dict);
        tmp_kw_name_1 = par_star_arg_dict;
        tmp_return_value = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_args_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_called);
    Py_DECREF(par_called);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_star_arg_list);
    Py_DECREF(par_star_arg_list);
    CHECK_OBJECT(par_star_arg_dict);
    Py_DECREF(par_star_arg_dict);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_called);
    Py_DECREF(par_called);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_star_arg_list);
    Py_DECREF(par_star_arg_list);
    CHECK_OBJECT(par_star_arg_dict);
    Py_DECREF(par_star_arg_dict);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function_13_complex_call_helper_star_list(PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *par_called = python_pars[0];
    PyObject *par_star_arg_list = python_pars[1];
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(par_star_arg_list);
        tmp_type_arg_1 = par_star_arg_list;
        tmp_compexpr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_compexpr_left_1 == NULL));
        tmp_compexpr_right_1 = (PyObject *)&PyTuple_Type;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? true : false;
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(par_star_arg_list);
        tmp_expression_name_1 = par_star_arg_list;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_1, mod_consts[12]);
        tmp_or_left_value_1 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_star_arg_list);
        tmp_expression_name_2 = par_star_arg_list;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_2, mod_consts[13]);
        tmp_or_right_value_1 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_2 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_tuple_arg_1;
        CHECK_OBJECT(par_star_arg_list);
        tmp_tuple_arg_1 = par_star_arg_list;
        tmp_assign_source_1 = PySequence_Tuple(tmp_tuple_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        {
            PyObject *old = par_star_arg_list;
            assert(old != NULL);
            par_star_arg_list = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg1_1;
        tmp_left_name_1 = mod_consts[14];
        CHECK_OBJECT(par_called);
        tmp_dircall_arg1_1 = par_called;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_tuple_element_1 = impl___main__$$$function_3_get_callable_name_desc(dir_call_args);
        }
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        tmp_right_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_3;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_star_arg_list);
            tmp_type_arg_2 = par_star_arg_list;
            tmp_expression_name_3 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_name_3 == NULL));
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[8]);
            Py_DECREF(tmp_expression_name_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_1);
        goto function_exception_exit;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto function_exception_exit;
    }
    branch_end_2:;
    branch_no_1:;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_name_1;
        CHECK_OBJECT(par_called);
        tmp_called_name_1 = par_called;
        if (par_star_arg_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_args_name_1 = par_star_arg_list;
        tmp_return_value = CALL_FUNCTION_WITH_POSARGS(tmp_called_name_1, tmp_args_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_called);
    Py_DECREF(par_called);
    CHECK_OBJECT(par_star_arg_list);
    Py_DECREF(par_star_arg_list);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_called);
    Py_DECREF(par_called);
    CHECK_OBJECT(par_star_arg_list);
    Py_DECREF(par_star_arg_list);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function_11_complex_call_helper_pos_star_list(PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *par_called = python_pars[0];
    PyObject *par_args = python_pars[1];
    PyObject *par_star_arg_list = python_pars[2];
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(par_star_arg_list);
        tmp_type_arg_1 = par_star_arg_list;
        tmp_compexpr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_compexpr_left_1 == NULL));
        tmp_compexpr_right_1 = (PyObject *)&PyTuple_Type;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? true : false;
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(par_star_arg_list);
        tmp_expression_name_1 = par_star_arg_list;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_1, mod_consts[12]);
        tmp_or_left_value_1 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_star_arg_list);
        tmp_expression_name_2 = par_star_arg_list;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_2, mod_consts[13]);
        tmp_or_right_value_1 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_2 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_tuple_arg_1;
        CHECK_OBJECT(par_star_arg_list);
        tmp_tuple_arg_1 = par_star_arg_list;
        tmp_assign_source_1 = PySequence_Tuple(tmp_tuple_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        {
            PyObject *old = par_star_arg_list;
            assert(old != NULL);
            par_star_arg_list = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg1_1;
        tmp_left_name_1 = mod_consts[14];
        CHECK_OBJECT(par_called);
        tmp_dircall_arg1_1 = par_called;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_tuple_element_1 = impl___main__$$$function_3_get_callable_name_desc(dir_call_args);
        }
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        tmp_right_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_3;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_star_arg_list);
            tmp_type_arg_2 = par_star_arg_list;
            tmp_expression_name_3 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_name_3 == NULL));
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[8]);
            Py_DECREF(tmp_expression_name_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_1);
        goto function_exception_exit;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto function_exception_exit;
    }
    branch_end_2:;
    branch_no_1:;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT(par_called);
        tmp_called_name_1 = par_called;
        CHECK_OBJECT(par_args);
        tmp_left_name_2 = par_args;
        if (par_star_arg_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_right_name_2 = par_star_arg_list;
        tmp_args_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_2);
        if (tmp_args_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        tmp_return_value = CALL_FUNCTION_WITH_POSARGS(tmp_called_name_1, tmp_args_name_1);
        Py_DECREF(tmp_args_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_called);
    Py_DECREF(par_called);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_star_arg_list);
    Py_DECREF(par_star_arg_list);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_called);
    Py_DECREF(par_called);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_star_arg_list);
    Py_DECREF(par_star_arg_list);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function_17_complex_call_helper_star_dict(PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *par_called = python_pars[0];
    PyObject *par_star_arg_dict = python_pars[1];
    PyObject *tmp_mapping_1__dict = NULL;
    PyObject *tmp_mapping_1__iter = NULL;
    PyObject *tmp_mapping_1__key = NULL;
    PyObject *tmp_mapping_1__keys = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(par_star_arg_dict);
        tmp_type_arg_1 = par_star_arg_dict;
        tmp_compexpr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_compexpr_left_1 == NULL));
        tmp_compexpr_right_1 = (PyObject *)&PyDict_Type;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? true : false;
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_star_arg_dict);
        tmp_called_instance_1 = par_star_arg_dict;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[5]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_2;
        }
        assert(tmp_mapping_1__keys == NULL);
        tmp_mapping_1__keys = tmp_assign_source_1;
    }
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

    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = exception_keeper_type_1;
        tmp_compexpr_right_2 = PyExc_AttributeError;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg1_1;
        tmp_left_name_1 = mod_consts[6];
        CHECK_OBJECT(par_called);
        tmp_dircall_arg1_1 = par_called;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_tuple_element_1 = impl___main__$$$function_3_get_callable_name_desc(dir_call_args);
        }
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_1);
            Py_XDECREF(exception_keeper_value_1);
            Py_XDECREF(exception_keeper_tb_1);



            goto try_except_handler_1;
        }
        tmp_right_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_1;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_1);
            if (par_star_arg_dict == NULL) {

                Py_DECREF(exception_keeper_type_1);
                Py_XDECREF(exception_keeper_value_1);
                Py_XDECREF(exception_keeper_tb_1);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
                exception_tb = NULL;
                ADD_EXCEPTION_CONTEXT(&exception_keeper_type_1, &exception_keeper_value_1);



                goto tuple_build_exception_1;
            }

            tmp_type_arg_2 = par_star_arg_dict;
            tmp_expression_name_1 = BUILTIN_TYPE1(tmp_type_arg_2);
            if (tmp_expression_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                Py_DECREF(exception_keeper_type_1);
                Py_XDECREF(exception_keeper_value_1);
                Py_XDECREF(exception_keeper_tb_1);



                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[8]);
            Py_DECREF(tmp_expression_name_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                Py_DECREF(exception_keeper_type_1);
                Py_XDECREF(exception_keeper_value_1);
                Py_XDECREF(exception_keeper_tb_1);



                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_1);
        Py_DECREF(exception_keeper_type_1);
        Py_XDECREF(exception_keeper_value_1);
        Py_XDECREF(exception_keeper_tb_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_1);
            Py_XDECREF(exception_keeper_value_1);
            Py_XDECREF(exception_keeper_tb_1);



            goto try_except_handler_1;
        }
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    goto branch_end_2;
    branch_no_2:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_1;
    branch_end_2:;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(tmp_mapping_1__keys);
        tmp_iter_arg_1 = tmp_mapping_1__keys;
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        assert(tmp_mapping_1__iter == NULL);
        tmp_mapping_1__iter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = PyDict_New();
        assert(tmp_mapping_1__dict == NULL);
        tmp_mapping_1__dict = tmp_assign_source_3;
    }
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_mapping_1__iter);
        tmp_next_source_1 = tmp_mapping_1__iter;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                goto try_except_handler_1;
            }
        }

        {
            PyObject *old = tmp_mapping_1__key;
            tmp_mapping_1__key = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT(tmp_mapping_1__key);
        tmp_compexpr_left_3 = tmp_mapping_1__key;
        if (tmp_mapping_1__dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_compexpr_right_3 = tmp_mapping_1__dict;
        tmp_res = PySequence_Contains(tmp_compexpr_right_3, tmp_compexpr_left_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_condition_result_3 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_dircall_arg1_2;
        tmp_left_name_2 = mod_consts[10];
        if (par_called == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_dircall_arg1_2 = par_called;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_tuple_element_2 = impl___main__$$$function_3_get_callable_name_desc(dir_call_args);
        }
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_right_name_2 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_right_name_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_mapping_1__key);
        tmp_tuple_element_2 = tmp_mapping_1__key;
        PyTuple_SET_ITEM0(tmp_right_name_2, 1, tmp_tuple_element_2);
        tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        if (par_star_arg_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_expression_name_2 = par_star_arg_dict;
        CHECK_OBJECT(tmp_mapping_1__key);
        tmp_subscript_name_1 = tmp_mapping_1__key;
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        CHECK_OBJECT(tmp_mapping_1__dict);
        tmp_ass_subscribed_1 = tmp_mapping_1__dict;
        CHECK_OBJECT(tmp_mapping_1__key);
        tmp_ass_subscript_1 = tmp_mapping_1__key;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




        goto try_except_handler_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_mapping_1__dict);
        tmp_assign_source_5 = tmp_mapping_1__dict;
        {
            PyObject *old = par_star_arg_dict;
            par_star_arg_dict = tmp_assign_source_5;
            Py_INCREF(par_star_arg_dict);
            Py_XDECREF(old);
        }

    }
    branch_no_1:;
    goto try_end_2;
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

    Py_XDECREF(tmp_mapping_1__dict);
    tmp_mapping_1__dict = NULL;
    Py_XDECREF(tmp_mapping_1__iter);
    tmp_mapping_1__iter = NULL;
    Py_XDECREF(tmp_mapping_1__keys);
    tmp_mapping_1__keys = NULL;
    Py_XDECREF(tmp_mapping_1__key);
    tmp_mapping_1__key = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_mapping_1__dict);
    tmp_mapping_1__dict = NULL;
    Py_XDECREF(tmp_mapping_1__iter);
    tmp_mapping_1__iter = NULL;
    Py_XDECREF(tmp_mapping_1__keys);
    tmp_mapping_1__keys = NULL;
    Py_XDECREF(tmp_mapping_1__key);
    tmp_mapping_1__key = NULL;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_kw_name_1;
        if (par_called == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_called_name_1 = par_called;
        CHECK_OBJECT(par_star_arg_dict);
        tmp_kw_name_1 = par_star_arg_dict;
        tmp_return_value = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_1, tmp_kw_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_called);
    Py_DECREF(par_called);
    CHECK_OBJECT(par_star_arg_dict);
    Py_DECREF(par_star_arg_dict);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_called);
    Py_DECREF(par_called);
    CHECK_OBJECT(par_star_arg_dict);
    Py_DECREF(par_star_arg_dict);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function_19_complex_call_helper_keywords_star_dict(PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *par_called = python_pars[0];
    PyObject *par_kw = python_pars[1];
    PyObject *par_star_arg_dict = python_pars[2];
    PyObject *tmp_dict_1__dict = NULL;
    PyObject *tmp_dict_1__iter = NULL;
    PyObject *tmp_dict_1__key_xxx = NULL;
    PyObject *tmp_dict_1__keys = NULL;
    PyObject *tmp_dict_2__item = NULL;
    PyObject *tmp_dict_2__iter = NULL;
    PyObject *tmp_dict_2__key = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(par_star_arg_dict);
        tmp_type_arg_1 = par_star_arg_dict;
        tmp_compexpr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_compexpr_left_1 == NULL));
        tmp_compexpr_right_1 = (PyObject *)&PyDict_Type;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? true : false;
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_star_arg_dict);
        tmp_called_instance_1 = par_star_arg_dict;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[5]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_2;
        }
        assert(tmp_dict_1__keys == NULL);
        tmp_dict_1__keys = tmp_assign_source_1;
    }
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

    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = exception_keeper_type_1;
        tmp_compexpr_right_2 = PyExc_AttributeError;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg1_1;
        tmp_left_name_1 = mod_consts[6];
        CHECK_OBJECT(par_called);
        tmp_dircall_arg1_1 = par_called;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_tuple_element_1 = impl___main__$$$function_3_get_callable_name_desc(dir_call_args);
        }
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_1);
            Py_XDECREF(exception_keeper_value_1);
            Py_XDECREF(exception_keeper_tb_1);



            goto try_except_handler_1;
        }
        tmp_right_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_1;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_1);
            if (par_star_arg_dict == NULL) {

                Py_DECREF(exception_keeper_type_1);
                Py_XDECREF(exception_keeper_value_1);
                Py_XDECREF(exception_keeper_tb_1);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
                exception_tb = NULL;
                ADD_EXCEPTION_CONTEXT(&exception_keeper_type_1, &exception_keeper_value_1);



                goto tuple_build_exception_1;
            }

            tmp_type_arg_2 = par_star_arg_dict;
            tmp_expression_name_1 = BUILTIN_TYPE1(tmp_type_arg_2);
            if (tmp_expression_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                Py_DECREF(exception_keeper_type_1);
                Py_XDECREF(exception_keeper_value_1);
                Py_XDECREF(exception_keeper_tb_1);



                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[8]);
            Py_DECREF(tmp_expression_name_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                Py_DECREF(exception_keeper_type_1);
                Py_XDECREF(exception_keeper_value_1);
                Py_XDECREF(exception_keeper_tb_1);



                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_1);
        Py_DECREF(exception_keeper_type_1);
        Py_XDECREF(exception_keeper_value_1);
        Py_XDECREF(exception_keeper_tb_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_1);
            Py_XDECREF(exception_keeper_value_1);
            Py_XDECREF(exception_keeper_tb_1);



            goto try_except_handler_1;
        }
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    goto branch_end_2;
    branch_no_2:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_1;
    branch_end_2:;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(tmp_dict_1__keys);
        tmp_iter_arg_1 = tmp_dict_1__keys;
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        assert(tmp_dict_1__iter == NULL);
        tmp_dict_1__iter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = PyDict_New();
        assert(tmp_dict_1__dict == NULL);
        tmp_dict_1__dict = tmp_assign_source_3;
    }
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_dict_1__iter);
        tmp_next_source_1 = tmp_dict_1__iter;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                goto try_except_handler_1;
            }
        }

        {
            PyObject *old = tmp_dict_1__key_xxx;
            tmp_dict_1__key_xxx = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT(tmp_dict_1__key_xxx);
        tmp_compexpr_left_3 = tmp_dict_1__key_xxx;
        if (par_kw == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_compexpr_right_3 = par_kw;
        tmp_res = PySequence_Contains(tmp_compexpr_right_3, tmp_compexpr_left_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_condition_result_3 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_dircall_arg1_2;
        tmp_left_name_2 = mod_consts[10];
        if (par_called == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_dircall_arg1_2 = par_called;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_tuple_element_2 = impl___main__$$$function_3_get_callable_name_desc(dir_call_args);
        }
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_right_name_2 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_right_name_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_dict_1__key_xxx);
        tmp_tuple_element_2 = tmp_dict_1__key_xxx;
        PyTuple_SET_ITEM0(tmp_right_name_2, 1, tmp_tuple_element_2);
        tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        if (par_star_arg_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_expression_name_2 = par_star_arg_dict;
        CHECK_OBJECT(tmp_dict_1__key_xxx);
        tmp_subscript_name_1 = tmp_dict_1__key_xxx;
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        if (par_kw == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_ass_subscribed_1 = par_kw;
        CHECK_OBJECT(tmp_dict_1__key_xxx);
        tmp_ass_subscript_1 = tmp_dict_1__key_xxx;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




        goto try_except_handler_1;
    }
    goto loop_start_1;
    loop_end_1:;
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_star_arg_dict);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_star_arg_dict);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_dict_seq_1;
        CHECK_OBJECT(par_kw);
        tmp_dict_seq_1 = par_kw;
        tmp_assign_source_5 = TO_DICT(tmp_dict_seq_1, NULL);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        {
            PyObject *old = par_kw;
            assert(old != NULL);
            par_kw = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_star_arg_dict);
        tmp_called_instance_2 = par_star_arg_dict;
        tmp_iter_arg_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[124]);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_assign_source_6 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        assert(tmp_dict_2__iter == NULL);
        tmp_dict_2__iter = tmp_assign_source_6;
    }
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_dict_2__iter);
        tmp_next_source_2 = tmp_dict_2__iter;
        tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_7 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                goto try_except_handler_1;
            }
        }

        {
            PyObject *old = tmp_dict_2__item;
            tmp_dict_2__item = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT(tmp_dict_2__item);
        tmp_expression_name_3 = tmp_dict_2__item;
        tmp_subscript_name_2 = mod_consts[96];
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_3, tmp_subscript_name_2, 0);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        {
            PyObject *old = tmp_dict_2__key;
            tmp_dict_2__key = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT(tmp_dict_2__key);
        tmp_compexpr_left_4 = tmp_dict_2__key;
        if (par_kw == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_compexpr_right_4 = par_kw;
        tmp_res = PySequence_Contains(tmp_compexpr_right_4, tmp_compexpr_left_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_condition_result_5 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_dircall_arg1_3;
        tmp_left_name_3 = mod_consts[10];
        if (par_called == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_dircall_arg1_3 = par_called;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_tuple_element_3 = impl___main__$$$function_3_get_callable_name_desc(dir_call_args);
        }
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_right_name_3 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_right_name_3, 0, tmp_tuple_element_3);
        CHECK_OBJECT(tmp_dict_2__key);
        tmp_tuple_element_3 = tmp_dict_2__key;
        PyTuple_SET_ITEM0(tmp_right_name_3, 1, tmp_tuple_element_3);
        tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_make_exception_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_3);
        Py_DECREF(tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_5:;
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(tmp_dict_2__item);
        tmp_expression_name_4 = tmp_dict_2__item;
        tmp_subscript_name_3 = mod_consts[64];
        tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_4, tmp_subscript_name_3, 1);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        if (par_kw == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_ass_subscribed_2 = par_kw;
        CHECK_OBJECT(tmp_dict_2__key);
        tmp_ass_subscript_2 = tmp_dict_2__key;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




        goto try_except_handler_1;
    }
    goto loop_start_2;
    loop_end_2:;
    branch_no_4:;
    branch_end_1:;
    goto try_end_2;
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

    Py_XDECREF(tmp_dict_1__dict);
    tmp_dict_1__dict = NULL;
    Py_XDECREF(tmp_dict_1__iter);
    tmp_dict_1__iter = NULL;
    Py_XDECREF(tmp_dict_1__keys);
    tmp_dict_1__keys = NULL;
    Py_XDECREF(tmp_dict_1__key_xxx);
    tmp_dict_1__key_xxx = NULL;
    Py_XDECREF(tmp_dict_2__iter);
    tmp_dict_2__iter = NULL;
    Py_XDECREF(tmp_dict_2__item);
    tmp_dict_2__item = NULL;
    Py_XDECREF(tmp_dict_2__key);
    tmp_dict_2__key = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_dict_1__dict);
    tmp_dict_1__dict = NULL;
    Py_XDECREF(tmp_dict_1__iter);
    tmp_dict_1__iter = NULL;
    Py_XDECREF(tmp_dict_1__keys);
    tmp_dict_1__keys = NULL;
    Py_XDECREF(tmp_dict_1__key_xxx);
    tmp_dict_1__key_xxx = NULL;
    Py_XDECREF(tmp_dict_2__iter);
    tmp_dict_2__iter = NULL;
    Py_XDECREF(tmp_dict_2__item);
    tmp_dict_2__item = NULL;
    Py_XDECREF(tmp_dict_2__key);
    tmp_dict_2__key = NULL;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_kw_name_1;
        if (par_called == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_called_name_1 = par_called;
        if (par_kw == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_kw_name_1 = par_kw;
        tmp_return_value = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_1, tmp_kw_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_called);
    Py_DECREF(par_called);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    CHECK_OBJECT(par_star_arg_dict);
    Py_DECREF(par_star_arg_dict);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_called);
    Py_DECREF(par_called);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    CHECK_OBJECT(par_star_arg_dict);
    Py_DECREF(par_star_arg_dict);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function_12_complex_call_helper_pos_star_dict(PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *par_called = python_pars[0];
    PyObject *par_args = python_pars[1];
    PyObject *par_star_arg_dict = python_pars[2];
    PyObject *tmp_mapping_1__dict = NULL;
    PyObject *tmp_mapping_1__iter = NULL;
    PyObject *tmp_mapping_1__key = NULL;
    PyObject *tmp_mapping_1__keys = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(par_star_arg_dict);
        tmp_type_arg_1 = par_star_arg_dict;
        tmp_compexpr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_compexpr_left_1 == NULL));
        tmp_compexpr_right_1 = (PyObject *)&PyDict_Type;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? true : false;
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_star_arg_dict);
        tmp_called_instance_1 = par_star_arg_dict;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[5]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_2;
        }
        assert(tmp_mapping_1__keys == NULL);
        tmp_mapping_1__keys = tmp_assign_source_1;
    }
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

    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = exception_keeper_type_1;
        tmp_compexpr_right_2 = PyExc_AttributeError;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg1_1;
        tmp_left_name_1 = mod_consts[6];
        CHECK_OBJECT(par_called);
        tmp_dircall_arg1_1 = par_called;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_tuple_element_1 = impl___main__$$$function_3_get_callable_name_desc(dir_call_args);
        }
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_1);
            Py_XDECREF(exception_keeper_value_1);
            Py_XDECREF(exception_keeper_tb_1);



            goto try_except_handler_1;
        }
        tmp_right_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_1;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_1);
            if (par_star_arg_dict == NULL) {

                Py_DECREF(exception_keeper_type_1);
                Py_XDECREF(exception_keeper_value_1);
                Py_XDECREF(exception_keeper_tb_1);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
                exception_tb = NULL;
                ADD_EXCEPTION_CONTEXT(&exception_keeper_type_1, &exception_keeper_value_1);



                goto tuple_build_exception_1;
            }

            tmp_type_arg_2 = par_star_arg_dict;
            tmp_expression_name_1 = BUILTIN_TYPE1(tmp_type_arg_2);
            if (tmp_expression_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                Py_DECREF(exception_keeper_type_1);
                Py_XDECREF(exception_keeper_value_1);
                Py_XDECREF(exception_keeper_tb_1);



                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[8]);
            Py_DECREF(tmp_expression_name_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                Py_DECREF(exception_keeper_type_1);
                Py_XDECREF(exception_keeper_value_1);
                Py_XDECREF(exception_keeper_tb_1);



                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_1);
        Py_DECREF(exception_keeper_type_1);
        Py_XDECREF(exception_keeper_value_1);
        Py_XDECREF(exception_keeper_tb_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_1);
            Py_XDECREF(exception_keeper_value_1);
            Py_XDECREF(exception_keeper_tb_1);



            goto try_except_handler_1;
        }
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    goto branch_end_2;
    branch_no_2:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_1;
    branch_end_2:;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(tmp_mapping_1__keys);
        tmp_iter_arg_1 = tmp_mapping_1__keys;
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        assert(tmp_mapping_1__iter == NULL);
        tmp_mapping_1__iter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = PyDict_New();
        assert(tmp_mapping_1__dict == NULL);
        tmp_mapping_1__dict = tmp_assign_source_3;
    }
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_mapping_1__iter);
        tmp_next_source_1 = tmp_mapping_1__iter;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                goto try_except_handler_1;
            }
        }

        {
            PyObject *old = tmp_mapping_1__key;
            tmp_mapping_1__key = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT(tmp_mapping_1__key);
        tmp_compexpr_left_3 = tmp_mapping_1__key;
        if (tmp_mapping_1__dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_compexpr_right_3 = tmp_mapping_1__dict;
        tmp_res = PySequence_Contains(tmp_compexpr_right_3, tmp_compexpr_left_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_condition_result_3 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_dircall_arg1_2;
        tmp_left_name_2 = mod_consts[10];
        if (par_called == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_dircall_arg1_2 = par_called;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_tuple_element_2 = impl___main__$$$function_3_get_callable_name_desc(dir_call_args);
        }
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_right_name_2 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_right_name_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_mapping_1__key);
        tmp_tuple_element_2 = tmp_mapping_1__key;
        PyTuple_SET_ITEM0(tmp_right_name_2, 1, tmp_tuple_element_2);
        tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        if (par_star_arg_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_expression_name_2 = par_star_arg_dict;
        CHECK_OBJECT(tmp_mapping_1__key);
        tmp_subscript_name_1 = tmp_mapping_1__key;
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        CHECK_OBJECT(tmp_mapping_1__dict);
        tmp_ass_subscribed_1 = tmp_mapping_1__dict;
        CHECK_OBJECT(tmp_mapping_1__key);
        tmp_ass_subscript_1 = tmp_mapping_1__key;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




        goto try_except_handler_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_mapping_1__dict);
        tmp_assign_source_5 = tmp_mapping_1__dict;
        {
            PyObject *old = par_star_arg_dict;
            par_star_arg_dict = tmp_assign_source_5;
            Py_INCREF(par_star_arg_dict);
            Py_XDECREF(old);
        }

    }
    branch_no_1:;
    goto try_end_2;
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

    Py_XDECREF(tmp_mapping_1__dict);
    tmp_mapping_1__dict = NULL;
    Py_XDECREF(tmp_mapping_1__iter);
    tmp_mapping_1__iter = NULL;
    Py_XDECREF(tmp_mapping_1__keys);
    tmp_mapping_1__keys = NULL;
    Py_XDECREF(tmp_mapping_1__key);
    tmp_mapping_1__key = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_mapping_1__dict);
    tmp_mapping_1__dict = NULL;
    Py_XDECREF(tmp_mapping_1__iter);
    tmp_mapping_1__iter = NULL;
    Py_XDECREF(tmp_mapping_1__keys);
    tmp_mapping_1__keys = NULL;
    Py_XDECREF(tmp_mapping_1__key);
    tmp_mapping_1__key = NULL;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_kw_name_1;
        if (par_called == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_called_name_1 = par_called;
        CHECK_OBJECT(par_args);
        tmp_args_name_1 = par_args;
        CHECK_OBJECT(par_star_arg_dict);
        tmp_kw_name_1 = par_star_arg_dict;
        tmp_return_value = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_called);
    Py_DECREF(par_called);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_star_arg_dict);
    Py_DECREF(par_star_arg_dict);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_called);
    Py_DECREF(par_called);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_star_arg_dict);
    Py_DECREF(par_star_arg_dict);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function_18_complex_call_helper_pos_keywords_star_dict(PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *par_called = python_pars[0];
    PyObject *par_args = python_pars[1];
    PyObject *par_kw = python_pars[2];
    PyObject *par_star_arg_dict = python_pars[3];
    PyObject *tmp_dict_1__dict = NULL;
    PyObject *tmp_dict_1__iter = NULL;
    PyObject *tmp_dict_1__key_xxx = NULL;
    PyObject *tmp_dict_1__keys = NULL;
    PyObject *tmp_dict_2__item = NULL;
    PyObject *tmp_dict_2__iter = NULL;
    PyObject *tmp_dict_2__key = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(par_star_arg_dict);
        tmp_type_arg_1 = par_star_arg_dict;
        tmp_compexpr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_compexpr_left_1 == NULL));
        tmp_compexpr_right_1 = (PyObject *)&PyDict_Type;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? true : false;
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_star_arg_dict);
        tmp_called_instance_1 = par_star_arg_dict;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[5]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_2;
        }
        assert(tmp_dict_1__keys == NULL);
        tmp_dict_1__keys = tmp_assign_source_1;
    }
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

    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = exception_keeper_type_1;
        tmp_compexpr_right_2 = PyExc_AttributeError;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg1_1;
        tmp_left_name_1 = mod_consts[6];
        CHECK_OBJECT(par_called);
        tmp_dircall_arg1_1 = par_called;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_tuple_element_1 = impl___main__$$$function_3_get_callable_name_desc(dir_call_args);
        }
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_1);
            Py_XDECREF(exception_keeper_value_1);
            Py_XDECREF(exception_keeper_tb_1);



            goto try_except_handler_1;
        }
        tmp_right_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_1;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_1);
            if (par_star_arg_dict == NULL) {

                Py_DECREF(exception_keeper_type_1);
                Py_XDECREF(exception_keeper_value_1);
                Py_XDECREF(exception_keeper_tb_1);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
                exception_tb = NULL;
                ADD_EXCEPTION_CONTEXT(&exception_keeper_type_1, &exception_keeper_value_1);



                goto tuple_build_exception_1;
            }

            tmp_type_arg_2 = par_star_arg_dict;
            tmp_expression_name_1 = BUILTIN_TYPE1(tmp_type_arg_2);
            if (tmp_expression_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                Py_DECREF(exception_keeper_type_1);
                Py_XDECREF(exception_keeper_value_1);
                Py_XDECREF(exception_keeper_tb_1);



                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[8]);
            Py_DECREF(tmp_expression_name_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                Py_DECREF(exception_keeper_type_1);
                Py_XDECREF(exception_keeper_value_1);
                Py_XDECREF(exception_keeper_tb_1);



                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_1);
        Py_DECREF(exception_keeper_type_1);
        Py_XDECREF(exception_keeper_value_1);
        Py_XDECREF(exception_keeper_tb_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_1);
            Py_XDECREF(exception_keeper_value_1);
            Py_XDECREF(exception_keeper_tb_1);



            goto try_except_handler_1;
        }
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    goto branch_end_2;
    branch_no_2:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_1;
    branch_end_2:;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(tmp_dict_1__keys);
        tmp_iter_arg_1 = tmp_dict_1__keys;
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        assert(tmp_dict_1__iter == NULL);
        tmp_dict_1__iter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = PyDict_New();
        assert(tmp_dict_1__dict == NULL);
        tmp_dict_1__dict = tmp_assign_source_3;
    }
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_dict_1__iter);
        tmp_next_source_1 = tmp_dict_1__iter;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                goto try_except_handler_1;
            }
        }

        {
            PyObject *old = tmp_dict_1__key_xxx;
            tmp_dict_1__key_xxx = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT(tmp_dict_1__key_xxx);
        tmp_compexpr_left_3 = tmp_dict_1__key_xxx;
        if (par_kw == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_compexpr_right_3 = par_kw;
        tmp_res = PySequence_Contains(tmp_compexpr_right_3, tmp_compexpr_left_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_condition_result_3 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_dircall_arg1_2;
        tmp_left_name_2 = mod_consts[10];
        if (par_called == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_dircall_arg1_2 = par_called;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_tuple_element_2 = impl___main__$$$function_3_get_callable_name_desc(dir_call_args);
        }
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_right_name_2 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_right_name_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_dict_1__key_xxx);
        tmp_tuple_element_2 = tmp_dict_1__key_xxx;
        PyTuple_SET_ITEM0(tmp_right_name_2, 1, tmp_tuple_element_2);
        tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        if (par_star_arg_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_expression_name_2 = par_star_arg_dict;
        CHECK_OBJECT(tmp_dict_1__key_xxx);
        tmp_subscript_name_1 = tmp_dict_1__key_xxx;
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        if (par_kw == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_ass_subscribed_1 = par_kw;
        CHECK_OBJECT(tmp_dict_1__key_xxx);
        tmp_ass_subscript_1 = tmp_dict_1__key_xxx;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




        goto try_except_handler_1;
    }
    goto loop_start_1;
    loop_end_1:;
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_star_arg_dict);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_star_arg_dict);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_dict_seq_1;
        CHECK_OBJECT(par_kw);
        tmp_dict_seq_1 = par_kw;
        tmp_assign_source_5 = TO_DICT(tmp_dict_seq_1, NULL);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        {
            PyObject *old = par_kw;
            assert(old != NULL);
            par_kw = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_star_arg_dict);
        tmp_called_instance_2 = par_star_arg_dict;
        tmp_iter_arg_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[124]);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_assign_source_6 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        assert(tmp_dict_2__iter == NULL);
        tmp_dict_2__iter = tmp_assign_source_6;
    }
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_dict_2__iter);
        tmp_next_source_2 = tmp_dict_2__iter;
        tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_7 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                goto try_except_handler_1;
            }
        }

        {
            PyObject *old = tmp_dict_2__item;
            tmp_dict_2__item = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT(tmp_dict_2__item);
        tmp_expression_name_3 = tmp_dict_2__item;
        tmp_subscript_name_2 = mod_consts[96];
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_3, tmp_subscript_name_2, 0);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        {
            PyObject *old = tmp_dict_2__key;
            tmp_dict_2__key = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT(tmp_dict_2__key);
        tmp_compexpr_left_4 = tmp_dict_2__key;
        if (par_kw == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_compexpr_right_4 = par_kw;
        tmp_res = PySequence_Contains(tmp_compexpr_right_4, tmp_compexpr_left_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_condition_result_5 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_dircall_arg1_3;
        tmp_left_name_3 = mod_consts[10];
        if (par_called == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_dircall_arg1_3 = par_called;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_tuple_element_3 = impl___main__$$$function_3_get_callable_name_desc(dir_call_args);
        }
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_right_name_3 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_right_name_3, 0, tmp_tuple_element_3);
        CHECK_OBJECT(tmp_dict_2__key);
        tmp_tuple_element_3 = tmp_dict_2__key;
        PyTuple_SET_ITEM0(tmp_right_name_3, 1, tmp_tuple_element_3);
        tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_make_exception_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_3);
        Py_DECREF(tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_5:;
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(tmp_dict_2__item);
        tmp_expression_name_4 = tmp_dict_2__item;
        tmp_subscript_name_3 = mod_consts[64];
        tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_4, tmp_subscript_name_3, 1);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        if (par_kw == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_ass_subscribed_2 = par_kw;
        CHECK_OBJECT(tmp_dict_2__key);
        tmp_ass_subscript_2 = tmp_dict_2__key;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




        goto try_except_handler_1;
    }
    goto loop_start_2;
    loop_end_2:;
    branch_no_4:;
    branch_end_1:;
    goto try_end_2;
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

    Py_XDECREF(tmp_dict_1__dict);
    tmp_dict_1__dict = NULL;
    Py_XDECREF(tmp_dict_1__iter);
    tmp_dict_1__iter = NULL;
    Py_XDECREF(tmp_dict_1__keys);
    tmp_dict_1__keys = NULL;
    Py_XDECREF(tmp_dict_1__key_xxx);
    tmp_dict_1__key_xxx = NULL;
    Py_XDECREF(tmp_dict_2__iter);
    tmp_dict_2__iter = NULL;
    Py_XDECREF(tmp_dict_2__item);
    tmp_dict_2__item = NULL;
    Py_XDECREF(tmp_dict_2__key);
    tmp_dict_2__key = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_dict_1__dict);
    tmp_dict_1__dict = NULL;
    Py_XDECREF(tmp_dict_1__iter);
    tmp_dict_1__iter = NULL;
    Py_XDECREF(tmp_dict_1__keys);
    tmp_dict_1__keys = NULL;
    Py_XDECREF(tmp_dict_1__key_xxx);
    tmp_dict_1__key_xxx = NULL;
    Py_XDECREF(tmp_dict_2__iter);
    tmp_dict_2__iter = NULL;
    Py_XDECREF(tmp_dict_2__item);
    tmp_dict_2__item = NULL;
    Py_XDECREF(tmp_dict_2__key);
    tmp_dict_2__key = NULL;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_kw_name_1;
        if (par_called == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_called_name_1 = par_called;
        CHECK_OBJECT(par_args);
        tmp_args_name_1 = par_args;
        if (par_kw == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_kw_name_1 = par_kw;
        tmp_return_value = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_called);
    Py_DECREF(par_called);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    CHECK_OBJECT(par_star_arg_dict);
    Py_DECREF(par_star_arg_dict);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_called);
    Py_DECREF(par_called);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    CHECK_OBJECT(par_star_arg_dict);
    Py_DECREF(par_star_arg_dict);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function_20_complex_call_helper_keywords_star_list_star_dict(PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *par_called = python_pars[0];
    PyObject *par_star_arg_list = python_pars[1];
    PyObject *par_kw = python_pars[2];
    PyObject *par_star_arg_dict = python_pars[3];
    PyObject *tmp_dict_1__dict = NULL;
    PyObject *tmp_dict_1__iter = NULL;
    PyObject *tmp_dict_1__key_xxx = NULL;
    PyObject *tmp_dict_1__keys = NULL;
    PyObject *tmp_dict_2__item = NULL;
    PyObject *tmp_dict_2__iter = NULL;
    PyObject *tmp_dict_2__key = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(par_star_arg_dict);
        tmp_type_arg_1 = par_star_arg_dict;
        tmp_compexpr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_compexpr_left_1 == NULL));
        tmp_compexpr_right_1 = (PyObject *)&PyDict_Type;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? true : false;
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_star_arg_dict);
        tmp_called_instance_1 = par_star_arg_dict;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[5]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_2;
        }
        assert(tmp_dict_1__keys == NULL);
        tmp_dict_1__keys = tmp_assign_source_1;
    }
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

    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = exception_keeper_type_1;
        tmp_compexpr_right_2 = PyExc_AttributeError;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg1_1;
        tmp_left_name_1 = mod_consts[6];
        CHECK_OBJECT(par_called);
        tmp_dircall_arg1_1 = par_called;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_tuple_element_1 = impl___main__$$$function_3_get_callable_name_desc(dir_call_args);
        }
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_1);
            Py_XDECREF(exception_keeper_value_1);
            Py_XDECREF(exception_keeper_tb_1);



            goto try_except_handler_1;
        }
        tmp_right_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_1;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_1);
            if (par_star_arg_dict == NULL) {

                Py_DECREF(exception_keeper_type_1);
                Py_XDECREF(exception_keeper_value_1);
                Py_XDECREF(exception_keeper_tb_1);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
                exception_tb = NULL;
                ADD_EXCEPTION_CONTEXT(&exception_keeper_type_1, &exception_keeper_value_1);



                goto tuple_build_exception_1;
            }

            tmp_type_arg_2 = par_star_arg_dict;
            tmp_expression_name_1 = BUILTIN_TYPE1(tmp_type_arg_2);
            if (tmp_expression_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                Py_DECREF(exception_keeper_type_1);
                Py_XDECREF(exception_keeper_value_1);
                Py_XDECREF(exception_keeper_tb_1);



                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[8]);
            Py_DECREF(tmp_expression_name_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                Py_DECREF(exception_keeper_type_1);
                Py_XDECREF(exception_keeper_value_1);
                Py_XDECREF(exception_keeper_tb_1);



                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_1);
        Py_DECREF(exception_keeper_type_1);
        Py_XDECREF(exception_keeper_value_1);
        Py_XDECREF(exception_keeper_tb_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_1);
            Py_XDECREF(exception_keeper_value_1);
            Py_XDECREF(exception_keeper_tb_1);



            goto try_except_handler_1;
        }
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    goto branch_end_2;
    branch_no_2:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_1;
    branch_end_2:;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(tmp_dict_1__keys);
        tmp_iter_arg_1 = tmp_dict_1__keys;
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        assert(tmp_dict_1__iter == NULL);
        tmp_dict_1__iter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = PyDict_New();
        assert(tmp_dict_1__dict == NULL);
        tmp_dict_1__dict = tmp_assign_source_3;
    }
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_dict_1__iter);
        tmp_next_source_1 = tmp_dict_1__iter;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                goto try_except_handler_1;
            }
        }

        {
            PyObject *old = tmp_dict_1__key_xxx;
            tmp_dict_1__key_xxx = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT(tmp_dict_1__key_xxx);
        tmp_compexpr_left_3 = tmp_dict_1__key_xxx;
        if (par_kw == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_compexpr_right_3 = par_kw;
        tmp_res = PySequence_Contains(tmp_compexpr_right_3, tmp_compexpr_left_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_condition_result_3 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_dircall_arg1_2;
        tmp_left_name_2 = mod_consts[10];
        if (par_called == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_dircall_arg1_2 = par_called;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_tuple_element_2 = impl___main__$$$function_3_get_callable_name_desc(dir_call_args);
        }
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_right_name_2 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_right_name_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_dict_1__key_xxx);
        tmp_tuple_element_2 = tmp_dict_1__key_xxx;
        PyTuple_SET_ITEM0(tmp_right_name_2, 1, tmp_tuple_element_2);
        tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        if (par_star_arg_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_expression_name_2 = par_star_arg_dict;
        CHECK_OBJECT(tmp_dict_1__key_xxx);
        tmp_subscript_name_1 = tmp_dict_1__key_xxx;
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        if (par_kw == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_ass_subscribed_1 = par_kw;
        CHECK_OBJECT(tmp_dict_1__key_xxx);
        tmp_ass_subscript_1 = tmp_dict_1__key_xxx;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




        goto try_except_handler_1;
    }
    goto loop_start_1;
    loop_end_1:;
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_star_arg_dict);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_star_arg_dict);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_dict_seq_1;
        CHECK_OBJECT(par_kw);
        tmp_dict_seq_1 = par_kw;
        tmp_assign_source_5 = TO_DICT(tmp_dict_seq_1, NULL);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        {
            PyObject *old = par_kw;
            assert(old != NULL);
            par_kw = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_star_arg_dict);
        tmp_called_instance_2 = par_star_arg_dict;
        tmp_iter_arg_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[124]);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_assign_source_6 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        assert(tmp_dict_2__iter == NULL);
        tmp_dict_2__iter = tmp_assign_source_6;
    }
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_dict_2__iter);
        tmp_next_source_2 = tmp_dict_2__iter;
        tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_7 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                goto try_except_handler_1;
            }
        }

        {
            PyObject *old = tmp_dict_2__item;
            tmp_dict_2__item = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT(tmp_dict_2__item);
        tmp_expression_name_3 = tmp_dict_2__item;
        tmp_subscript_name_2 = mod_consts[96];
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_3, tmp_subscript_name_2, 0);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        {
            PyObject *old = tmp_dict_2__key;
            tmp_dict_2__key = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT(tmp_dict_2__key);
        tmp_compexpr_left_4 = tmp_dict_2__key;
        if (par_kw == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_compexpr_right_4 = par_kw;
        tmp_res = PySequence_Contains(tmp_compexpr_right_4, tmp_compexpr_left_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_condition_result_5 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_dircall_arg1_3;
        tmp_left_name_3 = mod_consts[10];
        if (par_called == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_dircall_arg1_3 = par_called;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_tuple_element_3 = impl___main__$$$function_3_get_callable_name_desc(dir_call_args);
        }
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_right_name_3 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_right_name_3, 0, tmp_tuple_element_3);
        CHECK_OBJECT(tmp_dict_2__key);
        tmp_tuple_element_3 = tmp_dict_2__key;
        PyTuple_SET_ITEM0(tmp_right_name_3, 1, tmp_tuple_element_3);
        tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_make_exception_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_3);
        Py_DECREF(tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_5:;
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(tmp_dict_2__item);
        tmp_expression_name_4 = tmp_dict_2__item;
        tmp_subscript_name_3 = mod_consts[64];
        tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_4, tmp_subscript_name_3, 1);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        if (par_kw == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_ass_subscribed_2 = par_kw;
        CHECK_OBJECT(tmp_dict_2__key);
        tmp_ass_subscript_2 = tmp_dict_2__key;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




        goto try_except_handler_1;
    }
    goto loop_start_2;
    loop_end_2:;
    branch_no_4:;
    branch_end_1:;
    goto try_end_2;
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

    Py_XDECREF(tmp_dict_1__dict);
    tmp_dict_1__dict = NULL;
    Py_XDECREF(tmp_dict_1__iter);
    tmp_dict_1__iter = NULL;
    Py_XDECREF(tmp_dict_1__keys);
    tmp_dict_1__keys = NULL;
    Py_XDECREF(tmp_dict_1__key_xxx);
    tmp_dict_1__key_xxx = NULL;
    Py_XDECREF(tmp_dict_2__iter);
    tmp_dict_2__iter = NULL;
    Py_XDECREF(tmp_dict_2__item);
    tmp_dict_2__item = NULL;
    Py_XDECREF(tmp_dict_2__key);
    tmp_dict_2__key = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_dict_1__dict);
    tmp_dict_1__dict = NULL;
    Py_XDECREF(tmp_dict_1__iter);
    tmp_dict_1__iter = NULL;
    Py_XDECREF(tmp_dict_1__keys);
    tmp_dict_1__keys = NULL;
    Py_XDECREF(tmp_dict_1__key_xxx);
    tmp_dict_1__key_xxx = NULL;
    Py_XDECREF(tmp_dict_2__iter);
    tmp_dict_2__iter = NULL;
    Py_XDECREF(tmp_dict_2__item);
    tmp_dict_2__item = NULL;
    Py_XDECREF(tmp_dict_2__key);
    tmp_dict_2__key = NULL;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_type_arg_3;
        CHECK_OBJECT(par_star_arg_list);
        tmp_type_arg_3 = par_star_arg_list;
        tmp_compexpr_left_5 = BUILTIN_TYPE1(tmp_type_arg_3);
        assert(!(tmp_compexpr_left_5 == NULL));
        tmp_compexpr_right_5 = (PyObject *)&PyTuple_Type;
        tmp_condition_result_6 = (tmp_compexpr_left_5 != tmp_compexpr_right_5) ? true : false;
        Py_DECREF(tmp_compexpr_left_5);
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_expression_name_6;
        CHECK_OBJECT(par_star_arg_list);
        tmp_expression_name_5 = par_star_arg_list;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_5, mod_consts[12]);
        tmp_or_left_value_1 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_star_arg_list);
        tmp_expression_name_6 = par_star_arg_list;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_6, mod_consts[13]);
        tmp_or_right_value_1 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_7 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_7 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_tuple_arg_1;
        CHECK_OBJECT(par_star_arg_list);
        tmp_tuple_arg_1 = par_star_arg_list;
        tmp_assign_source_9 = PySequence_Tuple(tmp_tuple_arg_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        {
            PyObject *old = par_star_arg_list;
            assert(old != NULL);
            par_star_arg_list = tmp_assign_source_9;
            Py_DECREF(old);
        }

    }
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_make_exception_arg_4;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_dircall_arg1_4;
        tmp_left_name_4 = mod_consts[14];
        if (par_called == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_dircall_arg1_4 = par_called;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_tuple_element_4 = impl___main__$$$function_3_get_callable_name_desc(dir_call_args);
        }
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        tmp_right_name_4 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_7;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_right_name_4, 0, tmp_tuple_element_4);
            CHECK_OBJECT(par_star_arg_list);
            tmp_type_arg_4 = par_star_arg_list;
            tmp_expression_name_7 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_name_7 == NULL));
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[8]);
            Py_DECREF(tmp_expression_name_7);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_right_name_4, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_right_name_4);
        goto function_exception_exit;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_4, tmp_right_name_4);
        Py_DECREF(tmp_right_name_4);
        if (tmp_make_exception_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_4);
        Py_DECREF(tmp_make_exception_arg_4);
        assert(!(tmp_raise_type_4 == NULL));
        exception_type = tmp_raise_type_4;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto function_exception_exit;
    }
    branch_end_7:;
    branch_no_6:;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_kw_name_1;
        if (par_called == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_called_name_1 = par_called;
        if (par_star_arg_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_args_name_1 = par_star_arg_list;
        if (par_kw == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_kw_name_1 = par_kw;
        tmp_return_value = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_called);
    Py_DECREF(par_called);
    CHECK_OBJECT(par_star_arg_list);
    Py_DECREF(par_star_arg_list);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    CHECK_OBJECT(par_star_arg_dict);
    Py_DECREF(par_star_arg_dict);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_called);
    Py_DECREF(par_called);
    CHECK_OBJECT(par_star_arg_list);
    Py_DECREF(par_star_arg_list);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    CHECK_OBJECT(par_star_arg_dict);
    Py_DECREF(par_star_arg_dict);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function_21_complex_call_helper_keywords_star_list(PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *par_called = python_pars[0];
    PyObject *par_star_arg_list = python_pars[1];
    PyObject *par_kw = python_pars[2];
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(par_star_arg_list);
        tmp_type_arg_1 = par_star_arg_list;
        tmp_compexpr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_compexpr_left_1 == NULL));
        tmp_compexpr_right_1 = (PyObject *)&PyTuple_Type;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? true : false;
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(par_star_arg_list);
        tmp_expression_name_1 = par_star_arg_list;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_1, mod_consts[12]);
        tmp_or_left_value_1 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_star_arg_list);
        tmp_expression_name_2 = par_star_arg_list;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_2, mod_consts[13]);
        tmp_or_right_value_1 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_2 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_tuple_arg_1;
        CHECK_OBJECT(par_star_arg_list);
        tmp_tuple_arg_1 = par_star_arg_list;
        tmp_assign_source_1 = PySequence_Tuple(tmp_tuple_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        {
            PyObject *old = par_star_arg_list;
            assert(old != NULL);
            par_star_arg_list = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg1_1;
        tmp_left_name_1 = mod_consts[14];
        CHECK_OBJECT(par_called);
        tmp_dircall_arg1_1 = par_called;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_tuple_element_1 = impl___main__$$$function_3_get_callable_name_desc(dir_call_args);
        }
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        tmp_right_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_3;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_star_arg_list);
            tmp_type_arg_2 = par_star_arg_list;
            tmp_expression_name_3 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_name_3 == NULL));
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[8]);
            Py_DECREF(tmp_expression_name_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_1);
        goto function_exception_exit;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto function_exception_exit;
    }
    branch_end_2:;
    branch_no_1:;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_kw_name_1;
        CHECK_OBJECT(par_called);
        tmp_called_name_1 = par_called;
        if (par_star_arg_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_args_name_1 = par_star_arg_list;
        CHECK_OBJECT(par_kw);
        tmp_kw_name_1 = par_kw;
        tmp_return_value = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_called);
    Py_DECREF(par_called);
    CHECK_OBJECT(par_star_arg_list);
    Py_DECREF(par_star_arg_list);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_called);
    Py_DECREF(par_called);
    CHECK_OBJECT(par_star_arg_list);
    Py_DECREF(par_star_arg_list);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function_14_complex_call_helper_pos_keywords_star_list_star_dict(PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *par_called = python_pars[0];
    PyObject *par_args = python_pars[1];
    PyObject *par_star_arg_list = python_pars[2];
    PyObject *par_kw = python_pars[3];
    PyObject *par_star_arg_dict = python_pars[4];
    PyObject *tmp_dict_1__dict = NULL;
    PyObject *tmp_dict_1__iter = NULL;
    PyObject *tmp_dict_1__key_xxx = NULL;
    PyObject *tmp_dict_1__keys = NULL;
    PyObject *tmp_dict_2__item = NULL;
    PyObject *tmp_dict_2__iter = NULL;
    PyObject *tmp_dict_2__key = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(par_star_arg_list);
        tmp_type_arg_1 = par_star_arg_list;
        tmp_compexpr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_compexpr_left_1 == NULL));
        tmp_compexpr_right_1 = (PyObject *)&PyTuple_Type;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? true : false;
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(par_star_arg_list);
        tmp_expression_name_1 = par_star_arg_list;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_1, mod_consts[12]);
        tmp_or_left_value_1 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_star_arg_list);
        tmp_expression_name_2 = par_star_arg_list;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_2, mod_consts[13]);
        tmp_or_right_value_1 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_2 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_tuple_arg_1;
        CHECK_OBJECT(par_star_arg_list);
        tmp_tuple_arg_1 = par_star_arg_list;
        tmp_assign_source_1 = PySequence_Tuple(tmp_tuple_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        {
            PyObject *old = par_star_arg_list;
            assert(old != NULL);
            par_star_arg_list = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg1_1;
        tmp_left_name_1 = mod_consts[14];
        CHECK_OBJECT(par_called);
        tmp_dircall_arg1_1 = par_called;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_tuple_element_1 = impl___main__$$$function_3_get_callable_name_desc(dir_call_args);
        }
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        tmp_right_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_3;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_star_arg_list);
            tmp_type_arg_2 = par_star_arg_list;
            tmp_expression_name_3 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_name_3 == NULL));
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[8]);
            Py_DECREF(tmp_expression_name_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_1);
        goto function_exception_exit;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto function_exception_exit;
    }
    branch_end_2:;
    branch_no_1:;
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_type_arg_3;
        CHECK_OBJECT(par_star_arg_dict);
        tmp_type_arg_3 = par_star_arg_dict;
        tmp_compexpr_left_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        assert(!(tmp_compexpr_left_2 == NULL));
        tmp_compexpr_right_2 = (PyObject *)&PyDict_Type;
        tmp_condition_result_3 = (tmp_compexpr_left_2 != tmp_compexpr_right_2) ? true : false;
        Py_DECREF(tmp_compexpr_left_2);
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_star_arg_dict);
        tmp_called_instance_1 = par_star_arg_dict;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[5]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_2;
        }
        assert(tmp_dict_1__keys == NULL);
        tmp_dict_1__keys = tmp_assign_source_2;
    }
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

    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        tmp_compexpr_left_3 = exception_keeper_type_1;
        tmp_compexpr_right_3 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_3, tmp_compexpr_right_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_dircall_arg1_2;
        tmp_left_name_2 = mod_consts[6];
        CHECK_OBJECT(par_called);
        tmp_dircall_arg1_2 = par_called;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_tuple_element_2 = impl___main__$$$function_3_get_callable_name_desc(dir_call_args);
        }
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_1);
            Py_XDECREF(exception_keeper_value_1);
            Py_XDECREF(exception_keeper_tb_1);



            goto try_except_handler_1;
        }
        tmp_right_name_2 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_4;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_right_name_2, 0, tmp_tuple_element_2);
            if (par_star_arg_dict == NULL) {

                Py_DECREF(exception_keeper_type_1);
                Py_XDECREF(exception_keeper_value_1);
                Py_XDECREF(exception_keeper_tb_1);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
                exception_tb = NULL;
                ADD_EXCEPTION_CONTEXT(&exception_keeper_type_1, &exception_keeper_value_1);



                goto tuple_build_exception_2;
            }

            tmp_type_arg_4 = par_star_arg_dict;
            tmp_expression_name_4 = BUILTIN_TYPE1(tmp_type_arg_4);
            if (tmp_expression_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                Py_DECREF(exception_keeper_type_1);
                Py_XDECREF(exception_keeper_value_1);
                Py_XDECREF(exception_keeper_tb_1);



                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[8]);
            Py_DECREF(tmp_expression_name_4);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                Py_DECREF(exception_keeper_type_1);
                Py_XDECREF(exception_keeper_value_1);
                Py_XDECREF(exception_keeper_tb_1);



                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_right_name_2, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_right_name_2);
        Py_DECREF(exception_keeper_type_1);
        Py_XDECREF(exception_keeper_value_1);
        Py_XDECREF(exception_keeper_tb_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_1);
            Py_XDECREF(exception_keeper_value_1);
            Py_XDECREF(exception_keeper_tb_1);



            goto try_except_handler_1;
        }
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    goto branch_end_4;
    branch_no_4:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_1;
    branch_end_4:;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(tmp_dict_1__keys);
        tmp_iter_arg_1 = tmp_dict_1__keys;
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        assert(tmp_dict_1__iter == NULL);
        tmp_dict_1__iter = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = PyDict_New();
        assert(tmp_dict_1__dict == NULL);
        tmp_dict_1__dict = tmp_assign_source_4;
    }
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_dict_1__iter);
        tmp_next_source_1 = tmp_dict_1__iter;
        tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_5 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                goto try_except_handler_1;
            }
        }

        {
            PyObject *old = tmp_dict_1__key_xxx;
            tmp_dict_1__key_xxx = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT(tmp_dict_1__key_xxx);
        tmp_compexpr_left_4 = tmp_dict_1__key_xxx;
        if (par_kw == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_compexpr_right_4 = par_kw;
        tmp_res = PySequence_Contains(tmp_compexpr_right_4, tmp_compexpr_left_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_condition_result_5 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_dircall_arg1_3;
        tmp_left_name_3 = mod_consts[10];
        if (par_called == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_dircall_arg1_3 = par_called;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_tuple_element_3 = impl___main__$$$function_3_get_callable_name_desc(dir_call_args);
        }
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_right_name_3 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_right_name_3, 0, tmp_tuple_element_3);
        CHECK_OBJECT(tmp_dict_1__key_xxx);
        tmp_tuple_element_3 = tmp_dict_1__key_xxx;
        PyTuple_SET_ITEM0(tmp_right_name_3, 1, tmp_tuple_element_3);
        tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_make_exception_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_3);
        Py_DECREF(tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_5:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        if (par_star_arg_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_expression_name_5 = par_star_arg_dict;
        CHECK_OBJECT(tmp_dict_1__key_xxx);
        tmp_subscript_name_1 = tmp_dict_1__key_xxx;
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_5, tmp_subscript_name_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        if (par_kw == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_ass_subscribed_1 = par_kw;
        CHECK_OBJECT(tmp_dict_1__key_xxx);
        tmp_ass_subscript_1 = tmp_dict_1__key_xxx;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




        goto try_except_handler_1;
    }
    goto loop_start_1;
    loop_end_1:;
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_star_arg_dict);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_star_arg_dict);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_condition_result_6 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_dict_seq_1;
        CHECK_OBJECT(par_kw);
        tmp_dict_seq_1 = par_kw;
        tmp_assign_source_6 = TO_DICT(tmp_dict_seq_1, NULL);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        {
            PyObject *old = par_kw;
            assert(old != NULL);
            par_kw = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_star_arg_dict);
        tmp_called_instance_2 = par_star_arg_dict;
        tmp_iter_arg_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[124]);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_assign_source_7 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        assert(tmp_dict_2__iter == NULL);
        tmp_dict_2__iter = tmp_assign_source_7;
    }
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_dict_2__iter);
        tmp_next_source_2 = tmp_dict_2__iter;
        tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_8 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                goto try_except_handler_1;
            }
        }

        {
            PyObject *old = tmp_dict_2__item;
            tmp_dict_2__item = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT(tmp_dict_2__item);
        tmp_expression_name_6 = tmp_dict_2__item;
        tmp_subscript_name_2 = mod_consts[96];
        tmp_assign_source_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_6, tmp_subscript_name_2, 0);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        {
            PyObject *old = tmp_dict_2__key;
            tmp_dict_2__key = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT(tmp_dict_2__key);
        tmp_compexpr_left_5 = tmp_dict_2__key;
        if (par_kw == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_compexpr_right_5 = par_kw;
        tmp_res = PySequence_Contains(tmp_compexpr_right_5, tmp_compexpr_left_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_condition_result_7 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_make_exception_arg_4;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_dircall_arg1_4;
        tmp_left_name_4 = mod_consts[10];
        if (par_called == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_dircall_arg1_4 = par_called;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_tuple_element_4 = impl___main__$$$function_3_get_callable_name_desc(dir_call_args);
        }
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_right_name_4 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_right_name_4, 0, tmp_tuple_element_4);
        CHECK_OBJECT(tmp_dict_2__key);
        tmp_tuple_element_4 = tmp_dict_2__key;
        PyTuple_SET_ITEM0(tmp_right_name_4, 1, tmp_tuple_element_4);
        tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_4, tmp_right_name_4);
        Py_DECREF(tmp_right_name_4);
        if (tmp_make_exception_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_4);
        Py_DECREF(tmp_make_exception_arg_4);
        assert(!(tmp_raise_type_4 == NULL));
        exception_type = tmp_raise_type_4;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_7:;
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(tmp_dict_2__item);
        tmp_expression_name_7 = tmp_dict_2__item;
        tmp_subscript_name_3 = mod_consts[64];
        tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_7, tmp_subscript_name_3, 1);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        if (par_kw == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto try_except_handler_1;
        }

        tmp_ass_subscribed_2 = par_kw;
        CHECK_OBJECT(tmp_dict_2__key);
        tmp_ass_subscript_2 = tmp_dict_2__key;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




        goto try_except_handler_1;
    }
    goto loop_start_2;
    loop_end_2:;
    branch_no_6:;
    branch_end_3:;
    goto try_end_2;
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

    Py_XDECREF(tmp_dict_1__dict);
    tmp_dict_1__dict = NULL;
    Py_XDECREF(tmp_dict_1__iter);
    tmp_dict_1__iter = NULL;
    Py_XDECREF(tmp_dict_1__keys);
    tmp_dict_1__keys = NULL;
    Py_XDECREF(tmp_dict_1__key_xxx);
    tmp_dict_1__key_xxx = NULL;
    Py_XDECREF(tmp_dict_2__iter);
    tmp_dict_2__iter = NULL;
    Py_XDECREF(tmp_dict_2__item);
    tmp_dict_2__item = NULL;
    Py_XDECREF(tmp_dict_2__key);
    tmp_dict_2__key = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_dict_1__dict);
    tmp_dict_1__dict = NULL;
    Py_XDECREF(tmp_dict_1__iter);
    tmp_dict_1__iter = NULL;
    Py_XDECREF(tmp_dict_1__keys);
    tmp_dict_1__keys = NULL;
    Py_XDECREF(tmp_dict_1__key_xxx);
    tmp_dict_1__key_xxx = NULL;
    Py_XDECREF(tmp_dict_2__iter);
    tmp_dict_2__iter = NULL;
    Py_XDECREF(tmp_dict_2__item);
    tmp_dict_2__item = NULL;
    Py_XDECREF(tmp_dict_2__key);
    tmp_dict_2__key = NULL;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_kw_name_1;
        if (par_called == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_called_name_1 = par_called;
        CHECK_OBJECT(par_args);
        tmp_left_name_5 = par_args;
        if (par_star_arg_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_right_name_5 = par_star_arg_list;
        tmp_args_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_5, tmp_right_name_5);
        if (tmp_args_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        if (par_kw == NULL) {
            Py_DECREF(tmp_args_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);



            goto function_exception_exit;
        }

        tmp_kw_name_1 = par_kw;
        tmp_return_value = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_args_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto function_exception_exit;
        }
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_called);
    Py_DECREF(par_called);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_star_arg_list);
    Py_DECREF(par_star_arg_list);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    CHECK_OBJECT(par_star_arg_dict);
    Py_DECREF(par_star_arg_dict);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_called);
    Py_DECREF(par_called);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_star_arg_list);
    Py_DECREF(par_star_arg_list);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    CHECK_OBJECT(par_star_arg_dict);
    Py_DECREF(par_star_arg_dict);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function_16__unpack_list(PyObject **python_pars) {
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    PyObject *tmp_iter = NULL;
    PyObject *tmp_keys = NULL;
    PyObject *tmp_list = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_args);
        tmp_iter_arg_1 = par_args;
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        assert(tmp_iter == NULL);
        tmp_iter = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = PyList_New(0);
        assert(tmp_list == NULL);
        tmp_list = tmp_assign_source_2;
    }
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_iter);
        tmp_next_source_1 = tmp_iter;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                goto try_except_handler_1;
            }
        }

        {
            PyObject *old = tmp_keys;
            tmp_keys = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_list_arg_name_1;
        PyObject *tmp_value_name_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_list_extend_result_1;
        CHECK_OBJECT(tmp_list);
        tmp_list_arg_name_1 = tmp_list;
        CHECK_OBJECT(tmp_keys);
        tmp_value_name_1 = tmp_keys;
        assert(PyList_Check(tmp_list_arg_name_1));
        tmp_result = LIST_EXTEND(tmp_list_arg_name_1, tmp_value_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        tmp_list_extend_result_1 = Py_None;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




        goto try_except_handler_1;
    }
    goto loop_start_1;
    loop_end_1:;
    CHECK_OBJECT(tmp_list);
    tmp_return_value = tmp_list;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(tmp_list);
    Py_DECREF(tmp_list);
    tmp_list = NULL;
    CHECK_OBJECT(tmp_iter);
    Py_DECREF(tmp_iter);
    tmp_iter = NULL;
    Py_XDECREF(tmp_keys);
    tmp_keys = NULL;
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

    Py_XDECREF(tmp_list);
    tmp_list = NULL;
    Py_XDECREF(tmp_iter);
    tmp_iter = NULL;
    Py_XDECREF(tmp_keys);
    tmp_keys = NULL;
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
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION___main__$$$function_10_main() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function_10_main,
        mod_consts[155],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6638ce512c71e7ef6a45f0ade782a596,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function_1___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function_1___init__,
        mod_consts[3],
#if PYTHON_VERSION >= 300
        mod_consts[147],
#endif
        codeobj_6aff1a0d56205e41b73c0f46332cbec1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function_4_InitUI() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function_4_InitUI,
        mod_consts[4],
#if PYTHON_VERSION >= 300
        mod_consts[148],
#endif
        codeobj_df81e1c6681aebde4a68e7583e7aa55c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function_4_InitUI$$$function_1_lambda(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function_4_InitUI$$$function_1_lambda,
        mod_consts[33],
#if PYTHON_VERSION >= 300
        mod_consts[34],
#endif
        codeobj_e5ec73fa93e02c35212c0f17f0263603,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function_4_InitUI$$$function_2_lambda(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function_4_InitUI$$$function_2_lambda,
        mod_consts[33],
#if PYTHON_VERSION >= 300
        mod_consts[34],
#endif
        codeobj_4bddd9a7f328bd6e41b082651bf26699,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function_4_InitUI$$$function_3_lambda(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function_4_InitUI$$$function_3_lambda,
        mod_consts[33],
#if PYTHON_VERSION >= 300
        mod_consts[34],
#endif
        codeobj_9c8047c2dc862e3789a92abadcaaa63f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function_4_InitUI$$$function_4_lambda(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function_4_InitUI$$$function_4_lambda,
        mod_consts[33],
#if PYTHON_VERSION >= 300
        mod_consts[34],
#endif
        codeobj_234d8d3da167a1fbabf7ce656e6b0517,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function_5_OnClose() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function_5_OnClose,
        mod_consts[149],
#if PYTHON_VERSION >= 300
        mod_consts[150],
#endif
        codeobj_0dfbd77b0aa1176c43b210c109bdf06b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function_6_serialEndedMessage() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function_6_serialEndedMessage,
        mod_consts[44],
#if PYTHON_VERSION >= 300
        mod_consts[151],
#endif
        codeobj_0055136d44e50362e7e9ceeeead19616,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function_7_auto_instax() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function_7_auto_instax,
        mod_consts[40],
#if PYTHON_VERSION >= 300
        mod_consts[152],
#endif
        codeobj_0d824fdf44f71f4351836c168ab175e4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function_7_auto_instax$$$function_1_ShowMessage() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function_7_auto_instax$$$function_1_ShowMessage,
        mod_consts[52],
#if PYTHON_VERSION >= 300
        mod_consts[53],
#endif
        codeobj_00887f4ae38267481a82cd5dd899165f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function_7_auto_instax$$$function_2_process() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function_7_auto_instax$$$function_2_process,
        mod_consts[54],
#if PYTHON_VERSION >= 300
        mod_consts[55],
#endif
        codeobj_a7782b4a2d51c31d37a52180c696d5b4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function_8_auto_2r() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function_8_auto_2r,
        mod_consts[43],
#if PYTHON_VERSION >= 300
        mod_consts[153],
#endif
        codeobj_168c262041bad7b77b39f6f9f042f8a6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function_8_auto_2r$$$function_1_ShowMessage() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function_8_auto_2r$$$function_1_ShowMessage,
        mod_consts[52],
#if PYTHON_VERSION >= 300
        mod_consts[115],
#endif
        codeobj_94f03dcc58b13e0cd553d193f714fcad,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function_8_auto_2r$$$function_2_process() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function_8_auto_2r$$$function_2_process,
        mod_consts[54],
#if PYTHON_VERSION >= 300
        mod_consts[116],
#endif
        codeobj_dcfee97de3a930eb6a17514a79e28e5c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module___main__,
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

function_impl_code functable___main__[] = {
    impl___main__$$$function_4_InitUI$$$function_1_lambda,
    impl___main__$$$function_4_InitUI$$$function_2_lambda,
    impl___main__$$$function_4_InitUI$$$function_3_lambda,
    impl___main__$$$function_4_InitUI$$$function_4_lambda,
    impl___main__$$$function_7_auto_instax$$$function_1_ShowMessage,
    impl___main__$$$function_7_auto_instax$$$function_2_process,
    impl___main__$$$function_8_auto_2r$$$function_1_ShowMessage,
    impl___main__$$$function_8_auto_2r$$$function_2_process,
    impl___main__$$$function_1___init__,
    impl___main__$$$function_4_InitUI,
    impl___main__$$$function_5_OnClose,
    impl___main__$$$function_6_serialEndedMessage,
    impl___main__$$$function_7_auto_instax,
    impl___main__$$$function_8_auto_2r,
    impl___main__$$$function_10_main,
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

    function_impl_code *current = functable___main__;
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

    if (offset > sizeof(functable___main__) || offset < 0) {
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
        functable___main__[offset],
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
        module___main__,
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
NUITKA_MAY_BE_UNUSED static char const *module_full_name = "__main__";

// Internal entry point for module code.
PyObject *modulecode___main__(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module___main__ = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
#ifdef _NUITKA_TRACE
        PRINT_STRING("__main__: Skipping module init, already done.\n");
#endif

        return module___main__;
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
    PRINT_STRING("__main__: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("__main__: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("__main__: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in init__main__\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict___main__ = MODULE_DICT(module___main__);

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
        moduledict___main__,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict___main__,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict___main__,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict___main__,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict___main__,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module___main__);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !1
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 1
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module___main__);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT(spec_value);

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_11efa462501e88341b0424ff769c2db2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    bool tmp_result;
    PyObject *locals___main__$$$class_1_Example_24 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_bf273f05645cf3458ddac416b5c6c336_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_bf273f05645cf3458ddac416b5c6c336_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Module code.
    // Frame without reuse.
    frame_11efa462501e88341b0424ff769c2db2 = MAKE_MODULE_FRAME(codeobj_11efa462501e88341b0424ff769c2db2, module___main__);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_11efa462501e88341b0424ff769c2db2);
    assert(Py_REFCNT(frame_11efa462501e88341b0424ff769c2db2) == 2);

    // Framed code:
    {
        PyObject *tmp_name_name_1;
        PyObject *tmp_level_name_1;
        PyObject *tmp_imported_value_1;
        tmp_name_name_1 = mod_consts[125];
        tmp_level_name_1 = mod_consts[96];
        frame_11efa462501e88341b0424ff769c2db2->m_frame.f_lineno = 1;
        tmp_imported_value_1 = IMPORT_MODULE_KW(tmp_name_name_1, NULL, NULL, NULL, tmp_level_name_1);
        if (tmp_imported_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_imported_value_1);
    }
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[126];
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[128];
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_2);
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = PyDict_New();
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[19];
        tmp_globals_name_1 = (PyObject *)moduledict___main__;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_2 = mod_consts[96];
        frame_11efa462501e88341b0424ff769c2db2->m_frame.f_lineno = 14;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = mod_consts[56];
        tmp_globals_name_2 = (PyObject *)moduledict___main__;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_3 = mod_consts[96];
        frame_11efa462501e88341b0424ff769c2db2->m_frame.f_lineno = 15;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = mod_consts[132];
        tmp_globals_name_3 = (PyObject *)moduledict___main__;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_4 = mod_consts[96];
        frame_11efa462501e88341b0424ff769c2db2->m_frame.f_lineno = 16;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = mod_consts[106];
        tmp_globals_name_4 = (PyObject *)moduledict___main__;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_5 = mod_consts[96];
        frame_11efa462501e88341b0424ff769c2db2->m_frame.f_lineno = 17;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_5);
        assert(!(tmp_assign_source_8 == NULL));
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = mod_consts[27];
        tmp_globals_name_5 = (PyObject *)moduledict___main__;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = Py_None;
        tmp_level_name_6 = mod_consts[96];
        frame_11efa462501e88341b0424ff769c2db2->m_frame.f_lineno = 18;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_6);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = mod_consts[133];
        tmp_globals_name_6 = (PyObject *)moduledict___main__;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = mod_consts[134];
        tmp_level_name_7 = mod_consts[96];
        frame_11efa462501e88341b0424ff769c2db2->m_frame.f_lineno = 19;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_7, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_7);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict___main__,
                mod_consts[59],
                mod_consts[96]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[59]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = mod_consts[94];
        tmp_globals_name_7 = (PyObject *)moduledict___main__;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = mod_consts[135];
        tmp_level_name_8 = mod_consts[96];
        frame_11efa462501e88341b0424ff769c2db2->m_frame.f_lineno = 21;
        tmp_assign_source_11 = IMPORT_MODULE5(tmp_name_name_8, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_8);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict___main__,
                mod_consts[65],
                mod_consts[96]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[65]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict___main__,
                mod_consts[136],
                mod_consts[96]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[136]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict___main__,
                mod_consts[137],
                mod_consts[96]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[137]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict___main__,
                mod_consts[138],
                mod_consts[96]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[138]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_15);
    }
    goto try_end_1;
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

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_name_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_2;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[139]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_2;
        }
        tmp_assign_source_16 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_assign_source_16, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_17 = impl___main__$$$function_9__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_dict_name_2;
        PyObject *tmp_key_name_2;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = mod_consts[140];
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
        tmp_key_name_2 = mod_consts[140];
        tmp_metaclass_name_1 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_2, tmp_key_name_2);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_2;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_name_2 = tmp_class_creation_1__bases;
        tmp_subscript_name_1 = mod_consts[96];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_2, tmp_subscript_name_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_2;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_2;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_1);
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_19 = SELECT_METACLASS(tmp_metaclass_name_1, tmp_bases_name_1);
        Py_DECREF(tmp_metaclass_name_1);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_19;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_name_3;
        tmp_key_name_3 = mod_consts[140];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_name_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_name_3, tmp_key_name_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = mod_consts[140];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 24;

        goto try_except_handler_2;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_name_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_3 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_3, mod_consts[141]);
        tmp_condition_result_4 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_4 = tmp_class_creation_1__metaclass;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[141]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = mod_consts[2];
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
        frame_11efa462501e88341b0424ff769c2db2->m_frame.f_lineno = 24;
        tmp_assign_source_20 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_20;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_expression_name_5;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_name_5 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_5, mod_consts[13]);
        tmp_operand_name_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_2;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
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
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_left_name_1 = mod_consts[142];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[8];
        tmp_getattr_default_1 = mod_consts[143];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_2;
        }
        tmp_right_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_6;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_name_6 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_name_6 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[8]);
            Py_DECREF(tmp_expression_name_6);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 24;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_21;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_22;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals___main__$$$class_1_Example_24 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[144];
        tmp_res = PyObject_SetItem(locals___main__$$$class_1_Example_24, mod_consts[145], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[2];
        tmp_res = PyObject_SetItem(locals___main__$$$class_1_Example_24, mod_consts[146], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_4;
        }
        if (isFrameUnusable(cache_frame_bf273f05645cf3458ddac416b5c6c336_2)) {
            Py_XDECREF(cache_frame_bf273f05645cf3458ddac416b5c6c336_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_bf273f05645cf3458ddac416b5c6c336_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_bf273f05645cf3458ddac416b5c6c336_2 = MAKE_FUNCTION_FRAME(codeobj_bf273f05645cf3458ddac416b5c6c336, module___main__, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_bf273f05645cf3458ddac416b5c6c336_2->m_type_description == NULL);
        frame_bf273f05645cf3458ddac416b5c6c336_2 = cache_frame_bf273f05645cf3458ddac416b5c6c336_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_bf273f05645cf3458ddac416b5c6c336_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_bf273f05645cf3458ddac416b5c6c336_2) == 2); // Frame stack

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION___main__$$$function_1___init__();

        tmp_res = PyObject_SetItem(locals___main__$$$class_1_Example_24, mod_consts[3], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION___main__$$$function_4_InitUI();

        tmp_res = PyObject_SetItem(locals___main__$$$class_1_Example_24, mod_consts[4], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION___main__$$$function_5_OnClose();

        tmp_res = PyObject_SetItem(locals___main__$$$class_1_Example_24, mod_consts[149], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION___main__$$$function_6_serialEndedMessage();

        tmp_res = PyObject_SetItem(locals___main__$$$class_1_Example_24, mod_consts[44], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION___main__$$$function_7_auto_instax();

        tmp_res = PyObject_SetItem(locals___main__$$$class_1_Example_24, mod_consts[40], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION___main__$$$function_8_auto_2r();

        tmp_res = PyObject_SetItem(locals___main__$$$class_1_Example_24, mod_consts[43], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_bf273f05645cf3458ddac416b5c6c336_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_bf273f05645cf3458ddac416b5c6c336_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_bf273f05645cf3458ddac416b5c6c336_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_bf273f05645cf3458ddac416b5c6c336_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_bf273f05645cf3458ddac416b5c6c336_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_bf273f05645cf3458ddac416b5c6c336_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_bf273f05645cf3458ddac416b5c6c336_2 == cache_frame_bf273f05645cf3458ddac416b5c6c336_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_bf273f05645cf3458ddac416b5c6c336_2);
            cache_frame_bf273f05645cf3458ddac416b5c6c336_2 = NULL;
        }

        assertFrameObject(frame_bf273f05645cf3458ddac416b5c6c336_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_compexpr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_compexpr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_1, tmp_compexpr_right_1);
            if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;

                goto try_except_handler_4;
            }
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
            assert(tmp_condition_result_6 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_4:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals___main__$$$class_1_Example_24, mod_consts[154], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_4;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[2];
            tmp_args_name_2 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_name_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals___main__$$$class_1_Example_24;
            PyTuple_SET_ITEM0(tmp_args_name_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_11efa462501e88341b0424ff769c2db2->m_frame.f_lineno = 24;
            tmp_assign_source_23 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2);
            Py_DECREF(tmp_args_name_2);
            if (tmp_assign_source_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_23;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_22 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_22);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals___main__$$$class_1_Example_24);
        locals___main__$$$class_1_Example_24 = NULL;
        goto try_return_handler_3;
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

        Py_DECREF(locals___main__$$$class_1_Example_24);
        locals___main__$$$class_1_Example_24 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
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
        exception_lineno = 24;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_22);
    }
    goto try_end_2;
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

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_24;


        tmp_assign_source_24 = MAKE_FUNCTION___main__$$$function_10_main();

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_24);
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_call_result_1;
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[155]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[155]);
        }

        assert(!(tmp_called_name_3 == NULL));
        frame_11efa462501e88341b0424ff769c2db2->m_frame.f_lineno = 229;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tmp_called_name_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_11efa462501e88341b0424ff769c2db2);
#endif
    popFrameStack();

    assertFrameObject(frame_11efa462501e88341b0424ff769c2db2);

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_11efa462501e88341b0424ff769c2db2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_11efa462501e88341b0424ff769c2db2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_11efa462501e88341b0424ff769c2db2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_11efa462501e88341b0424ff769c2db2, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;

    return module___main__;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

