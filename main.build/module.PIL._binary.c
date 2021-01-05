/* Generated code for Python module 'PIL._binary'
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

/* The "module_PIL$_binary" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_PIL$_binary;
PyDictObject *moduledict_PIL$_binary;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[42];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    loadConstantsBlob(&mod_consts[0], "PIL._binary", 42);

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
void checkModuleConstants_PIL$_binary(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "PIL._binary", 42);
}
#endif

// The module code objects.
static PyCodeObject *codeobj_f5f6581259ce4b48fc9430d92c478f21;
static PyCodeObject *codeobj_75a91a6fa76ae202c5e8b146e9d5c4fb;
static PyCodeObject *codeobj_ab18f1c09f94eded346a88f8d8912181;
static PyCodeObject *codeobj_abe0c49eae464ac2889f25712ee3cc90;
static PyCodeObject *codeobj_fd89d141eeff81b71b71a8d27cfb7d44;
static PyCodeObject *codeobj_07fac5f1443c55ac10af53a1fc6327ec;
static PyCodeObject *codeobj_c9d9567a2917482a3298ffceb9979f74;
static PyCodeObject *codeobj_3351d0632a25b45fedc81956558b48f4;
static PyCodeObject *codeobj_7da8653a91d1837e1b7931e6f9a08fc6;
static PyCodeObject *codeobj_3372cc6d6e22f4e9cd094e090cf22c9a;
static PyCodeObject *codeobj_0ede0f6d1d22be92b0eab7b3fbbad51c;
static PyCodeObject *codeobj_5cf7aecd04092d6312bae1ce19b57725;
static PyCodeObject *codeobj_158d04f59ed29a4cbc36142f317d8dce;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[17]; CHECK_OBJECT(module_filename_obj);
    codeobj_f5f6581259ce4b48fc9430d92c478f21 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[38], NULL, NULL, 0, 0, 0);
    codeobj_75a91a6fa76ae202c5e8b146e9d5c4fb = MAKE_CODEOBJECT(module_filename_obj, 70, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[32], mod_consts[39], NULL, 2, 0, 0);
    codeobj_ab18f1c09f94eded346a88f8d8912181 = MAKE_CODEOBJECT(module_filename_obj, 30, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[28], mod_consts[39], NULL, 2, 0, 0);
    codeobj_abe0c49eae464ac2889f25712ee3cc90 = MAKE_CODEOBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[33], mod_consts[39], NULL, 2, 0, 0);
    codeobj_fd89d141eeff81b71b71a8d27cfb7d44 = MAKE_CODEOBJECT(module_filename_obj, 50, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[30], mod_consts[39], NULL, 2, 0, 0);
    codeobj_07fac5f1443c55ac10af53a1fc6327ec = MAKE_CODEOBJECT(module_filename_obj, 21, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[25], mod_consts[40], NULL, 1, 0, 0);
    codeobj_c9d9567a2917482a3298ffceb9979f74 = MAKE_CODEOBJECT(module_filename_obj, 87, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[36], mod_consts[41], NULL, 1, 0, 0);
    codeobj_3351d0632a25b45fedc81956558b48f4 = MAKE_CODEOBJECT(module_filename_obj, 79, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], mod_consts[41], NULL, 1, 0, 0);
    codeobj_7da8653a91d1837e1b7931e6f9a08fc6 = MAKE_CODEOBJECT(module_filename_obj, 91, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[37], mod_consts[41], NULL, 1, 0, 0);
    codeobj_3372cc6d6e22f4e9cd094e090cf22c9a = MAKE_CODEOBJECT(module_filename_obj, 83, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], mod_consts[41], NULL, 1, 0, 0);
    codeobj_0ede0f6d1d22be92b0eab7b3fbbad51c = MAKE_CODEOBJECT(module_filename_obj, 25, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[26], mod_consts[41], NULL, 1, 0, 0);
    codeobj_5cf7aecd04092d6312bae1ce19b57725 = MAKE_CODEOBJECT(module_filename_obj, 40, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[29], mod_consts[39], NULL, 2, 0, 0);
    codeobj_158d04f59ed29a4cbc36142f317d8dce = MAKE_CODEOBJECT(module_filename_obj, 60, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[31], mod_consts[39], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_10_o32le();


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_11_o16be();


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_12_o32be();


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_1_i8();


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_2_o8();


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_3_i16le(PyObject *defaults);


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_4_si16le(PyObject *defaults);


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_5_i32le(PyObject *defaults);


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_6_si32le(PyObject *defaults);


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_7_i16be(PyObject *defaults);


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_8_i32be(PyObject *defaults);


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_9_o16le();


// The module function definitions.
static PyObject *impl_PIL$_binary$$$function_1_i8(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[0];
    struct Nuitka_FrameObject *frame_07fac5f1443c55ac10af53a1fc6327ec;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_07fac5f1443c55ac10af53a1fc6327ec = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_07fac5f1443c55ac10af53a1fc6327ec)) {
        Py_XDECREF(cache_frame_07fac5f1443c55ac10af53a1fc6327ec);

#if _DEBUG_REFCOUNTS
        if (cache_frame_07fac5f1443c55ac10af53a1fc6327ec == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_07fac5f1443c55ac10af53a1fc6327ec = MAKE_FUNCTION_FRAME(codeobj_07fac5f1443c55ac10af53a1fc6327ec, module_PIL$_binary, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_07fac5f1443c55ac10af53a1fc6327ec->m_type_description == NULL);
    frame_07fac5f1443c55ac10af53a1fc6327ec = cache_frame_07fac5f1443c55ac10af53a1fc6327ec;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_07fac5f1443c55ac10af53a1fc6327ec);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_07fac5f1443c55ac10af53a1fc6327ec) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(par_c);
        tmp_expression_name_1 = par_c;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_1);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = (PyObject *)&PyLong_Type;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        if (par_c == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 22;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_return_value = par_c;
        Py_INCREF(tmp_return_value);
        goto condexpr_end_1;
        condexpr_false_1:;
        if (par_c == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 22;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_c;
        tmp_subscript_name_1 = mod_consts[1];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_2, tmp_subscript_name_1, 0);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_07fac5f1443c55ac10af53a1fc6327ec);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_07fac5f1443c55ac10af53a1fc6327ec);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_07fac5f1443c55ac10af53a1fc6327ec);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_07fac5f1443c55ac10af53a1fc6327ec, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_07fac5f1443c55ac10af53a1fc6327ec->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_07fac5f1443c55ac10af53a1fc6327ec, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_07fac5f1443c55ac10af53a1fc6327ec,
        type_description_1,
        par_c
    );


    // Release cached frame if used for exception.
    if (frame_07fac5f1443c55ac10af53a1fc6327ec == cache_frame_07fac5f1443c55ac10af53a1fc6327ec) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_07fac5f1443c55ac10af53a1fc6327ec);
        cache_frame_07fac5f1443c55ac10af53a1fc6327ec = NULL;
    }

    assertFrameObject(frame_07fac5f1443c55ac10af53a1fc6327ec);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_c);
    par_c = NULL;
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

    Py_XDECREF(par_c);
    par_c = NULL;
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


static PyObject *impl_PIL$_binary$$$function_2_o8(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_i = python_pars[0];
    struct Nuitka_FrameObject *frame_0ede0f6d1d22be92b0eab7b3fbbad51c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0ede0f6d1d22be92b0eab7b3fbbad51c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0ede0f6d1d22be92b0eab7b3fbbad51c)) {
        Py_XDECREF(cache_frame_0ede0f6d1d22be92b0eab7b3fbbad51c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0ede0f6d1d22be92b0eab7b3fbbad51c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0ede0f6d1d22be92b0eab7b3fbbad51c = MAKE_FUNCTION_FRAME(codeobj_0ede0f6d1d22be92b0eab7b3fbbad51c, module_PIL$_binary, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0ede0f6d1d22be92b0eab7b3fbbad51c->m_type_description == NULL);
    frame_0ede0f6d1d22be92b0eab7b3fbbad51c = cache_frame_0ede0f6d1d22be92b0eab7b3fbbad51c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0ede0f6d1d22be92b0eab7b3fbbad51c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0ede0f6d1d22be92b0eab7b3fbbad51c) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_bytes_arg_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(par_i);
        tmp_left_name_1 = par_i;
        tmp_right_name_1 = mod_consts[2];
        tmp_tuple_element_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_left_name_1, tmp_right_name_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_bytes_arg_1 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_bytes_arg_1, 0, tmp_tuple_element_1);
        tmp_return_value = BUILTIN_BYTES1(tmp_bytes_arg_1);
        Py_DECREF(tmp_bytes_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0ede0f6d1d22be92b0eab7b3fbbad51c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0ede0f6d1d22be92b0eab7b3fbbad51c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0ede0f6d1d22be92b0eab7b3fbbad51c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0ede0f6d1d22be92b0eab7b3fbbad51c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0ede0f6d1d22be92b0eab7b3fbbad51c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0ede0f6d1d22be92b0eab7b3fbbad51c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0ede0f6d1d22be92b0eab7b3fbbad51c,
        type_description_1,
        par_i
    );


    // Release cached frame if used for exception.
    if (frame_0ede0f6d1d22be92b0eab7b3fbbad51c == cache_frame_0ede0f6d1d22be92b0eab7b3fbbad51c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_0ede0f6d1d22be92b0eab7b3fbbad51c);
        cache_frame_0ede0f6d1d22be92b0eab7b3fbbad51c = NULL;
    }

    assertFrameObject(frame_0ede0f6d1d22be92b0eab7b3fbbad51c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_i);
    Py_DECREF(par_i);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_i);
    Py_DECREF(par_i);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PIL$_binary$$$function_3_i16le(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[0];
    PyObject *par_o = python_pars[1];
    struct Nuitka_FrameObject *frame_ab18f1c09f94eded346a88f8d8912181;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ab18f1c09f94eded346a88f8d8912181 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ab18f1c09f94eded346a88f8d8912181)) {
        Py_XDECREF(cache_frame_ab18f1c09f94eded346a88f8d8912181);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ab18f1c09f94eded346a88f8d8912181 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ab18f1c09f94eded346a88f8d8912181 = MAKE_FUNCTION_FRAME(codeobj_ab18f1c09f94eded346a88f8d8912181, module_PIL$_binary, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ab18f1c09f94eded346a88f8d8912181->m_type_description == NULL);
    frame_ab18f1c09f94eded346a88f8d8912181 = cache_frame_ab18f1c09f94eded346a88f8d8912181;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ab18f1c09f94eded346a88f8d8912181);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ab18f1c09f94eded346a88f8d8912181) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_subscript_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = mod_consts[4];
        CHECK_OBJECT(par_c);
        tmp_args_element_name_2 = par_c;
        CHECK_OBJECT(par_o);
        tmp_args_element_name_3 = par_o;
        frame_ab18f1c09f94eded346a88f8d8912181->m_frame.f_lineno = 37;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_expression_name_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_1, call_args);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = mod_consts[1];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ab18f1c09f94eded346a88f8d8912181);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ab18f1c09f94eded346a88f8d8912181);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ab18f1c09f94eded346a88f8d8912181);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ab18f1c09f94eded346a88f8d8912181, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ab18f1c09f94eded346a88f8d8912181->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ab18f1c09f94eded346a88f8d8912181, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ab18f1c09f94eded346a88f8d8912181,
        type_description_1,
        par_c,
        par_o
    );


    // Release cached frame if used for exception.
    if (frame_ab18f1c09f94eded346a88f8d8912181 == cache_frame_ab18f1c09f94eded346a88f8d8912181) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ab18f1c09f94eded346a88f8d8912181);
        cache_frame_ab18f1c09f94eded346a88f8d8912181 = NULL;
    }

    assertFrameObject(frame_ab18f1c09f94eded346a88f8d8912181);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    CHECK_OBJECT(par_o);
    Py_DECREF(par_o);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    CHECK_OBJECT(par_o);
    Py_DECREF(par_o);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PIL$_binary$$$function_4_si16le(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[0];
    PyObject *par_o = python_pars[1];
    struct Nuitka_FrameObject *frame_5cf7aecd04092d6312bae1ce19b57725;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5cf7aecd04092d6312bae1ce19b57725 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5cf7aecd04092d6312bae1ce19b57725)) {
        Py_XDECREF(cache_frame_5cf7aecd04092d6312bae1ce19b57725);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5cf7aecd04092d6312bae1ce19b57725 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5cf7aecd04092d6312bae1ce19b57725 = MAKE_FUNCTION_FRAME(codeobj_5cf7aecd04092d6312bae1ce19b57725, module_PIL$_binary, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5cf7aecd04092d6312bae1ce19b57725->m_type_description == NULL);
    frame_5cf7aecd04092d6312bae1ce19b57725 = cache_frame_5cf7aecd04092d6312bae1ce19b57725;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5cf7aecd04092d6312bae1ce19b57725);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5cf7aecd04092d6312bae1ce19b57725) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_subscript_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = mod_consts[6];
        CHECK_OBJECT(par_c);
        tmp_args_element_name_2 = par_c;
        CHECK_OBJECT(par_o);
        tmp_args_element_name_3 = par_o;
        frame_5cf7aecd04092d6312bae1ce19b57725->m_frame.f_lineno = 47;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_expression_name_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_1, call_args);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = mod_consts[1];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5cf7aecd04092d6312bae1ce19b57725);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5cf7aecd04092d6312bae1ce19b57725);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5cf7aecd04092d6312bae1ce19b57725);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5cf7aecd04092d6312bae1ce19b57725, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5cf7aecd04092d6312bae1ce19b57725->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5cf7aecd04092d6312bae1ce19b57725, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5cf7aecd04092d6312bae1ce19b57725,
        type_description_1,
        par_c,
        par_o
    );


    // Release cached frame if used for exception.
    if (frame_5cf7aecd04092d6312bae1ce19b57725 == cache_frame_5cf7aecd04092d6312bae1ce19b57725) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_5cf7aecd04092d6312bae1ce19b57725);
        cache_frame_5cf7aecd04092d6312bae1ce19b57725 = NULL;
    }

    assertFrameObject(frame_5cf7aecd04092d6312bae1ce19b57725);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    CHECK_OBJECT(par_o);
    Py_DECREF(par_o);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    CHECK_OBJECT(par_o);
    Py_DECREF(par_o);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PIL$_binary$$$function_5_i32le(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[0];
    PyObject *par_o = python_pars[1];
    struct Nuitka_FrameObject *frame_fd89d141eeff81b71b71a8d27cfb7d44;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fd89d141eeff81b71b71a8d27cfb7d44 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fd89d141eeff81b71b71a8d27cfb7d44)) {
        Py_XDECREF(cache_frame_fd89d141eeff81b71b71a8d27cfb7d44);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fd89d141eeff81b71b71a8d27cfb7d44 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fd89d141eeff81b71b71a8d27cfb7d44 = MAKE_FUNCTION_FRAME(codeobj_fd89d141eeff81b71b71a8d27cfb7d44, module_PIL$_binary, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_fd89d141eeff81b71b71a8d27cfb7d44->m_type_description == NULL);
    frame_fd89d141eeff81b71b71a8d27cfb7d44 = cache_frame_fd89d141eeff81b71b71a8d27cfb7d44;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_fd89d141eeff81b71b71a8d27cfb7d44);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_fd89d141eeff81b71b71a8d27cfb7d44) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_subscript_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = mod_consts[8];
        CHECK_OBJECT(par_c);
        tmp_args_element_name_2 = par_c;
        CHECK_OBJECT(par_o);
        tmp_args_element_name_3 = par_o;
        frame_fd89d141eeff81b71b71a8d27cfb7d44->m_frame.f_lineno = 57;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_expression_name_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_1, call_args);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = mod_consts[1];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_fd89d141eeff81b71b71a8d27cfb7d44);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_fd89d141eeff81b71b71a8d27cfb7d44);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_fd89d141eeff81b71b71a8d27cfb7d44);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fd89d141eeff81b71b71a8d27cfb7d44, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fd89d141eeff81b71b71a8d27cfb7d44->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fd89d141eeff81b71b71a8d27cfb7d44, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fd89d141eeff81b71b71a8d27cfb7d44,
        type_description_1,
        par_c,
        par_o
    );


    // Release cached frame if used for exception.
    if (frame_fd89d141eeff81b71b71a8d27cfb7d44 == cache_frame_fd89d141eeff81b71b71a8d27cfb7d44) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_fd89d141eeff81b71b71a8d27cfb7d44);
        cache_frame_fd89d141eeff81b71b71a8d27cfb7d44 = NULL;
    }

    assertFrameObject(frame_fd89d141eeff81b71b71a8d27cfb7d44);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    CHECK_OBJECT(par_o);
    Py_DECREF(par_o);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    CHECK_OBJECT(par_o);
    Py_DECREF(par_o);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PIL$_binary$$$function_6_si32le(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[0];
    PyObject *par_o = python_pars[1];
    struct Nuitka_FrameObject *frame_158d04f59ed29a4cbc36142f317d8dce;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_158d04f59ed29a4cbc36142f317d8dce = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_158d04f59ed29a4cbc36142f317d8dce)) {
        Py_XDECREF(cache_frame_158d04f59ed29a4cbc36142f317d8dce);

#if _DEBUG_REFCOUNTS
        if (cache_frame_158d04f59ed29a4cbc36142f317d8dce == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_158d04f59ed29a4cbc36142f317d8dce = MAKE_FUNCTION_FRAME(codeobj_158d04f59ed29a4cbc36142f317d8dce, module_PIL$_binary, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_158d04f59ed29a4cbc36142f317d8dce->m_type_description == NULL);
    frame_158d04f59ed29a4cbc36142f317d8dce = cache_frame_158d04f59ed29a4cbc36142f317d8dce;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_158d04f59ed29a4cbc36142f317d8dce);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_158d04f59ed29a4cbc36142f317d8dce) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_subscript_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = mod_consts[10];
        CHECK_OBJECT(par_c);
        tmp_args_element_name_2 = par_c;
        CHECK_OBJECT(par_o);
        tmp_args_element_name_3 = par_o;
        frame_158d04f59ed29a4cbc36142f317d8dce->m_frame.f_lineno = 67;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_expression_name_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_1, call_args);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = mod_consts[1];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_158d04f59ed29a4cbc36142f317d8dce);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_158d04f59ed29a4cbc36142f317d8dce);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_158d04f59ed29a4cbc36142f317d8dce);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_158d04f59ed29a4cbc36142f317d8dce, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_158d04f59ed29a4cbc36142f317d8dce->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_158d04f59ed29a4cbc36142f317d8dce, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_158d04f59ed29a4cbc36142f317d8dce,
        type_description_1,
        par_c,
        par_o
    );


    // Release cached frame if used for exception.
    if (frame_158d04f59ed29a4cbc36142f317d8dce == cache_frame_158d04f59ed29a4cbc36142f317d8dce) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_158d04f59ed29a4cbc36142f317d8dce);
        cache_frame_158d04f59ed29a4cbc36142f317d8dce = NULL;
    }

    assertFrameObject(frame_158d04f59ed29a4cbc36142f317d8dce);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    CHECK_OBJECT(par_o);
    Py_DECREF(par_o);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    CHECK_OBJECT(par_o);
    Py_DECREF(par_o);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PIL$_binary$$$function_7_i16be(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[0];
    PyObject *par_o = python_pars[1];
    struct Nuitka_FrameObject *frame_75a91a6fa76ae202c5e8b146e9d5c4fb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_75a91a6fa76ae202c5e8b146e9d5c4fb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_75a91a6fa76ae202c5e8b146e9d5c4fb)) {
        Py_XDECREF(cache_frame_75a91a6fa76ae202c5e8b146e9d5c4fb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_75a91a6fa76ae202c5e8b146e9d5c4fb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_75a91a6fa76ae202c5e8b146e9d5c4fb = MAKE_FUNCTION_FRAME(codeobj_75a91a6fa76ae202c5e8b146e9d5c4fb, module_PIL$_binary, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_75a91a6fa76ae202c5e8b146e9d5c4fb->m_type_description == NULL);
    frame_75a91a6fa76ae202c5e8b146e9d5c4fb = cache_frame_75a91a6fa76ae202c5e8b146e9d5c4fb;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_75a91a6fa76ae202c5e8b146e9d5c4fb);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_75a91a6fa76ae202c5e8b146e9d5c4fb) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_subscript_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = mod_consts[12];
        CHECK_OBJECT(par_c);
        tmp_args_element_name_2 = par_c;
        CHECK_OBJECT(par_o);
        tmp_args_element_name_3 = par_o;
        frame_75a91a6fa76ae202c5e8b146e9d5c4fb->m_frame.f_lineno = 71;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_expression_name_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_1, call_args);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = mod_consts[1];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_75a91a6fa76ae202c5e8b146e9d5c4fb);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_75a91a6fa76ae202c5e8b146e9d5c4fb);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_75a91a6fa76ae202c5e8b146e9d5c4fb);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_75a91a6fa76ae202c5e8b146e9d5c4fb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_75a91a6fa76ae202c5e8b146e9d5c4fb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_75a91a6fa76ae202c5e8b146e9d5c4fb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_75a91a6fa76ae202c5e8b146e9d5c4fb,
        type_description_1,
        par_c,
        par_o
    );


    // Release cached frame if used for exception.
    if (frame_75a91a6fa76ae202c5e8b146e9d5c4fb == cache_frame_75a91a6fa76ae202c5e8b146e9d5c4fb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_75a91a6fa76ae202c5e8b146e9d5c4fb);
        cache_frame_75a91a6fa76ae202c5e8b146e9d5c4fb = NULL;
    }

    assertFrameObject(frame_75a91a6fa76ae202c5e8b146e9d5c4fb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    CHECK_OBJECT(par_o);
    Py_DECREF(par_o);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    CHECK_OBJECT(par_o);
    Py_DECREF(par_o);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PIL$_binary$$$function_8_i32be(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[0];
    PyObject *par_o = python_pars[1];
    struct Nuitka_FrameObject *frame_abe0c49eae464ac2889f25712ee3cc90;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_abe0c49eae464ac2889f25712ee3cc90 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_abe0c49eae464ac2889f25712ee3cc90)) {
        Py_XDECREF(cache_frame_abe0c49eae464ac2889f25712ee3cc90);

#if _DEBUG_REFCOUNTS
        if (cache_frame_abe0c49eae464ac2889f25712ee3cc90 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_abe0c49eae464ac2889f25712ee3cc90 = MAKE_FUNCTION_FRAME(codeobj_abe0c49eae464ac2889f25712ee3cc90, module_PIL$_binary, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_abe0c49eae464ac2889f25712ee3cc90->m_type_description == NULL);
    frame_abe0c49eae464ac2889f25712ee3cc90 = cache_frame_abe0c49eae464ac2889f25712ee3cc90;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_abe0c49eae464ac2889f25712ee3cc90);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_abe0c49eae464ac2889f25712ee3cc90) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_subscript_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = mod_consts[13];
        CHECK_OBJECT(par_c);
        tmp_args_element_name_2 = par_c;
        CHECK_OBJECT(par_o);
        tmp_args_element_name_3 = par_o;
        frame_abe0c49eae464ac2889f25712ee3cc90->m_frame.f_lineno = 75;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_expression_name_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_1, call_args);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = mod_consts[1];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_abe0c49eae464ac2889f25712ee3cc90);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_abe0c49eae464ac2889f25712ee3cc90);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_abe0c49eae464ac2889f25712ee3cc90);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_abe0c49eae464ac2889f25712ee3cc90, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_abe0c49eae464ac2889f25712ee3cc90->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_abe0c49eae464ac2889f25712ee3cc90, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_abe0c49eae464ac2889f25712ee3cc90,
        type_description_1,
        par_c,
        par_o
    );


    // Release cached frame if used for exception.
    if (frame_abe0c49eae464ac2889f25712ee3cc90 == cache_frame_abe0c49eae464ac2889f25712ee3cc90) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_abe0c49eae464ac2889f25712ee3cc90);
        cache_frame_abe0c49eae464ac2889f25712ee3cc90 = NULL;
    }

    assertFrameObject(frame_abe0c49eae464ac2889f25712ee3cc90);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    CHECK_OBJECT(par_o);
    Py_DECREF(par_o);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    CHECK_OBJECT(par_o);
    Py_DECREF(par_o);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PIL$_binary$$$function_9_o16le(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_i = python_pars[0];
    struct Nuitka_FrameObject *frame_3351d0632a25b45fedc81956558b48f4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3351d0632a25b45fedc81956558b48f4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3351d0632a25b45fedc81956558b48f4)) {
        Py_XDECREF(cache_frame_3351d0632a25b45fedc81956558b48f4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3351d0632a25b45fedc81956558b48f4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3351d0632a25b45fedc81956558b48f4 = MAKE_FUNCTION_FRAME(codeobj_3351d0632a25b45fedc81956558b48f4, module_PIL$_binary, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_3351d0632a25b45fedc81956558b48f4->m_type_description == NULL);
    frame_3351d0632a25b45fedc81956558b48f4 = cache_frame_3351d0632a25b45fedc81956558b48f4;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3351d0632a25b45fedc81956558b48f4);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3351d0632a25b45fedc81956558b48f4) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = mod_consts[4];
        CHECK_OBJECT(par_i);
        tmp_args_element_name_2 = par_i;
        frame_3351d0632a25b45fedc81956558b48f4->m_frame.f_lineno = 80;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3351d0632a25b45fedc81956558b48f4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3351d0632a25b45fedc81956558b48f4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3351d0632a25b45fedc81956558b48f4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3351d0632a25b45fedc81956558b48f4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3351d0632a25b45fedc81956558b48f4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3351d0632a25b45fedc81956558b48f4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3351d0632a25b45fedc81956558b48f4,
        type_description_1,
        par_i
    );


    // Release cached frame if used for exception.
    if (frame_3351d0632a25b45fedc81956558b48f4 == cache_frame_3351d0632a25b45fedc81956558b48f4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_3351d0632a25b45fedc81956558b48f4);
        cache_frame_3351d0632a25b45fedc81956558b48f4 = NULL;
    }

    assertFrameObject(frame_3351d0632a25b45fedc81956558b48f4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_i);
    Py_DECREF(par_i);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_i);
    Py_DECREF(par_i);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PIL$_binary$$$function_10_o32le(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_i = python_pars[0];
    struct Nuitka_FrameObject *frame_3372cc6d6e22f4e9cd094e090cf22c9a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3372cc6d6e22f4e9cd094e090cf22c9a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3372cc6d6e22f4e9cd094e090cf22c9a)) {
        Py_XDECREF(cache_frame_3372cc6d6e22f4e9cd094e090cf22c9a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3372cc6d6e22f4e9cd094e090cf22c9a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3372cc6d6e22f4e9cd094e090cf22c9a = MAKE_FUNCTION_FRAME(codeobj_3372cc6d6e22f4e9cd094e090cf22c9a, module_PIL$_binary, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_3372cc6d6e22f4e9cd094e090cf22c9a->m_type_description == NULL);
    frame_3372cc6d6e22f4e9cd094e090cf22c9a = cache_frame_3372cc6d6e22f4e9cd094e090cf22c9a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3372cc6d6e22f4e9cd094e090cf22c9a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3372cc6d6e22f4e9cd094e090cf22c9a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = mod_consts[8];
        CHECK_OBJECT(par_i);
        tmp_args_element_name_2 = par_i;
        frame_3372cc6d6e22f4e9cd094e090cf22c9a->m_frame.f_lineno = 84;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3372cc6d6e22f4e9cd094e090cf22c9a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3372cc6d6e22f4e9cd094e090cf22c9a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3372cc6d6e22f4e9cd094e090cf22c9a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3372cc6d6e22f4e9cd094e090cf22c9a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3372cc6d6e22f4e9cd094e090cf22c9a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3372cc6d6e22f4e9cd094e090cf22c9a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3372cc6d6e22f4e9cd094e090cf22c9a,
        type_description_1,
        par_i
    );


    // Release cached frame if used for exception.
    if (frame_3372cc6d6e22f4e9cd094e090cf22c9a == cache_frame_3372cc6d6e22f4e9cd094e090cf22c9a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_3372cc6d6e22f4e9cd094e090cf22c9a);
        cache_frame_3372cc6d6e22f4e9cd094e090cf22c9a = NULL;
    }

    assertFrameObject(frame_3372cc6d6e22f4e9cd094e090cf22c9a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_i);
    Py_DECREF(par_i);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_i);
    Py_DECREF(par_i);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PIL$_binary$$$function_11_o16be(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_i = python_pars[0];
    struct Nuitka_FrameObject *frame_c9d9567a2917482a3298ffceb9979f74;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c9d9567a2917482a3298ffceb9979f74 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c9d9567a2917482a3298ffceb9979f74)) {
        Py_XDECREF(cache_frame_c9d9567a2917482a3298ffceb9979f74);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c9d9567a2917482a3298ffceb9979f74 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c9d9567a2917482a3298ffceb9979f74 = MAKE_FUNCTION_FRAME(codeobj_c9d9567a2917482a3298ffceb9979f74, module_PIL$_binary, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c9d9567a2917482a3298ffceb9979f74->m_type_description == NULL);
    frame_c9d9567a2917482a3298ffceb9979f74 = cache_frame_c9d9567a2917482a3298ffceb9979f74;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c9d9567a2917482a3298ffceb9979f74);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c9d9567a2917482a3298ffceb9979f74) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = mod_consts[12];
        CHECK_OBJECT(par_i);
        tmp_args_element_name_2 = par_i;
        frame_c9d9567a2917482a3298ffceb9979f74->m_frame.f_lineno = 88;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c9d9567a2917482a3298ffceb9979f74);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c9d9567a2917482a3298ffceb9979f74);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c9d9567a2917482a3298ffceb9979f74);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c9d9567a2917482a3298ffceb9979f74, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c9d9567a2917482a3298ffceb9979f74->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c9d9567a2917482a3298ffceb9979f74, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c9d9567a2917482a3298ffceb9979f74,
        type_description_1,
        par_i
    );


    // Release cached frame if used for exception.
    if (frame_c9d9567a2917482a3298ffceb9979f74 == cache_frame_c9d9567a2917482a3298ffceb9979f74) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c9d9567a2917482a3298ffceb9979f74);
        cache_frame_c9d9567a2917482a3298ffceb9979f74 = NULL;
    }

    assertFrameObject(frame_c9d9567a2917482a3298ffceb9979f74);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_i);
    Py_DECREF(par_i);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_i);
    Py_DECREF(par_i);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PIL$_binary$$$function_12_o32be(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_i = python_pars[0];
    struct Nuitka_FrameObject *frame_7da8653a91d1837e1b7931e6f9a08fc6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7da8653a91d1837e1b7931e6f9a08fc6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7da8653a91d1837e1b7931e6f9a08fc6)) {
        Py_XDECREF(cache_frame_7da8653a91d1837e1b7931e6f9a08fc6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7da8653a91d1837e1b7931e6f9a08fc6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7da8653a91d1837e1b7931e6f9a08fc6 = MAKE_FUNCTION_FRAME(codeobj_7da8653a91d1837e1b7931e6f9a08fc6, module_PIL$_binary, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7da8653a91d1837e1b7931e6f9a08fc6->m_type_description == NULL);
    frame_7da8653a91d1837e1b7931e6f9a08fc6 = cache_frame_7da8653a91d1837e1b7931e6f9a08fc6;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7da8653a91d1837e1b7931e6f9a08fc6);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7da8653a91d1837e1b7931e6f9a08fc6) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = mod_consts[13];
        CHECK_OBJECT(par_i);
        tmp_args_element_name_2 = par_i;
        frame_7da8653a91d1837e1b7931e6f9a08fc6->m_frame.f_lineno = 92;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7da8653a91d1837e1b7931e6f9a08fc6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_7da8653a91d1837e1b7931e6f9a08fc6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7da8653a91d1837e1b7931e6f9a08fc6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7da8653a91d1837e1b7931e6f9a08fc6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7da8653a91d1837e1b7931e6f9a08fc6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7da8653a91d1837e1b7931e6f9a08fc6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7da8653a91d1837e1b7931e6f9a08fc6,
        type_description_1,
        par_i
    );


    // Release cached frame if used for exception.
    if (frame_7da8653a91d1837e1b7931e6f9a08fc6 == cache_frame_7da8653a91d1837e1b7931e6f9a08fc6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_7da8653a91d1837e1b7931e6f9a08fc6);
        cache_frame_7da8653a91d1837e1b7931e6f9a08fc6 = NULL;
    }

    assertFrameObject(frame_7da8653a91d1837e1b7931e6f9a08fc6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_i);
    Py_DECREF(par_i);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_i);
    Py_DECREF(par_i);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_10_o32le() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function_10_o32le,
        mod_consts[35],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3372cc6d6e22f4e9cd094e090cf22c9a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$_binary,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_11_o16be() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function_11_o16be,
        mod_consts[36],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c9d9567a2917482a3298ffceb9979f74,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$_binary,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_12_o32be() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function_12_o32be,
        mod_consts[37],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7da8653a91d1837e1b7931e6f9a08fc6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$_binary,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_1_i8() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function_1_i8,
        mod_consts[25],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_07fac5f1443c55ac10af53a1fc6327ec,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$_binary,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_2_o8() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function_2_o8,
        mod_consts[26],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0ede0f6d1d22be92b0eab7b3fbbad51c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$_binary,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_3_i16le(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function_3_i16le,
        mod_consts[28],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ab18f1c09f94eded346a88f8d8912181,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$_binary,
        mod_consts[5],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_4_si16le(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function_4_si16le,
        mod_consts[29],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5cf7aecd04092d6312bae1ce19b57725,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$_binary,
        mod_consts[7],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_5_i32le(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function_5_i32le,
        mod_consts[30],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_fd89d141eeff81b71b71a8d27cfb7d44,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$_binary,
        mod_consts[9],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_6_si32le(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function_6_si32le,
        mod_consts[31],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_158d04f59ed29a4cbc36142f317d8dce,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$_binary,
        mod_consts[11],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_7_i16be(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function_7_i16be,
        mod_consts[32],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_75a91a6fa76ae202c5e8b146e9d5c4fb,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$_binary,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_8_i32be(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function_8_i32be,
        mod_consts[33],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_abe0c49eae464ac2889f25712ee3cc90,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$_binary,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_9_o16le() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function_9_o16le,
        mod_consts[34],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3351d0632a25b45fedc81956558b48f4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$_binary,
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

function_impl_code functable_PIL$_binary[] = {
    impl_PIL$_binary$$$function_1_i8,
    impl_PIL$_binary$$$function_2_o8,
    impl_PIL$_binary$$$function_3_i16le,
    impl_PIL$_binary$$$function_4_si16le,
    impl_PIL$_binary$$$function_5_i32le,
    impl_PIL$_binary$$$function_6_si32le,
    impl_PIL$_binary$$$function_7_i16be,
    impl_PIL$_binary$$$function_8_i32be,
    impl_PIL$_binary$$$function_9_o16le,
    impl_PIL$_binary$$$function_10_o32le,
    impl_PIL$_binary$$$function_11_o16be,
    impl_PIL$_binary$$$function_12_o32be,
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

    function_impl_code *current = functable_PIL$_binary;
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

    if (offset > sizeof(functable_PIL$_binary) || offset < 0) {
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
        functable_PIL$_binary[offset],
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
        module_PIL$_binary,
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
NUITKA_MAY_BE_UNUSED static char const *module_full_name = "PIL._binary";

// Internal entry point for module code.
PyObject *modulecode_PIL$_binary(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_PIL$_binary = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
#ifdef _NUITKA_TRACE
        PRINT_STRING("PIL._binary: Skipping module init, already done.\n");
#endif

        return module_PIL$_binary;
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
    PRINT_STRING("PIL._binary: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("PIL._binary: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("PIL._binary: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initPIL$_binary\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_PIL$_binary = MODULE_DICT(module_PIL$_binary);

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
        moduledict_PIL$_binary,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_PIL$_binary,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_PIL$_binary,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$_binary,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$_binary,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_PIL$_binary);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_PIL$_binary);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT(spec_value);

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_f5f6581259ce4b48fc9430d92c478f21;
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
        tmp_assign_source_1 = mod_consts[15];
        UPDATE_STRING_DICT0(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_f5f6581259ce4b48fc9430d92c478f21 = MAKE_MODULE_FRAME(codeobj_f5f6581259ce4b48fc9430d92c478f21, module_PIL$_binary);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_f5f6581259ce4b48fc9430d92c478f21);
    assert(Py_REFCNT(frame_f5f6581259ce4b48fc9430d92c478f21) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = mod_consts[17];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[19]);

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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[19]);

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
        UPDATE_STRING_DICT0(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[23];
        tmp_globals_name_1 = (PyObject *)moduledict_PIL$_binary;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = mod_consts[24];
        tmp_level_name_1 = mod_consts[1];
        frame_f5f6581259ce4b48fc9430d92c478f21->m_frame.f_lineno = 18;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_PIL$_binary,
                mod_consts[14],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[14]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_PIL$_binary,
                mod_consts[3],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[3]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_6);
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f5f6581259ce4b48fc9430d92c478f21);
#endif
    popFrameStack();

    assertFrameObject(frame_f5f6581259ce4b48fc9430d92c478f21);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f5f6581259ce4b48fc9430d92c478f21);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f5f6581259ce4b48fc9430d92c478f21, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f5f6581259ce4b48fc9430d92c478f21->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f5f6581259ce4b48fc9430d92c478f21, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_7;


        tmp_assign_source_7 = MAKE_FUNCTION_PIL$_binary$$$function_1_i8();

        UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;


        tmp_assign_source_8 = MAKE_FUNCTION_PIL$_binary$$$function_2_o8();

        UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[27];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_9 = MAKE_FUNCTION_PIL$_binary$$$function_3_i16le(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[27];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_10 = MAKE_FUNCTION_PIL$_binary$$$function_4_si16le(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = mod_consts[27];
        Py_INCREF(tmp_defaults_3);


        tmp_assign_source_11 = MAKE_FUNCTION_PIL$_binary$$$function_5_i32le(tmp_defaults_3);

        UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = mod_consts[27];
        Py_INCREF(tmp_defaults_4);


        tmp_assign_source_12 = MAKE_FUNCTION_PIL$_binary$$$function_6_si32le(tmp_defaults_4);

        UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_defaults_5;
        tmp_defaults_5 = mod_consts[27];
        Py_INCREF(tmp_defaults_5);


        tmp_assign_source_13 = MAKE_FUNCTION_PIL$_binary$$$function_7_i16be(tmp_defaults_5);

        UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_defaults_6;
        tmp_defaults_6 = mod_consts[27];
        Py_INCREF(tmp_defaults_6);


        tmp_assign_source_14 = MAKE_FUNCTION_PIL$_binary$$$function_8_i32be(tmp_defaults_6);

        UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;


        tmp_assign_source_15 = MAKE_FUNCTION_PIL$_binary$$$function_9_o16le();

        UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;


        tmp_assign_source_16 = MAKE_FUNCTION_PIL$_binary$$$function_10_o32le();

        UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_PIL$_binary$$$function_11_o16be();

        UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;


        tmp_assign_source_18 = MAKE_FUNCTION_PIL$_binary$$$function_12_o32be();

        UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_18);
    }

    return module_PIL$_binary;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

