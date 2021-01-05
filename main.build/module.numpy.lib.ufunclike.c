/* Generated code for Python module 'numpy.lib.ufunclike'
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

/* The "module_numpy$lib$ufunclike" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$lib$ufunclike;
PyDictObject *moduledict_numpy$lib$ufunclike;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[71];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    loadConstantsBlob(&mod_consts[0], "numpy.lib.ufunclike", 71);

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
void checkModuleConstants_numpy$lib$ufunclike(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "numpy.lib.ufunclike", 71);
}
#endif

// The module code objects.
static PyCodeObject *codeobj_e42a9f5c17c8a833d7e94604cfbf6b8f;
static PyCodeObject *codeobj_9ea66e496cbcc1948651586273013745;
static PyCodeObject *codeobj_2e17d328a5c6c88c81b0803359b81940;
static PyCodeObject *codeobj_0b7e6b841a9523b42bc403087c440315;
static PyCodeObject *codeobj_1bc840984b4ae3256d0a4e918ad20b20;
static PyCodeObject *codeobj_6e70b6b6f6c6cafcc58bbc59a329e515;
static PyCodeObject *codeobj_f4516a618794b95fd92ada5b2b097695;
static PyCodeObject *codeobj_d7a004a7826312de6cdaf3baa9c2acac;
static PyCodeObject *codeobj_e8f61b1d8ffaa977c260bdf219a58a57;
static PyCodeObject *codeobj_c43cb04e1649176e0b98c5070fd16d9f;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[44]; CHECK_OBJECT(module_filename_obj);
    codeobj_e42a9f5c17c8a833d7e94604cfbf6b8f = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[64], NULL, NULL, 0, 0, 0);
    codeobj_9ea66e496cbcc1948651586273013745 = MAKE_CODEOBJECT(module_filename_obj, 16, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[24], mod_consts[65], NULL, 1, 0, 0);
    codeobj_2e17d328a5c6c88c81b0803359b81940 = MAKE_CODEOBJECT(module_filename_obj, 69, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[59], mod_consts[66], NULL, 2, 0, 0);
    codeobj_0b7e6b841a9523b42bc403087c440315 = MAKE_CODEOBJECT(module_filename_obj, 58, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[58], mod_consts[67], NULL, 1, 0, 0);
    codeobj_1bc840984b4ae3256d0a4e918ad20b20 = MAKE_CODEOBJECT(module_filename_obj, 41, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[23], mod_consts[65], NULL, 1, 0, 0);
    codeobj_6e70b6b6f6c6cafcc58bbc59a329e515 = MAKE_CODEOBJECT(module_filename_obj, 75, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[61], mod_consts[68], NULL, 2, 0, 0);
    codeobj_f4516a618794b95fd92ada5b2b097695 = MAKE_CODEOBJECT(module_filename_obj, 23, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[4], mod_consts[69], mod_consts[67], 2, 0, 0);
    codeobj_d7a004a7826312de6cdaf3baa9c2acac = MAKE_CODEOBJECT(module_filename_obj, 49, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[4], mod_consts[69], mod_consts[67], 2, 0, 0);
    codeobj_e8f61b1d8ffaa977c260bdf219a58a57 = MAKE_CODEOBJECT(module_filename_obj, 200, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[63], mod_consts[70], NULL, 2, 0, 0);
    codeobj_c43cb04e1649176e0b98c5070fd16d9f = MAKE_CODEOBJECT(module_filename_obj, 129, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[62], mod_consts[70], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function_18_complex_call_helper_pos_keywords_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_numpy$lib$ufunclike$$$function_1__deprecate_out_named_y();


static PyObject *MAKE_FUNCTION_numpy$lib$ufunclike$$$function_1__deprecate_out_named_y$$$function_1_func(PyObject *defaults, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_numpy$lib$ufunclike$$$function_2__fix_out_named_y();


static PyObject *MAKE_FUNCTION_numpy$lib$ufunclike$$$function_2__fix_out_named_y$$$function_1_func(PyObject *defaults, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_numpy$lib$ufunclike$$$function_3__fix_and_maybe_deprecate_out_named_y();


static PyObject *MAKE_FUNCTION_numpy$lib$ufunclike$$$function_4__dispatcher(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$ufunclike$$$function_5_fix(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$ufunclike$$$function_6_isposinf(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$ufunclike$$$function_7_isneginf(PyObject *defaults);


// The module function definitions.
static PyObject *impl_numpy$lib$ufunclike$$$function_1__deprecate_out_named_y(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_f = Nuitka_Cell_New1(python_pars[0]);
    PyObject *var_func = NULL;
    struct Nuitka_FrameObject *frame_9ea66e496cbcc1948651586273013745;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9ea66e496cbcc1948651586273013745 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9ea66e496cbcc1948651586273013745)) {
        Py_XDECREF(cache_frame_9ea66e496cbcc1948651586273013745);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9ea66e496cbcc1948651586273013745 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9ea66e496cbcc1948651586273013745 = MAKE_FUNCTION_FRAME(codeobj_9ea66e496cbcc1948651586273013745, module_numpy$lib$ufunclike, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9ea66e496cbcc1948651586273013745->m_type_description == NULL);
    frame_9ea66e496cbcc1948651586273013745 = cache_frame_9ea66e496cbcc1948651586273013745;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9ea66e496cbcc1948651586273013745);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9ea66e496cbcc1948651586273013745) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_defaults_1;
        struct Nuitka_CellObject *tmp_closure_1[1];
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[1]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(par_f) == NULL) {
            Py_DECREF(tmp_called_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 22;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = Nuitka_Cell_GET(par_f);
        frame_9ea66e496cbcc1948651586273013745->m_frame.f_lineno = 22;
        tmp_called_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_2);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_defaults_1 = mod_consts[3];
        Py_INCREF(tmp_defaults_1);

        tmp_closure_1[0] = par_f;
        Py_INCREF(tmp_closure_1[0]);

        tmp_args_element_name_2 = MAKE_FUNCTION_numpy$lib$ufunclike$$$function_1__deprecate_out_named_y$$$function_1_func(tmp_defaults_1, tmp_closure_1);

        frame_9ea66e496cbcc1948651586273013745->m_frame.f_lineno = 22;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        assert(var_func == NULL);
        var_func = tmp_assign_source_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9ea66e496cbcc1948651586273013745);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9ea66e496cbcc1948651586273013745);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9ea66e496cbcc1948651586273013745, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9ea66e496cbcc1948651586273013745->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9ea66e496cbcc1948651586273013745, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9ea66e496cbcc1948651586273013745,
        type_description_1,
        par_f,
        var_func
    );


    // Release cached frame if used for exception.
    if (frame_9ea66e496cbcc1948651586273013745 == cache_frame_9ea66e496cbcc1948651586273013745) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_9ea66e496cbcc1948651586273013745);
        cache_frame_9ea66e496cbcc1948651586273013745 = NULL;
    }

    assertFrameObject(frame_9ea66e496cbcc1948651586273013745);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_func);
    tmp_return_value = var_func;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);
    par_f = NULL;
    CHECK_OBJECT(var_func);
    Py_DECREF(var_func);
    var_func = NULL;
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

    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);
    par_f = NULL;
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


static PyObject *impl_numpy$lib$ufunclike$$$function_1__deprecate_out_named_y$$$function_1_func(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_out = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    struct Nuitka_FrameObject *frame_f4516a618794b95fd92ada5b2b097695;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f4516a618794b95fd92ada5b2b097695 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f4516a618794b95fd92ada5b2b097695)) {
        Py_XDECREF(cache_frame_f4516a618794b95fd92ada5b2b097695);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f4516a618794b95fd92ada5b2b097695 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f4516a618794b95fd92ada5b2b097695 = MAKE_FUNCTION_FRAME(codeobj_f4516a618794b95fd92ada5b2b097695, module_numpy$lib$ufunclike, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f4516a618794b95fd92ada5b2b097695->m_type_description == NULL);
    frame_f4516a618794b95fd92ada5b2b097695 = cache_frame_f4516a618794b95fd92ada5b2b097695;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f4516a618794b95fd92ada5b2b097695);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f4516a618794b95fd92ada5b2b097695) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = mod_consts[7];
        CHECK_OBJECT(par_kwargs);
        tmp_compexpr_right_1 = par_kwargs;
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = mod_consts[8];
        CHECK_OBJECT(par_kwargs);
        tmp_compexpr_right_2 = par_kwargs;
        tmp_res = PySequence_Contains(tmp_compexpr_right_2, tmp_compexpr_left_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_2;
        tmp_expression_name_1 = mod_consts[9];
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[10]);
        assert(!(tmp_called_name_1 == NULL));
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 28;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[11]);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 28;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        frame_f4516a618794b95fd92ada5b2b097695->m_frame.f_lineno = 27;
        tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        frame_f4516a618794b95fd92ada5b2b097695->m_frame.f_lineno = 26;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 26;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooc";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_kwargs);
        tmp_called_instance_1 = par_kwargs;
        frame_f4516a618794b95fd92ada5b2b097695->m_frame.f_lineno = 30;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, mod_consts[12], &PyTuple_GET_ITEM(mod_consts[13], 0));

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_out;
            assert(old != NULL);
            par_out = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_kw_name_1;
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[15]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_4 = mod_consts[16];
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[10]);
        assert(!(tmp_called_name_3 == NULL));
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 34;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_5 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[11]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 34;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        frame_f4516a618794b95fd92ada5b2b097695->m_frame.f_lineno = 33;
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 33;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oooc";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kw_name_1 = PyDict_Copy(mod_consts[18]);
        frame_f4516a618794b95fd92ada5b2b097695->m_frame.f_lineno = 32;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg4_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 36;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_x);
        tmp_tuple_element_2 = par_x;
        tmp_dircall_arg2_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_2);
        tmp_dict_key_1 = mod_consts[8];
        CHECK_OBJECT(par_out);
        tmp_dict_value_1 = par_out;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        if (par_kwargs == NULL) {
            Py_DECREF(tmp_dircall_arg2_1);
            Py_DECREF(tmp_dircall_arg3_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 36;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___main__$$$function_18_complex_call_helper_pos_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f4516a618794b95fd92ada5b2b097695);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f4516a618794b95fd92ada5b2b097695);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f4516a618794b95fd92ada5b2b097695);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f4516a618794b95fd92ada5b2b097695, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f4516a618794b95fd92ada5b2b097695->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f4516a618794b95fd92ada5b2b097695, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f4516a618794b95fd92ada5b2b097695,
        type_description_1,
        par_x,
        par_out,
        par_kwargs,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_f4516a618794b95fd92ada5b2b097695 == cache_frame_f4516a618794b95fd92ada5b2b097695) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_f4516a618794b95fd92ada5b2b097695);
        cache_frame_f4516a618794b95fd92ada5b2b097695 = NULL;
    }

    assertFrameObject(frame_f4516a618794b95fd92ada5b2b097695);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    par_out = NULL;
    Py_XDECREF(par_kwargs);
    par_kwargs = NULL;
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

    Py_XDECREF(par_out);
    par_out = NULL;
    Py_XDECREF(par_kwargs);
    par_kwargs = NULL;
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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$ufunclike$$$function_2__fix_out_named_y(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_f = Nuitka_Cell_New1(python_pars[0]);
    PyObject *var_func = NULL;
    struct Nuitka_FrameObject *frame_1bc840984b4ae3256d0a4e918ad20b20;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1bc840984b4ae3256d0a4e918ad20b20 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1bc840984b4ae3256d0a4e918ad20b20)) {
        Py_XDECREF(cache_frame_1bc840984b4ae3256d0a4e918ad20b20);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1bc840984b4ae3256d0a4e918ad20b20 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1bc840984b4ae3256d0a4e918ad20b20 = MAKE_FUNCTION_FRAME(codeobj_1bc840984b4ae3256d0a4e918ad20b20, module_numpy$lib$ufunclike, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1bc840984b4ae3256d0a4e918ad20b20->m_type_description == NULL);
    frame_1bc840984b4ae3256d0a4e918ad20b20 = cache_frame_1bc840984b4ae3256d0a4e918ad20b20;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1bc840984b4ae3256d0a4e918ad20b20);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1bc840984b4ae3256d0a4e918ad20b20) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_defaults_1;
        struct Nuitka_CellObject *tmp_closure_1[1];
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[1]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(par_f) == NULL) {
            Py_DECREF(tmp_called_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 48;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = Nuitka_Cell_GET(par_f);
        frame_1bc840984b4ae3256d0a4e918ad20b20->m_frame.f_lineno = 48;
        tmp_called_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_2);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_defaults_1 = mod_consts[3];
        Py_INCREF(tmp_defaults_1);

        tmp_closure_1[0] = par_f;
        Py_INCREF(tmp_closure_1[0]);

        tmp_args_element_name_2 = MAKE_FUNCTION_numpy$lib$ufunclike$$$function_2__fix_out_named_y$$$function_1_func(tmp_defaults_1, tmp_closure_1);

        frame_1bc840984b4ae3256d0a4e918ad20b20->m_frame.f_lineno = 48;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        assert(var_func == NULL);
        var_func = tmp_assign_source_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1bc840984b4ae3256d0a4e918ad20b20);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1bc840984b4ae3256d0a4e918ad20b20);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1bc840984b4ae3256d0a4e918ad20b20, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1bc840984b4ae3256d0a4e918ad20b20->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1bc840984b4ae3256d0a4e918ad20b20, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1bc840984b4ae3256d0a4e918ad20b20,
        type_description_1,
        par_f,
        var_func
    );


    // Release cached frame if used for exception.
    if (frame_1bc840984b4ae3256d0a4e918ad20b20 == cache_frame_1bc840984b4ae3256d0a4e918ad20b20) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1bc840984b4ae3256d0a4e918ad20b20);
        cache_frame_1bc840984b4ae3256d0a4e918ad20b20 = NULL;
    }

    assertFrameObject(frame_1bc840984b4ae3256d0a4e918ad20b20);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_func);
    tmp_return_value = var_func;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);
    par_f = NULL;
    CHECK_OBJECT(var_func);
    Py_DECREF(var_func);
    var_func = NULL;
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

    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);
    par_f = NULL;
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


static PyObject *impl_numpy$lib$ufunclike$$$function_2__fix_out_named_y$$$function_1_func(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_out = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    struct Nuitka_FrameObject *frame_d7a004a7826312de6cdaf3baa9c2acac;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d7a004a7826312de6cdaf3baa9c2acac = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d7a004a7826312de6cdaf3baa9c2acac)) {
        Py_XDECREF(cache_frame_d7a004a7826312de6cdaf3baa9c2acac);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d7a004a7826312de6cdaf3baa9c2acac == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d7a004a7826312de6cdaf3baa9c2acac = MAKE_FUNCTION_FRAME(codeobj_d7a004a7826312de6cdaf3baa9c2acac, module_numpy$lib$ufunclike, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d7a004a7826312de6cdaf3baa9c2acac->m_type_description == NULL);
    frame_d7a004a7826312de6cdaf3baa9c2acac = cache_frame_d7a004a7826312de6cdaf3baa9c2acac;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d7a004a7826312de6cdaf3baa9c2acac);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d7a004a7826312de6cdaf3baa9c2acac) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = mod_consts[7];
        CHECK_OBJECT(par_kwargs);
        tmp_compexpr_right_1 = par_kwargs;
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_kwargs);
        tmp_called_instance_1 = par_kwargs;
        frame_d7a004a7826312de6cdaf3baa9c2acac->m_frame.f_lineno = 52;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, mod_consts[12], &PyTuple_GET_ITEM(mod_consts[13], 0));

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_out;
            assert(old != NULL);
            par_out = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg4_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 53;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_x);
        tmp_tuple_element_1 = par_x;
        tmp_dircall_arg2_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[8];
        CHECK_OBJECT(par_out);
        tmp_dict_value_1 = par_out;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        if (par_kwargs == NULL) {
            Py_DECREF(tmp_dircall_arg2_1);
            Py_DECREF(tmp_dircall_arg3_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 53;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___main__$$$function_18_complex_call_helper_pos_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d7a004a7826312de6cdaf3baa9c2acac);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d7a004a7826312de6cdaf3baa9c2acac);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d7a004a7826312de6cdaf3baa9c2acac);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d7a004a7826312de6cdaf3baa9c2acac, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d7a004a7826312de6cdaf3baa9c2acac->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d7a004a7826312de6cdaf3baa9c2acac, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d7a004a7826312de6cdaf3baa9c2acac,
        type_description_1,
        par_x,
        par_out,
        par_kwargs,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_d7a004a7826312de6cdaf3baa9c2acac == cache_frame_d7a004a7826312de6cdaf3baa9c2acac) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d7a004a7826312de6cdaf3baa9c2acac);
        cache_frame_d7a004a7826312de6cdaf3baa9c2acac = NULL;
    }

    assertFrameObject(frame_d7a004a7826312de6cdaf3baa9c2acac);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    par_out = NULL;
    Py_XDECREF(par_kwargs);
    par_kwargs = NULL;
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

    Py_XDECREF(par_out);
    par_out = NULL;
    Py_XDECREF(par_kwargs);
    par_kwargs = NULL;
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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$ufunclike$$$function_3__fix_and_maybe_deprecate_out_named_y(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_f = python_pars[0];
    struct Nuitka_FrameObject *frame_0b7e6b841a9523b42bc403087c440315;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0b7e6b841a9523b42bc403087c440315 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0b7e6b841a9523b42bc403087c440315)) {
        Py_XDECREF(cache_frame_0b7e6b841a9523b42bc403087c440315);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0b7e6b841a9523b42bc403087c440315 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0b7e6b841a9523b42bc403087c440315 = MAKE_FUNCTION_FRAME(codeobj_0b7e6b841a9523b42bc403087c440315, module_numpy$lib$ufunclike, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0b7e6b841a9523b42bc403087c440315->m_type_description == NULL);
    frame_0b7e6b841a9523b42bc403087c440315 = cache_frame_0b7e6b841a9523b42bc403087c440315;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0b7e6b841a9523b42bc403087c440315);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0b7e6b841a9523b42bc403087c440315) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_mvar_value_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_mvar_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "o";
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
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_f);
        tmp_args_element_name_1 = par_f;
        frame_0b7e6b841a9523b42bc403087c440315->m_frame.f_lineno = 63;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_f);
        tmp_args_element_name_2 = par_f;
        frame_0b7e6b841a9523b42bc403087c440315->m_frame.f_lineno = 65;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0b7e6b841a9523b42bc403087c440315);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0b7e6b841a9523b42bc403087c440315);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0b7e6b841a9523b42bc403087c440315);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0b7e6b841a9523b42bc403087c440315, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0b7e6b841a9523b42bc403087c440315->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0b7e6b841a9523b42bc403087c440315, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0b7e6b841a9523b42bc403087c440315,
        type_description_1,
        par_f
    );


    // Release cached frame if used for exception.
    if (frame_0b7e6b841a9523b42bc403087c440315 == cache_frame_0b7e6b841a9523b42bc403087c440315) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_0b7e6b841a9523b42bc403087c440315);
        cache_frame_0b7e6b841a9523b42bc403087c440315 = NULL;
    }

    assertFrameObject(frame_0b7e6b841a9523b42bc403087c440315);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$ufunclike$$$function_4__dispatcher(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_out = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_x);
        tmp_tuple_element_1 = par_x;
        tmp_return_value = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_out);
        tmp_tuple_element_1 = par_out;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$ufunclike$$$function_5_fix(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_out = python_pars[1];
    PyObject *var_res = NULL;
    struct Nuitka_FrameObject *frame_6e70b6b6f6c6cafcc58bbc59a329e515;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_6e70b6b6f6c6cafcc58bbc59a329e515 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6e70b6b6f6c6cafcc58bbc59a329e515)) {
        Py_XDECREF(cache_frame_6e70b6b6f6c6cafcc58bbc59a329e515);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6e70b6b6f6c6cafcc58bbc59a329e515 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6e70b6b6f6c6cafcc58bbc59a329e515 = MAKE_FUNCTION_FRAME(codeobj_6e70b6b6f6c6cafcc58bbc59a329e515, module_numpy$lib$ufunclike, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6e70b6b6f6c6cafcc58bbc59a329e515->m_type_description == NULL);
    frame_6e70b6b6f6c6cafcc58bbc59a329e515 = cache_frame_6e70b6b6f6c6cafcc58bbc59a329e515;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6e70b6b6f6c6cafcc58bbc59a329e515);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6e70b6b6f6c6cafcc58bbc59a329e515) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[27]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 117;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[28]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 117;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_tuple_element_1 = par_x;
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[8];
        CHECK_OBJECT(par_out);
        tmp_dict_value_1 = par_out;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_6e70b6b6f6c6cafcc58bbc59a329e515->m_frame.f_lineno = 117;
        tmp_args_element_name_1 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 117;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_6e70b6b6f6c6cafcc58bbc59a329e515->m_frame.f_lineno = 117;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_res == NULL);
        var_res = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[29]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_tuple_element_2 = par_x;
        tmp_args_name_2 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_2, 0, tmp_tuple_element_2);
        tmp_dict_key_2 = mod_consts[8];
        CHECK_OBJECT(var_res);
        tmp_dict_value_2 = var_res;
        tmp_kw_name_2 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            tmp_res = PyDict_SetItem(tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[30];
            tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_called_instance_1 == NULL)) {
                tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
            }

            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            CHECK_OBJECT(par_x);
            tmp_args_element_name_2 = par_x;
            tmp_args_element_name_3 = mod_consts[32];
            frame_6e70b6b6f6c6cafcc58bbc59a329e515->m_frame.f_lineno = 118;
            {
                PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
                tmp_dict_value_2 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_1, mod_consts[31], call_args);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_name_2);
        Py_DECREF(tmp_kw_name_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        frame_6e70b6b6f6c6cafcc58bbc59a329e515->m_frame.f_lineno = 118;
        tmp_assign_source_2 = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_name_2);
        Py_DECREF(tmp_kw_name_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_res;
            assert(old != NULL);
            var_res = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_name_4;
        CHECK_OBJECT(par_out);
        tmp_compexpr_left_1 = par_out;
        tmp_compexpr_right_1 = Py_None;
        tmp_and_left_value_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_res);
        tmp_type_arg_1 = var_res;
        tmp_compexpr_left_2 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_compexpr_left_2 == NULL));
        tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_expression_name_4 == NULL)) {
            tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_2);

            exception_lineno = 122;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[33]);
        if (tmp_compexpr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_2);

            exception_lineno = 122;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? true : false;
        Py_DECREF(tmp_compexpr_left_2);
        Py_DECREF(tmp_compexpr_right_2);
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(var_res);
        tmp_expression_name_5 = var_res;
        tmp_subscript_name_1 = mod_consts[34];
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tmp_expression_name_5, tmp_subscript_name_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_res;
            assert(old != NULL);
            var_res = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6e70b6b6f6c6cafcc58bbc59a329e515);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6e70b6b6f6c6cafcc58bbc59a329e515);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6e70b6b6f6c6cafcc58bbc59a329e515, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6e70b6b6f6c6cafcc58bbc59a329e515->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6e70b6b6f6c6cafcc58bbc59a329e515, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6e70b6b6f6c6cafcc58bbc59a329e515,
        type_description_1,
        par_x,
        par_out,
        var_res
    );


    // Release cached frame if used for exception.
    if (frame_6e70b6b6f6c6cafcc58bbc59a329e515 == cache_frame_6e70b6b6f6c6cafcc58bbc59a329e515) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6e70b6b6f6c6cafcc58bbc59a329e515);
        cache_frame_6e70b6b6f6c6cafcc58bbc59a329e515 = NULL;
    }

    assertFrameObject(frame_6e70b6b6f6c6cafcc58bbc59a329e515);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_res);
    tmp_return_value = var_res;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_res);
    Py_DECREF(var_res);
    var_res = NULL;
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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$ufunclike$$$function_6_isposinf(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_out = python_pars[1];
    PyObject *var_is_inf = NULL;
    PyObject *var_signbit = NULL;
    PyObject *var_e = NULL;
    nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
    struct Nuitka_FrameObject *frame_c43cb04e1649176e0b98c5070fd16d9f;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c43cb04e1649176e0b98c5070fd16d9f = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c43cb04e1649176e0b98c5070fd16d9f)) {
        Py_XDECREF(cache_frame_c43cb04e1649176e0b98c5070fd16d9f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c43cb04e1649176e0b98c5070fd16d9f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c43cb04e1649176e0b98c5070fd16d9f = MAKE_FUNCTION_FRAME(codeobj_c43cb04e1649176e0b98c5070fd16d9f, module_numpy$lib$ufunclike, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c43cb04e1649176e0b98c5070fd16d9f->m_type_description == NULL);
    frame_c43cb04e1649176e0b98c5070fd16d9f = cache_frame_c43cb04e1649176e0b98c5070fd16d9f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c43cb04e1649176e0b98c5070fd16d9f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c43cb04e1649176e0b98c5070fd16d9f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_name_1 = par_x;
        frame_c43cb04e1649176e0b98c5070fd16d9f->m_frame.f_lineno = 188;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[36], tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_is_inf == NULL);
        var_is_inf = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_assign_source_2;
        tmp_assign_source_2 = NUITKA_BOOL_TRUE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_name_2 = par_x;
        frame_c43cb04e1649176e0b98c5070fd16d9f->m_frame.f_lineno = 190;
        tmp_operand_name_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[37], tmp_args_element_name_2);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_3 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(var_signbit == NULL);
        var_signbit = tmp_assign_source_3;
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
        nuitka_bool tmp_assign_source_4;
        tmp_assign_source_4 = NUITKA_BOOL_FALSE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_4;
    }
    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_type_1);
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_value_1);
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF(exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_c43cb04e1649176e0b98c5070fd16d9f, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_c43cb04e1649176e0b98c5070fd16d9f, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_TypeError;
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
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_e = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_raise_cause_1;
        tmp_make_exception_arg_1 = mod_consts[38];
        frame_c43cb04e1649176e0b98c5070fd16d9f->m_frame.f_lineno = 192;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        CHECK_OBJECT(var_e);
        tmp_raise_cause_1 = var_e;
        exception_type = tmp_raise_type_1;
        exception_value = NULL;
        Py_INCREF(tmp_raise_cause_1);
        exception_lineno = 193;
        RAISE_EXCEPTION_WITH_CAUSE(&exception_type, &exception_value, &exception_tb, tmp_raise_cause_1);
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 189;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_c43cb04e1649176e0b98c5070fd16d9f->m_frame) frame_c43cb04e1649176e0b98c5070fd16d9f->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooo";
    goto try_except_handler_3;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    {
        bool tmp_condition_result_2;
        nuitka_bool tmp_compexpr_left_2;
        nuitka_bool tmp_compexpr_right_2;
        assert(tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_2 = tmp_try_except_1__unhandled_indicator;
        tmp_compexpr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_2 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_is_inf);
        tmp_args_element_name_3 = var_is_inf;
        CHECK_OBJECT(var_signbit);
        tmp_args_element_name_4 = var_signbit;
        CHECK_OBJECT(par_out);
        tmp_args_element_name_5 = par_out;
        frame_c43cb04e1649176e0b98c5070fd16d9f->m_frame.f_lineno = 195;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_return_value = CALL_METHOD_WITH_ARGS3(tmp_called_instance_3, mod_consts[39], call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_2:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c43cb04e1649176e0b98c5070fd16d9f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c43cb04e1649176e0b98c5070fd16d9f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c43cb04e1649176e0b98c5070fd16d9f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c43cb04e1649176e0b98c5070fd16d9f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c43cb04e1649176e0b98c5070fd16d9f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c43cb04e1649176e0b98c5070fd16d9f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c43cb04e1649176e0b98c5070fd16d9f,
        type_description_1,
        par_x,
        par_out,
        var_is_inf,
        var_signbit,
        var_e
    );


    // Release cached frame if used for exception.
    if (frame_c43cb04e1649176e0b98c5070fd16d9f == cache_frame_c43cb04e1649176e0b98c5070fd16d9f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c43cb04e1649176e0b98c5070fd16d9f);
        cache_frame_c43cb04e1649176e0b98c5070fd16d9f = NULL;
    }

    assertFrameObject(frame_c43cb04e1649176e0b98c5070fd16d9f);

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
    CHECK_OBJECT(var_is_inf);
    Py_DECREF(var_is_inf);
    var_is_inf = NULL;
    CHECK_OBJECT(var_signbit);
    Py_DECREF(var_signbit);
    var_signbit = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_is_inf);
    var_is_inf = NULL;
    Py_XDECREF(var_signbit);
    var_signbit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$ufunclike$$$function_7_isneginf(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_out = python_pars[1];
    PyObject *var_is_inf = NULL;
    PyObject *var_signbit = NULL;
    PyObject *var_e = NULL;
    nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
    struct Nuitka_FrameObject *frame_e8f61b1d8ffaa977c260bdf219a58a57;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e8f61b1d8ffaa977c260bdf219a58a57 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e8f61b1d8ffaa977c260bdf219a58a57)) {
        Py_XDECREF(cache_frame_e8f61b1d8ffaa977c260bdf219a58a57);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e8f61b1d8ffaa977c260bdf219a58a57 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e8f61b1d8ffaa977c260bdf219a58a57 = MAKE_FUNCTION_FRAME(codeobj_e8f61b1d8ffaa977c260bdf219a58a57, module_numpy$lib$ufunclike, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e8f61b1d8ffaa977c260bdf219a58a57->m_type_description == NULL);
    frame_e8f61b1d8ffaa977c260bdf219a58a57 = cache_frame_e8f61b1d8ffaa977c260bdf219a58a57;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e8f61b1d8ffaa977c260bdf219a58a57);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e8f61b1d8ffaa977c260bdf219a58a57) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_name_1 = par_x;
        frame_e8f61b1d8ffaa977c260bdf219a58a57->m_frame.f_lineno = 259;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[36], tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_is_inf == NULL);
        var_is_inf = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_assign_source_2;
        tmp_assign_source_2 = NUITKA_BOOL_TRUE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_name_2 = par_x;
        frame_e8f61b1d8ffaa977c260bdf219a58a57->m_frame.f_lineno = 261;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[37], tmp_args_element_name_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(var_signbit == NULL);
        var_signbit = tmp_assign_source_3;
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
        nuitka_bool tmp_assign_source_4;
        tmp_assign_source_4 = NUITKA_BOOL_FALSE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_4;
    }
    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_type_1);
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_value_1);
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF(exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_e8f61b1d8ffaa977c260bdf219a58a57, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_e8f61b1d8ffaa977c260bdf219a58a57, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_TypeError;
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
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_e = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_raise_cause_1;
        tmp_make_exception_arg_1 = mod_consts[38];
        frame_e8f61b1d8ffaa977c260bdf219a58a57->m_frame.f_lineno = 263;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        CHECK_OBJECT(var_e);
        tmp_raise_cause_1 = var_e;
        exception_type = tmp_raise_type_1;
        exception_value = NULL;
        Py_INCREF(tmp_raise_cause_1);
        exception_lineno = 264;
        RAISE_EXCEPTION_WITH_CAUSE(&exception_type, &exception_value, &exception_tb, tmp_raise_cause_1);
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 260;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e8f61b1d8ffaa977c260bdf219a58a57->m_frame) frame_e8f61b1d8ffaa977c260bdf219a58a57->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooo";
    goto try_except_handler_3;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    {
        bool tmp_condition_result_2;
        nuitka_bool tmp_compexpr_left_2;
        nuitka_bool tmp_compexpr_right_2;
        assert(tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_2 = tmp_try_except_1__unhandled_indicator;
        tmp_compexpr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_2 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_is_inf);
        tmp_args_element_name_3 = var_is_inf;
        CHECK_OBJECT(var_signbit);
        tmp_args_element_name_4 = var_signbit;
        CHECK_OBJECT(par_out);
        tmp_args_element_name_5 = par_out;
        frame_e8f61b1d8ffaa977c260bdf219a58a57->m_frame.f_lineno = 266;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_return_value = CALL_METHOD_WITH_ARGS3(tmp_called_instance_3, mod_consts[39], call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_2:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e8f61b1d8ffaa977c260bdf219a58a57);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e8f61b1d8ffaa977c260bdf219a58a57);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e8f61b1d8ffaa977c260bdf219a58a57);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e8f61b1d8ffaa977c260bdf219a58a57, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e8f61b1d8ffaa977c260bdf219a58a57->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e8f61b1d8ffaa977c260bdf219a58a57, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e8f61b1d8ffaa977c260bdf219a58a57,
        type_description_1,
        par_x,
        par_out,
        var_is_inf,
        var_signbit,
        var_e
    );


    // Release cached frame if used for exception.
    if (frame_e8f61b1d8ffaa977c260bdf219a58a57 == cache_frame_e8f61b1d8ffaa977c260bdf219a58a57) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e8f61b1d8ffaa977c260bdf219a58a57);
        cache_frame_e8f61b1d8ffaa977c260bdf219a58a57 = NULL;
    }

    assertFrameObject(frame_e8f61b1d8ffaa977c260bdf219a58a57);

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
    CHECK_OBJECT(var_is_inf);
    Py_DECREF(var_is_inf);
    var_is_inf = NULL;
    CHECK_OBJECT(var_signbit);
    Py_DECREF(var_signbit);
    var_signbit = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_is_inf);
    var_is_inf = NULL;
    Py_XDECREF(var_signbit);
    var_signbit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_numpy$lib$ufunclike$$$function_1__deprecate_out_named_y() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$ufunclike$$$function_1__deprecate_out_named_y,
        mod_consts[24],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9ea66e496cbcc1948651586273013745,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$ufunclike,
        mod_consts[6],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$ufunclike$$$function_1__deprecate_out_named_y$$$function_1_func(PyObject *defaults, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$ufunclike$$$function_1__deprecate_out_named_y$$$function_1_func,
        mod_consts[4],
#if PYTHON_VERSION >= 300
        mod_consts[5],
#endif
        codeobj_f4516a618794b95fd92ada5b2b097695,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$ufunclike,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$ufunclike$$$function_2__fix_out_named_y() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$ufunclike$$$function_2__fix_out_named_y,
        mod_consts[23],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1bc840984b4ae3256d0a4e918ad20b20,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$ufunclike,
        mod_consts[21],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$ufunclike$$$function_2__fix_out_named_y$$$function_1_func(PyObject *defaults, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$ufunclike$$$function_2__fix_out_named_y$$$function_1_func,
        mod_consts[4],
#if PYTHON_VERSION >= 300
        mod_consts[20],
#endif
        codeobj_d7a004a7826312de6cdaf3baa9c2acac,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$ufunclike,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$ufunclike$$$function_3__fix_and_maybe_deprecate_out_named_y() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$ufunclike$$$function_3__fix_and_maybe_deprecate_out_named_y,
        mod_consts[58],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0b7e6b841a9523b42bc403087c440315,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$ufunclike,
        mod_consts[25],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$ufunclike$$$function_4__dispatcher(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$ufunclike$$$function_4__dispatcher,
        mod_consts[59],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2e17d328a5c6c88c81b0803359b81940,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$ufunclike,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$ufunclike$$$function_5_fix(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$ufunclike$$$function_5_fix,
        mod_consts[61],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6e70b6b6f6c6cafcc58bbc59a329e515,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$ufunclike,
        mod_consts[35],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$ufunclike$$$function_6_isposinf(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$ufunclike$$$function_6_isposinf,
        mod_consts[62],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c43cb04e1649176e0b98c5070fd16d9f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$ufunclike,
        mod_consts[40],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$ufunclike$$$function_7_isneginf(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$ufunclike$$$function_7_isneginf,
        mod_consts[63],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e8f61b1d8ffaa977c260bdf219a58a57,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$ufunclike,
        mod_consts[41],
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

function_impl_code functable_numpy$lib$ufunclike[] = {
    impl_numpy$lib$ufunclike$$$function_1__deprecate_out_named_y$$$function_1_func,
    impl_numpy$lib$ufunclike$$$function_2__fix_out_named_y$$$function_1_func,
    impl_numpy$lib$ufunclike$$$function_1__deprecate_out_named_y,
    impl_numpy$lib$ufunclike$$$function_2__fix_out_named_y,
    impl_numpy$lib$ufunclike$$$function_3__fix_and_maybe_deprecate_out_named_y,
    impl_numpy$lib$ufunclike$$$function_4__dispatcher,
    impl_numpy$lib$ufunclike$$$function_5_fix,
    impl_numpy$lib$ufunclike$$$function_6_isposinf,
    impl_numpy$lib$ufunclike$$$function_7_isneginf,
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

    function_impl_code *current = functable_numpy$lib$ufunclike;
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

    if (offset > sizeof(functable_numpy$lib$ufunclike) || offset < 0) {
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
        functable_numpy$lib$ufunclike[offset],
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
        module_numpy$lib$ufunclike,
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
NUITKA_MAY_BE_UNUSED static char const *module_full_name = "numpy.lib.ufunclike";

// Internal entry point for module code.
PyObject *modulecode_numpy$lib$ufunclike(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_numpy$lib$ufunclike = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
#ifdef _NUITKA_TRACE
        PRINT_STRING("numpy.lib.ufunclike: Skipping module init, already done.\n");
#endif

        return module_numpy$lib$ufunclike;
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
    PRINT_STRING("numpy.lib.ufunclike: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("numpy.lib.ufunclike: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("numpy.lib.ufunclike: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initnumpy$lib$ufunclike\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_numpy$lib$ufunclike = MODULE_DICT(module_numpy$lib$ufunclike);

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
        moduledict_numpy$lib$ufunclike,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_numpy$lib$ufunclike,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_numpy$lib$ufunclike,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$ufunclike,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$ufunclike,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_numpy$lib$ufunclike);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_numpy$lib$ufunclike);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT(spec_value);

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_e42a9f5c17c8a833d7e94604cfbf6b8f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[42];
        UPDATE_STRING_DICT0(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_e42a9f5c17c8a833d7e94604cfbf6b8f = MAKE_MODULE_FRAME(codeobj_e42a9f5c17c8a833d7e94604cfbf6b8f, module_numpy$lib$ufunclike);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_e42a9f5c17c8a833d7e94604cfbf6b8f);
    assert(Py_REFCNT(frame_e42a9f5c17c8a833d7e94604cfbf6b8f) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = mod_consts[44];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[47], tmp_assattr_name_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[48], tmp_assattr_name_2);
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
        UPDATE_STRING_DICT0(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = LIST_COPY(mod_consts[50]);
        UPDATE_STRING_DICT1(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[52];
        tmp_globals_name_1 = (PyObject *)moduledict_numpy$lib$ufunclike;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = mod_consts[32];
        frame_e42a9f5c17c8a833d7e94604cfbf6b8f->m_frame.f_lineno = 8;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_import_name_from_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_numpy$lib$ufunclike,
                mod_consts[53],
                Py_None
            );
        } else {
            tmp_import_name_from_1 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[53]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_numpy$lib$ufunclike,
                mod_consts[54],
                Py_None
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[54]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[55];
        tmp_globals_name_2 = (PyObject *)moduledict_numpy$lib$ufunclike;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = mod_consts[56];
        tmp_level_name_2 = mod_consts[32];
        frame_e42a9f5c17c8a833d7e94604cfbf6b8f->m_frame.f_lineno = 9;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_numpy$lib$ufunclike,
                mod_consts[57],
                mod_consts[32]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[57]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_numpy$lib$ufunclike,
                mod_consts[22],
                mod_consts[32]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[22]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_8);
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
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = mod_consts[14];
        tmp_globals_name_3 = (PyObject *)moduledict_numpy$lib$ufunclike;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = mod_consts[32];
        frame_e42a9f5c17c8a833d7e94604cfbf6b8f->m_frame.f_lineno = 12;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = mod_consts[0];
        tmp_globals_name_4 = (PyObject *)moduledict_numpy$lib$ufunclike;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_4 = mod_consts[32];
        frame_e42a9f5c17c8a833d7e94604cfbf6b8f->m_frame.f_lineno = 13;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;


        tmp_assign_source_11 = MAKE_FUNCTION_numpy$lib$ufunclike$$$function_1__deprecate_out_named_y();

        UPDATE_STRING_DICT1(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;


        tmp_assign_source_12 = MAKE_FUNCTION_numpy$lib$ufunclike$$$function_2__fix_out_named_y();

        UPDATE_STRING_DICT1(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;


        tmp_assign_source_13 = MAKE_FUNCTION_numpy$lib$ufunclike$$$function_3__fix_and_maybe_deprecate_out_named_y();

        UPDATE_STRING_DICT1(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_defaults_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        assert(!(tmp_called_name_1 == NULL));
        tmp_defaults_1 = mod_consts[3];
        Py_INCREF(tmp_defaults_1);


        tmp_args_element_name_1 = MAKE_FUNCTION_numpy$lib$ufunclike$$$function_4__dispatcher(tmp_defaults_1);

        frame_e42a9f5c17c8a833d7e94604cfbf6b8f->m_frame.f_lineno = 68;
        tmp_assign_source_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_name_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_defaults_2;
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_kw_name_1 = PyDict_Copy(mod_consts[60]);
        frame_e42a9f5c17c8a833d7e94604cfbf6b8f->m_frame.f_lineno = 73;
        tmp_called_name_2 = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_called_name_4 == NULL)) {
            tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        tmp_defaults_2 = mod_consts[3];
        Py_INCREF(tmp_defaults_2);


        tmp_args_element_name_3 = MAKE_FUNCTION_numpy$lib$ufunclike$$$function_5_fix(tmp_defaults_2);

        frame_e42a9f5c17c8a833d7e94604cfbf6b8f->m_frame.f_lineno = 74;
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_3);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        frame_e42a9f5c17c8a833d7e94604cfbf6b8f->m_frame.f_lineno = 73;
        tmp_assign_source_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_name_5;
        PyObject *tmp_called_name_6;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_called_name_7;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_defaults_3;
        tmp_called_name_6 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_name_6 == NULL)) {
            tmp_called_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        tmp_args_name_2 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_2, 0, tmp_tuple_element_2);
        tmp_kw_name_2 = PyDict_Copy(mod_consts[60]);
        frame_e42a9f5c17c8a833d7e94604cfbf6b8f->m_frame.f_lineno = 127;
        tmp_called_name_5 = CALL_FUNCTION(tmp_called_name_6, tmp_args_name_2, tmp_kw_name_2);
        Py_DECREF(tmp_args_name_2);
        Py_DECREF(tmp_kw_name_2);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        tmp_called_name_7 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_called_name_7 == NULL)) {
            tmp_called_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);

            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_defaults_3 = mod_consts[3];
        Py_INCREF(tmp_defaults_3);


        tmp_args_element_name_5 = MAKE_FUNCTION_numpy$lib$ufunclike$$$function_6_isposinf(tmp_defaults_3);

        frame_e42a9f5c17c8a833d7e94604cfbf6b8f->m_frame.f_lineno = 128;
        tmp_args_element_name_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_5);
        Py_DECREF(tmp_args_element_name_5);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);

            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        frame_e42a9f5c17c8a833d7e94604cfbf6b8f->m_frame.f_lineno = 127;
        tmp_assign_source_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_4);
        Py_DECREF(tmp_called_name_5);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_name_8;
        PyObject *tmp_called_name_9;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kw_name_3;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_called_name_10;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_defaults_4;
        tmp_called_name_9 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_name_9 == NULL)) {
            tmp_called_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_args_name_3 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_3, 0, tmp_tuple_element_3);
        tmp_kw_name_3 = PyDict_Copy(mod_consts[60]);
        frame_e42a9f5c17c8a833d7e94604cfbf6b8f->m_frame.f_lineno = 198;
        tmp_called_name_8 = CALL_FUNCTION(tmp_called_name_9, tmp_args_name_3, tmp_kw_name_3);
        Py_DECREF(tmp_args_name_3);
        Py_DECREF(tmp_kw_name_3);
        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_called_name_10 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_called_name_10 == NULL)) {
            tmp_called_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_called_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_8);

            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        tmp_defaults_4 = mod_consts[3];
        Py_INCREF(tmp_defaults_4);


        tmp_args_element_name_7 = MAKE_FUNCTION_numpy$lib$ufunclike$$$function_7_isneginf(tmp_defaults_4);

        frame_e42a9f5c17c8a833d7e94604cfbf6b8f->m_frame.f_lineno = 199;
        tmp_args_element_name_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_10, tmp_args_element_name_7);
        Py_DECREF(tmp_args_element_name_7);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_8);

            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        frame_e42a9f5c17c8a833d7e94604cfbf6b8f->m_frame.f_lineno = 198;
        tmp_assign_source_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_6);
        Py_DECREF(tmp_called_name_8);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$lib$ufunclike, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_17);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e42a9f5c17c8a833d7e94604cfbf6b8f);
#endif
    popFrameStack();

    assertFrameObject(frame_e42a9f5c17c8a833d7e94604cfbf6b8f);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e42a9f5c17c8a833d7e94604cfbf6b8f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e42a9f5c17c8a833d7e94604cfbf6b8f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e42a9f5c17c8a833d7e94604cfbf6b8f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e42a9f5c17c8a833d7e94604cfbf6b8f, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    return module_numpy$lib$ufunclike;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

