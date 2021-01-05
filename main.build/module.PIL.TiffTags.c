/* Generated code for Python module 'PIL.TiffTags'
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

/* The "module_PIL$TiffTags" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_PIL$TiffTags;
PyDictObject *moduledict_PIL$TiffTags;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[299];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    loadConstantsBlob(&mod_consts[0], "PIL.TiffTags", 299);

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
void checkModuleConstants_PIL$TiffTags(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "PIL.TiffTags", 299);
}
#endif

// The module code objects.
static PyCodeObject *codeobj_b7b7a7ecf313b8a2f655adea8c5eaaac;
static PyCodeObject *codeobj_c7e4c499b1826a2f79782258f19dd4c1;
static PyCodeObject *codeobj_b5aa93c5db066818f0b6b979218ed57b;
static PyCodeObject *codeobj_a77d4734ba5a3637bc8b5f32f47ca651;
static PyCodeObject *codeobj_9429f741d51595719a2da9eb27877462;
static PyCodeObject *codeobj_5e3ef28a72e88fbff1ceab95974654ff;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[17]; CHECK_OBJECT(module_filename_obj);
    codeobj_b7b7a7ecf313b8a2f655adea8c5eaaac = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[293], NULL, NULL, 0, 0, 0);
    codeobj_c7e4c499b1826a2f79782258f19dd4c1 = MAKE_CODEOBJECT(module_filename_obj, 23, CO_NOFREE, mod_consts[6], mod_consts[294], NULL, 0, 0, 0);
    codeobj_b5aa93c5db066818f0b6b979218ed57b = MAKE_CODEOBJECT(module_filename_obj, 26, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[1], mod_consts[295], mod_consts[294], 6, 0, 0);
    codeobj_a77d4734ba5a3637bc8b5f32f47ca651 = MAKE_CODEOBJECT(module_filename_obj, 360, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[282], mod_consts[296], NULL, 0, 0, 0);
    codeobj_9429f741d51595719a2da9eb27877462 = MAKE_CODEOBJECT(module_filename_obj, 29, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[39], mod_consts[297], NULL, 2, 0, 0);
    codeobj_5e3ef28a72e88fbff1ceab95974654ff = MAKE_CODEOBJECT(module_filename_obj, 36, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[42], mod_consts[298], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function_9__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function_11_complex_call_helper_pos_star_list(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_PIL$TiffTags$$$function_1___new__(PyObject *defaults, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_PIL$TiffTags$$$function_2_cvt_enum();


static PyObject *MAKE_FUNCTION_PIL$TiffTags$$$function_3_lookup();


static PyObject *MAKE_FUNCTION_PIL$TiffTags$$$function_4__populate();


// The module function definitions.
static PyObject *impl_PIL$TiffTags$$$function_1___new__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_value = python_pars[1];
    PyObject *par_name = python_pars[2];
    PyObject *par_type = python_pars[3];
    PyObject *par_length = python_pars[4];
    PyObject *par_enum = python_pars[5];
    struct Nuitka_FrameObject *frame_b5aa93c5db066818f0b6b979218ed57b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b5aa93c5db066818f0b6b979218ed57b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b5aa93c5db066818f0b6b979218ed57b)) {
        Py_XDECREF(cache_frame_b5aa93c5db066818f0b6b979218ed57b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b5aa93c5db066818f0b6b979218ed57b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b5aa93c5db066818f0b6b979218ed57b = MAKE_FUNCTION_FRAME(codeobj_b5aa93c5db066818f0b6b979218ed57b, module_PIL$TiffTags, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b5aa93c5db066818f0b6b979218ed57b->m_type_description == NULL);
    frame_b5aa93c5db066818f0b6b979218ed57b = cache_frame_b5aa93c5db066818f0b6b979218ed57b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b5aa93c5db066818f0b6b979218ed57b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b5aa93c5db066818f0b6b979218ed57b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 27;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_cls);
        tmp_object_name_1 = par_cls;
        tmp_expression_name_1 = BUILTIN_SUPER(tmp_type_name_1, tmp_object_name_1);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[1]);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_args_element_name_1 = par_cls;
        CHECK_OBJECT(par_value);
        tmp_args_element_name_2 = par_value;
        CHECK_OBJECT(par_name);
        tmp_args_element_name_3 = par_name;
        CHECK_OBJECT(par_type);
        tmp_args_element_name_4 = par_type;
        CHECK_OBJECT(par_length);
        tmp_args_element_name_5 = par_length;
        CHECK_OBJECT(par_enum);
        tmp_or_left_value_1 = par_enum;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 27;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_or_right_value_1 = PyDict_New();
        tmp_args_element_name_6 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        Py_INCREF(tmp_or_left_value_1);
        tmp_args_element_name_6 = tmp_or_left_value_1;
        or_end_1:;
        frame_b5aa93c5db066818f0b6b979218ed57b->m_frame.f_lineno = 27;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS6(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b5aa93c5db066818f0b6b979218ed57b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b5aa93c5db066818f0b6b979218ed57b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b5aa93c5db066818f0b6b979218ed57b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b5aa93c5db066818f0b6b979218ed57b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b5aa93c5db066818f0b6b979218ed57b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b5aa93c5db066818f0b6b979218ed57b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b5aa93c5db066818f0b6b979218ed57b,
        type_description_1,
        par_cls,
        par_value,
        par_name,
        par_type,
        par_length,
        par_enum,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_b5aa93c5db066818f0b6b979218ed57b == cache_frame_b5aa93c5db066818f0b6b979218ed57b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b5aa93c5db066818f0b6b979218ed57b);
        cache_frame_b5aa93c5db066818f0b6b979218ed57b = NULL;
    }

    assertFrameObject(frame_b5aa93c5db066818f0b6b979218ed57b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_type);
    Py_DECREF(par_type);
    CHECK_OBJECT(par_length);
    Py_DECREF(par_length);
    CHECK_OBJECT(par_enum);
    Py_DECREF(par_enum);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_type);
    Py_DECREF(par_type);
    CHECK_OBJECT(par_length);
    Py_DECREF(par_length);
    CHECK_OBJECT(par_enum);
    Py_DECREF(par_enum);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PIL$TiffTags$$$function_2_cvt_enum(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_9429f741d51595719a2da9eb27877462;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9429f741d51595719a2da9eb27877462 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9429f741d51595719a2da9eb27877462)) {
        Py_XDECREF(cache_frame_9429f741d51595719a2da9eb27877462);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9429f741d51595719a2da9eb27877462 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9429f741d51595719a2da9eb27877462 = MAKE_FUNCTION_FRAME(codeobj_9429f741d51595719a2da9eb27877462, module_PIL$TiffTags, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9429f741d51595719a2da9eb27877462->m_type_description == NULL);
    frame_9429f741d51595719a2da9eb27877462 = cache_frame_9429f741d51595719a2da9eb27877462;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9429f741d51595719a2da9eb27877462);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9429f741d51595719a2da9eb27877462) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[2]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 33;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 33;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[2]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_args_element_name_1 = par_value;
        CHECK_OBJECT(par_value);
        tmp_args_element_name_2 = par_value;
        frame_9429f741d51595719a2da9eb27877462->m_frame.f_lineno = 33;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(tmp_called_instance_1, mod_consts[4], call_args);
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_value);
        tmp_return_value = par_value;
        Py_INCREF(tmp_return_value);
        condexpr_end_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9429f741d51595719a2da9eb27877462);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9429f741d51595719a2da9eb27877462);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9429f741d51595719a2da9eb27877462);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9429f741d51595719a2da9eb27877462, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9429f741d51595719a2da9eb27877462->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9429f741d51595719a2da9eb27877462, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9429f741d51595719a2da9eb27877462,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_9429f741d51595719a2da9eb27877462 == cache_frame_9429f741d51595719a2da9eb27877462) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_9429f741d51595719a2da9eb27877462);
        cache_frame_9429f741d51595719a2da9eb27877462 = NULL;
    }

    assertFrameObject(frame_9429f741d51595719a2da9eb27877462);

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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PIL$TiffTags$$$function_3_lookup(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_tag = python_pars[0];
    struct Nuitka_FrameObject *frame_5e3ef28a72e88fbff1ceab95974654ff;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5e3ef28a72e88fbff1ceab95974654ff = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5e3ef28a72e88fbff1ceab95974654ff)) {
        Py_XDECREF(cache_frame_5e3ef28a72e88fbff1ceab95974654ff);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5e3ef28a72e88fbff1ceab95974654ff == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5e3ef28a72e88fbff1ceab95974654ff = MAKE_FUNCTION_FRAME(codeobj_5e3ef28a72e88fbff1ceab95974654ff, module_PIL$TiffTags, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5e3ef28a72e88fbff1ceab95974654ff->m_type_description == NULL);
    frame_5e3ef28a72e88fbff1ceab95974654ff = cache_frame_5e3ef28a72e88fbff1ceab95974654ff;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5e3ef28a72e88fbff1ceab95974654ff);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5e3ef28a72e88fbff1ceab95974654ff) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[4]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_tag);
        tmp_args_element_name_1 = par_tag;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 45;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_tag);
        tmp_args_element_name_3 = par_tag;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 45;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_tag);
        tmp_args_element_name_5 = par_tag;
        tmp_args_element_name_6 = mod_consts[8];
        frame_5e3ef28a72e88fbff1ceab95974654ff->m_frame.f_lineno = 45;
        {
            PyObject *call_args[] = {tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_args_element_name_4 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_1, mod_consts[4], call_args);
        }

        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 45;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_5e3ef28a72e88fbff1ceab95974654ff->m_frame.f_lineno = 45;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_args_element_name_4);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 45;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_5e3ef28a72e88fbff1ceab95974654ff->m_frame.f_lineno = 45;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5e3ef28a72e88fbff1ceab95974654ff);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5e3ef28a72e88fbff1ceab95974654ff);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5e3ef28a72e88fbff1ceab95974654ff);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5e3ef28a72e88fbff1ceab95974654ff, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5e3ef28a72e88fbff1ceab95974654ff->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5e3ef28a72e88fbff1ceab95974654ff, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5e3ef28a72e88fbff1ceab95974654ff,
        type_description_1,
        par_tag
    );


    // Release cached frame if used for exception.
    if (frame_5e3ef28a72e88fbff1ceab95974654ff == cache_frame_5e3ef28a72e88fbff1ceab95974654ff) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_5e3ef28a72e88fbff1ceab95974654ff);
        cache_frame_5e3ef28a72e88fbff1ceab95974654ff = NULL;
    }

    assertFrameObject(frame_5e3ef28a72e88fbff1ceab95974654ff);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_tag);
    Py_DECREF(par_tag);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_tag);
    Py_DECREF(par_tag);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PIL$TiffTags$$$function_4__populate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_k = NULL;
    PyObject *var_v = NULL;
    PyObject *var_sk = NULL;
    PyObject *var_sv = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_a77d4734ba5a3637bc8b5f32f47ca651;
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
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
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
    static struct Nuitka_FrameObject *cache_frame_a77d4734ba5a3637bc8b5f32f47ca651 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a77d4734ba5a3637bc8b5f32f47ca651)) {
        Py_XDECREF(cache_frame_a77d4734ba5a3637bc8b5f32f47ca651);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a77d4734ba5a3637bc8b5f32f47ca651 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a77d4734ba5a3637bc8b5f32f47ca651 = MAKE_FUNCTION_FRAME(codeobj_a77d4734ba5a3637bc8b5f32f47ca651, module_PIL$TiffTags, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a77d4734ba5a3637bc8b5f32f47ca651->m_type_description == NULL);
    frame_a77d4734ba5a3637bc8b5f32f47ca651 = cache_frame_a77d4734ba5a3637bc8b5f32f47ca651;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a77d4734ba5a3637bc8b5f32f47ca651);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a77d4734ba5a3637bc8b5f32f47ca651) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_a77d4734ba5a3637bc8b5f32f47ca651->m_frame.f_lineno = 361;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[10]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
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
                exception_lineno = 361;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooo";
            exception_lineno = 361;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooo";
            exception_lineno = 361;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
            Py_XDECREF(old);
        }

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

                    type_description_1 = "oooo";
                    exception_lineno = 361;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[11];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooo";
            exception_lineno = 361;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
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

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_k;
            var_k = tmp_assign_source_6;
            Py_INCREF(var_k);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_v;
            var_v = tmp_assign_source_7;
            Py_INCREF(var_v);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_v);
        tmp_expression_name_1 = var_v;
        tmp_subscript_name_1 = mod_consts[12];
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 363;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_k);
        tmp_ass_subscript_1 = var_k;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_tmp_condition_result_1_object_1;
        CHECK_OBJECT(var_v);
        tmp_len_arg_1 = var_v;
        tmp_compexpr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_compexpr_right_1 = mod_consts[13];
        tmp_tmp_condition_result_1_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        assert(!(tmp_tmp_condition_result_1_object_1 == NULL));
        tmp_condition_result_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_1_object_1) == 1;
        Py_DECREF(tmp_tmp_condition_result_1_object_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT(var_v);
        tmp_expression_name_2 = var_v;
        tmp_subscript_name_2 = mod_consts[14];
        tmp_called_instance_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_2, tmp_subscript_name_2, 3);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        frame_a77d4734ba5a3637bc8b5f32f47ca651->m_frame.f_lineno = 365;
        tmp_iter_arg_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[10]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_8 = MAKE_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_9 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooo";
                exception_lineno = 365;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_4;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_iter_arg_4 = tmp_for_loop_2__iter_value;
        tmp_assign_source_10 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "oooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
        if (tmp_assign_source_11 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooo";
            exception_lineno = 365;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
        if (tmp_assign_source_12 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooo";
            exception_lineno = 365;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooo";
                    exception_lineno = 365;
                    goto try_except_handler_7;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[11];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooo";
            exception_lineno = 365;
            goto try_except_handler_7;
        }
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

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_6;
    // End of try:
    try_end_3:;
    goto try_end_4;
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

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_13 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_sk;
            var_sk = tmp_assign_source_13;
            Py_INCREF(var_sk);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_14 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_sv;
            var_sv = tmp_assign_source_14;
            Py_INCREF(var_sv);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_sk);
        tmp_ass_subvalue_2 = var_sk;
        tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_ass_subscribed_2 == NULL)) {
            tmp_ass_subscribed_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_ass_subscribed_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "oooo";
            goto try_except_handler_5;
        }
        if (var_k == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 366;
            type_description_1 = "oooo";
            goto try_except_handler_5;
        }

        tmp_tuple_element_1 = var_k;
        tmp_ass_subscript_2 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_ass_subscript_2, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_sv);
        tmp_tuple_element_1 = var_sv;
        PyTuple_SET_ITEM0(tmp_ass_subscript_2, 1, tmp_tuple_element_1);
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscript_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "oooo";
            goto try_except_handler_5;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 365;
        type_description_1 = "oooo";
        goto try_except_handler_5;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_2;
    // End of try:
    try_end_5:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    branch_no_1:;
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        if (var_k == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 368;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_tuple_element_2 = var_k;
        tmp_dircall_arg2_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_v);
        tmp_dircall_arg3_1 = var_v;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_ass_subvalue_3 = impl___main__$$$function_11_complex_call_helper_pos_star_list(dir_call_args);
        }
        if (tmp_ass_subvalue_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_ass_subscribed_3 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_ass_subscribed_3 == NULL)) {
            tmp_ass_subscribed_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_ass_subscribed_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_3);

            exception_lineno = 368;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        if (var_k == NULL) {
            Py_DECREF(tmp_ass_subvalue_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 368;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_ass_subscript_3 = var_k;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 361;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a77d4734ba5a3637bc8b5f32f47ca651);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a77d4734ba5a3637bc8b5f32f47ca651);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a77d4734ba5a3637bc8b5f32f47ca651, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a77d4734ba5a3637bc8b5f32f47ca651->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a77d4734ba5a3637bc8b5f32f47ca651, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a77d4734ba5a3637bc8b5f32f47ca651,
        type_description_1,
        var_k,
        var_v,
        var_sk,
        var_sv
    );


    // Release cached frame if used for exception.
    if (frame_a77d4734ba5a3637bc8b5f32f47ca651 == cache_frame_a77d4734ba5a3637bc8b5f32f47ca651) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a77d4734ba5a3637bc8b5f32f47ca651);
        cache_frame_a77d4734ba5a3637bc8b5f32f47ca651 = NULL;
    }

    assertFrameObject(frame_a77d4734ba5a3637bc8b5f32f47ca651);

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
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
    Py_XDECREF(var_sk);
    var_sk = NULL;
    Py_XDECREF(var_sv);
    var_sv = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
    Py_XDECREF(var_sk);
    var_sk = NULL;
    Py_XDECREF(var_sv);
    var_sv = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

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



static PyObject *MAKE_FUNCTION_PIL$TiffTags$$$function_1___new__(PyObject *defaults, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$TiffTags$$$function_1___new__,
        mod_consts[1],
#if PYTHON_VERSION >= 300
        mod_consts[38],
#endif
        codeobj_b5aa93c5db066818f0b6b979218ed57b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$TiffTags,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$TiffTags$$$function_2_cvt_enum() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$TiffTags$$$function_2_cvt_enum,
        mod_consts[39],
#if PYTHON_VERSION >= 300
        mod_consts[40],
#endif
        codeobj_9429f741d51595719a2da9eb27877462,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$TiffTags,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$TiffTags$$$function_3_lookup() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$TiffTags$$$function_3_lookup,
        mod_consts[42],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5e3ef28a72e88fbff1ceab95974654ff,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$TiffTags,
        mod_consts[9],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$TiffTags$$$function_4__populate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$TiffTags$$$function_4__populate,
        mod_consts[282],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a77d4734ba5a3637bc8b5f32f47ca651,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$TiffTags,
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

function_impl_code functable_PIL$TiffTags[] = {
    impl_PIL$TiffTags$$$function_1___new__,
    impl_PIL$TiffTags$$$function_2_cvt_enum,
    impl_PIL$TiffTags$$$function_3_lookup,
    impl_PIL$TiffTags$$$function_4__populate,
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

    function_impl_code *current = functable_PIL$TiffTags;
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

    if (offset > sizeof(functable_PIL$TiffTags) || offset < 0) {
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
        functable_PIL$TiffTags[offset],
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
        module_PIL$TiffTags,
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
NUITKA_MAY_BE_UNUSED static char const *module_full_name = "PIL.TiffTags";

// Internal entry point for module code.
PyObject *modulecode_PIL$TiffTags(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_PIL$TiffTags = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
#ifdef _NUITKA_TRACE
        PRINT_STRING("PIL.TiffTags: Skipping module init, already done.\n");
#endif

        return module_PIL$TiffTags;
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
    PRINT_STRING("PIL.TiffTags: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("PIL.TiffTags: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("PIL.TiffTags: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initPIL$TiffTags\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_PIL$TiffTags = MODULE_DICT(module_PIL$TiffTags);

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
        moduledict_PIL$TiffTags,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_PIL$TiffTags,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_PIL$TiffTags,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$TiffTags,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$TiffTags,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_PIL$TiffTags);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_PIL$TiffTags, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_PIL$TiffTags, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_PIL$TiffTags, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_PIL$TiffTags);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT(spec_value);

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_PIL$TiffTags, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_CellObject *outline_0_var___class__ = Nuitka_Cell_Empty();
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_b7b7a7ecf313b8a2f655adea8c5eaaac;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_PIL$TiffTags$$$class_1_TagInfo_23 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_c7e4c499b1826a2f79782258f19dd4c1_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_c7e4c499b1826a2f79782258f19dd4c1_2 = NULL;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_b7b7a7ecf313b8a2f655adea8c5eaaac = MAKE_MODULE_FRAME(codeobj_b7b7a7ecf313b8a2f655adea8c5eaaac, module_PIL$TiffTags);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_b7b7a7ecf313b8a2f655adea8c5eaaac);
    assert(Py_REFCNT(frame_b7b7a7ecf313b8a2f655adea8c5eaaac) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = mod_consts[17];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[20], tmp_assattr_name_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[21], tmp_assattr_name_2);
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
        UPDATE_STRING_DICT0(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[23];
        tmp_globals_name_1 = (PyObject *)moduledict_PIL$TiffTags;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = mod_consts[24];
        tmp_level_name_1 = mod_consts[12];
        frame_b7b7a7ecf313b8a2f655adea8c5eaaac->m_frame.f_lineno = 20;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_PIL$TiffTags,
                mod_consts[25],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[25]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_4);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        assert(!(tmp_called_name_1 == NULL));
        frame_b7b7a7ecf313b8a2f655adea8c5eaaac->m_frame.f_lineno = 23;
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, &PyTuple_GET_ITEM(mod_consts[26], 0));

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        tmp_assign_source_5 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_assign_source_5, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_6 = impl___main__$$$function_9__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_dict_name_2;
        PyObject *tmp_key_name_2;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = mod_consts[27];
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
        tmp_key_name_2 = mod_consts[27];
        tmp_metaclass_name_1 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_2, tmp_key_name_2);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_name_1 = tmp_class_creation_1__bases;
        tmp_subscript_name_1 = mod_consts[12];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_1);
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_8 = SELECT_METACLASS(tmp_metaclass_name_1, tmp_bases_name_1);
        Py_DECREF(tmp_metaclass_name_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_8;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_name_3;
        tmp_key_name_3 = mod_consts[27];
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
    tmp_dictdel_key = mod_consts[27];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 23;

        goto try_except_handler_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_2, mod_consts[28]);
        tmp_condition_result_4 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_3 = tmp_class_creation_1__metaclass;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[28]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        tmp_tuple_element_2 = mod_consts[6];
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
        frame_b7b7a7ecf313b8a2f655adea8c5eaaac->m_frame.f_lineno = 23;
        tmp_assign_source_9 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_name_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_9;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_expression_name_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_name_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_4, mod_consts[29]);
        tmp_operand_name_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_1;
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
        tmp_left_name_1 = mod_consts[30];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[31];
        tmp_getattr_default_1 = mod_consts[32];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        tmp_right_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_5;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_name_5 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_name_5 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[31]);
            Py_DECREF(tmp_expression_name_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_3);
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


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 23;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_10;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_11;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_PIL$TiffTags$$$class_1_TagInfo_23 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[33];
        tmp_res = PyObject_SetItem(locals_PIL$TiffTags$$$class_1_TagInfo_23, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[6];
        tmp_res = PyObject_SetItem(locals_PIL$TiffTags$$$class_1_TagInfo_23, mod_consts[35], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_3;
        }
        if (isFrameUnusable(cache_frame_c7e4c499b1826a2f79782258f19dd4c1_2)) {
            Py_XDECREF(cache_frame_c7e4c499b1826a2f79782258f19dd4c1_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_c7e4c499b1826a2f79782258f19dd4c1_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_c7e4c499b1826a2f79782258f19dd4c1_2 = MAKE_FUNCTION_FRAME(codeobj_c7e4c499b1826a2f79782258f19dd4c1, module_PIL$TiffTags, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_c7e4c499b1826a2f79782258f19dd4c1_2->m_type_description == NULL);
        frame_c7e4c499b1826a2f79782258f19dd4c1_2 = cache_frame_c7e4c499b1826a2f79782258f19dd4c1_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_c7e4c499b1826a2f79782258f19dd4c1_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_c7e4c499b1826a2f79782258f19dd4c1_2) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = PyList_New(0);
        tmp_res = PyObject_SetItem(locals_PIL$TiffTags$$$class_1_TagInfo_23, mod_consts[36], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_1;
            struct Nuitka_CellObject *tmp_closure_1[1];
            tmp_defaults_1 = mod_consts[37];
            Py_INCREF(tmp_defaults_1);

            tmp_closure_1[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_PIL$TiffTags$$$function_1___new__(tmp_defaults_1, tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_PIL$TiffTags$$$class_1_TagInfo_23, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_PIL$TiffTags$$$function_2_cvt_enum();

        tmp_res = PyObject_SetItem(locals_PIL$TiffTags$$$class_1_TagInfo_23, mod_consts[39], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c7e4c499b1826a2f79782258f19dd4c1_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c7e4c499b1826a2f79782258f19dd4c1_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c7e4c499b1826a2f79782258f19dd4c1_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c7e4c499b1826a2f79782258f19dd4c1_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c7e4c499b1826a2f79782258f19dd4c1_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c7e4c499b1826a2f79782258f19dd4c1_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_c7e4c499b1826a2f79782258f19dd4c1_2 == cache_frame_c7e4c499b1826a2f79782258f19dd4c1_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_c7e4c499b1826a2f79782258f19dd4c1_2);
            cache_frame_c7e4c499b1826a2f79782258f19dd4c1_2 = NULL;
        }

        assertFrameObject(frame_c7e4c499b1826a2f79782258f19dd4c1_2);

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


                exception_lineno = 23;

                goto try_except_handler_3;
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
        tmp_res = PyObject_SetItem(locals_PIL$TiffTags$$$class_1_TagInfo_23, mod_consts[41], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_3;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_3 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[6];
            tmp_args_name_2 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_name_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_PIL$TiffTags$$$class_1_TagInfo_23;
            PyTuple_SET_ITEM0(tmp_args_name_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_b7b7a7ecf313b8a2f655adea8c5eaaac->m_frame.f_lineno = 23;
            tmp_assign_source_12 = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2);
            Py_DECREF(tmp_args_name_2);
            if (tmp_assign_source_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto try_except_handler_3;
            }
            {
                PyObject *old = Nuitka_Cell_GET(outline_0_var___class__);
                PyCell_SET(outline_0_var___class__, tmp_assign_source_12);
                Py_XDECREF(old);
            }

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
        tmp_assign_source_11 = Nuitka_Cell_GET(outline_0_var___class__);
        Py_INCREF(tmp_assign_source_11);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_PIL$TiffTags$$$class_1_TagInfo_23);
        locals_PIL$TiffTags$$$class_1_TagInfo_23 = NULL;
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

        Py_DECREF(locals_PIL$TiffTags$$$class_1_TagInfo_23);
        locals_PIL$TiffTags$$$class_1_TagInfo_23 = NULL;
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

        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
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
        exception_lineno = 23;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_11);
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
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
        PyObject *tmp_assign_source_13;


        tmp_assign_source_13 = MAKE_FUNCTION_PIL$TiffTags$$$function_3_lookup();

        UPDATE_STRING_DICT1(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[43];
        UPDATE_STRING_DICT0(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[45];
        UPDATE_STRING_DICT0(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[13];
        UPDATE_STRING_DICT0(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[53];
        UPDATE_STRING_DICT0(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[55];
        UPDATE_STRING_DICT0(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[57];
        UPDATE_STRING_DICT0(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[59];
        UPDATE_STRING_DICT0(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[61];
        UPDATE_STRING_DICT0(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[63];
        UPDATE_STRING_DICT0(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[65];
        UPDATE_STRING_DICT0(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_5;
        tmp_dict_key_1 = mod_consts[67];
        tmp_tuple_element_5 = mod_consts[68];
        tmp_dict_value_1 = PyTuple_New(3);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        assert(!(tmp_tuple_element_5 == NULL));
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_5);
        tmp_tuple_element_5 = mod_consts[43];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_5);
        tmp_assign_source_27 = _PyDict_NewPresized( 104 );
        {
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_tuple_element_17;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_tuple_element_19;
            PyObject *tmp_tuple_element_20;
            PyObject *tmp_tuple_element_21;
            PyObject *tmp_tuple_element_22;
            PyObject *tmp_tuple_element_23;
            PyObject *tmp_tuple_element_24;
            PyObject *tmp_tuple_element_25;
            PyObject *tmp_tuple_element_26;
            PyObject *tmp_tuple_element_27;
            PyObject *tmp_tuple_element_28;
            PyObject *tmp_tuple_element_29;
            PyObject *tmp_tuple_element_30;
            PyObject *tmp_tuple_element_31;
            PyObject *tmp_tuple_element_32;
            PyObject *tmp_tuple_element_33;
            PyObject *tmp_tuple_element_34;
            PyObject *tmp_tuple_element_35;
            PyObject *tmp_tuple_element_36;
            PyObject *tmp_tuple_element_37;
            PyObject *tmp_tuple_element_38;
            PyObject *tmp_tuple_element_39;
            PyObject *tmp_tuple_element_40;
            PyObject *tmp_tuple_element_41;
            PyObject *tmp_tuple_element_42;
            PyObject *tmp_tuple_element_43;
            PyObject *tmp_tuple_element_44;
            PyObject *tmp_tuple_element_45;
            PyObject *tmp_tuple_element_46;
            PyObject *tmp_tuple_element_47;
            PyObject *tmp_tuple_element_48;
            PyObject *tmp_tuple_element_49;
            PyObject *tmp_tuple_element_50;
            PyObject *tmp_tuple_element_51;
            PyObject *tmp_tuple_element_52;
            PyObject *tmp_tuple_element_53;
            PyObject *tmp_tuple_element_54;
            PyObject *tmp_tuple_element_55;
            PyObject *tmp_tuple_element_56;
            PyObject *tmp_tuple_element_57;
            PyObject *tmp_tuple_element_58;
            PyObject *tmp_tuple_element_59;
            PyObject *tmp_tuple_element_60;
            PyObject *tmp_tuple_element_61;
            PyObject *tmp_tuple_element_62;
            PyObject *tmp_tuple_element_63;
            PyObject *tmp_tuple_element_64;
            PyObject *tmp_tuple_element_65;
            PyObject *tmp_tuple_element_66;
            PyObject *tmp_tuple_element_67;
            PyObject *tmp_tuple_element_68;
            PyObject *tmp_tuple_element_69;
            PyObject *tmp_tuple_element_70;
            PyObject *tmp_tuple_element_71;
            PyObject *tmp_tuple_element_72;
            PyObject *tmp_tuple_element_73;
            PyObject *tmp_tuple_element_74;
            PyObject *tmp_tuple_element_75;
            PyObject *tmp_tuple_element_76;
            PyObject *tmp_tuple_element_77;
            PyObject *tmp_tuple_element_78;
            PyObject *tmp_tuple_element_79;
            PyObject *tmp_tuple_element_80;
            PyObject *tmp_tuple_element_81;
            PyObject *tmp_tuple_element_82;
            PyObject *tmp_tuple_element_83;
            PyObject *tmp_tuple_element_84;
            PyObject *tmp_tuple_element_85;
            PyObject *tmp_tuple_element_86;
            PyObject *tmp_tuple_element_87;
            PyObject *tmp_tuple_element_88;
            PyObject *tmp_tuple_element_89;
            PyObject *tmp_tuple_element_90;
            PyObject *tmp_tuple_element_91;
            PyObject *tmp_tuple_element_92;
            PyObject *tmp_tuple_element_93;
            PyObject *tmp_tuple_element_94;
            PyObject *tmp_tuple_element_95;
            PyObject *tmp_tuple_element_96;
            PyObject *tmp_tuple_element_97;
            PyObject *tmp_tuple_element_98;
            PyObject *tmp_tuple_element_99;
            PyObject *tmp_tuple_element_100;
            PyObject *tmp_tuple_element_101;
            PyObject *tmp_tuple_element_102;
            PyObject *tmp_tuple_element_103;
            PyObject *tmp_tuple_element_104;
            PyObject *tmp_tuple_element_105;
            PyObject *tmp_tuple_element_106;
            PyObject *tmp_tuple_element_107;
            PyObject *tmp_tuple_element_108;
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[69];
            tmp_tuple_element_6 = mod_consts[70];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_6 == NULL)) {
                tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
            }

            assert(!(tmp_tuple_element_6 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_6);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[71];
            tmp_tuple_element_7 = mod_consts[72];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_7);
            tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_tuple_element_7 == NULL)) {
                tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
            }

            assert(!(tmp_tuple_element_7 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_7);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[73];
            tmp_tuple_element_8 = mod_consts[74];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_8);
            tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_tuple_element_8 == NULL)) {
                tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
            }

            assert(!(tmp_tuple_element_8 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_8);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[75];
            tmp_tuple_element_9 = mod_consts[76];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_9);
            tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_9 == NULL)) {
                tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
            }

            assert(!(tmp_tuple_element_9 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[12];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_9);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[77];
            tmp_tuple_element_10 = mod_consts[78];
            tmp_dict_value_1 = PyTuple_New(4);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_10);
            tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_10 == NULL)) {
                tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
            }

            assert(!(tmp_tuple_element_10 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_10);
            tmp_tuple_element_10 = PyDict_Copy(mod_consts[79]);
            PyTuple_SET_ITEM(tmp_dict_value_1, 3, tmp_tuple_element_10);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[80];
            tmp_tuple_element_11 = mod_consts[81];
            tmp_dict_value_1 = PyTuple_New(4);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_11);
            tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_11 == NULL)) {
                tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
            }

            assert(!(tmp_tuple_element_11 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_11);
            tmp_tuple_element_11 = PyDict_Copy(mod_consts[82]);
            PyTuple_SET_ITEM(tmp_dict_value_1, 3, tmp_tuple_element_11);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[83];
            tmp_tuple_element_12 = mod_consts[84];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_12);
            tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_12 == NULL)) {
                tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
            }

            assert(!(tmp_tuple_element_12 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_12);
            tmp_tuple_element_12 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_12);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[85];
            tmp_tuple_element_13 = mod_consts[86];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_13);
            tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_13 == NULL)) {
                tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
            }

            assert(!(tmp_tuple_element_13 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_13);
            tmp_tuple_element_13 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_13);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[87];
            tmp_tuple_element_14 = mod_consts[88];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_14);
            tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_14 == NULL)) {
                tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
            }

            assert(!(tmp_tuple_element_14 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_14);
            tmp_tuple_element_14 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_14);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[89];
            tmp_tuple_element_15 = mod_consts[90];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_15);
            tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_15 == NULL)) {
                tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
            }

            assert(!(tmp_tuple_element_15 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_15);
            tmp_tuple_element_15 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_15);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[91];
            tmp_tuple_element_16 = mod_consts[92];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_16);
            tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[46]);

            if (unlikely(tmp_tuple_element_16 == NULL)) {
                tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
            }

            assert(!(tmp_tuple_element_16 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_16);
            tmp_tuple_element_16 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_16);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[93];
            tmp_tuple_element_17 = mod_consts[94];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_17);
            tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[46]);

            if (unlikely(tmp_tuple_element_17 == NULL)) {
                tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
            }

            assert(!(tmp_tuple_element_17 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_17);
            tmp_tuple_element_17 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_17);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[95];
            tmp_tuple_element_18 = mod_consts[96];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_18);
            tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[46]);

            if (unlikely(tmp_tuple_element_18 == NULL)) {
                tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
            }

            assert(!(tmp_tuple_element_18 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_18);
            tmp_tuple_element_18 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_18);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[97];
            tmp_tuple_element_19 = mod_consts[98];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_19);
            tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[46]);

            if (unlikely(tmp_tuple_element_19 == NULL)) {
                tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
            }

            assert(!(tmp_tuple_element_19 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_19);
            tmp_tuple_element_19 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_19);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[99];
            tmp_tuple_element_20 = mod_consts[100];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_20);
            tmp_tuple_element_20 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_tuple_element_20 == NULL)) {
                tmp_tuple_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
            }

            assert(!(tmp_tuple_element_20 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_20);
            tmp_tuple_element_20 = mod_consts[12];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_20);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[101];
            tmp_tuple_element_21 = mod_consts[102];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_21);
            tmp_tuple_element_21 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_21 == NULL)) {
                tmp_tuple_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
            }

            assert(!(tmp_tuple_element_21 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_21);
            tmp_tuple_element_21 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_21);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[103];
            tmp_tuple_element_22 = mod_consts[104];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_22);
            tmp_tuple_element_22 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_22 == NULL)) {
                tmp_tuple_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
            }

            assert(!(tmp_tuple_element_22 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_22);
            tmp_tuple_element_22 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_22);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[105];
            tmp_tuple_element_23 = mod_consts[106];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_23);
            tmp_tuple_element_23 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_tuple_element_23 == NULL)) {
                tmp_tuple_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
            }

            assert(!(tmp_tuple_element_23 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_23);
            tmp_tuple_element_23 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_23);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[107];
            tmp_tuple_element_24 = mod_consts[108];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_24);
            tmp_tuple_element_24 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_tuple_element_24 == NULL)) {
                tmp_tuple_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
            }

            assert(!(tmp_tuple_element_24 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_24);
            tmp_tuple_element_24 = mod_consts[12];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_24);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[109];
            tmp_tuple_element_25 = mod_consts[110];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_25);
            tmp_tuple_element_25 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_25 == NULL)) {
                tmp_tuple_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
            }

            assert(!(tmp_tuple_element_25 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_25);
            tmp_tuple_element_25 = mod_consts[12];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_25);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[111];
            tmp_tuple_element_26 = mod_consts[112];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_26);
            tmp_tuple_element_26 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_26 == NULL)) {
                tmp_tuple_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
            }

            assert(!(tmp_tuple_element_26 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_26);
            tmp_tuple_element_26 = mod_consts[12];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_26);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[113];
            tmp_tuple_element_27 = mod_consts[114];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_27);
            tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[50]);

            if (unlikely(tmp_tuple_element_27 == NULL)) {
                tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
            }

            assert(!(tmp_tuple_element_27 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_27);
            tmp_tuple_element_27 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_27);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[115];
            tmp_tuple_element_28 = mod_consts[116];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_28);
            tmp_tuple_element_28 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[50]);

            if (unlikely(tmp_tuple_element_28 == NULL)) {
                tmp_tuple_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
            }

            assert(!(tmp_tuple_element_28 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_28);
            tmp_tuple_element_28 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_28);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[117];
            tmp_tuple_element_29 = mod_consts[118];
            tmp_dict_value_1 = PyTuple_New(4);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_29);
            tmp_tuple_element_29 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_29 == NULL)) {
                tmp_tuple_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
            }

            assert(!(tmp_tuple_element_29 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_29);
            tmp_tuple_element_29 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_29);
            tmp_tuple_element_29 = PyDict_Copy(mod_consts[119]);
            PyTuple_SET_ITEM(tmp_dict_value_1, 3, tmp_tuple_element_29);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[120];
            tmp_tuple_element_30 = mod_consts[121];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_30);
            tmp_tuple_element_30 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[46]);

            if (unlikely(tmp_tuple_element_30 == NULL)) {
                tmp_tuple_element_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
            }

            assert(!(tmp_tuple_element_30 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_30);
            tmp_tuple_element_30 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_30);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[122];
            tmp_tuple_element_31 = mod_consts[123];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_31);
            tmp_tuple_element_31 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[50]);

            if (unlikely(tmp_tuple_element_31 == NULL)) {
                tmp_tuple_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
            }

            assert(!(tmp_tuple_element_31 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_31);
            tmp_tuple_element_31 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_31);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[124];
            tmp_tuple_element_32 = mod_consts[125];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_32);
            tmp_tuple_element_32 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[50]);

            if (unlikely(tmp_tuple_element_32 == NULL)) {
                tmp_tuple_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
            }

            assert(!(tmp_tuple_element_32 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_32);
            tmp_tuple_element_32 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_32);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[126];
            tmp_tuple_element_33 = mod_consts[127];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_33);
            tmp_tuple_element_33 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_tuple_element_33 == NULL)) {
                tmp_tuple_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
            }

            assert(!(tmp_tuple_element_33 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_33);
            tmp_tuple_element_33 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_33);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[128];
            tmp_tuple_element_34 = mod_consts[129];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_34);
            tmp_tuple_element_34 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_tuple_element_34 == NULL)) {
                tmp_tuple_element_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
            }

            assert(!(tmp_tuple_element_34 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_34);
            tmp_tuple_element_34 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_34);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[130];
            tmp_tuple_element_35 = mod_consts[131];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_35);
            tmp_tuple_element_35 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_35 == NULL)) {
                tmp_tuple_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
            }

            assert(!(tmp_tuple_element_35 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_35);
            tmp_tuple_element_35 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_35);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[132];
            tmp_tuple_element_36 = mod_consts[133];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_36);
            tmp_tuple_element_36 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_36 == NULL)) {
                tmp_tuple_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
            }

            assert(!(tmp_tuple_element_36 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_36);
            tmp_tuple_element_36 = mod_consts[12];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_36);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[134];
            tmp_tuple_element_37 = mod_consts[135];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_37);
            tmp_tuple_element_37 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_tuple_element_37 == NULL)) {
                tmp_tuple_element_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
            }

            assert(!(tmp_tuple_element_37 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_37);
            tmp_tuple_element_37 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_37);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[136];
            tmp_tuple_element_38 = mod_consts[137];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_38);
            tmp_tuple_element_38 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_tuple_element_38 == NULL)) {
                tmp_tuple_element_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
            }

            assert(!(tmp_tuple_element_38 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_38);
            tmp_tuple_element_38 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_38);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[138];
            tmp_tuple_element_39 = mod_consts[139];
            tmp_dict_value_1 = PyTuple_New(4);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_39);
            tmp_tuple_element_39 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_39 == NULL)) {
                tmp_tuple_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
            }

            assert(!(tmp_tuple_element_39 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_39);
            tmp_tuple_element_39 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_39);
            tmp_tuple_element_39 = PyDict_Copy(mod_consts[140]);
            PyTuple_SET_ITEM(tmp_dict_value_1, 3, tmp_tuple_element_39);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[141];
            tmp_tuple_element_40 = mod_consts[142];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_40);
            tmp_tuple_element_40 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_40 == NULL)) {
                tmp_tuple_element_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
            }

            assert(!(tmp_tuple_element_40 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_40);
            tmp_tuple_element_40 = mod_consts[45];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_40);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[143];
            tmp_tuple_element_41 = mod_consts[144];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_41);
            tmp_tuple_element_41 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_41 == NULL)) {
                tmp_tuple_element_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
            }

            assert(!(tmp_tuple_element_41 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_41);
            tmp_tuple_element_41 = mod_consts[12];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_41);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[145];
            tmp_tuple_element_42 = mod_consts[146];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_42);
            tmp_tuple_element_42 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[46]);

            if (unlikely(tmp_tuple_element_42 == NULL)) {
                tmp_tuple_element_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
            }

            assert(!(tmp_tuple_element_42 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_42);
            tmp_tuple_element_42 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_42);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[147];
            tmp_tuple_element_43 = mod_consts[148];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_43);
            tmp_tuple_element_43 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[46]);

            if (unlikely(tmp_tuple_element_43 == NULL)) {
                tmp_tuple_element_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
            }

            assert(!(tmp_tuple_element_43 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_43);
            tmp_tuple_element_43 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_43);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[149];
            tmp_tuple_element_44 = mod_consts[150];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_44);
            tmp_tuple_element_44 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[46]);

            if (unlikely(tmp_tuple_element_44 == NULL)) {
                tmp_tuple_element_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
            }

            assert(!(tmp_tuple_element_44 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_44);
            tmp_tuple_element_44 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_44);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[151];
            tmp_tuple_element_45 = mod_consts[152];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_45);
            tmp_tuple_element_45 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[46]);

            if (unlikely(tmp_tuple_element_45 == NULL)) {
                tmp_tuple_element_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
            }

            assert(!(tmp_tuple_element_45 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_45);
            tmp_tuple_element_45 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_45);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[153];
            tmp_tuple_element_46 = mod_consts[154];
            tmp_dict_value_1 = PyTuple_New(4);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_46);
            tmp_tuple_element_46 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_46 == NULL)) {
                tmp_tuple_element_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
            }

            assert(!(tmp_tuple_element_46 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_46);
            tmp_tuple_element_46 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_46);
            tmp_tuple_element_46 = PyDict_Copy(mod_consts[155]);
            PyTuple_SET_ITEM(tmp_dict_value_1, 3, tmp_tuple_element_46);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[156];
            tmp_tuple_element_47 = mod_consts[157];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_47);
            tmp_tuple_element_47 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[50]);

            if (unlikely(tmp_tuple_element_47 == NULL)) {
                tmp_tuple_element_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
            }

            assert(!(tmp_tuple_element_47 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_47);
            tmp_tuple_element_47 = mod_consts[45];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_47);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[158];
            tmp_tuple_element_48 = mod_consts[159];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_48);
            tmp_tuple_element_48 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[50]);

            if (unlikely(tmp_tuple_element_48 == NULL)) {
                tmp_tuple_element_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
            }

            assert(!(tmp_tuple_element_48 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_48);
            tmp_tuple_element_48 = mod_consts[51];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_48);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[160];
            tmp_tuple_element_49 = mod_consts[161];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_49);
            tmp_tuple_element_49 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_49 == NULL)) {
                tmp_tuple_element_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
            }

            assert(!(tmp_tuple_element_49 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_49);
            tmp_tuple_element_49 = mod_consts[12];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_49);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[162];
            tmp_tuple_element_50 = mod_consts[163];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_50);
            tmp_tuple_element_50 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_50 == NULL)) {
                tmp_tuple_element_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
            }

            assert(!(tmp_tuple_element_50 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_50);
            tmp_tuple_element_50 = mod_consts[45];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_50);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[164];
            tmp_tuple_element_51 = mod_consts[165];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_51);
            tmp_tuple_element_51 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_tuple_element_51 == NULL)) {
                tmp_tuple_element_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
            }

            assert(!(tmp_tuple_element_51 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_51);
            tmp_tuple_element_51 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_51);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[166];
            tmp_tuple_element_52 = mod_consts[167];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_52);
            tmp_tuple_element_52 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_tuple_element_52 == NULL)) {
                tmp_tuple_element_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
            }

            assert(!(tmp_tuple_element_52 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_52);
            tmp_tuple_element_52 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_52);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[168];
            tmp_tuple_element_53 = mod_consts[169];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_53);
            tmp_tuple_element_53 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_tuple_element_53 == NULL)) {
                tmp_tuple_element_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
            }

            assert(!(tmp_tuple_element_53 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_53);
            tmp_tuple_element_53 = mod_consts[12];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_53);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[170];
            tmp_tuple_element_54 = mod_consts[171];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_54);
            tmp_tuple_element_54 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_tuple_element_54 == NULL)) {
                tmp_tuple_element_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
            }

            assert(!(tmp_tuple_element_54 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_54);
            tmp_tuple_element_54 = mod_consts[12];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_54);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[172];
            tmp_tuple_element_55 = mod_consts[173];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_55);
            tmp_tuple_element_55 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_55 == NULL)) {
                tmp_tuple_element_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
            }

            assert(!(tmp_tuple_element_55 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_55);
            tmp_tuple_element_55 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_55);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[174];
            tmp_tuple_element_56 = mod_consts[175];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_56);
            tmp_tuple_element_56 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[46]);

            if (unlikely(tmp_tuple_element_56 == NULL)) {
                tmp_tuple_element_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
            }

            assert(!(tmp_tuple_element_56 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_56);
            tmp_tuple_element_56 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_56);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[176];
            tmp_tuple_element_57 = mod_consts[177];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_57);
            tmp_tuple_element_57 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_57 == NULL)) {
                tmp_tuple_element_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
            }

            assert(!(tmp_tuple_element_57 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_57);
            tmp_tuple_element_57 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_57);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[178];
            tmp_tuple_element_58 = mod_consts[179];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_58);
            tmp_tuple_element_58 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_58 == NULL)) {
                tmp_tuple_element_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
            }

            assert(!(tmp_tuple_element_58 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_58);
            tmp_tuple_element_58 = mod_consts[12];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_58);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[180];
            tmp_tuple_element_59 = mod_consts[181];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_59);
            tmp_tuple_element_59 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[46]);

            if (unlikely(tmp_tuple_element_59 == NULL)) {
                tmp_tuple_element_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
            }

            assert(!(tmp_tuple_element_59 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_59);
            tmp_tuple_element_59 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_59);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[182];
            tmp_tuple_element_60 = mod_consts[183];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_60);
            tmp_tuple_element_60 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_60 == NULL)) {
                tmp_tuple_element_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
            }

            assert(!(tmp_tuple_element_60 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_60);
            tmp_tuple_element_60 = mod_consts[12];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_60);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[184];
            tmp_tuple_element_61 = mod_consts[185];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_61);
            tmp_tuple_element_61 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_61 == NULL)) {
                tmp_tuple_element_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
            }

            assert(!(tmp_tuple_element_61 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_61);
            tmp_tuple_element_61 = mod_consts[12];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_61);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[186];
            tmp_tuple_element_62 = mod_consts[187];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_62);
            tmp_tuple_element_62 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[64]);

            if (unlikely(tmp_tuple_element_62 == NULL)) {
                tmp_tuple_element_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
            }

            assert(!(tmp_tuple_element_62 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_62);
            tmp_tuple_element_62 = mod_consts[12];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_62);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[188];
            tmp_tuple_element_63 = mod_consts[189];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_63);
            tmp_tuple_element_63 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[64]);

            if (unlikely(tmp_tuple_element_63 == NULL)) {
                tmp_tuple_element_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
            }

            assert(!(tmp_tuple_element_63 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_63);
            tmp_tuple_element_63 = mod_consts[12];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_63);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[190];
            tmp_tuple_element_64 = mod_consts[191];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_64);
            tmp_tuple_element_64 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_64 == NULL)) {
                tmp_tuple_element_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
            }

            assert(!(tmp_tuple_element_64 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_64);
            tmp_tuple_element_64 = mod_consts[51];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_64);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[192];
            tmp_tuple_element_65 = mod_consts[193];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_65);
            tmp_tuple_element_65 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_tuple_element_65 == NULL)) {
                tmp_tuple_element_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            assert(!(tmp_tuple_element_65 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_65);
            tmp_tuple_element_65 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_65);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[194];
            tmp_tuple_element_66 = mod_consts[195];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_66);
            tmp_tuple_element_66 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_66 == NULL)) {
                tmp_tuple_element_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
            }

            assert(!(tmp_tuple_element_66 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_66);
            tmp_tuple_element_66 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_66);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[196];
            tmp_tuple_element_67 = mod_consts[197];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_67);
            tmp_tuple_element_67 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_tuple_element_67 == NULL)) {
                tmp_tuple_element_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
            }

            assert(!(tmp_tuple_element_67 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_67);
            tmp_tuple_element_67 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_67);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[198];
            tmp_tuple_element_68 = mod_consts[199];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_68);
            tmp_tuple_element_68 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_tuple_element_68 == NULL)) {
                tmp_tuple_element_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
            }

            assert(!(tmp_tuple_element_68 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_68);
            tmp_tuple_element_68 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_68);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[200];
            tmp_tuple_element_69 = mod_consts[201];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_69);
            tmp_tuple_element_69 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_69 == NULL)) {
                tmp_tuple_element_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
            }

            assert(!(tmp_tuple_element_69 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_69);
            tmp_tuple_element_69 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_69);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[202];
            tmp_tuple_element_70 = mod_consts[203];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_70);
            tmp_tuple_element_70 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_70 == NULL)) {
                tmp_tuple_element_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
            }

            assert(!(tmp_tuple_element_70 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_70);
            tmp_tuple_element_70 = mod_consts[12];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_70);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[204];
            tmp_tuple_element_71 = mod_consts[205];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_71);
            tmp_tuple_element_71 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_71 == NULL)) {
                tmp_tuple_element_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
            }

            assert(!(tmp_tuple_element_71 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_71);
            tmp_tuple_element_71 = mod_consts[12];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_71);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[206];
            tmp_tuple_element_72 = mod_consts[207];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_72);
            tmp_tuple_element_72 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_tuple_element_72 == NULL)) {
                tmp_tuple_element_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
            }

            assert(!(tmp_tuple_element_72 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_72);
            tmp_tuple_element_72 = mod_consts[12];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_72);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[208];
            tmp_tuple_element_73 = mod_consts[209];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_73);
            tmp_tuple_element_73 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_tuple_element_73 == NULL)) {
                tmp_tuple_element_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
            }

            assert(!(tmp_tuple_element_73 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_73);
            tmp_tuple_element_73 = mod_consts[12];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_73);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[210];
            tmp_tuple_element_74 = mod_consts[211];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_74);
            tmp_tuple_element_74 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_tuple_element_74 == NULL)) {
                tmp_tuple_element_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
            }

            assert(!(tmp_tuple_element_74 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_74);
            tmp_tuple_element_74 = mod_consts[12];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_74);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[212];
            tmp_tuple_element_75 = mod_consts[213];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_75);
            tmp_tuple_element_75 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[50]);

            if (unlikely(tmp_tuple_element_75 == NULL)) {
                tmp_tuple_element_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
            }

            assert(!(tmp_tuple_element_75 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_75);
            tmp_tuple_element_75 = mod_consts[14];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_75);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[214];
            tmp_tuple_element_76 = mod_consts[215];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_76);
            tmp_tuple_element_76 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_76 == NULL)) {
                tmp_tuple_element_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
            }

            assert(!(tmp_tuple_element_76 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_76);
            tmp_tuple_element_76 = mod_consts[45];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_76);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[216];
            tmp_tuple_element_77 = mod_consts[217];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_77);
            tmp_tuple_element_77 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_77 == NULL)) {
                tmp_tuple_element_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
            }

            assert(!(tmp_tuple_element_77 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_77);
            tmp_tuple_element_77 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_77);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[218];
            tmp_tuple_element_78 = mod_consts[219];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_78);
            tmp_tuple_element_78 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[50]);

            if (unlikely(tmp_tuple_element_78 == NULL)) {
                tmp_tuple_element_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
            }

            assert(!(tmp_tuple_element_78 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_78);
            tmp_tuple_element_78 = mod_consts[51];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_78);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[220];
            tmp_tuple_element_79 = mod_consts[221];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_79);
            tmp_tuple_element_79 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_tuple_element_79 == NULL)) {
                tmp_tuple_element_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
            }

            assert(!(tmp_tuple_element_79 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_79);
            tmp_tuple_element_79 = mod_consts[12];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_79);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[222];
            tmp_tuple_element_80 = mod_consts[223];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_80);
            tmp_tuple_element_80 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[46]);

            if (unlikely(tmp_tuple_element_80 == NULL)) {
                tmp_tuple_element_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
            }

            assert(!(tmp_tuple_element_80 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_80);
            tmp_tuple_element_80 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_80);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[224];
            tmp_tuple_element_81 = mod_consts[225];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_81);
            tmp_tuple_element_81 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_tuple_element_81 == NULL)) {
                tmp_tuple_element_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            assert(!(tmp_tuple_element_81 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_81);
            tmp_tuple_element_81 = mod_consts[12];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_81);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[226];
            tmp_tuple_element_82 = mod_consts[227];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_82);
            tmp_tuple_element_82 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_tuple_element_82 == NULL)) {
                tmp_tuple_element_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
            }

            assert(!(tmp_tuple_element_82 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_82);
            tmp_tuple_element_82 = mod_consts[12];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_82);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[228];
            tmp_tuple_element_83 = mod_consts[229];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_83);
            tmp_tuple_element_83 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_tuple_element_83 == NULL)) {
                tmp_tuple_element_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
            }

            assert(!(tmp_tuple_element_83 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_83);
            tmp_tuple_element_83 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_83);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[230];
            tmp_tuple_element_84 = mod_consts[231];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_84);
            tmp_tuple_element_84 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_tuple_element_84 == NULL)) {
                tmp_tuple_element_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            assert(!(tmp_tuple_element_84 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_84);
            tmp_tuple_element_84 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_84);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[232];
            tmp_tuple_element_85 = mod_consts[233];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_85);
            tmp_tuple_element_85 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_tuple_element_85 == NULL)) {
                tmp_tuple_element_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
            }

            assert(!(tmp_tuple_element_85 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_85);
            tmp_tuple_element_85 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_85);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[234];
            tmp_tuple_element_86 = mod_consts[235];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_86);
            tmp_tuple_element_86 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_tuple_element_86 == NULL)) {
                tmp_tuple_element_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            assert(!(tmp_tuple_element_86 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_86);
            tmp_tuple_element_86 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_86);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[236];
            tmp_tuple_element_87 = mod_consts[237];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_87);
            tmp_tuple_element_87 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_tuple_element_87 == NULL)) {
                tmp_tuple_element_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
            }

            assert(!(tmp_tuple_element_87 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_87);
            tmp_tuple_element_87 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_87);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[238];
            tmp_tuple_element_88 = mod_consts[239];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_88);
            tmp_tuple_element_88 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_tuple_element_88 == NULL)) {
                tmp_tuple_element_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            assert(!(tmp_tuple_element_88 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_88);
            tmp_tuple_element_88 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_88);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[240];
            tmp_tuple_element_89 = mod_consts[241];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_89);
            tmp_tuple_element_89 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_tuple_element_89 == NULL)) {
                tmp_tuple_element_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            assert(!(tmp_tuple_element_89 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_89);
            tmp_tuple_element_89 = mod_consts[12];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_89);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[242];
            tmp_tuple_element_90 = mod_consts[243];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_90);
            tmp_tuple_element_90 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_tuple_element_90 == NULL)) {
                tmp_tuple_element_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
            }

            assert(!(tmp_tuple_element_90 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_90);
            tmp_tuple_element_90 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_90);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[244];
            tmp_tuple_element_91 = mod_consts[245];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_91);
            tmp_tuple_element_91 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_tuple_element_91 == NULL)) {
                tmp_tuple_element_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
            }

            assert(!(tmp_tuple_element_91 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_91);
            tmp_tuple_element_91 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_91);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[246];
            tmp_tuple_element_92 = mod_consts[247];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_92);
            tmp_tuple_element_92 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_tuple_element_92 == NULL)) {
                tmp_tuple_element_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
            }

            assert(!(tmp_tuple_element_92 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_92);
            tmp_tuple_element_92 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_92);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[248];
            tmp_tuple_element_93 = mod_consts[249];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_93);
            tmp_tuple_element_93 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[50]);

            if (unlikely(tmp_tuple_element_93 == NULL)) {
                tmp_tuple_element_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
            }

            assert(!(tmp_tuple_element_93 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_93);
            tmp_tuple_element_93 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_93);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[250];
            tmp_tuple_element_94 = mod_consts[251];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_94);
            tmp_tuple_element_94 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[50]);

            if (unlikely(tmp_tuple_element_94 == NULL)) {
                tmp_tuple_element_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
            }

            assert(!(tmp_tuple_element_94 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_94);
            tmp_tuple_element_94 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_94);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[252];
            tmp_tuple_element_95 = mod_consts[253];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_95);
            tmp_tuple_element_95 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_tuple_element_95 == NULL)) {
                tmp_tuple_element_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
            }

            assert(!(tmp_tuple_element_95 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_95);
            tmp_tuple_element_95 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_95);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[254];
            tmp_tuple_element_96 = mod_consts[255];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_96);
            tmp_tuple_element_96 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_tuple_element_96 == NULL)) {
                tmp_tuple_element_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
            }

            assert(!(tmp_tuple_element_96 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_96);
            tmp_tuple_element_96 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_96);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[256];
            tmp_tuple_element_97 = mod_consts[257];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_97);
            tmp_tuple_element_97 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[50]);

            if (unlikely(tmp_tuple_element_97 == NULL)) {
                tmp_tuple_element_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
            }

            assert(!(tmp_tuple_element_97 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_97);
            tmp_tuple_element_97 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_97);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[258];
            tmp_tuple_element_98 = mod_consts[259];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_98);
            tmp_tuple_element_98 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_tuple_element_98 == NULL)) {
                tmp_tuple_element_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
            }

            assert(!(tmp_tuple_element_98 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_98);
            tmp_tuple_element_98 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_98);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[260];
            tmp_tuple_element_99 = mod_consts[261];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_99);
            tmp_tuple_element_99 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_tuple_element_99 == NULL)) {
                tmp_tuple_element_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
            }

            assert(!(tmp_tuple_element_99 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_99);
            tmp_tuple_element_99 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_99);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[262];
            tmp_tuple_element_100 = mod_consts[263];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_100);
            tmp_tuple_element_100 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_tuple_element_100 == NULL)) {
                tmp_tuple_element_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
            }

            assert(!(tmp_tuple_element_100 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_100);
            tmp_tuple_element_100 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_100);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[264];
            tmp_tuple_element_101 = mod_consts[265];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_101);
            tmp_tuple_element_101 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_tuple_element_101 == NULL)) {
                tmp_tuple_element_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
            }

            assert(!(tmp_tuple_element_101 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_101);
            tmp_tuple_element_101 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_101);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[266];
            tmp_tuple_element_102 = mod_consts[267];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_102);
            tmp_tuple_element_102 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_tuple_element_102 == NULL)) {
                tmp_tuple_element_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
            }

            assert(!(tmp_tuple_element_102 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_102);
            tmp_tuple_element_102 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_102);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[268];
            tmp_tuple_element_103 = mod_consts[269];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_103);
            tmp_tuple_element_103 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_tuple_element_103 == NULL)) {
                tmp_tuple_element_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
            }

            assert(!(tmp_tuple_element_103 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_103);
            tmp_tuple_element_103 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_103);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[270];
            tmp_tuple_element_104 = mod_consts[271];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_104);
            tmp_tuple_element_104 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_tuple_element_104 == NULL)) {
                tmp_tuple_element_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
            }

            assert(!(tmp_tuple_element_104 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_104);
            tmp_tuple_element_104 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_104);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[272];
            tmp_tuple_element_105 = mod_consts[273];
            tmp_dict_value_1 = PyTuple_New(4);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_105);
            tmp_tuple_element_105 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_105 == NULL)) {
                tmp_tuple_element_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
            }

            assert(!(tmp_tuple_element_105 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_105);
            tmp_tuple_element_105 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_105);
            tmp_tuple_element_105 = PyDict_Copy(mod_consts[274]);
            PyTuple_SET_ITEM(tmp_dict_value_1, 3, tmp_tuple_element_105);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[275];
            tmp_tuple_element_106 = mod_consts[276];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_106);
            tmp_tuple_element_106 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[50]);

            if (unlikely(tmp_tuple_element_106 == NULL)) {
                tmp_tuple_element_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
            }

            assert(!(tmp_tuple_element_106 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_106);
            tmp_tuple_element_106 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_106);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[277];
            tmp_tuple_element_107 = mod_consts[278];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_107);
            tmp_tuple_element_107 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_tuple_element_107 == NULL)) {
                tmp_tuple_element_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
            }

            assert(!(tmp_tuple_element_107 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_107);
            tmp_tuple_element_107 = mod_consts[12];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_107);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[279];
            tmp_tuple_element_108 = mod_consts[280];
            tmp_dict_value_1 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_108);
            tmp_tuple_element_108 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_tuple_element_108 == NULL)) {
                tmp_tuple_element_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            assert(!(tmp_tuple_element_108 == NULL));
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_108);
            tmp_tuple_element_108 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_108);
            tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        UPDATE_STRING_DICT1(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = PyDict_Copy(mod_consts[281]);
        UPDATE_STRING_DICT1(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;


        tmp_assign_source_29 = MAKE_FUNCTION_PIL$TiffTags$$$function_4__populate();

        UPDATE_STRING_DICT1(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[282], tmp_assign_source_29);
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_call_result_1;
        tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[282]);

        if (unlikely(tmp_called_name_4 == NULL)) {
            tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[282]);
        }

        assert(!(tmp_called_name_4 == NULL));
        frame_b7b7a7ecf313b8a2f655adea8c5eaaac->m_frame.f_lineno = 371;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tmp_called_name_4);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = PyDict_New();
        UPDATE_STRING_DICT1(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[283], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = PySet_New(mod_consts[284]);
        UPDATE_STRING_DICT1(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[285], tmp_assign_source_31);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[285]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[285]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        frame_b7b7a7ecf313b8a2f655adea8c5eaaac->m_frame.f_lineno = 487;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, mod_consts[286], &PyTuple_GET_ITEM(mod_consts[287], 0));

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_3;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[285]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[285]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;

            goto frame_exception_exit_1;
        }
        frame_b7b7a7ecf313b8a2f655adea8c5eaaac->m_frame.f_lineno = 488;
        tmp_call_result_3 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, mod_consts[286], &PyTuple_GET_ITEM(mod_consts[288], 0));

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_4;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[285]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[285]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;

            goto frame_exception_exit_1;
        }
        frame_b7b7a7ecf313b8a2f655adea8c5eaaac->m_frame.f_lineno = 490;
        tmp_call_result_4 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, mod_consts[286], &PyTuple_GET_ITEM(mod_consts[289], 0));

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_5;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[285]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[285]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;

            goto frame_exception_exit_1;
        }
        frame_b7b7a7ecf313b8a2f655adea8c5eaaac->m_frame.f_lineno = 491;
        tmp_call_result_5 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_4, mod_consts[286], &PyTuple_GET_ITEM(mod_consts[290], 0));

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_6;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[285]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[285]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 492;

            goto frame_exception_exit_1;
        }
        frame_b7b7a7ecf313b8a2f655adea8c5eaaac->m_frame.f_lineno = 492;
        tmp_call_result_6 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_5, mod_consts[286], &PyTuple_GET_ITEM(mod_consts[291], 0));

        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 492;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_7;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts[285]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[285]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;

            goto frame_exception_exit_1;
        }
        frame_b7b7a7ecf313b8a2f655adea8c5eaaac->m_frame.f_lineno = 493;
        tmp_call_result_7 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_6, mod_consts[286], &PyTuple_GET_ITEM(mod_consts[292], 0));

        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b7b7a7ecf313b8a2f655adea8c5eaaac);
#endif
    popFrameStack();

    assertFrameObject(frame_b7b7a7ecf313b8a2f655adea8c5eaaac);

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b7b7a7ecf313b8a2f655adea8c5eaaac);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b7b7a7ecf313b8a2f655adea8c5eaaac, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b7b7a7ecf313b8a2f655adea8c5eaaac->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b7b7a7ecf313b8a2f655adea8c5eaaac, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;

    return module_PIL$TiffTags;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

