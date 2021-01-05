/* Generated code for Python module 'wx.adv'
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

/* The "module_wx$adv" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_wx$adv;
PyDictObject *moduledict_wx$adv;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[177];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    loadConstantsBlob(&mod_consts[0], "wx.adv", 177);

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
void checkModuleConstants_wx$adv(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "wx.adv", 177);
}
#endif

// The module code objects.
static PyCodeObject *codeobj_5a58f1df43f3867df584ef398fbf36e7;
static PyCodeObject *codeobj_45518d5e0d70e7bf34d8f60561524f12;
static PyCodeObject *codeobj_945ff44c7da9eecb8e01aadbc0206542;
static PyCodeObject *codeobj_77e87f54145fc68faef30009fbb29a97;
static PyCodeObject *codeobj_51fbca5c0cd9b8a2f380b5d955761205;
static PyCodeObject *codeobj_ae64b03cf5979a55be73ec22872ee753;
static PyCodeObject *codeobj_df7d6cd40e8a401aac40d49e734550f2;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[9]; CHECK_OBJECT(module_filename_obj);
    codeobj_5a58f1df43f3867df584ef398fbf36e7 = MAKE_CODEOBJECT(module_filename_obj, 104, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[119], mod_consts[174], NULL, 0, 0, 0);
    codeobj_45518d5e0d70e7bf34d8f60561524f12 = MAKE_CODEOBJECT(module_filename_obj, 105, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[119], mod_consts[174], NULL, 0, 0, 0);
    codeobj_945ff44c7da9eecb8e01aadbc0206542 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[175], NULL, NULL, 0, 0, 0);
    codeobj_77e87f54145fc68faef30009fbb29a97 = MAKE_CODEOBJECT(module_filename_obj, 80, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[85], mod_consts[176], NULL, 1, 0, 0);
    codeobj_51fbca5c0cd9b8a2f380b5d955761205 = MAKE_CODEOBJECT(module_filename_obj, 33, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[39], mod_consts[176], NULL, 1, 0, 0);
    codeobj_ae64b03cf5979a55be73ec22872ee753 = MAKE_CODEOBJECT(module_filename_obj, 21, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[26], mod_consts[176], NULL, 1, 0, 0);
    codeobj_df7d6cd40e8a401aac40d49e734550f2 = MAKE_CODEOBJECT(module_filename_obj, 43, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[44], mod_consts[176], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_wx$adv$$$function_1__DateEvent_PyGetDate();


static PyObject *MAKE_FUNCTION_wx$adv$$$function_2__CalendarCtrl_PyGetDate();


static PyObject *MAKE_FUNCTION_wx$adv$$$function_3__GenericCalendarCtrl_PyGetDate();


static PyObject *MAKE_FUNCTION_wx$adv$$$function_4__AnimationDecoderList___repr__();


static PyObject *MAKE_FUNCTION_wx$adv$$$function_5_lambda();


static PyObject *MAKE_FUNCTION_wx$adv$$$function_6_lambda();


// The module function definitions.
static PyObject *impl_wx$adv$$$function_1__DateEvent_PyGetDate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ae64b03cf5979a55be73ec22872ee753;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ae64b03cf5979a55be73ec22872ee753 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ae64b03cf5979a55be73ec22872ee753)) {
        Py_XDECREF(cache_frame_ae64b03cf5979a55be73ec22872ee753);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ae64b03cf5979a55be73ec22872ee753 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ae64b03cf5979a55be73ec22872ee753 = MAKE_FUNCTION_FRAME(codeobj_ae64b03cf5979a55be73ec22872ee753, module_wx$adv, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ae64b03cf5979a55be73ec22872ee753->m_type_description == NULL);
    frame_ae64b03cf5979a55be73ec22872ee753 = cache_frame_ae64b03cf5979a55be73ec22872ee753;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ae64b03cf5979a55be73ec22872ee753);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ae64b03cf5979a55be73ec22872ee753) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[1]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_ae64b03cf5979a55be73ec22872ee753->m_frame.f_lineno = 25;
        tmp_args_element_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[2]);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 25;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_ae64b03cf5979a55be73ec22872ee753->m_frame.f_lineno = 25;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ae64b03cf5979a55be73ec22872ee753);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ae64b03cf5979a55be73ec22872ee753);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ae64b03cf5979a55be73ec22872ee753);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ae64b03cf5979a55be73ec22872ee753, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ae64b03cf5979a55be73ec22872ee753->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ae64b03cf5979a55be73ec22872ee753, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ae64b03cf5979a55be73ec22872ee753,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_ae64b03cf5979a55be73ec22872ee753 == cache_frame_ae64b03cf5979a55be73ec22872ee753) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ae64b03cf5979a55be73ec22872ee753);
        cache_frame_ae64b03cf5979a55be73ec22872ee753 = NULL;
    }

    assertFrameObject(frame_ae64b03cf5979a55be73ec22872ee753);

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


static PyObject *impl_wx$adv$$$function_2__CalendarCtrl_PyGetDate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_51fbca5c0cd9b8a2f380b5d955761205;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_51fbca5c0cd9b8a2f380b5d955761205 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_51fbca5c0cd9b8a2f380b5d955761205)) {
        Py_XDECREF(cache_frame_51fbca5c0cd9b8a2f380b5d955761205);

#if _DEBUG_REFCOUNTS
        if (cache_frame_51fbca5c0cd9b8a2f380b5d955761205 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_51fbca5c0cd9b8a2f380b5d955761205 = MAKE_FUNCTION_FRAME(codeobj_51fbca5c0cd9b8a2f380b5d955761205, module_wx$adv, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_51fbca5c0cd9b8a2f380b5d955761205->m_type_description == NULL);
    frame_51fbca5c0cd9b8a2f380b5d955761205 = cache_frame_51fbca5c0cd9b8a2f380b5d955761205;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_51fbca5c0cd9b8a2f380b5d955761205);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_51fbca5c0cd9b8a2f380b5d955761205) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[1]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_51fbca5c0cd9b8a2f380b5d955761205->m_frame.f_lineno = 37;
        tmp_args_element_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[2]);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 37;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_51fbca5c0cd9b8a2f380b5d955761205->m_frame.f_lineno = 37;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_51fbca5c0cd9b8a2f380b5d955761205);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_51fbca5c0cd9b8a2f380b5d955761205);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_51fbca5c0cd9b8a2f380b5d955761205);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_51fbca5c0cd9b8a2f380b5d955761205, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_51fbca5c0cd9b8a2f380b5d955761205->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_51fbca5c0cd9b8a2f380b5d955761205, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_51fbca5c0cd9b8a2f380b5d955761205,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_51fbca5c0cd9b8a2f380b5d955761205 == cache_frame_51fbca5c0cd9b8a2f380b5d955761205) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_51fbca5c0cd9b8a2f380b5d955761205);
        cache_frame_51fbca5c0cd9b8a2f380b5d955761205 = NULL;
    }

    assertFrameObject(frame_51fbca5c0cd9b8a2f380b5d955761205);

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


static PyObject *impl_wx$adv$$$function_3__GenericCalendarCtrl_PyGetDate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_df7d6cd40e8a401aac40d49e734550f2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_df7d6cd40e8a401aac40d49e734550f2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_df7d6cd40e8a401aac40d49e734550f2)) {
        Py_XDECREF(cache_frame_df7d6cd40e8a401aac40d49e734550f2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_df7d6cd40e8a401aac40d49e734550f2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_df7d6cd40e8a401aac40d49e734550f2 = MAKE_FUNCTION_FRAME(codeobj_df7d6cd40e8a401aac40d49e734550f2, module_wx$adv, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_df7d6cd40e8a401aac40d49e734550f2->m_type_description == NULL);
    frame_df7d6cd40e8a401aac40d49e734550f2 = cache_frame_df7d6cd40e8a401aac40d49e734550f2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_df7d6cd40e8a401aac40d49e734550f2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_df7d6cd40e8a401aac40d49e734550f2) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[1]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_df7d6cd40e8a401aac40d49e734550f2->m_frame.f_lineno = 47;
        tmp_args_element_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[2]);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 47;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_df7d6cd40e8a401aac40d49e734550f2->m_frame.f_lineno = 47;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_df7d6cd40e8a401aac40d49e734550f2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_df7d6cd40e8a401aac40d49e734550f2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_df7d6cd40e8a401aac40d49e734550f2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_df7d6cd40e8a401aac40d49e734550f2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_df7d6cd40e8a401aac40d49e734550f2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_df7d6cd40e8a401aac40d49e734550f2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_df7d6cd40e8a401aac40d49e734550f2,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_df7d6cd40e8a401aac40d49e734550f2 == cache_frame_df7d6cd40e8a401aac40d49e734550f2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_df7d6cd40e8a401aac40d49e734550f2);
        cache_frame_df7d6cd40e8a401aac40d49e734550f2 = NULL;
    }

    assertFrameObject(frame_df7d6cd40e8a401aac40d49e734550f2);

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


static PyObject *impl_wx$adv$$$function_4__AnimationDecoderList___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_77e87f54145fc68faef30009fbb29a97;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_77e87f54145fc68faef30009fbb29a97 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_77e87f54145fc68faef30009fbb29a97)) {
        Py_XDECREF(cache_frame_77e87f54145fc68faef30009fbb29a97);

#if _DEBUG_REFCOUNTS
        if (cache_frame_77e87f54145fc68faef30009fbb29a97 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_77e87f54145fc68faef30009fbb29a97 = MAKE_FUNCTION_FRAME(codeobj_77e87f54145fc68faef30009fbb29a97, module_wx$adv, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_77e87f54145fc68faef30009fbb29a97->m_type_description == NULL);
    frame_77e87f54145fc68faef30009fbb29a97 = cache_frame_77e87f54145fc68faef30009fbb29a97;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_77e87f54145fc68faef30009fbb29a97);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_77e87f54145fc68faef30009fbb29a97) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        tmp_left_name_1 = mod_consts[4];
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_name_2 = par_self;
        frame_77e87f54145fc68faef30009fbb29a97->m_frame.f_lineno = 81;
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_77e87f54145fc68faef30009fbb29a97->m_frame.f_lineno = 81;
        tmp_right_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_77e87f54145fc68faef30009fbb29a97);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_77e87f54145fc68faef30009fbb29a97);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_77e87f54145fc68faef30009fbb29a97);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_77e87f54145fc68faef30009fbb29a97, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_77e87f54145fc68faef30009fbb29a97->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_77e87f54145fc68faef30009fbb29a97, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_77e87f54145fc68faef30009fbb29a97,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_77e87f54145fc68faef30009fbb29a97 == cache_frame_77e87f54145fc68faef30009fbb29a97) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_77e87f54145fc68faef30009fbb29a97);
        cache_frame_77e87f54145fc68faef30009fbb29a97 = NULL;
    }

    assertFrameObject(frame_77e87f54145fc68faef30009fbb29a97);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

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



static PyObject *MAKE_FUNCTION_wx$adv$$$function_1__DateEvent_PyGetDate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_wx$adv$$$function_1__DateEvent_PyGetDate,
        mod_consts[26],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ae64b03cf5979a55be73ec22872ee753,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_wx$adv,
        mod_consts[3],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_wx$adv$$$function_2__CalendarCtrl_PyGetDate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_wx$adv$$$function_2__CalendarCtrl_PyGetDate,
        mod_consts[39],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_51fbca5c0cd9b8a2f380b5d955761205,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_wx$adv,
        mod_consts[3],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_wx$adv$$$function_3__GenericCalendarCtrl_PyGetDate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_wx$adv$$$function_3__GenericCalendarCtrl_PyGetDate,
        mod_consts[44],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_df7d6cd40e8a401aac40d49e734550f2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_wx$adv,
        mod_consts[3],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_wx$adv$$$function_4__AnimationDecoderList___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_wx$adv$$$function_4__AnimationDecoderList___repr__,
        mod_consts[85],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_77e87f54145fc68faef30009fbb29a97,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_wx$adv,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_wx$adv$$$function_5_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[119],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5a58f1df43f3867df584ef398fbf36e7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_wx$adv,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_wx$adv$$$function_6_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[119],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_45518d5e0d70e7bf34d8f60561524f12,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_wx$adv,
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

function_impl_code functable_wx$adv[] = {
    impl_wx$adv$$$function_1__DateEvent_PyGetDate,
    impl_wx$adv$$$function_2__CalendarCtrl_PyGetDate,
    impl_wx$adv$$$function_3__GenericCalendarCtrl_PyGetDate,
    impl_wx$adv$$$function_4__AnimationDecoderList___repr__,
    NULL,
    NULL,
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

    function_impl_code *current = functable_wx$adv;
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

    if (offset > sizeof(functable_wx$adv) || offset < 0) {
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
        functable_wx$adv[offset],
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
        module_wx$adv,
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
NUITKA_MAY_BE_UNUSED static char const *module_full_name = "wx.adv";

// Internal entry point for module code.
PyObject *modulecode_wx$adv(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_wx$adv = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
#ifdef _NUITKA_TRACE
        PRINT_STRING("wx.adv: Skipping module init, already done.\n");
#endif

        return module_wx$adv;
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
    PRINT_STRING("wx.adv: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("wx.adv: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("wx.adv: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initwx$adv\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_wx$adv = MODULE_DICT(module_wx$adv);

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
        moduledict_wx$adv,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_wx$adv,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_wx$adv,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_wx$adv,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_wx$adv,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_wx$adv);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_wx$adv, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_wx$adv, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_wx$adv, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_wx$adv);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT(spec_value);

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_wx$adv, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_945ff44c7da9eecb8e01aadbc0206542;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_945ff44c7da9eecb8e01aadbc0206542 = MAKE_MODULE_FRAME(codeobj_945ff44c7da9eecb8e01aadbc0206542, module_wx$adv);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_945ff44c7da9eecb8e01aadbc0206542);
    assert(Py_REFCNT(frame_945ff44c7da9eecb8e01aadbc0206542) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = mod_consts[9];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[12], tmp_assattr_name_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[13], tmp_assattr_name_2);
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
        UPDATE_STRING_DICT0(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_3);
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[15];
        tmp_globals_name_1 = (PyObject *)moduledict_wx$adv;
        tmp_locals_name_1 = (PyObject *)moduledict_wx$adv;
        tmp_fromlist_name_1 = mod_consts[16];
        tmp_level_name_1 = mod_consts[17];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 13;
        tmp_star_imported_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_star_imported_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(module_wx$adv, true, tmp_star_imported_1);
        Py_DECREF(tmp_star_imported_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[0];
        tmp_globals_name_2 = (PyObject *)moduledict_wx$adv;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = mod_consts[18];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 15;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_assattr_target_3;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_assattr_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[20]);
        if (tmp_assattr_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_assattr_target_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_3);

            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[21], tmp_assattr_name_3);
        Py_DECREF(tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_assattr_target_4;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        tmp_assattr_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[22]);
        if (tmp_assattr_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_4 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_assattr_target_4 == NULL)) {
            tmp_assattr_target_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_assattr_target_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_4);

            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[23], tmp_assattr_name_4);
        Py_DECREF(tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_assattr_target_5;
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_assattr_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[24]);
        if (tmp_assattr_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_5 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_assattr_target_5 == NULL)) {
            tmp_assattr_target_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_assattr_target_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_5);

            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[25], tmp_assattr_name_5);
        Py_DECREF(tmp_assattr_name_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_5;


        tmp_assign_source_5 = MAKE_FUNCTION_wx$adv$$$function_1__DateEvent_PyGetDate();

        UPDATE_STRING_DICT1(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_assattr_target_6;
        tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_4 == NULL)) {
            tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[27]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_args_element_name_1 == NULL)) {
            tmp_args_element_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = mod_consts[28];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 26;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_assattr_name_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        if (tmp_assattr_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_6 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_assattr_target_6 == NULL)) {
            tmp_assattr_target_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_assattr_target_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_6);

            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[30], tmp_assattr_name_6);
        Py_DECREF(tmp_assattr_name_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
    }
    tmp_res = PyDict_DelItem((PyObject *)moduledict_wx$adv, mod_consts[26]);
    tmp_result = tmp_res != -1;
    if (tmp_result == false) CLEAR_ERROR_OCCURRED();

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[26]);
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 27;

        goto frame_exception_exit_1;
    }

    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_assattr_target_7;
        tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_5 == NULL)) {
            tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[27]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_6 == NULL)) {
            tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[31]);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = mod_consts[32];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 28;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_assattr_name_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_assattr_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_7 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_assattr_target_7 == NULL)) {
            tmp_assattr_target_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_assattr_target_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_7);

            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[33], tmp_assattr_name_7);
        Py_DECREF(tmp_assattr_name_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        tmp_expression_name_7 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_7 == NULL)) {
            tmp_expression_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[34]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_args_element_name_5 == NULL)) {
            tmp_args_element_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
        }

        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_6 = mod_consts[17];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 30;
        {
            PyObject *call_args[] = {tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_3, call_args);
        }

        Py_DECREF(tmp_called_name_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        tmp_expression_name_8 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_8 == NULL)) {
            tmp_expression_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[34]);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_7 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_args_element_name_7 == NULL)) {
            tmp_args_element_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_args_element_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_8 = mod_consts[17];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 31;
        {
            PyObject *call_args[] = {tmp_args_element_name_7, tmp_args_element_name_8};
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_4, call_args);
        }

        Py_DECREF(tmp_called_name_4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;


        tmp_assign_source_8 = MAKE_FUNCTION_wx$adv$$$function_2__CalendarCtrl_PyGetDate();

        UPDATE_STRING_DICT1(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_assattr_target_8;
        tmp_expression_name_9 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_9 == NULL)) {
            tmp_expression_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[27]);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_9 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_args_element_name_9 == NULL)) {
            tmp_args_element_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_args_element_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);

            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_10 = mod_consts[28];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 38;
        {
            PyObject *call_args[] = {tmp_args_element_name_9, tmp_args_element_name_10};
            tmp_assattr_name_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_5, call_args);
        }

        Py_DECREF(tmp_called_name_5);
        if (tmp_assattr_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_8 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_assattr_target_8 == NULL)) {
            tmp_assattr_target_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_assattr_target_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_8);

            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[30], tmp_assattr_name_8);
        Py_DECREF(tmp_assattr_name_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
    }
    tmp_res = PyDict_DelItem((PyObject *)moduledict_wx$adv, mod_consts[39]);
    tmp_result = tmp_res != -1;
    if (tmp_result == false) CLEAR_ERROR_OCCURRED();

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[39]);
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 39;

        goto frame_exception_exit_1;
    }

    {
        PyObject *tmp_assattr_name_9;
        PyObject *tmp_called_name_6;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_assattr_target_9;
        tmp_expression_name_10 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_10 == NULL)) {
            tmp_expression_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[27]);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_11 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_name_11 == NULL)) {
            tmp_expression_name_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_expression_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);

            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[31]);
        if (tmp_args_element_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);

            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_12 = mod_consts[32];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 40;
        {
            PyObject *call_args[] = {tmp_args_element_name_11, tmp_args_element_name_12};
            tmp_assattr_name_9 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_6, call_args);
        }

        Py_DECREF(tmp_called_name_6);
        Py_DECREF(tmp_args_element_name_11);
        if (tmp_assattr_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_9 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_assattr_target_9 == NULL)) {
            tmp_assattr_target_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_assattr_target_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_9);

            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[33], tmp_assattr_name_9);
        Py_DECREF(tmp_assattr_name_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_10;
        PyObject *tmp_called_name_7;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_assattr_target_10;
        tmp_expression_name_12 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_12 == NULL)) {
            tmp_expression_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[27]);
        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_13 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_name_13 == NULL)) {
            tmp_expression_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_expression_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[41]);
        if (tmp_args_element_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_14 = mod_consts[42];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 41;
        {
            PyObject *call_args[] = {tmp_args_element_name_13, tmp_args_element_name_14};
            tmp_assattr_name_10 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_7, call_args);
        }

        Py_DECREF(tmp_called_name_7);
        Py_DECREF(tmp_args_element_name_13);
        if (tmp_assattr_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_10 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_assattr_target_10 == NULL)) {
            tmp_assattr_target_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_assattr_target_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_10);

            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[43], tmp_assattr_name_10);
        Py_DECREF(tmp_assattr_name_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION_wx$adv$$$function_3__GenericCalendarCtrl_PyGetDate();

        UPDATE_STRING_DICT1(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assattr_name_11;
        PyObject *tmp_called_name_8;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_assattr_target_11;
        tmp_expression_name_14 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_14 == NULL)) {
            tmp_expression_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_called_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[27]);
        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_15 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_args_element_name_15 == NULL)) {
            tmp_args_element_name_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_args_element_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_8);

            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_16 = mod_consts[28];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 48;
        {
            PyObject *call_args[] = {tmp_args_element_name_15, tmp_args_element_name_16};
            tmp_assattr_name_11 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_8, call_args);
        }

        Py_DECREF(tmp_called_name_8);
        if (tmp_assattr_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_11 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_assattr_target_11 == NULL)) {
            tmp_assattr_target_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_assattr_target_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_11);

            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[30], tmp_assattr_name_11);
        Py_DECREF(tmp_assattr_name_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
    }
    tmp_res = PyDict_DelItem((PyObject *)moduledict_wx$adv, mod_consts[44]);
    tmp_result = tmp_res != -1;
    if (tmp_result == false) CLEAR_ERROR_OCCURRED();

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[44]);
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 49;

        goto frame_exception_exit_1;
    }

    {
        PyObject *tmp_assattr_name_12;
        PyObject *tmp_called_name_9;
        PyObject *tmp_expression_name_15;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_expression_name_16;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_assattr_target_12;
        tmp_expression_name_15 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_15 == NULL)) {
            tmp_expression_name_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        tmp_called_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, mod_consts[27]);
        if (tmp_called_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_16 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_expression_name_16 == NULL)) {
            tmp_expression_name_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_expression_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_9);

            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_17 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, mod_consts[31]);
        if (tmp_args_element_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_9);

            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_18 = mod_consts[32];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 50;
        {
            PyObject *call_args[] = {tmp_args_element_name_17, tmp_args_element_name_18};
            tmp_assattr_name_12 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_9, call_args);
        }

        Py_DECREF(tmp_called_name_9);
        Py_DECREF(tmp_args_element_name_17);
        if (tmp_assattr_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_12 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_assattr_target_12 == NULL)) {
            tmp_assattr_target_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_assattr_target_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_12);

            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[33], tmp_assattr_name_12);
        Py_DECREF(tmp_assattr_name_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_13;
        PyObject *tmp_called_name_10;
        PyObject *tmp_expression_name_17;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_expression_name_18;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_assattr_target_13;
        tmp_expression_name_17 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_17 == NULL)) {
            tmp_expression_name_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        tmp_called_name_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_17, mod_consts[27]);
        if (tmp_called_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_18 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_expression_name_18 == NULL)) {
            tmp_expression_name_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_expression_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_10);

            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_19 = LOOKUP_ATTRIBUTE(tmp_expression_name_18, mod_consts[41]);
        if (tmp_args_element_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_10);

            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_20 = mod_consts[42];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 51;
        {
            PyObject *call_args[] = {tmp_args_element_name_19, tmp_args_element_name_20};
            tmp_assattr_name_13 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_10, call_args);
        }

        Py_DECREF(tmp_called_name_10);
        Py_DECREF(tmp_args_element_name_19);
        if (tmp_assattr_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_13 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_assattr_target_13 == NULL)) {
            tmp_assattr_target_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_assattr_target_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_13);

            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[43], tmp_assattr_name_13);
        Py_DECREF(tmp_assattr_name_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_name_11;
        PyObject *tmp_expression_name_19;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_args_element_name_22;
        tmp_expression_name_19 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_19 == NULL)) {
            tmp_expression_name_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        tmp_called_name_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_19, mod_consts[34]);
        if (tmp_called_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_21 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_args_element_name_21 == NULL)) {
            tmp_args_element_name_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_args_element_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_11);

            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_22 = mod_consts[17];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 53;
        {
            PyObject *call_args[] = {tmp_args_element_name_21, tmp_args_element_name_22};
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_11, call_args);
        }

        Py_DECREF(tmp_called_name_11);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_12;
        PyObject *tmp_expression_name_20;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_args_element_name_24;
        tmp_expression_name_20 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_20 == NULL)) {
            tmp_expression_name_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        tmp_called_name_12 = LOOKUP_ATTRIBUTE(tmp_expression_name_20, mod_consts[34]);
        if (tmp_called_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_23 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_args_element_name_23 == NULL)) {
            tmp_args_element_name_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_args_element_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_12);

            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_24 = mod_consts[17];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 54;
        {
            PyObject *call_args[] = {tmp_args_element_name_23, tmp_args_element_name_24};
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_12, call_args);
        }

        Py_DECREF(tmp_called_name_12);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_13;
        PyObject *tmp_expression_name_21;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_args_element_name_26;
        tmp_expression_name_21 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_21 == NULL)) {
            tmp_expression_name_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        tmp_called_name_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_21, mod_consts[34]);
        if (tmp_called_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_25 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_args_element_name_25 == NULL)) {
            tmp_args_element_name_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_args_element_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_13);

            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_26 = mod_consts[17];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 55;
        {
            PyObject *call_args[] = {tmp_args_element_name_25, tmp_args_element_name_26};
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_13, call_args);
        }

        Py_DECREF(tmp_called_name_13);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_14;
        PyObject *tmp_expression_name_22;
        PyObject *tmp_args_element_name_27;
        PyObject *tmp_args_element_name_28;
        tmp_expression_name_22 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_22 == NULL)) {
            tmp_expression_name_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        tmp_called_name_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_22, mod_consts[34]);
        if (tmp_called_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_27 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_args_element_name_27 == NULL)) {
            tmp_args_element_name_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_args_element_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_14);

            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_28 = mod_consts[17];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 56;
        {
            PyObject *call_args[] = {tmp_args_element_name_27, tmp_args_element_name_28};
            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_14, call_args);
        }

        Py_DECREF(tmp_called_name_14);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_name_15;
        PyObject *tmp_expression_name_23;
        PyObject *tmp_args_element_name_29;
        PyObject *tmp_args_element_name_30;
        tmp_expression_name_23 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_23 == NULL)) {
            tmp_expression_name_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        tmp_called_name_15 = LOOKUP_ATTRIBUTE(tmp_expression_name_23, mod_consts[34]);
        if (tmp_called_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_29 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_args_element_name_29 == NULL)) {
            tmp_args_element_name_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_args_element_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_15);

            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_30 = mod_consts[17];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 57;
        {
            PyObject *call_args[] = {tmp_args_element_name_29, tmp_args_element_name_30};
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_15, call_args);
        }

        Py_DECREF(tmp_called_name_15);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_name_16;
        PyObject *tmp_expression_name_24;
        PyObject *tmp_args_element_name_31;
        PyObject *tmp_args_element_name_32;
        tmp_expression_name_24 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_24 == NULL)) {
            tmp_expression_name_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        tmp_called_name_16 = LOOKUP_ATTRIBUTE(tmp_expression_name_24, mod_consts[34]);
        if (tmp_called_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_31 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_args_element_name_31 == NULL)) {
            tmp_args_element_name_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_args_element_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_16);

            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_32 = mod_consts[17];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 60;
        {
            PyObject *call_args[] = {tmp_args_element_name_31, tmp_args_element_name_32};
            tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_16, call_args);
        }

        Py_DECREF(tmp_called_name_16);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_name_17;
        PyObject *tmp_expression_name_25;
        PyObject *tmp_args_element_name_33;
        PyObject *tmp_args_element_name_34;
        tmp_expression_name_25 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_25 == NULL)) {
            tmp_expression_name_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        tmp_called_name_17 = LOOKUP_ATTRIBUTE(tmp_expression_name_25, mod_consts[34]);
        if (tmp_called_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_33 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_args_element_name_33 == NULL)) {
            tmp_args_element_name_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_args_element_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_17);

            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_34 = mod_consts[17];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 61;
        {
            PyObject *call_args[] = {tmp_args_element_name_33, tmp_args_element_name_34};
            tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_17, call_args);
        }

        Py_DECREF(tmp_called_name_17);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_name_18;
        PyObject *tmp_expression_name_26;
        PyObject *tmp_args_element_name_35;
        PyObject *tmp_args_element_name_36;
        tmp_expression_name_26 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_26 == NULL)) {
            tmp_expression_name_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        tmp_called_name_18 = LOOKUP_ATTRIBUTE(tmp_expression_name_26, mod_consts[34]);
        if (tmp_called_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_35 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_args_element_name_35 == NULL)) {
            tmp_args_element_name_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_args_element_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_18);

            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_36 = mod_consts[17];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 62;
        {
            PyObject *call_args[] = {tmp_args_element_name_35, tmp_args_element_name_36};
            tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_18, call_args);
        }

        Py_DECREF(tmp_called_name_18);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_name_19;
        PyObject *tmp_expression_name_27;
        PyObject *tmp_args_element_name_37;
        PyObject *tmp_args_element_name_38;
        tmp_expression_name_27 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_27 == NULL)) {
            tmp_expression_name_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        tmp_called_name_19 = LOOKUP_ATTRIBUTE(tmp_expression_name_27, mod_consts[34]);
        if (tmp_called_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_37 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_args_element_name_37 == NULL)) {
            tmp_args_element_name_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_args_element_name_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_19);

            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_38 = mod_consts[17];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 64;
        {
            PyObject *call_args[] = {tmp_args_element_name_37, tmp_args_element_name_38};
            tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_19, call_args);
        }

        Py_DECREF(tmp_called_name_19);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_assign_source_19 == NULL)) {
            tmp_assign_source_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_name_20;
        PyObject *tmp_expression_name_28;
        PyObject *tmp_args_element_name_39;
        tmp_expression_name_28 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_28 == NULL)) {
            tmp_expression_name_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_called_name_20 = LOOKUP_ATTRIBUTE(tmp_expression_name_28, mod_consts[34]);
        if (tmp_called_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_39 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_args_element_name_39 == NULL)) {
            tmp_args_element_name_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_args_element_name_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_20);

            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 69;
        tmp_assign_source_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_20, tmp_args_element_name_39);
        Py_DECREF(tmp_called_name_20);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_name_21;
        PyObject *tmp_expression_name_29;
        PyObject *tmp_args_element_name_40;
        tmp_expression_name_29 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_29 == NULL)) {
            tmp_expression_name_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        tmp_called_name_21 = LOOKUP_ATTRIBUTE(tmp_expression_name_29, mod_consts[34]);
        if (tmp_called_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_40 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_args_element_name_40 == NULL)) {
            tmp_args_element_name_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_args_element_name_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_21);

            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 70;
        tmp_assign_source_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_21, tmp_args_element_name_40);
        Py_DECREF(tmp_called_name_21);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_name_22;
        PyObject *tmp_expression_name_30;
        PyObject *tmp_args_element_name_41;
        tmp_expression_name_30 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_30 == NULL)) {
            tmp_expression_name_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        tmp_called_name_22 = LOOKUP_ATTRIBUTE(tmp_expression_name_30, mod_consts[34]);
        if (tmp_called_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_41 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_args_element_name_41 == NULL)) {
            tmp_args_element_name_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_args_element_name_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_22);

            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 71;
        tmp_assign_source_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_22, tmp_args_element_name_41);
        Py_DECREF(tmp_called_name_22);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_name_23;
        PyObject *tmp_expression_name_31;
        PyObject *tmp_args_element_name_42;
        tmp_expression_name_31 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_31 == NULL)) {
            tmp_expression_name_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        tmp_called_name_23 = LOOKUP_ATTRIBUTE(tmp_expression_name_31, mod_consts[34]);
        if (tmp_called_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_42 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_args_element_name_42 == NULL)) {
            tmp_args_element_name_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_args_element_name_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_23);

            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 72;
        tmp_assign_source_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_23, tmp_args_element_name_42);
        Py_DECREF(tmp_called_name_23);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_name_24;
        PyObject *tmp_expression_name_32;
        PyObject *tmp_args_element_name_43;
        tmp_expression_name_32 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_32 == NULL)) {
            tmp_expression_name_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        tmp_called_name_24 = LOOKUP_ATTRIBUTE(tmp_expression_name_32, mod_consts[34]);
        if (tmp_called_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_43 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_args_element_name_43 == NULL)) {
            tmp_args_element_name_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_args_element_name_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_24);

            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 73;
        tmp_assign_source_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_24, tmp_args_element_name_43);
        Py_DECREF(tmp_called_name_24);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_name_25;
        PyObject *tmp_expression_name_33;
        PyObject *tmp_args_element_name_44;
        tmp_expression_name_33 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_33 == NULL)) {
            tmp_expression_name_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        tmp_called_name_25 = LOOKUP_ATTRIBUTE(tmp_expression_name_33, mod_consts[34]);
        if (tmp_called_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_44 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_args_element_name_44 == NULL)) {
            tmp_args_element_name_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
        }

        if (tmp_args_element_name_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_25);

            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 74;
        tmp_assign_source_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_25, tmp_args_element_name_44);
        Py_DECREF(tmp_called_name_25);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_name_26;
        PyObject *tmp_expression_name_34;
        PyObject *tmp_args_element_name_45;
        tmp_expression_name_34 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_34 == NULL)) {
            tmp_expression_name_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        tmp_called_name_26 = LOOKUP_ATTRIBUTE(tmp_expression_name_34, mod_consts[34]);
        if (tmp_called_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_45 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_args_element_name_45 == NULL)) {
            tmp_args_element_name_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_args_element_name_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_26);

            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 75;
        tmp_assign_source_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_26, tmp_args_element_name_45);
        Py_DECREF(tmp_called_name_26);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_name_27;
        PyObject *tmp_expression_name_35;
        PyObject *tmp_args_element_name_46;
        tmp_expression_name_35 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_35 == NULL)) {
            tmp_expression_name_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        tmp_called_name_27 = LOOKUP_ATTRIBUTE(tmp_expression_name_35, mod_consts[34]);
        if (tmp_called_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_46 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_args_element_name_46 == NULL)) {
            tmp_args_element_name_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_args_element_name_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_27);

            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 76;
        tmp_assign_source_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_27, tmp_args_element_name_46);
        Py_DECREF(tmp_called_name_27);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_name_28;
        PyObject *tmp_expression_name_36;
        PyObject *tmp_args_element_name_47;
        tmp_expression_name_36 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_36 == NULL)) {
            tmp_expression_name_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_called_name_28 = LOOKUP_ATTRIBUTE(tmp_expression_name_36, mod_consts[34]);
        if (tmp_called_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_47 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_args_element_name_47 == NULL)) {
            tmp_args_element_name_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
        }

        if (tmp_args_element_name_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_28);

            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 77;
        tmp_assign_source_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_28, tmp_args_element_name_47);
        Py_DECREF(tmp_called_name_28);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_name_29;
        PyObject *tmp_expression_name_37;
        PyObject *tmp_args_element_name_48;
        tmp_expression_name_37 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_37 == NULL)) {
            tmp_expression_name_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_called_name_29 = LOOKUP_ATTRIBUTE(tmp_expression_name_37, mod_consts[34]);
        if (tmp_called_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_48 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_args_element_name_48 == NULL)) {
            tmp_args_element_name_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_args_element_name_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_29);

            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 78;
        tmp_assign_source_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_29, tmp_args_element_name_48);
        Py_DECREF(tmp_called_name_29);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;


        tmp_assign_source_30 = MAKE_FUNCTION_wx$adv$$$function_4__AnimationDecoderList___repr__();

        UPDATE_STRING_DICT1(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assattr_name_14;
        PyObject *tmp_assattr_target_14;
        tmp_assattr_name_14 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_assattr_name_14 == NULL)) {
            tmp_assattr_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        assert(!(tmp_assattr_name_14 == NULL));
        tmp_assattr_target_14 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_assattr_target_14 == NULL)) {
            tmp_assattr_target_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_assattr_target_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_14, mod_consts[87], tmp_assattr_name_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
    }
    tmp_res = PyDict_DelItem((PyObject *)moduledict_wx$adv, mod_consts[85]);
    tmp_result = tmp_res != -1;
    if (tmp_result == false) CLEAR_ERROR_OCCURRED();

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[85]);
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 83;

        goto frame_exception_exit_1;
    }

    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_assign_source_31 == NULL)) {
            tmp_assign_source_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_assign_source_32 == NULL)) {
            tmp_assign_source_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_assign_source_33 == NULL)) {
            tmp_assign_source_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_name_30;
        PyObject *tmp_expression_name_38;
        PyObject *tmp_args_element_name_49;
        PyObject *tmp_args_element_name_50;
        tmp_expression_name_38 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_38 == NULL)) {
            tmp_expression_name_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        tmp_called_name_30 = LOOKUP_ATTRIBUTE(tmp_expression_name_38, mod_consts[34]);
        if (tmp_called_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_49 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_args_element_name_49 == NULL)) {
            tmp_args_element_name_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
        }

        if (tmp_args_element_name_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_30);

            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_50 = mod_consts[17];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 88;
        {
            PyObject *call_args[] = {tmp_args_element_name_49, tmp_args_element_name_50};
            tmp_assign_source_34 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_30, call_args);
        }

        Py_DECREF(tmp_called_name_30);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_name_31;
        PyObject *tmp_expression_name_39;
        PyObject *tmp_args_element_name_51;
        PyObject *tmp_args_element_name_52;
        tmp_expression_name_39 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_39 == NULL)) {
            tmp_expression_name_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        tmp_called_name_31 = LOOKUP_ATTRIBUTE(tmp_expression_name_39, mod_consts[34]);
        if (tmp_called_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_51 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_args_element_name_51 == NULL)) {
            tmp_args_element_name_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
        }

        if (tmp_args_element_name_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_31);

            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_52 = mod_consts[96];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 89;
        {
            PyObject *call_args[] = {tmp_args_element_name_51, tmp_args_element_name_52};
            tmp_assign_source_35 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_31, call_args);
        }

        Py_DECREF(tmp_called_name_31);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_name_32;
        PyObject *tmp_expression_name_40;
        PyObject *tmp_args_element_name_53;
        tmp_expression_name_40 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_40 == NULL)) {
            tmp_expression_name_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        tmp_called_name_32 = LOOKUP_ATTRIBUTE(tmp_expression_name_40, mod_consts[34]);
        if (tmp_called_name_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_53 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_args_element_name_53 == NULL)) {
            tmp_args_element_name_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
        }

        if (tmp_args_element_name_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_32);

            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 91;
        tmp_assign_source_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_32, tmp_args_element_name_53);
        Py_DECREF(tmp_called_name_32);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_name_33;
        PyObject *tmp_expression_name_41;
        PyObject *tmp_args_element_name_54;
        tmp_expression_name_41 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_41 == NULL)) {
            tmp_expression_name_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        tmp_called_name_33 = LOOKUP_ATTRIBUTE(tmp_expression_name_41, mod_consts[34]);
        if (tmp_called_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_54 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_args_element_name_54 == NULL)) {
            tmp_args_element_name_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
        }

        if (tmp_args_element_name_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_33);

            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 92;
        tmp_assign_source_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_33, tmp_args_element_name_54);
        Py_DECREF(tmp_called_name_33);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_name_34;
        PyObject *tmp_expression_name_42;
        PyObject *tmp_args_element_name_55;
        PyObject *tmp_args_element_name_56;
        tmp_expression_name_42 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_42 == NULL)) {
            tmp_expression_name_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        tmp_called_name_34 = LOOKUP_ATTRIBUTE(tmp_expression_name_42, mod_consts[27]);
        if (tmp_called_name_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_55 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_args_element_name_55 == NULL)) {
            tmp_args_element_name_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_args_element_name_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_34);

            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_56 = mod_consts[103];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 94;
        {
            PyObject *call_args[] = {tmp_args_element_name_55, tmp_args_element_name_56};
            tmp_assign_source_38 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_34, call_args);
        }

        Py_DECREF(tmp_called_name_34);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_name_35;
        PyObject *tmp_expression_name_43;
        PyObject *tmp_args_element_name_57;
        PyObject *tmp_args_element_name_58;
        tmp_expression_name_43 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_43 == NULL)) {
            tmp_expression_name_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        tmp_called_name_35 = LOOKUP_ATTRIBUTE(tmp_expression_name_43, mod_consts[34]);
        if (tmp_called_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_57 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_args_element_name_57 == NULL)) {
            tmp_args_element_name_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[105]);
        }

        if (tmp_args_element_name_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_35);

            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_58 = mod_consts[17];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 96;
        {
            PyObject *call_args[] = {tmp_args_element_name_57, tmp_args_element_name_58};
            tmp_assign_source_39 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_35, call_args);
        }

        Py_DECREF(tmp_called_name_35);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_name_36;
        PyObject *tmp_expression_name_44;
        PyObject *tmp_args_element_name_59;
        PyObject *tmp_args_element_name_60;
        tmp_expression_name_44 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_44 == NULL)) {
            tmp_expression_name_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        tmp_called_name_36 = LOOKUP_ATTRIBUTE(tmp_expression_name_44, mod_consts[34]);
        if (tmp_called_name_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_59 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_args_element_name_59 == NULL)) {
            tmp_args_element_name_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
        }

        if (tmp_args_element_name_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_36);

            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_60 = mod_consts[17];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 97;
        {
            PyObject *call_args[] = {tmp_args_element_name_59, tmp_args_element_name_60};
            tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_36, call_args);
        }

        Py_DECREF(tmp_called_name_36);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_name_37;
        PyObject *tmp_expression_name_45;
        PyObject *tmp_args_element_name_61;
        PyObject *tmp_args_element_name_62;
        tmp_expression_name_45 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_45 == NULL)) {
            tmp_expression_name_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        tmp_called_name_37 = LOOKUP_ATTRIBUTE(tmp_expression_name_45, mod_consts[34]);
        if (tmp_called_name_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_61 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_args_element_name_61 == NULL)) {
            tmp_args_element_name_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
        }

        if (tmp_args_element_name_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_37);

            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_62 = mod_consts[17];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 98;
        {
            PyObject *call_args[] = {tmp_args_element_name_61, tmp_args_element_name_62};
            tmp_assign_source_41 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_37, call_args);
        }

        Py_DECREF(tmp_called_name_37);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_name_38;
        PyObject *tmp_expression_name_46;
        PyObject *tmp_args_element_name_63;
        PyObject *tmp_args_element_name_64;
        tmp_expression_name_46 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_46 == NULL)) {
            tmp_expression_name_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_called_name_38 = LOOKUP_ATTRIBUTE(tmp_expression_name_46, mod_consts[34]);
        if (tmp_called_name_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_63 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_args_element_name_63 == NULL)) {
            tmp_args_element_name_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[111]);
        }

        if (tmp_args_element_name_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_38);

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_64 = mod_consts[17];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 99;
        {
            PyObject *call_args[] = {tmp_args_element_name_63, tmp_args_element_name_64};
            tmp_assign_source_42 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_38, call_args);
        }

        Py_DECREF(tmp_called_name_38);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_name_39;
        PyObject *tmp_expression_name_47;
        PyObject *tmp_args_element_name_65;
        PyObject *tmp_args_element_name_66;
        tmp_expression_name_47 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_47 == NULL)) {
            tmp_expression_name_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        tmp_called_name_39 = LOOKUP_ATTRIBUTE(tmp_expression_name_47, mod_consts[34]);
        if (tmp_called_name_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_65 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_args_element_name_65 == NULL)) {
            tmp_args_element_name_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
        }

        if (tmp_args_element_name_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_39);

            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_66 = mod_consts[17];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 100;
        {
            PyObject *call_args[] = {tmp_args_element_name_65, tmp_args_element_name_66};
            tmp_assign_source_43 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_39, call_args);
        }

        Py_DECREF(tmp_called_name_39);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_name_40;
        PyObject *tmp_expression_name_48;
        PyObject *tmp_args_element_name_67;
        PyObject *tmp_args_element_name_68;
        tmp_expression_name_48 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_48 == NULL)) {
            tmp_expression_name_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        tmp_called_name_40 = LOOKUP_ATTRIBUTE(tmp_expression_name_48, mod_consts[34]);
        if (tmp_called_name_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_67 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_args_element_name_67 == NULL)) {
            tmp_args_element_name_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_args_element_name_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_40);

            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_68 = mod_consts[17];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 101;
        {
            PyObject *call_args[] = {tmp_args_element_name_67, tmp_args_element_name_68};
            tmp_assign_source_44 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_40, call_args);
        }

        Py_DECREF(tmp_called_name_40);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_name_41;
        PyObject *tmp_expression_name_49;
        PyObject *tmp_args_element_name_69;
        PyObject *tmp_args_element_name_70;
        tmp_expression_name_49 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_49 == NULL)) {
            tmp_expression_name_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_called_name_41 = LOOKUP_ATTRIBUTE(tmp_expression_name_49, mod_consts[34]);
        if (tmp_called_name_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_69 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[117]);

        if (unlikely(tmp_args_element_name_69 == NULL)) {
            tmp_args_element_name_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[117]);
        }

        if (tmp_args_element_name_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_41);

            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_70 = mod_consts[17];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 102;
        {
            PyObject *call_args[] = {tmp_args_element_name_69, tmp_args_element_name_70};
            tmp_assign_source_45 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_41, call_args);
        }

        Py_DECREF(tmp_called_name_41);
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assattr_name_15;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_71;
        PyObject *tmp_args_element_name_72;
        PyObject *tmp_assattr_target_15;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }


        tmp_args_element_name_71 = MAKE_FUNCTION_wx$adv$$$function_5_lambda();

        tmp_args_element_name_72 = mod_consts[120];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 104;
        {
            PyObject *call_args[] = {tmp_args_element_name_71, tmp_args_element_name_72};
            tmp_assattr_name_15 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_1, mod_consts[27], call_args);
        }

        Py_DECREF(tmp_args_element_name_71);
        if (tmp_assattr_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_15 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_assattr_target_15 == NULL)) {
            tmp_assattr_target_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_assattr_target_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_15);

            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_15, mod_consts[122], tmp_assattr_name_15);
        Py_DECREF(tmp_assattr_name_15);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_16;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_73;
        PyObject *tmp_args_element_name_74;
        PyObject *tmp_assattr_target_16;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }


        tmp_args_element_name_73 = MAKE_FUNCTION_wx$adv$$$function_6_lambda();

        tmp_args_element_name_74 = mod_consts[123];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 105;
        {
            PyObject *call_args[] = {tmp_args_element_name_73, tmp_args_element_name_74};
            tmp_assattr_name_16 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_2, mod_consts[27], call_args);
        }

        Py_DECREF(tmp_args_element_name_73);
        if (tmp_assattr_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_16 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_assattr_target_16 == NULL)) {
            tmp_assattr_target_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_assattr_target_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_16);

            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_16, mod_consts[124], tmp_assattr_name_16);
        Py_DECREF(tmp_assattr_name_16);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_17;
        PyObject *tmp_called_name_42;
        PyObject *tmp_expression_name_50;
        PyObject *tmp_args_element_name_75;
        PyObject *tmp_expression_name_51;
        PyObject *tmp_args_element_name_76;
        PyObject *tmp_assattr_target_17;
        tmp_expression_name_50 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_50 == NULL)) {
            tmp_expression_name_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        tmp_called_name_42 = LOOKUP_ATTRIBUTE(tmp_expression_name_50, mod_consts[27]);
        if (tmp_called_name_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_51 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_expression_name_51 == NULL)) {
            tmp_expression_name_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_expression_name_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_42);

            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_75 = LOOKUP_ATTRIBUTE(tmp_expression_name_51, mod_consts[125]);
        if (tmp_args_element_name_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_42);

            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_76 = mod_consts[126];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 106;
        {
            PyObject *call_args[] = {tmp_args_element_name_75, tmp_args_element_name_76};
            tmp_assattr_name_17 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_42, call_args);
        }

        Py_DECREF(tmp_called_name_42);
        Py_DECREF(tmp_args_element_name_75);
        if (tmp_assattr_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_17 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_assattr_target_17 == NULL)) {
            tmp_assattr_target_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_assattr_target_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_17);

            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_17, mod_consts[127], tmp_assattr_name_17);
        Py_DECREF(tmp_assattr_name_17);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_18;
        PyObject *tmp_called_name_43;
        PyObject *tmp_expression_name_52;
        PyObject *tmp_args_element_name_77;
        PyObject *tmp_expression_name_53;
        PyObject *tmp_args_element_name_78;
        PyObject *tmp_assattr_target_18;
        tmp_expression_name_52 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_52 == NULL)) {
            tmp_expression_name_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        tmp_called_name_43 = LOOKUP_ATTRIBUTE(tmp_expression_name_52, mod_consts[27]);
        if (tmp_called_name_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_53 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_expression_name_53 == NULL)) {
            tmp_expression_name_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_expression_name_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_43);

            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_77 = LOOKUP_ATTRIBUTE(tmp_expression_name_53, mod_consts[128]);
        if (tmp_args_element_name_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_43);

            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_78 = mod_consts[129];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 107;
        {
            PyObject *call_args[] = {tmp_args_element_name_77, tmp_args_element_name_78};
            tmp_assattr_name_18 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_43, call_args);
        }

        Py_DECREF(tmp_called_name_43);
        Py_DECREF(tmp_args_element_name_77);
        if (tmp_assattr_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_18 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_assattr_target_18 == NULL)) {
            tmp_assattr_target_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_assattr_target_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_18);

            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_18, mod_consts[130], tmp_assattr_name_18);
        Py_DECREF(tmp_assattr_name_18);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_19;
        PyObject *tmp_called_name_44;
        PyObject *tmp_expression_name_54;
        PyObject *tmp_args_element_name_79;
        PyObject *tmp_expression_name_55;
        PyObject *tmp_args_element_name_80;
        PyObject *tmp_assattr_target_19;
        tmp_expression_name_54 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_54 == NULL)) {
            tmp_expression_name_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        tmp_called_name_44 = LOOKUP_ATTRIBUTE(tmp_expression_name_54, mod_consts[27]);
        if (tmp_called_name_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_55 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_expression_name_55 == NULL)) {
            tmp_expression_name_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_expression_name_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_44);

            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_79 = LOOKUP_ATTRIBUTE(tmp_expression_name_55, mod_consts[131]);
        if (tmp_args_element_name_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_44);

            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_80 = mod_consts[132];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 108;
        {
            PyObject *call_args[] = {tmp_args_element_name_79, tmp_args_element_name_80};
            tmp_assattr_name_19 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_44, call_args);
        }

        Py_DECREF(tmp_called_name_44);
        Py_DECREF(tmp_args_element_name_79);
        if (tmp_assattr_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_19 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_assattr_target_19 == NULL)) {
            tmp_assattr_target_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_assattr_target_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_19);

            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_19, mod_consts[133], tmp_assattr_name_19);
        Py_DECREF(tmp_assattr_name_19);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_20;
        PyObject *tmp_called_name_45;
        PyObject *tmp_expression_name_56;
        PyObject *tmp_args_element_name_81;
        PyObject *tmp_expression_name_57;
        PyObject *tmp_args_element_name_82;
        PyObject *tmp_assattr_target_20;
        tmp_expression_name_56 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_56 == NULL)) {
            tmp_expression_name_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        tmp_called_name_45 = LOOKUP_ATTRIBUTE(tmp_expression_name_56, mod_consts[27]);
        if (tmp_called_name_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_57 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_expression_name_57 == NULL)) {
            tmp_expression_name_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_expression_name_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_45);

            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_81 = LOOKUP_ATTRIBUTE(tmp_expression_name_57, mod_consts[134]);
        if (tmp_args_element_name_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_45);

            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_82 = mod_consts[135];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 109;
        {
            PyObject *call_args[] = {tmp_args_element_name_81, tmp_args_element_name_82};
            tmp_assattr_name_20 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_45, call_args);
        }

        Py_DECREF(tmp_called_name_45);
        Py_DECREF(tmp_args_element_name_81);
        if (tmp_assattr_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_20 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_assattr_target_20 == NULL)) {
            tmp_assattr_target_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_assattr_target_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_20);

            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_20, mod_consts[136], tmp_assattr_name_20);
        Py_DECREF(tmp_assattr_name_20);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_21;
        PyObject *tmp_called_name_46;
        PyObject *tmp_expression_name_58;
        PyObject *tmp_args_element_name_83;
        PyObject *tmp_expression_name_59;
        PyObject *tmp_args_element_name_84;
        PyObject *tmp_assattr_target_21;
        tmp_expression_name_58 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_58 == NULL)) {
            tmp_expression_name_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        tmp_called_name_46 = LOOKUP_ATTRIBUTE(tmp_expression_name_58, mod_consts[27]);
        if (tmp_called_name_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_59 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_expression_name_59 == NULL)) {
            tmp_expression_name_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_expression_name_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_46);

            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_83 = LOOKUP_ATTRIBUTE(tmp_expression_name_59, mod_consts[137]);
        if (tmp_args_element_name_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_46);

            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_84 = mod_consts[135];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 110;
        {
            PyObject *call_args[] = {tmp_args_element_name_83, tmp_args_element_name_84};
            tmp_assattr_name_21 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_46, call_args);
        }

        Py_DECREF(tmp_called_name_46);
        Py_DECREF(tmp_args_element_name_83);
        if (tmp_assattr_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_21 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_assattr_target_21 == NULL)) {
            tmp_assattr_target_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_assattr_target_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_21);

            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_21, mod_consts[138], tmp_assattr_name_21);
        Py_DECREF(tmp_assattr_name_21);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_22;
        PyObject *tmp_called_name_47;
        PyObject *tmp_expression_name_60;
        PyObject *tmp_args_element_name_85;
        PyObject *tmp_expression_name_61;
        PyObject *tmp_args_element_name_86;
        PyObject *tmp_assattr_target_22;
        tmp_expression_name_60 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_60 == NULL)) {
            tmp_expression_name_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        tmp_called_name_47 = LOOKUP_ATTRIBUTE(tmp_expression_name_60, mod_consts[27]);
        if (tmp_called_name_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_61 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_expression_name_61 == NULL)) {
            tmp_expression_name_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_expression_name_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_47);

            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_85 = LOOKUP_ATTRIBUTE(tmp_expression_name_61, mod_consts[139]);
        if (tmp_args_element_name_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_47);

            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_86 = mod_consts[140];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 111;
        {
            PyObject *call_args[] = {tmp_args_element_name_85, tmp_args_element_name_86};
            tmp_assattr_name_22 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_47, call_args);
        }

        Py_DECREF(tmp_called_name_47);
        Py_DECREF(tmp_args_element_name_85);
        if (tmp_assattr_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_22 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_assattr_target_22 == NULL)) {
            tmp_assattr_target_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_assattr_target_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_22);

            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_22, mod_consts[141], tmp_assattr_name_22);
        Py_DECREF(tmp_assattr_name_22);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_23;
        PyObject *tmp_called_name_48;
        PyObject *tmp_expression_name_62;
        PyObject *tmp_args_element_name_87;
        PyObject *tmp_expression_name_63;
        PyObject *tmp_args_element_name_88;
        PyObject *tmp_assattr_target_23;
        tmp_expression_name_62 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_62 == NULL)) {
            tmp_expression_name_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        tmp_called_name_48 = LOOKUP_ATTRIBUTE(tmp_expression_name_62, mod_consts[27]);
        if (tmp_called_name_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_63 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_expression_name_63 == NULL)) {
            tmp_expression_name_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_expression_name_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_48);

            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_87 = LOOKUP_ATTRIBUTE(tmp_expression_name_63, mod_consts[142]);
        if (tmp_args_element_name_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_48);

            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_88 = mod_consts[143];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 112;
        {
            PyObject *call_args[] = {tmp_args_element_name_87, tmp_args_element_name_88};
            tmp_assattr_name_23 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_48, call_args);
        }

        Py_DECREF(tmp_called_name_48);
        Py_DECREF(tmp_args_element_name_87);
        if (tmp_assattr_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_23 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_assattr_target_23 == NULL)) {
            tmp_assattr_target_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_assattr_target_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_23);

            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_23, mod_consts[144], tmp_assattr_name_23);
        Py_DECREF(tmp_assattr_name_23);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_24;
        PyObject *tmp_called_name_49;
        PyObject *tmp_expression_name_64;
        PyObject *tmp_args_element_name_89;
        PyObject *tmp_expression_name_65;
        PyObject *tmp_args_element_name_90;
        PyObject *tmp_assattr_target_24;
        tmp_expression_name_64 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_64 == NULL)) {
            tmp_expression_name_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        tmp_called_name_49 = LOOKUP_ATTRIBUTE(tmp_expression_name_64, mod_consts[27]);
        if (tmp_called_name_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_65 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_expression_name_65 == NULL)) {
            tmp_expression_name_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_expression_name_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_49);

            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_89 = LOOKUP_ATTRIBUTE(tmp_expression_name_65, mod_consts[145]);
        if (tmp_args_element_name_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_49);

            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_90 = mod_consts[146];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 113;
        {
            PyObject *call_args[] = {tmp_args_element_name_89, tmp_args_element_name_90};
            tmp_assattr_name_24 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_49, call_args);
        }

        Py_DECREF(tmp_called_name_49);
        Py_DECREF(tmp_args_element_name_89);
        if (tmp_assattr_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_24 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_assattr_target_24 == NULL)) {
            tmp_assattr_target_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_assattr_target_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_24);

            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_24, mod_consts[147], tmp_assattr_name_24);
        Py_DECREF(tmp_assattr_name_24);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_25;
        PyObject *tmp_called_name_50;
        PyObject *tmp_expression_name_66;
        PyObject *tmp_args_element_name_91;
        PyObject *tmp_expression_name_67;
        PyObject *tmp_args_element_name_92;
        PyObject *tmp_assattr_target_25;
        tmp_expression_name_66 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_66 == NULL)) {
            tmp_expression_name_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        tmp_called_name_50 = LOOKUP_ATTRIBUTE(tmp_expression_name_66, mod_consts[27]);
        if (tmp_called_name_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_67 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_expression_name_67 == NULL)) {
            tmp_expression_name_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_expression_name_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_50);

            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_91 = LOOKUP_ATTRIBUTE(tmp_expression_name_67, mod_consts[145]);
        if (tmp_args_element_name_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_50);

            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_92 = mod_consts[146];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 114;
        {
            PyObject *call_args[] = {tmp_args_element_name_91, tmp_args_element_name_92};
            tmp_assattr_name_25 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_50, call_args);
        }

        Py_DECREF(tmp_called_name_50);
        Py_DECREF(tmp_args_element_name_91);
        if (tmp_assattr_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_25 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_assattr_target_25 == NULL)) {
            tmp_assattr_target_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_assattr_target_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_25);

            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_25, mod_consts[148], tmp_assattr_name_25);
        Py_DECREF(tmp_assattr_name_25);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_26;
        PyObject *tmp_called_name_51;
        PyObject *tmp_expression_name_68;
        PyObject *tmp_args_element_name_93;
        PyObject *tmp_expression_name_69;
        PyObject *tmp_args_element_name_94;
        PyObject *tmp_assattr_target_26;
        tmp_expression_name_68 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_68 == NULL)) {
            tmp_expression_name_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_called_name_51 = LOOKUP_ATTRIBUTE(tmp_expression_name_68, mod_consts[27]);
        if (tmp_called_name_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_69 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_expression_name_69 == NULL)) {
            tmp_expression_name_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_expression_name_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_51);

            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_93 = LOOKUP_ATTRIBUTE(tmp_expression_name_69, mod_consts[149]);
        if (tmp_args_element_name_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_51);

            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_94 = mod_consts[146];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 115;
        {
            PyObject *call_args[] = {tmp_args_element_name_93, tmp_args_element_name_94};
            tmp_assattr_name_26 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_51, call_args);
        }

        Py_DECREF(tmp_called_name_51);
        Py_DECREF(tmp_args_element_name_93);
        if (tmp_assattr_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_26 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_assattr_target_26 == NULL)) {
            tmp_assattr_target_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_assattr_target_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_26);

            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_26, mod_consts[150], tmp_assattr_name_26);
        Py_DECREF(tmp_assattr_name_26);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_27;
        PyObject *tmp_called_name_52;
        PyObject *tmp_expression_name_70;
        PyObject *tmp_args_element_name_95;
        PyObject *tmp_expression_name_71;
        PyObject *tmp_args_element_name_96;
        PyObject *tmp_assattr_target_27;
        tmp_expression_name_70 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_70 == NULL)) {
            tmp_expression_name_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        tmp_called_name_52 = LOOKUP_ATTRIBUTE(tmp_expression_name_70, mod_consts[27]);
        if (tmp_called_name_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_71 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_expression_name_71 == NULL)) {
            tmp_expression_name_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_expression_name_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_52);

            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_95 = LOOKUP_ATTRIBUTE(tmp_expression_name_71, mod_consts[149]);
        if (tmp_args_element_name_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_52);

            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_96 = mod_consts[146];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 116;
        {
            PyObject *call_args[] = {tmp_args_element_name_95, tmp_args_element_name_96};
            tmp_assattr_name_27 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_52, call_args);
        }

        Py_DECREF(tmp_called_name_52);
        Py_DECREF(tmp_args_element_name_95);
        if (tmp_assattr_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_27 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_assattr_target_27 == NULL)) {
            tmp_assattr_target_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_assattr_target_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_27);

            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_27, mod_consts[151], tmp_assattr_name_27);
        Py_DECREF(tmp_assattr_name_27);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_28;
        PyObject *tmp_called_name_53;
        PyObject *tmp_expression_name_72;
        PyObject *tmp_args_element_name_97;
        PyObject *tmp_expression_name_73;
        PyObject *tmp_args_element_name_98;
        PyObject *tmp_assattr_target_28;
        tmp_expression_name_72 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_72 == NULL)) {
            tmp_expression_name_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_called_name_53 = LOOKUP_ATTRIBUTE(tmp_expression_name_72, mod_consts[27]);
        if (tmp_called_name_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_73 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_expression_name_73 == NULL)) {
            tmp_expression_name_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_expression_name_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_53);

            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_97 = LOOKUP_ATTRIBUTE(tmp_expression_name_73, mod_consts[152]);
        if (tmp_args_element_name_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_53);

            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_98 = mod_consts[153];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 117;
        {
            PyObject *call_args[] = {tmp_args_element_name_97, tmp_args_element_name_98};
            tmp_assattr_name_28 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_53, call_args);
        }

        Py_DECREF(tmp_called_name_53);
        Py_DECREF(tmp_args_element_name_97);
        if (tmp_assattr_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_28 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_assattr_target_28 == NULL)) {
            tmp_assattr_target_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_assattr_target_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_28);

            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_28, mod_consts[154], tmp_assattr_name_28);
        Py_DECREF(tmp_assattr_name_28);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_29;
        PyObject *tmp_called_name_54;
        PyObject *tmp_expression_name_74;
        PyObject *tmp_args_element_name_99;
        PyObject *tmp_expression_name_75;
        PyObject *tmp_args_element_name_100;
        PyObject *tmp_assattr_target_29;
        tmp_expression_name_74 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_74 == NULL)) {
            tmp_expression_name_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        tmp_called_name_54 = LOOKUP_ATTRIBUTE(tmp_expression_name_74, mod_consts[27]);
        if (tmp_called_name_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_75 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_expression_name_75 == NULL)) {
            tmp_expression_name_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_expression_name_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_54);

            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_99 = LOOKUP_ATTRIBUTE(tmp_expression_name_75, mod_consts[155]);
        if (tmp_args_element_name_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_54);

            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_100 = mod_consts[156];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 118;
        {
            PyObject *call_args[] = {tmp_args_element_name_99, tmp_args_element_name_100};
            tmp_assattr_name_29 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_54, call_args);
        }

        Py_DECREF(tmp_called_name_54);
        Py_DECREF(tmp_args_element_name_99);
        if (tmp_assattr_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_29 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_assattr_target_29 == NULL)) {
            tmp_assattr_target_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_assattr_target_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_29);

            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_29, mod_consts[157], tmp_assattr_name_29);
        Py_DECREF(tmp_assattr_name_29);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_30;
        PyObject *tmp_called_name_55;
        PyObject *tmp_expression_name_76;
        PyObject *tmp_args_element_name_101;
        PyObject *tmp_expression_name_77;
        PyObject *tmp_args_element_name_102;
        PyObject *tmp_assattr_target_30;
        tmp_expression_name_76 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_76 == NULL)) {
            tmp_expression_name_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_called_name_55 = LOOKUP_ATTRIBUTE(tmp_expression_name_76, mod_consts[27]);
        if (tmp_called_name_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_77 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_expression_name_77 == NULL)) {
            tmp_expression_name_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_expression_name_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_55);

            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_101 = LOOKUP_ATTRIBUTE(tmp_expression_name_77, mod_consts[155]);
        if (tmp_args_element_name_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_55);

            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_102 = mod_consts[156];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 119;
        {
            PyObject *call_args[] = {tmp_args_element_name_101, tmp_args_element_name_102};
            tmp_assattr_name_30 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_55, call_args);
        }

        Py_DECREF(tmp_called_name_55);
        Py_DECREF(tmp_args_element_name_101);
        if (tmp_assattr_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_30 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_assattr_target_30 == NULL)) {
            tmp_assattr_target_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_assattr_target_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_30);

            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_30, mod_consts[158], tmp_assattr_name_30);
        Py_DECREF(tmp_assattr_name_30);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_31;
        PyObject *tmp_called_name_56;
        PyObject *tmp_expression_name_78;
        PyObject *tmp_args_element_name_103;
        PyObject *tmp_expression_name_79;
        PyObject *tmp_args_element_name_104;
        PyObject *tmp_assattr_target_31;
        tmp_expression_name_78 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_78 == NULL)) {
            tmp_expression_name_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        tmp_called_name_56 = LOOKUP_ATTRIBUTE(tmp_expression_name_78, mod_consts[27]);
        if (tmp_called_name_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_79 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_expression_name_79 == NULL)) {
            tmp_expression_name_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_expression_name_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_56);

            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_103 = LOOKUP_ATTRIBUTE(tmp_expression_name_79, mod_consts[159]);
        if (tmp_args_element_name_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_56);

            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_104 = mod_consts[160];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 120;
        {
            PyObject *call_args[] = {tmp_args_element_name_103, tmp_args_element_name_104};
            tmp_assattr_name_31 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_56, call_args);
        }

        Py_DECREF(tmp_called_name_56);
        Py_DECREF(tmp_args_element_name_103);
        if (tmp_assattr_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_31 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_assattr_target_31 == NULL)) {
            tmp_assattr_target_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_assattr_target_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_31);

            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_31, mod_consts[161], tmp_assattr_name_31);
        Py_DECREF(tmp_assattr_name_31);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_32;
        PyObject *tmp_called_name_57;
        PyObject *tmp_expression_name_80;
        PyObject *tmp_args_element_name_105;
        PyObject *tmp_expression_name_81;
        PyObject *tmp_args_element_name_106;
        PyObject *tmp_assattr_target_32;
        tmp_expression_name_80 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_80 == NULL)) {
            tmp_expression_name_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        tmp_called_name_57 = LOOKUP_ATTRIBUTE(tmp_expression_name_80, mod_consts[27]);
        if (tmp_called_name_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_81 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_expression_name_81 == NULL)) {
            tmp_expression_name_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_expression_name_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_57);

            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_105 = LOOKUP_ATTRIBUTE(tmp_expression_name_81, mod_consts[162]);
        if (tmp_args_element_name_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_57);

            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_106 = mod_consts[163];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 121;
        {
            PyObject *call_args[] = {tmp_args_element_name_105, tmp_args_element_name_106};
            tmp_assattr_name_32 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_57, call_args);
        }

        Py_DECREF(tmp_called_name_57);
        Py_DECREF(tmp_args_element_name_105);
        if (tmp_assattr_name_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_32 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_assattr_target_32 == NULL)) {
            tmp_assattr_target_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_assattr_target_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_32);

            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_32, mod_consts[164], tmp_assattr_name_32);
        Py_DECREF(tmp_assattr_name_32);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_33;
        PyObject *tmp_called_name_58;
        PyObject *tmp_expression_name_82;
        PyObject *tmp_args_element_name_107;
        PyObject *tmp_expression_name_83;
        PyObject *tmp_args_element_name_108;
        PyObject *tmp_assattr_target_33;
        tmp_expression_name_82 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_82 == NULL)) {
            tmp_expression_name_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_called_name_58 = LOOKUP_ATTRIBUTE(tmp_expression_name_82, mod_consts[27]);
        if (tmp_called_name_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_83 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_expression_name_83 == NULL)) {
            tmp_expression_name_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_expression_name_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_58);

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_107 = LOOKUP_ATTRIBUTE(tmp_expression_name_83, mod_consts[165]);
        if (tmp_args_element_name_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_58);

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_108 = mod_consts[166];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 122;
        {
            PyObject *call_args[] = {tmp_args_element_name_107, tmp_args_element_name_108};
            tmp_assattr_name_33 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_58, call_args);
        }

        Py_DECREF(tmp_called_name_58);
        Py_DECREF(tmp_args_element_name_107);
        if (tmp_assattr_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_33 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_assattr_target_33 == NULL)) {
            tmp_assattr_target_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_assattr_target_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_33);

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_33, mod_consts[167], tmp_assattr_name_33);
        Py_DECREF(tmp_assattr_name_33);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_34;
        PyObject *tmp_called_name_59;
        PyObject *tmp_expression_name_84;
        PyObject *tmp_args_element_name_109;
        PyObject *tmp_expression_name_85;
        PyObject *tmp_args_element_name_110;
        PyObject *tmp_assattr_target_34;
        tmp_expression_name_84 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_84 == NULL)) {
            tmp_expression_name_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_called_name_59 = LOOKUP_ATTRIBUTE(tmp_expression_name_84, mod_consts[27]);
        if (tmp_called_name_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_85 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_expression_name_85 == NULL)) {
            tmp_expression_name_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_expression_name_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_59);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_109 = LOOKUP_ATTRIBUTE(tmp_expression_name_85, mod_consts[168]);
        if (tmp_args_element_name_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_59);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_110 = mod_consts[169];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 123;
        {
            PyObject *call_args[] = {tmp_args_element_name_109, tmp_args_element_name_110};
            tmp_assattr_name_34 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_59, call_args);
        }

        Py_DECREF(tmp_called_name_59);
        Py_DECREF(tmp_args_element_name_109);
        if (tmp_assattr_name_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_34 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_assattr_target_34 == NULL)) {
            tmp_assattr_target_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_assattr_target_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_34);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_34, mod_consts[170], tmp_assattr_name_34);
        Py_DECREF(tmp_assattr_name_34);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_35;
        PyObject *tmp_called_name_60;
        PyObject *tmp_expression_name_86;
        PyObject *tmp_args_element_name_111;
        PyObject *tmp_expression_name_87;
        PyObject *tmp_args_element_name_112;
        PyObject *tmp_assattr_target_35;
        tmp_expression_name_86 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_86 == NULL)) {
            tmp_expression_name_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_called_name_60 = LOOKUP_ATTRIBUTE(tmp_expression_name_86, mod_consts[27]);
        if (tmp_called_name_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_87 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_expression_name_87 == NULL)) {
            tmp_expression_name_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_expression_name_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_60);

            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_111 = LOOKUP_ATTRIBUTE(tmp_expression_name_87, mod_consts[171]);
        if (tmp_args_element_name_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_60);

            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_112 = mod_consts[172];
        frame_945ff44c7da9eecb8e01aadbc0206542->m_frame.f_lineno = 124;
        {
            PyObject *call_args[] = {tmp_args_element_name_111, tmp_args_element_name_112};
            tmp_assattr_name_35 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_60, call_args);
        }

        Py_DECREF(tmp_called_name_60);
        Py_DECREF(tmp_args_element_name_111);
        if (tmp_assattr_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_35 = GET_STRING_DICT_VALUE(moduledict_wx$adv, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_assattr_target_35 == NULL)) {
            tmp_assattr_target_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_assattr_target_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_35);

            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_35, mod_consts[173], tmp_assattr_name_35);
        Py_DECREF(tmp_assattr_name_35);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_945ff44c7da9eecb8e01aadbc0206542);
#endif
    popFrameStack();

    assertFrameObject(frame_945ff44c7da9eecb8e01aadbc0206542);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_945ff44c7da9eecb8e01aadbc0206542);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_945ff44c7da9eecb8e01aadbc0206542, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_945ff44c7da9eecb8e01aadbc0206542->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_945ff44c7da9eecb8e01aadbc0206542, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    return module_wx$adv;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

