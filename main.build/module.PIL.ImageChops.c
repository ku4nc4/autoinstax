/* Generated code for Python module 'PIL.ImageChops'
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

/* The "module_PIL$ImageChops" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_PIL$ImageChops;
PyDictObject *moduledict_PIL$ImageChops;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[89];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    loadConstantsBlob(&mod_consts[0], "PIL.ImageChops", 89);

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
void checkModuleConstants_PIL$ImageChops(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "PIL.ImageChops", 89);
}
#endif

// The module code objects.
static PyCodeObject *codeobj_6b12175bd54b2168a910aa0c105e2de8;
static PyCodeObject *codeobj_af5d6b86625519a5568731eb8c2de9c5;
static PyCodeObject *codeobj_52a4ec6a3060ee5fb545f451fd089041;
static PyCodeObject *codeobj_562d7ce8e45db45cd16902e2ebb208ed;
static PyCodeObject *codeobj_1c9ae057aa20a9b4a1b081acbf0534d9;
static PyCodeObject *codeobj_a41f488543dba645376be1c5ed62843a;
static PyCodeObject *codeobj_79602f993d17eb4a0bfadef0738f3e81;
static PyCodeObject *codeobj_56a2423a30afb4e86d11e90a76b59f52;
static PyCodeObject *codeobj_b6440a9c29cf5abe823a924b5fb9d8d0;
static PyCodeObject *codeobj_5867001bbb6e6ae3f3b1ff6b21cfcd19;
static PyCodeObject *codeobj_090c1d2465de0a6a89ffde8b4d35a585;
static PyCodeObject *codeobj_253060f9f26840c9fdd3e71e5617aa14;
static PyCodeObject *codeobj_875f9ecf318ba3957303016808d2e5dc;
static PyCodeObject *codeobj_3a848730b1b759dac6051fb0ddea4b82;
static PyCodeObject *codeobj_11d0781cdb9efb14ce05dde7e05a6911;
static PyCodeObject *codeobj_50ad2260ff46f14f03bc994171458bf5;
static PyCodeObject *codeobj_6f1e31124a9b9016aa8bc86e345bb8db;
static PyCodeObject *codeobj_5b2927f6f11574dd022b0a0e789194e7;
static PyCodeObject *codeobj_15a1a0e2eeff014080fad649e3c0fd8d;
static PyCodeObject *codeobj_57ae2dcfc0db727cfb0e2e83e8429550;
static PyCodeObject *codeobj_f3809f5b09f631e662929cec9b6a8f2e;
static PyCodeObject *codeobj_680e4bc60583a65ef402a3b4fc7ba048;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[52]; CHECK_OBJECT(module_filename_obj);
    codeobj_6b12175bd54b2168a910aa0c105e2de8 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[81], NULL, NULL, 0, 0, 0);
    codeobj_af5d6b86625519a5568731eb8c2de9c5 = MAKE_CODEOBJECT(module_filename_obj, 176, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[73], mod_consts[82], NULL, 4, 0, 0);
    codeobj_52a4ec6a3060ee5fb545f451fd089041 = MAKE_CODEOBJECT(module_filename_obj, 210, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[75], mod_consts[83], NULL, 2, 0, 0);
    codeobj_562d7ce8e45db45cd16902e2ebb208ed = MAKE_CODEOBJECT(module_filename_obj, 294, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[45], mod_consts[84], NULL, 3, 0, 0);
    codeobj_1c9ae057aa20a9b4a1b081acbf0534d9 = MAKE_CODEOBJECT(module_filename_obj, 304, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[47], mod_consts[85], NULL, 3, 0, 0);
    codeobj_a41f488543dba645376be1c5ed62843a = MAKE_CODEOBJECT(module_filename_obj, 21, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[61], mod_consts[86], NULL, 2, 0, 0);
    codeobj_79602f993d17eb4a0bfadef0738f3e81 = MAKE_CODEOBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[65], mod_consts[83], NULL, 2, 0, 0);
    codeobj_56a2423a30afb4e86d11e90a76b59f52 = MAKE_CODEOBJECT(module_filename_obj, 88, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[66], mod_consts[83], NULL, 2, 0, 0);
    codeobj_b6440a9c29cf5abe823a924b5fb9d8d0 = MAKE_CODEOBJECT(module_filename_obj, 30, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[62], mod_consts[87], NULL, 1, 0, 0);
    codeobj_5867001bbb6e6ae3f3b1ff6b21cfcd19 = MAKE_CODEOBJECT(module_filename_obj, 152, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[70], mod_consts[83], NULL, 2, 0, 0);
    codeobj_090c1d2465de0a6a89ffde8b4d35a585 = MAKE_CODEOBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[63], mod_consts[87], NULL, 1, 0, 0);
    codeobj_253060f9f26840c9fdd3e71e5617aa14 = MAKE_CODEOBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[64], mod_consts[83], NULL, 2, 0, 0);
    codeobj_875f9ecf318ba3957303016808d2e5dc = MAKE_CODEOBJECT(module_filename_obj, 240, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[77], mod_consts[83], NULL, 2, 0, 0);
    codeobj_3a848730b1b759dac6051fb0ddea4b82 = MAKE_CODEOBJECT(module_filename_obj, 260, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[78], mod_consts[83], NULL, 2, 0, 0);
    codeobj_11d0781cdb9efb14ce05dde7e05a6911 = MAKE_CODEOBJECT(module_filename_obj, 277, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[79], mod_consts[83], NULL, 2, 0, 0);
    codeobj_50ad2260ff46f14f03bc994171458bf5 = MAKE_CODEOBJECT(module_filename_obj, 105, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[67], mod_consts[83], NULL, 2, 0, 0);
    codeobj_6f1e31124a9b9016aa8bc86e345bb8db = MAKE_CODEOBJECT(module_filename_obj, 314, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[49], mod_consts[88], NULL, 3, 0, 0);
    codeobj_5b2927f6f11574dd022b0a0e789194e7 = MAKE_CODEOBJECT(module_filename_obj, 164, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[71], mod_consts[83], NULL, 2, 0, 0);
    codeobj_15a1a0e2eeff014080fad649e3c0fd8d = MAKE_CODEOBJECT(module_filename_obj, 124, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[68], mod_consts[83], NULL, 2, 0, 0);
    codeobj_57ae2dcfc0db727cfb0e2e83e8429550 = MAKE_CODEOBJECT(module_filename_obj, 140, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[69], mod_consts[83], NULL, 2, 0, 0);
    codeobj_f3809f5b09f631e662929cec9b6a8f2e = MAKE_CODEOBJECT(module_filename_obj, 193, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[74], mod_consts[82], NULL, 4, 0, 0);
    codeobj_680e4bc60583a65ef402a3b4fc7ba048 = MAKE_CODEOBJECT(module_filename_obj, 225, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[83], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_10_hard_light();


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_11_overlay();


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_12_add(PyObject *defaults);


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_13_subtract(PyObject *defaults);


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_14_add_modulo();


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_15_subtract_modulo();


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_16_logical_and();


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_17_logical_or();


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_18_logical_xor();


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_19_blend();


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_1_constant();


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_20_composite();


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_21_offset(PyObject *defaults);


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_2_duplicate();


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_3_invert();


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_4_lighter();


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_5_darker();


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_6_difference();


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_7_multiply();


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_8_screen();


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_9_soft_light();


// The module function definitions.
static PyObject *impl_PIL$ImageChops$$$function_1_constant(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_image = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_a41f488543dba645376be1c5ed62843a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a41f488543dba645376be1c5ed62843a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a41f488543dba645376be1c5ed62843a)) {
        Py_XDECREF(cache_frame_a41f488543dba645376be1c5ed62843a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a41f488543dba645376be1c5ed62843a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a41f488543dba645376be1c5ed62843a = MAKE_FUNCTION_FRAME(codeobj_a41f488543dba645376be1c5ed62843a, module_PIL$ImageChops, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a41f488543dba645376be1c5ed62843a->m_type_description == NULL);
    frame_a41f488543dba645376be1c5ed62843a = cache_frame_a41f488543dba645376be1c5ed62843a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a41f488543dba645376be1c5ed62843a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a41f488543dba645376be1c5ed62843a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[1]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = mod_consts[2];
        CHECK_OBJECT(par_image);
        tmp_expression_name_2 = par_image;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[3]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 27;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_args_element_name_3 = par_value;
        frame_a41f488543dba645376be1c5ed62843a->m_frame.f_lineno = 27;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a41f488543dba645376be1c5ed62843a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a41f488543dba645376be1c5ed62843a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a41f488543dba645376be1c5ed62843a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a41f488543dba645376be1c5ed62843a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a41f488543dba645376be1c5ed62843a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a41f488543dba645376be1c5ed62843a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a41f488543dba645376be1c5ed62843a,
        type_description_1,
        par_image,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_a41f488543dba645376be1c5ed62843a == cache_frame_a41f488543dba645376be1c5ed62843a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a41f488543dba645376be1c5ed62843a);
        cache_frame_a41f488543dba645376be1c5ed62843a = NULL;
    }

    assertFrameObject(frame_a41f488543dba645376be1c5ed62843a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
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


static PyObject *impl_PIL$ImageChops$$$function_2_duplicate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_image = python_pars[0];
    struct Nuitka_FrameObject *frame_b6440a9c29cf5abe823a924b5fb9d8d0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b6440a9c29cf5abe823a924b5fb9d8d0 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b6440a9c29cf5abe823a924b5fb9d8d0)) {
        Py_XDECREF(cache_frame_b6440a9c29cf5abe823a924b5fb9d8d0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b6440a9c29cf5abe823a924b5fb9d8d0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b6440a9c29cf5abe823a924b5fb9d8d0 = MAKE_FUNCTION_FRAME(codeobj_b6440a9c29cf5abe823a924b5fb9d8d0, module_PIL$ImageChops, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b6440a9c29cf5abe823a924b5fb9d8d0->m_type_description == NULL);
    frame_b6440a9c29cf5abe823a924b5fb9d8d0 = cache_frame_b6440a9c29cf5abe823a924b5fb9d8d0;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b6440a9c29cf5abe823a924b5fb9d8d0);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b6440a9c29cf5abe823a924b5fb9d8d0) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_image);
        tmp_called_instance_1 = par_image;
        frame_b6440a9c29cf5abe823a924b5fb9d8d0->m_frame.f_lineno = 36;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[5]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b6440a9c29cf5abe823a924b5fb9d8d0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b6440a9c29cf5abe823a924b5fb9d8d0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b6440a9c29cf5abe823a924b5fb9d8d0);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b6440a9c29cf5abe823a924b5fb9d8d0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b6440a9c29cf5abe823a924b5fb9d8d0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b6440a9c29cf5abe823a924b5fb9d8d0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b6440a9c29cf5abe823a924b5fb9d8d0,
        type_description_1,
        par_image
    );


    // Release cached frame if used for exception.
    if (frame_b6440a9c29cf5abe823a924b5fb9d8d0 == cache_frame_b6440a9c29cf5abe823a924b5fb9d8d0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b6440a9c29cf5abe823a924b5fb9d8d0);
        cache_frame_b6440a9c29cf5abe823a924b5fb9d8d0 = NULL;
    }

    assertFrameObject(frame_b6440a9c29cf5abe823a924b5fb9d8d0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
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


static PyObject *impl_PIL$ImageChops$$$function_3_invert(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_image = python_pars[0];
    struct Nuitka_FrameObject *frame_090c1d2465de0a6a89ffde8b4d35a585;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_090c1d2465de0a6a89ffde8b4d35a585 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_090c1d2465de0a6a89ffde8b4d35a585)) {
        Py_XDECREF(cache_frame_090c1d2465de0a6a89ffde8b4d35a585);

#if _DEBUG_REFCOUNTS
        if (cache_frame_090c1d2465de0a6a89ffde8b4d35a585 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_090c1d2465de0a6a89ffde8b4d35a585 = MAKE_FUNCTION_FRAME(codeobj_090c1d2465de0a6a89ffde8b4d35a585, module_PIL$ImageChops, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_090c1d2465de0a6a89ffde8b4d35a585->m_type_description == NULL);
    frame_090c1d2465de0a6a89ffde8b4d35a585 = cache_frame_090c1d2465de0a6a89ffde8b4d35a585;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_090c1d2465de0a6a89ffde8b4d35a585);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_090c1d2465de0a6a89ffde8b4d35a585) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_image);
        tmp_called_instance_1 = par_image;
        frame_090c1d2465de0a6a89ffde8b4d35a585->m_frame.f_lineno = 50;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[7]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_name_2;
        if (par_image == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 51;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = par_image;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[9]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (par_image == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 51;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_image;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[10]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 51;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_090c1d2465de0a6a89ffde8b4d35a585->m_frame.f_lineno = 51;
        tmp_args_element_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[11]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 51;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_090c1d2465de0a6a89ffde8b4d35a585->m_frame.f_lineno = 51;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_090c1d2465de0a6a89ffde8b4d35a585);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_090c1d2465de0a6a89ffde8b4d35a585);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_090c1d2465de0a6a89ffde8b4d35a585);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_090c1d2465de0a6a89ffde8b4d35a585, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_090c1d2465de0a6a89ffde8b4d35a585->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_090c1d2465de0a6a89ffde8b4d35a585, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_090c1d2465de0a6a89ffde8b4d35a585,
        type_description_1,
        par_image
    );


    // Release cached frame if used for exception.
    if (frame_090c1d2465de0a6a89ffde8b4d35a585 == cache_frame_090c1d2465de0a6a89ffde8b4d35a585) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_090c1d2465de0a6a89ffde8b4d35a585);
        cache_frame_090c1d2465de0a6a89ffde8b4d35a585 = NULL;
    }

    assertFrameObject(frame_090c1d2465de0a6a89ffde8b4d35a585);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
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


static PyObject *impl_PIL$ImageChops$$$function_4_lighter(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_image1 = python_pars[0];
    PyObject *par_image2 = python_pars[1];
    struct Nuitka_FrameObject *frame_253060f9f26840c9fdd3e71e5617aa14;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_253060f9f26840c9fdd3e71e5617aa14 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_253060f9f26840c9fdd3e71e5617aa14)) {
        Py_XDECREF(cache_frame_253060f9f26840c9fdd3e71e5617aa14);

#if _DEBUG_REFCOUNTS
        if (cache_frame_253060f9f26840c9fdd3e71e5617aa14 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_253060f9f26840c9fdd3e71e5617aa14 = MAKE_FUNCTION_FRAME(codeobj_253060f9f26840c9fdd3e71e5617aa14, module_PIL$ImageChops, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_253060f9f26840c9fdd3e71e5617aa14->m_type_description == NULL);
    frame_253060f9f26840c9fdd3e71e5617aa14 = cache_frame_253060f9f26840c9fdd3e71e5617aa14;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_253060f9f26840c9fdd3e71e5617aa14);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_253060f9f26840c9fdd3e71e5617aa14) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_image1);
        tmp_called_instance_1 = par_image1;
        frame_253060f9f26840c9fdd3e71e5617aa14->m_frame.f_lineno = 66;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[7]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_image2);
        tmp_called_instance_2 = par_image2;
        frame_253060f9f26840c9fdd3e71e5617aa14->m_frame.f_lineno = 67;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[7]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_4;
        if (par_image1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 68;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = par_image1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[9]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_image1 == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 68;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_image1;
        tmp_expression_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[10]);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 68;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[14]);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 68;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_image2 == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_called_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 68;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_image2;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[10]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 68;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_253060f9f26840c9fdd3e71e5617aa14->m_frame.f_lineno = 68;
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 68;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_253060f9f26840c9fdd3e71e5617aa14->m_frame.f_lineno = 68;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_253060f9f26840c9fdd3e71e5617aa14);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_253060f9f26840c9fdd3e71e5617aa14);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_253060f9f26840c9fdd3e71e5617aa14);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_253060f9f26840c9fdd3e71e5617aa14, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_253060f9f26840c9fdd3e71e5617aa14->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_253060f9f26840c9fdd3e71e5617aa14, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_253060f9f26840c9fdd3e71e5617aa14,
        type_description_1,
        par_image1,
        par_image2
    );


    // Release cached frame if used for exception.
    if (frame_253060f9f26840c9fdd3e71e5617aa14 == cache_frame_253060f9f26840c9fdd3e71e5617aa14) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_253060f9f26840c9fdd3e71e5617aa14);
        cache_frame_253060f9f26840c9fdd3e71e5617aa14 = NULL;
    }

    assertFrameObject(frame_253060f9f26840c9fdd3e71e5617aa14);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_image1);
    par_image1 = NULL;
    Py_XDECREF(par_image2);
    par_image2 = NULL;
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

    Py_XDECREF(par_image1);
    par_image1 = NULL;
    Py_XDECREF(par_image2);
    par_image2 = NULL;
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


static PyObject *impl_PIL$ImageChops$$$function_5_darker(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_image1 = python_pars[0];
    PyObject *par_image2 = python_pars[1];
    struct Nuitka_FrameObject *frame_79602f993d17eb4a0bfadef0738f3e81;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_79602f993d17eb4a0bfadef0738f3e81 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_79602f993d17eb4a0bfadef0738f3e81)) {
        Py_XDECREF(cache_frame_79602f993d17eb4a0bfadef0738f3e81);

#if _DEBUG_REFCOUNTS
        if (cache_frame_79602f993d17eb4a0bfadef0738f3e81 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_79602f993d17eb4a0bfadef0738f3e81 = MAKE_FUNCTION_FRAME(codeobj_79602f993d17eb4a0bfadef0738f3e81, module_PIL$ImageChops, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_79602f993d17eb4a0bfadef0738f3e81->m_type_description == NULL);
    frame_79602f993d17eb4a0bfadef0738f3e81 = cache_frame_79602f993d17eb4a0bfadef0738f3e81;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_79602f993d17eb4a0bfadef0738f3e81);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_79602f993d17eb4a0bfadef0738f3e81) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_image1);
        tmp_called_instance_1 = par_image1;
        frame_79602f993d17eb4a0bfadef0738f3e81->m_frame.f_lineno = 83;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[7]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_image2);
        tmp_called_instance_2 = par_image2;
        frame_79602f993d17eb4a0bfadef0738f3e81->m_frame.f_lineno = 84;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[7]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_4;
        if (par_image1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 85;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = par_image1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[9]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_image1 == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 85;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_image1;
        tmp_expression_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[10]);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 85;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[17]);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 85;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_image2 == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_called_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 85;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_image2;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[10]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 85;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_79602f993d17eb4a0bfadef0738f3e81->m_frame.f_lineno = 85;
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 85;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_79602f993d17eb4a0bfadef0738f3e81->m_frame.f_lineno = 85;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_79602f993d17eb4a0bfadef0738f3e81);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_79602f993d17eb4a0bfadef0738f3e81);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_79602f993d17eb4a0bfadef0738f3e81);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_79602f993d17eb4a0bfadef0738f3e81, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_79602f993d17eb4a0bfadef0738f3e81->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_79602f993d17eb4a0bfadef0738f3e81, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_79602f993d17eb4a0bfadef0738f3e81,
        type_description_1,
        par_image1,
        par_image2
    );


    // Release cached frame if used for exception.
    if (frame_79602f993d17eb4a0bfadef0738f3e81 == cache_frame_79602f993d17eb4a0bfadef0738f3e81) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_79602f993d17eb4a0bfadef0738f3e81);
        cache_frame_79602f993d17eb4a0bfadef0738f3e81 = NULL;
    }

    assertFrameObject(frame_79602f993d17eb4a0bfadef0738f3e81);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_image1);
    par_image1 = NULL;
    Py_XDECREF(par_image2);
    par_image2 = NULL;
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

    Py_XDECREF(par_image1);
    par_image1 = NULL;
    Py_XDECREF(par_image2);
    par_image2 = NULL;
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


static PyObject *impl_PIL$ImageChops$$$function_6_difference(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_image1 = python_pars[0];
    PyObject *par_image2 = python_pars[1];
    struct Nuitka_FrameObject *frame_56a2423a30afb4e86d11e90a76b59f52;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_56a2423a30afb4e86d11e90a76b59f52 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_56a2423a30afb4e86d11e90a76b59f52)) {
        Py_XDECREF(cache_frame_56a2423a30afb4e86d11e90a76b59f52);

#if _DEBUG_REFCOUNTS
        if (cache_frame_56a2423a30afb4e86d11e90a76b59f52 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_56a2423a30afb4e86d11e90a76b59f52 = MAKE_FUNCTION_FRAME(codeobj_56a2423a30afb4e86d11e90a76b59f52, module_PIL$ImageChops, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_56a2423a30afb4e86d11e90a76b59f52->m_type_description == NULL);
    frame_56a2423a30afb4e86d11e90a76b59f52 = cache_frame_56a2423a30afb4e86d11e90a76b59f52;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_56a2423a30afb4e86d11e90a76b59f52);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_56a2423a30afb4e86d11e90a76b59f52) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_image1);
        tmp_called_instance_1 = par_image1;
        frame_56a2423a30afb4e86d11e90a76b59f52->m_frame.f_lineno = 100;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[7]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_image2);
        tmp_called_instance_2 = par_image2;
        frame_56a2423a30afb4e86d11e90a76b59f52->m_frame.f_lineno = 101;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[7]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_4;
        if (par_image1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 102;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = par_image1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[9]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_image1 == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 102;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_image1;
        tmp_expression_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[10]);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 102;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[19]);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 102;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_image2 == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_called_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 102;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_image2;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[10]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 102;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_56a2423a30afb4e86d11e90a76b59f52->m_frame.f_lineno = 102;
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 102;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_56a2423a30afb4e86d11e90a76b59f52->m_frame.f_lineno = 102;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_56a2423a30afb4e86d11e90a76b59f52);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_56a2423a30afb4e86d11e90a76b59f52);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_56a2423a30afb4e86d11e90a76b59f52);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_56a2423a30afb4e86d11e90a76b59f52, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_56a2423a30afb4e86d11e90a76b59f52->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_56a2423a30afb4e86d11e90a76b59f52, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_56a2423a30afb4e86d11e90a76b59f52,
        type_description_1,
        par_image1,
        par_image2
    );


    // Release cached frame if used for exception.
    if (frame_56a2423a30afb4e86d11e90a76b59f52 == cache_frame_56a2423a30afb4e86d11e90a76b59f52) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_56a2423a30afb4e86d11e90a76b59f52);
        cache_frame_56a2423a30afb4e86d11e90a76b59f52 = NULL;
    }

    assertFrameObject(frame_56a2423a30afb4e86d11e90a76b59f52);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_image1);
    par_image1 = NULL;
    Py_XDECREF(par_image2);
    par_image2 = NULL;
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

    Py_XDECREF(par_image1);
    par_image1 = NULL;
    Py_XDECREF(par_image2);
    par_image2 = NULL;
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


static PyObject *impl_PIL$ImageChops$$$function_7_multiply(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_image1 = python_pars[0];
    PyObject *par_image2 = python_pars[1];
    struct Nuitka_FrameObject *frame_50ad2260ff46f14f03bc994171458bf5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_50ad2260ff46f14f03bc994171458bf5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_50ad2260ff46f14f03bc994171458bf5)) {
        Py_XDECREF(cache_frame_50ad2260ff46f14f03bc994171458bf5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_50ad2260ff46f14f03bc994171458bf5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_50ad2260ff46f14f03bc994171458bf5 = MAKE_FUNCTION_FRAME(codeobj_50ad2260ff46f14f03bc994171458bf5, module_PIL$ImageChops, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_50ad2260ff46f14f03bc994171458bf5->m_type_description == NULL);
    frame_50ad2260ff46f14f03bc994171458bf5 = cache_frame_50ad2260ff46f14f03bc994171458bf5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_50ad2260ff46f14f03bc994171458bf5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_50ad2260ff46f14f03bc994171458bf5) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_image1);
        tmp_called_instance_1 = par_image1;
        frame_50ad2260ff46f14f03bc994171458bf5->m_frame.f_lineno = 119;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[7]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_image2);
        tmp_called_instance_2 = par_image2;
        frame_50ad2260ff46f14f03bc994171458bf5->m_frame.f_lineno = 120;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[7]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_4;
        if (par_image1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 121;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = par_image1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[9]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_image1 == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 121;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_image1;
        tmp_expression_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[10]);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 121;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[21]);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 121;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_image2 == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_called_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 121;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_image2;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[10]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 121;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_50ad2260ff46f14f03bc994171458bf5->m_frame.f_lineno = 121;
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 121;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_50ad2260ff46f14f03bc994171458bf5->m_frame.f_lineno = 121;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_50ad2260ff46f14f03bc994171458bf5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_50ad2260ff46f14f03bc994171458bf5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_50ad2260ff46f14f03bc994171458bf5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_50ad2260ff46f14f03bc994171458bf5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_50ad2260ff46f14f03bc994171458bf5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_50ad2260ff46f14f03bc994171458bf5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_50ad2260ff46f14f03bc994171458bf5,
        type_description_1,
        par_image1,
        par_image2
    );


    // Release cached frame if used for exception.
    if (frame_50ad2260ff46f14f03bc994171458bf5 == cache_frame_50ad2260ff46f14f03bc994171458bf5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_50ad2260ff46f14f03bc994171458bf5);
        cache_frame_50ad2260ff46f14f03bc994171458bf5 = NULL;
    }

    assertFrameObject(frame_50ad2260ff46f14f03bc994171458bf5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_image1);
    par_image1 = NULL;
    Py_XDECREF(par_image2);
    par_image2 = NULL;
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

    Py_XDECREF(par_image1);
    par_image1 = NULL;
    Py_XDECREF(par_image2);
    par_image2 = NULL;
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


static PyObject *impl_PIL$ImageChops$$$function_8_screen(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_image1 = python_pars[0];
    PyObject *par_image2 = python_pars[1];
    struct Nuitka_FrameObject *frame_15a1a0e2eeff014080fad649e3c0fd8d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_15a1a0e2eeff014080fad649e3c0fd8d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_15a1a0e2eeff014080fad649e3c0fd8d)) {
        Py_XDECREF(cache_frame_15a1a0e2eeff014080fad649e3c0fd8d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_15a1a0e2eeff014080fad649e3c0fd8d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_15a1a0e2eeff014080fad649e3c0fd8d = MAKE_FUNCTION_FRAME(codeobj_15a1a0e2eeff014080fad649e3c0fd8d, module_PIL$ImageChops, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_15a1a0e2eeff014080fad649e3c0fd8d->m_type_description == NULL);
    frame_15a1a0e2eeff014080fad649e3c0fd8d = cache_frame_15a1a0e2eeff014080fad649e3c0fd8d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_15a1a0e2eeff014080fad649e3c0fd8d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_15a1a0e2eeff014080fad649e3c0fd8d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_image1);
        tmp_called_instance_1 = par_image1;
        frame_15a1a0e2eeff014080fad649e3c0fd8d->m_frame.f_lineno = 135;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[7]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_image2);
        tmp_called_instance_2 = par_image2;
        frame_15a1a0e2eeff014080fad649e3c0fd8d->m_frame.f_lineno = 136;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[7]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_4;
        if (par_image1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 137;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = par_image1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[9]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_image1 == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 137;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_image1;
        tmp_expression_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[10]);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 137;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[23]);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 137;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_image2 == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_called_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 137;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_image2;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[10]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 137;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_15a1a0e2eeff014080fad649e3c0fd8d->m_frame.f_lineno = 137;
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 137;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_15a1a0e2eeff014080fad649e3c0fd8d->m_frame.f_lineno = 137;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_15a1a0e2eeff014080fad649e3c0fd8d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_15a1a0e2eeff014080fad649e3c0fd8d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_15a1a0e2eeff014080fad649e3c0fd8d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_15a1a0e2eeff014080fad649e3c0fd8d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_15a1a0e2eeff014080fad649e3c0fd8d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_15a1a0e2eeff014080fad649e3c0fd8d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_15a1a0e2eeff014080fad649e3c0fd8d,
        type_description_1,
        par_image1,
        par_image2
    );


    // Release cached frame if used for exception.
    if (frame_15a1a0e2eeff014080fad649e3c0fd8d == cache_frame_15a1a0e2eeff014080fad649e3c0fd8d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_15a1a0e2eeff014080fad649e3c0fd8d);
        cache_frame_15a1a0e2eeff014080fad649e3c0fd8d = NULL;
    }

    assertFrameObject(frame_15a1a0e2eeff014080fad649e3c0fd8d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_image1);
    par_image1 = NULL;
    Py_XDECREF(par_image2);
    par_image2 = NULL;
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

    Py_XDECREF(par_image1);
    par_image1 = NULL;
    Py_XDECREF(par_image2);
    par_image2 = NULL;
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


static PyObject *impl_PIL$ImageChops$$$function_9_soft_light(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_image1 = python_pars[0];
    PyObject *par_image2 = python_pars[1];
    struct Nuitka_FrameObject *frame_57ae2dcfc0db727cfb0e2e83e8429550;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_57ae2dcfc0db727cfb0e2e83e8429550 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_57ae2dcfc0db727cfb0e2e83e8429550)) {
        Py_XDECREF(cache_frame_57ae2dcfc0db727cfb0e2e83e8429550);

#if _DEBUG_REFCOUNTS
        if (cache_frame_57ae2dcfc0db727cfb0e2e83e8429550 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_57ae2dcfc0db727cfb0e2e83e8429550 = MAKE_FUNCTION_FRAME(codeobj_57ae2dcfc0db727cfb0e2e83e8429550, module_PIL$ImageChops, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_57ae2dcfc0db727cfb0e2e83e8429550->m_type_description == NULL);
    frame_57ae2dcfc0db727cfb0e2e83e8429550 = cache_frame_57ae2dcfc0db727cfb0e2e83e8429550;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_57ae2dcfc0db727cfb0e2e83e8429550);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_57ae2dcfc0db727cfb0e2e83e8429550) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_image1);
        tmp_called_instance_1 = par_image1;
        frame_57ae2dcfc0db727cfb0e2e83e8429550->m_frame.f_lineno = 147;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[7]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_image2);
        tmp_called_instance_2 = par_image2;
        frame_57ae2dcfc0db727cfb0e2e83e8429550->m_frame.f_lineno = 148;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[7]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_4;
        if (par_image1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 149;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = par_image1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[9]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_image1 == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 149;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_image1;
        tmp_expression_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[10]);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 149;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[25]);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 149;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_image2 == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_called_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 149;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_image2;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[10]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 149;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_57ae2dcfc0db727cfb0e2e83e8429550->m_frame.f_lineno = 149;
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 149;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_57ae2dcfc0db727cfb0e2e83e8429550->m_frame.f_lineno = 149;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_57ae2dcfc0db727cfb0e2e83e8429550);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_57ae2dcfc0db727cfb0e2e83e8429550);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_57ae2dcfc0db727cfb0e2e83e8429550);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_57ae2dcfc0db727cfb0e2e83e8429550, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_57ae2dcfc0db727cfb0e2e83e8429550->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_57ae2dcfc0db727cfb0e2e83e8429550, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_57ae2dcfc0db727cfb0e2e83e8429550,
        type_description_1,
        par_image1,
        par_image2
    );


    // Release cached frame if used for exception.
    if (frame_57ae2dcfc0db727cfb0e2e83e8429550 == cache_frame_57ae2dcfc0db727cfb0e2e83e8429550) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_57ae2dcfc0db727cfb0e2e83e8429550);
        cache_frame_57ae2dcfc0db727cfb0e2e83e8429550 = NULL;
    }

    assertFrameObject(frame_57ae2dcfc0db727cfb0e2e83e8429550);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_image1);
    par_image1 = NULL;
    Py_XDECREF(par_image2);
    par_image2 = NULL;
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

    Py_XDECREF(par_image1);
    par_image1 = NULL;
    Py_XDECREF(par_image2);
    par_image2 = NULL;
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


static PyObject *impl_PIL$ImageChops$$$function_10_hard_light(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_image1 = python_pars[0];
    PyObject *par_image2 = python_pars[1];
    struct Nuitka_FrameObject *frame_5867001bbb6e6ae3f3b1ff6b21cfcd19;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5867001bbb6e6ae3f3b1ff6b21cfcd19 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5867001bbb6e6ae3f3b1ff6b21cfcd19)) {
        Py_XDECREF(cache_frame_5867001bbb6e6ae3f3b1ff6b21cfcd19);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5867001bbb6e6ae3f3b1ff6b21cfcd19 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5867001bbb6e6ae3f3b1ff6b21cfcd19 = MAKE_FUNCTION_FRAME(codeobj_5867001bbb6e6ae3f3b1ff6b21cfcd19, module_PIL$ImageChops, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5867001bbb6e6ae3f3b1ff6b21cfcd19->m_type_description == NULL);
    frame_5867001bbb6e6ae3f3b1ff6b21cfcd19 = cache_frame_5867001bbb6e6ae3f3b1ff6b21cfcd19;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5867001bbb6e6ae3f3b1ff6b21cfcd19);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5867001bbb6e6ae3f3b1ff6b21cfcd19) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_image1);
        tmp_called_instance_1 = par_image1;
        frame_5867001bbb6e6ae3f3b1ff6b21cfcd19->m_frame.f_lineno = 159;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[7]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_image2);
        tmp_called_instance_2 = par_image2;
        frame_5867001bbb6e6ae3f3b1ff6b21cfcd19->m_frame.f_lineno = 160;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[7]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_4;
        if (par_image1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 161;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = par_image1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[9]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_image1 == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 161;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_image1;
        tmp_expression_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[10]);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 161;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[27]);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 161;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_image2 == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_called_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 161;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_image2;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[10]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 161;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_5867001bbb6e6ae3f3b1ff6b21cfcd19->m_frame.f_lineno = 161;
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 161;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_5867001bbb6e6ae3f3b1ff6b21cfcd19->m_frame.f_lineno = 161;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5867001bbb6e6ae3f3b1ff6b21cfcd19);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5867001bbb6e6ae3f3b1ff6b21cfcd19);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5867001bbb6e6ae3f3b1ff6b21cfcd19);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5867001bbb6e6ae3f3b1ff6b21cfcd19, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5867001bbb6e6ae3f3b1ff6b21cfcd19->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5867001bbb6e6ae3f3b1ff6b21cfcd19, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5867001bbb6e6ae3f3b1ff6b21cfcd19,
        type_description_1,
        par_image1,
        par_image2
    );


    // Release cached frame if used for exception.
    if (frame_5867001bbb6e6ae3f3b1ff6b21cfcd19 == cache_frame_5867001bbb6e6ae3f3b1ff6b21cfcd19) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_5867001bbb6e6ae3f3b1ff6b21cfcd19);
        cache_frame_5867001bbb6e6ae3f3b1ff6b21cfcd19 = NULL;
    }

    assertFrameObject(frame_5867001bbb6e6ae3f3b1ff6b21cfcd19);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_image1);
    par_image1 = NULL;
    Py_XDECREF(par_image2);
    par_image2 = NULL;
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

    Py_XDECREF(par_image1);
    par_image1 = NULL;
    Py_XDECREF(par_image2);
    par_image2 = NULL;
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


static PyObject *impl_PIL$ImageChops$$$function_11_overlay(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_image1 = python_pars[0];
    PyObject *par_image2 = python_pars[1];
    struct Nuitka_FrameObject *frame_5b2927f6f11574dd022b0a0e789194e7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5b2927f6f11574dd022b0a0e789194e7 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5b2927f6f11574dd022b0a0e789194e7)) {
        Py_XDECREF(cache_frame_5b2927f6f11574dd022b0a0e789194e7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5b2927f6f11574dd022b0a0e789194e7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5b2927f6f11574dd022b0a0e789194e7 = MAKE_FUNCTION_FRAME(codeobj_5b2927f6f11574dd022b0a0e789194e7, module_PIL$ImageChops, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5b2927f6f11574dd022b0a0e789194e7->m_type_description == NULL);
    frame_5b2927f6f11574dd022b0a0e789194e7 = cache_frame_5b2927f6f11574dd022b0a0e789194e7;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5b2927f6f11574dd022b0a0e789194e7);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5b2927f6f11574dd022b0a0e789194e7) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_image1);
        tmp_called_instance_1 = par_image1;
        frame_5b2927f6f11574dd022b0a0e789194e7->m_frame.f_lineno = 171;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[7]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_image2);
        tmp_called_instance_2 = par_image2;
        frame_5b2927f6f11574dd022b0a0e789194e7->m_frame.f_lineno = 172;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[7]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_4;
        if (par_image1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 173;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = par_image1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[9]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_image1 == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 173;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_image1;
        tmp_expression_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[10]);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 173;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[29]);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 173;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_image2 == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_called_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 173;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_image2;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[10]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 173;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_5b2927f6f11574dd022b0a0e789194e7->m_frame.f_lineno = 173;
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 173;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_5b2927f6f11574dd022b0a0e789194e7->m_frame.f_lineno = 173;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5b2927f6f11574dd022b0a0e789194e7);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5b2927f6f11574dd022b0a0e789194e7);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5b2927f6f11574dd022b0a0e789194e7);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5b2927f6f11574dd022b0a0e789194e7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5b2927f6f11574dd022b0a0e789194e7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5b2927f6f11574dd022b0a0e789194e7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5b2927f6f11574dd022b0a0e789194e7,
        type_description_1,
        par_image1,
        par_image2
    );


    // Release cached frame if used for exception.
    if (frame_5b2927f6f11574dd022b0a0e789194e7 == cache_frame_5b2927f6f11574dd022b0a0e789194e7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_5b2927f6f11574dd022b0a0e789194e7);
        cache_frame_5b2927f6f11574dd022b0a0e789194e7 = NULL;
    }

    assertFrameObject(frame_5b2927f6f11574dd022b0a0e789194e7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_image1);
    par_image1 = NULL;
    Py_XDECREF(par_image2);
    par_image2 = NULL;
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

    Py_XDECREF(par_image1);
    par_image1 = NULL;
    Py_XDECREF(par_image2);
    par_image2 = NULL;
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


static PyObject *impl_PIL$ImageChops$$$function_12_add(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_image1 = python_pars[0];
    PyObject *par_image2 = python_pars[1];
    PyObject *par_scale = python_pars[2];
    PyObject *par_offset = python_pars[3];
    struct Nuitka_FrameObject *frame_af5d6b86625519a5568731eb8c2de9c5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_af5d6b86625519a5568731eb8c2de9c5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_af5d6b86625519a5568731eb8c2de9c5)) {
        Py_XDECREF(cache_frame_af5d6b86625519a5568731eb8c2de9c5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_af5d6b86625519a5568731eb8c2de9c5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_af5d6b86625519a5568731eb8c2de9c5 = MAKE_FUNCTION_FRAME(codeobj_af5d6b86625519a5568731eb8c2de9c5, module_PIL$ImageChops, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_af5d6b86625519a5568731eb8c2de9c5->m_type_description == NULL);
    frame_af5d6b86625519a5568731eb8c2de9c5 = cache_frame_af5d6b86625519a5568731eb8c2de9c5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_af5d6b86625519a5568731eb8c2de9c5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_af5d6b86625519a5568731eb8c2de9c5) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_image1);
        tmp_called_instance_1 = par_image1;
        frame_af5d6b86625519a5568731eb8c2de9c5->m_frame.f_lineno = 188;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[7]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_image2);
        tmp_called_instance_2 = par_image2;
        frame_af5d6b86625519a5568731eb8c2de9c5->m_frame.f_lineno = 189;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[7]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        if (par_image1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 190;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = par_image1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[9]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_image1 == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 190;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_image1;
        tmp_expression_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[10]);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 190;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[31]);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 190;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_image2 == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_called_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 190;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_image2;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[10]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 190;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_scale);
        tmp_args_element_name_3 = par_scale;
        CHECK_OBJECT(par_offset);
        tmp_args_element_name_4 = par_offset;
        frame_af5d6b86625519a5568731eb8c2de9c5->m_frame.f_lineno = 190;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 190;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_af5d6b86625519a5568731eb8c2de9c5->m_frame.f_lineno = 190;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_af5d6b86625519a5568731eb8c2de9c5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_af5d6b86625519a5568731eb8c2de9c5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_af5d6b86625519a5568731eb8c2de9c5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_af5d6b86625519a5568731eb8c2de9c5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_af5d6b86625519a5568731eb8c2de9c5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_af5d6b86625519a5568731eb8c2de9c5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_af5d6b86625519a5568731eb8c2de9c5,
        type_description_1,
        par_image1,
        par_image2,
        par_scale,
        par_offset
    );


    // Release cached frame if used for exception.
    if (frame_af5d6b86625519a5568731eb8c2de9c5 == cache_frame_af5d6b86625519a5568731eb8c2de9c5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_af5d6b86625519a5568731eb8c2de9c5);
        cache_frame_af5d6b86625519a5568731eb8c2de9c5 = NULL;
    }

    assertFrameObject(frame_af5d6b86625519a5568731eb8c2de9c5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_image1);
    par_image1 = NULL;
    Py_XDECREF(par_image2);
    par_image2 = NULL;
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

    Py_XDECREF(par_image1);
    par_image1 = NULL;
    Py_XDECREF(par_image2);
    par_image2 = NULL;
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
    CHECK_OBJECT(par_scale);
    Py_DECREF(par_scale);
    CHECK_OBJECT(par_offset);
    Py_DECREF(par_offset);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_scale);
    Py_DECREF(par_scale);
    CHECK_OBJECT(par_offset);
    Py_DECREF(par_offset);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageChops$$$function_13_subtract(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_image1 = python_pars[0];
    PyObject *par_image2 = python_pars[1];
    PyObject *par_scale = python_pars[2];
    PyObject *par_offset = python_pars[3];
    struct Nuitka_FrameObject *frame_f3809f5b09f631e662929cec9b6a8f2e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f3809f5b09f631e662929cec9b6a8f2e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f3809f5b09f631e662929cec9b6a8f2e)) {
        Py_XDECREF(cache_frame_f3809f5b09f631e662929cec9b6a8f2e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f3809f5b09f631e662929cec9b6a8f2e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f3809f5b09f631e662929cec9b6a8f2e = MAKE_FUNCTION_FRAME(codeobj_f3809f5b09f631e662929cec9b6a8f2e, module_PIL$ImageChops, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f3809f5b09f631e662929cec9b6a8f2e->m_type_description == NULL);
    frame_f3809f5b09f631e662929cec9b6a8f2e = cache_frame_f3809f5b09f631e662929cec9b6a8f2e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f3809f5b09f631e662929cec9b6a8f2e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f3809f5b09f631e662929cec9b6a8f2e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_image1);
        tmp_called_instance_1 = par_image1;
        frame_f3809f5b09f631e662929cec9b6a8f2e->m_frame.f_lineno = 205;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[7]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_image2);
        tmp_called_instance_2 = par_image2;
        frame_f3809f5b09f631e662929cec9b6a8f2e->m_frame.f_lineno = 206;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[7]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        if (par_image1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 207;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = par_image1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[9]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_image1 == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 207;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_image1;
        tmp_expression_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[10]);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 207;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[33]);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 207;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_image2 == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_called_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 207;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_image2;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[10]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 207;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_scale);
        tmp_args_element_name_3 = par_scale;
        CHECK_OBJECT(par_offset);
        tmp_args_element_name_4 = par_offset;
        frame_f3809f5b09f631e662929cec9b6a8f2e->m_frame.f_lineno = 207;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 207;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_f3809f5b09f631e662929cec9b6a8f2e->m_frame.f_lineno = 207;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f3809f5b09f631e662929cec9b6a8f2e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f3809f5b09f631e662929cec9b6a8f2e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f3809f5b09f631e662929cec9b6a8f2e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f3809f5b09f631e662929cec9b6a8f2e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f3809f5b09f631e662929cec9b6a8f2e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f3809f5b09f631e662929cec9b6a8f2e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f3809f5b09f631e662929cec9b6a8f2e,
        type_description_1,
        par_image1,
        par_image2,
        par_scale,
        par_offset
    );


    // Release cached frame if used for exception.
    if (frame_f3809f5b09f631e662929cec9b6a8f2e == cache_frame_f3809f5b09f631e662929cec9b6a8f2e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_f3809f5b09f631e662929cec9b6a8f2e);
        cache_frame_f3809f5b09f631e662929cec9b6a8f2e = NULL;
    }

    assertFrameObject(frame_f3809f5b09f631e662929cec9b6a8f2e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_image1);
    par_image1 = NULL;
    Py_XDECREF(par_image2);
    par_image2 = NULL;
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

    Py_XDECREF(par_image1);
    par_image1 = NULL;
    Py_XDECREF(par_image2);
    par_image2 = NULL;
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
    CHECK_OBJECT(par_scale);
    Py_DECREF(par_scale);
    CHECK_OBJECT(par_offset);
    Py_DECREF(par_offset);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_scale);
    Py_DECREF(par_scale);
    CHECK_OBJECT(par_offset);
    Py_DECREF(par_offset);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageChops$$$function_14_add_modulo(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_image1 = python_pars[0];
    PyObject *par_image2 = python_pars[1];
    struct Nuitka_FrameObject *frame_52a4ec6a3060ee5fb545f451fd089041;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_52a4ec6a3060ee5fb545f451fd089041 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_52a4ec6a3060ee5fb545f451fd089041)) {
        Py_XDECREF(cache_frame_52a4ec6a3060ee5fb545f451fd089041);

#if _DEBUG_REFCOUNTS
        if (cache_frame_52a4ec6a3060ee5fb545f451fd089041 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_52a4ec6a3060ee5fb545f451fd089041 = MAKE_FUNCTION_FRAME(codeobj_52a4ec6a3060ee5fb545f451fd089041, module_PIL$ImageChops, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_52a4ec6a3060ee5fb545f451fd089041->m_type_description == NULL);
    frame_52a4ec6a3060ee5fb545f451fd089041 = cache_frame_52a4ec6a3060ee5fb545f451fd089041;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_52a4ec6a3060ee5fb545f451fd089041);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_52a4ec6a3060ee5fb545f451fd089041) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_image1);
        tmp_called_instance_1 = par_image1;
        frame_52a4ec6a3060ee5fb545f451fd089041->m_frame.f_lineno = 220;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[7]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_image2);
        tmp_called_instance_2 = par_image2;
        frame_52a4ec6a3060ee5fb545f451fd089041->m_frame.f_lineno = 221;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[7]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_4;
        if (par_image1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 222;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = par_image1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[9]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_image1 == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 222;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_image1;
        tmp_expression_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[10]);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 222;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[35]);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 222;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_image2 == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_called_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 222;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_image2;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[10]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 222;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_52a4ec6a3060ee5fb545f451fd089041->m_frame.f_lineno = 222;
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 222;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_52a4ec6a3060ee5fb545f451fd089041->m_frame.f_lineno = 222;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_52a4ec6a3060ee5fb545f451fd089041);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_52a4ec6a3060ee5fb545f451fd089041);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_52a4ec6a3060ee5fb545f451fd089041);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_52a4ec6a3060ee5fb545f451fd089041, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_52a4ec6a3060ee5fb545f451fd089041->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_52a4ec6a3060ee5fb545f451fd089041, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_52a4ec6a3060ee5fb545f451fd089041,
        type_description_1,
        par_image1,
        par_image2
    );


    // Release cached frame if used for exception.
    if (frame_52a4ec6a3060ee5fb545f451fd089041 == cache_frame_52a4ec6a3060ee5fb545f451fd089041) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_52a4ec6a3060ee5fb545f451fd089041);
        cache_frame_52a4ec6a3060ee5fb545f451fd089041 = NULL;
    }

    assertFrameObject(frame_52a4ec6a3060ee5fb545f451fd089041);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_image1);
    par_image1 = NULL;
    Py_XDECREF(par_image2);
    par_image2 = NULL;
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

    Py_XDECREF(par_image1);
    par_image1 = NULL;
    Py_XDECREF(par_image2);
    par_image2 = NULL;
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


static PyObject *impl_PIL$ImageChops$$$function_15_subtract_modulo(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_image1 = python_pars[0];
    PyObject *par_image2 = python_pars[1];
    struct Nuitka_FrameObject *frame_680e4bc60583a65ef402a3b4fc7ba048;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_680e4bc60583a65ef402a3b4fc7ba048 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_680e4bc60583a65ef402a3b4fc7ba048)) {
        Py_XDECREF(cache_frame_680e4bc60583a65ef402a3b4fc7ba048);

#if _DEBUG_REFCOUNTS
        if (cache_frame_680e4bc60583a65ef402a3b4fc7ba048 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_680e4bc60583a65ef402a3b4fc7ba048 = MAKE_FUNCTION_FRAME(codeobj_680e4bc60583a65ef402a3b4fc7ba048, module_PIL$ImageChops, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_680e4bc60583a65ef402a3b4fc7ba048->m_type_description == NULL);
    frame_680e4bc60583a65ef402a3b4fc7ba048 = cache_frame_680e4bc60583a65ef402a3b4fc7ba048;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_680e4bc60583a65ef402a3b4fc7ba048);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_680e4bc60583a65ef402a3b4fc7ba048) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_image1);
        tmp_called_instance_1 = par_image1;
        frame_680e4bc60583a65ef402a3b4fc7ba048->m_frame.f_lineno = 235;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[7]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_image2);
        tmp_called_instance_2 = par_image2;
        frame_680e4bc60583a65ef402a3b4fc7ba048->m_frame.f_lineno = 236;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[7]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_4;
        if (par_image1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 237;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = par_image1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[9]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_image1 == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 237;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_image1;
        tmp_expression_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[10]);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 237;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[37]);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 237;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_image2 == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_called_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 237;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_image2;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[10]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 237;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_680e4bc60583a65ef402a3b4fc7ba048->m_frame.f_lineno = 237;
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 237;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_680e4bc60583a65ef402a3b4fc7ba048->m_frame.f_lineno = 237;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_680e4bc60583a65ef402a3b4fc7ba048);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_680e4bc60583a65ef402a3b4fc7ba048);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_680e4bc60583a65ef402a3b4fc7ba048);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_680e4bc60583a65ef402a3b4fc7ba048, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_680e4bc60583a65ef402a3b4fc7ba048->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_680e4bc60583a65ef402a3b4fc7ba048, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_680e4bc60583a65ef402a3b4fc7ba048,
        type_description_1,
        par_image1,
        par_image2
    );


    // Release cached frame if used for exception.
    if (frame_680e4bc60583a65ef402a3b4fc7ba048 == cache_frame_680e4bc60583a65ef402a3b4fc7ba048) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_680e4bc60583a65ef402a3b4fc7ba048);
        cache_frame_680e4bc60583a65ef402a3b4fc7ba048 = NULL;
    }

    assertFrameObject(frame_680e4bc60583a65ef402a3b4fc7ba048);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_image1);
    par_image1 = NULL;
    Py_XDECREF(par_image2);
    par_image2 = NULL;
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

    Py_XDECREF(par_image1);
    par_image1 = NULL;
    Py_XDECREF(par_image2);
    par_image2 = NULL;
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


static PyObject *impl_PIL$ImageChops$$$function_16_logical_and(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_image1 = python_pars[0];
    PyObject *par_image2 = python_pars[1];
    struct Nuitka_FrameObject *frame_875f9ecf318ba3957303016808d2e5dc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_875f9ecf318ba3957303016808d2e5dc = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_875f9ecf318ba3957303016808d2e5dc)) {
        Py_XDECREF(cache_frame_875f9ecf318ba3957303016808d2e5dc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_875f9ecf318ba3957303016808d2e5dc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_875f9ecf318ba3957303016808d2e5dc = MAKE_FUNCTION_FRAME(codeobj_875f9ecf318ba3957303016808d2e5dc, module_PIL$ImageChops, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_875f9ecf318ba3957303016808d2e5dc->m_type_description == NULL);
    frame_875f9ecf318ba3957303016808d2e5dc = cache_frame_875f9ecf318ba3957303016808d2e5dc;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_875f9ecf318ba3957303016808d2e5dc);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_875f9ecf318ba3957303016808d2e5dc) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_image1);
        tmp_called_instance_1 = par_image1;
        frame_875f9ecf318ba3957303016808d2e5dc->m_frame.f_lineno = 255;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[7]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_image2);
        tmp_called_instance_2 = par_image2;
        frame_875f9ecf318ba3957303016808d2e5dc->m_frame.f_lineno = 256;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[7]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_4;
        if (par_image1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 257;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = par_image1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[9]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_image1 == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 257;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_image1;
        tmp_expression_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[10]);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 257;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[39]);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 257;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_image2 == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_called_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 257;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_image2;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[10]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 257;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_875f9ecf318ba3957303016808d2e5dc->m_frame.f_lineno = 257;
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 257;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_875f9ecf318ba3957303016808d2e5dc->m_frame.f_lineno = 257;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_875f9ecf318ba3957303016808d2e5dc);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_875f9ecf318ba3957303016808d2e5dc);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_875f9ecf318ba3957303016808d2e5dc);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_875f9ecf318ba3957303016808d2e5dc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_875f9ecf318ba3957303016808d2e5dc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_875f9ecf318ba3957303016808d2e5dc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_875f9ecf318ba3957303016808d2e5dc,
        type_description_1,
        par_image1,
        par_image2
    );


    // Release cached frame if used for exception.
    if (frame_875f9ecf318ba3957303016808d2e5dc == cache_frame_875f9ecf318ba3957303016808d2e5dc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_875f9ecf318ba3957303016808d2e5dc);
        cache_frame_875f9ecf318ba3957303016808d2e5dc = NULL;
    }

    assertFrameObject(frame_875f9ecf318ba3957303016808d2e5dc);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_image1);
    par_image1 = NULL;
    Py_XDECREF(par_image2);
    par_image2 = NULL;
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

    Py_XDECREF(par_image1);
    par_image1 = NULL;
    Py_XDECREF(par_image2);
    par_image2 = NULL;
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


static PyObject *impl_PIL$ImageChops$$$function_17_logical_or(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_image1 = python_pars[0];
    PyObject *par_image2 = python_pars[1];
    struct Nuitka_FrameObject *frame_3a848730b1b759dac6051fb0ddea4b82;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3a848730b1b759dac6051fb0ddea4b82 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3a848730b1b759dac6051fb0ddea4b82)) {
        Py_XDECREF(cache_frame_3a848730b1b759dac6051fb0ddea4b82);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3a848730b1b759dac6051fb0ddea4b82 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3a848730b1b759dac6051fb0ddea4b82 = MAKE_FUNCTION_FRAME(codeobj_3a848730b1b759dac6051fb0ddea4b82, module_PIL$ImageChops, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_3a848730b1b759dac6051fb0ddea4b82->m_type_description == NULL);
    frame_3a848730b1b759dac6051fb0ddea4b82 = cache_frame_3a848730b1b759dac6051fb0ddea4b82;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3a848730b1b759dac6051fb0ddea4b82);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3a848730b1b759dac6051fb0ddea4b82) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_image1);
        tmp_called_instance_1 = par_image1;
        frame_3a848730b1b759dac6051fb0ddea4b82->m_frame.f_lineno = 272;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[7]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_image2);
        tmp_called_instance_2 = par_image2;
        frame_3a848730b1b759dac6051fb0ddea4b82->m_frame.f_lineno = 273;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[7]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_4;
        if (par_image1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 274;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = par_image1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[9]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_image1 == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 274;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_image1;
        tmp_expression_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[10]);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 274;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[41]);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 274;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_image2 == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_called_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 274;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_image2;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[10]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 274;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3a848730b1b759dac6051fb0ddea4b82->m_frame.f_lineno = 274;
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 274;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3a848730b1b759dac6051fb0ddea4b82->m_frame.f_lineno = 274;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3a848730b1b759dac6051fb0ddea4b82);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3a848730b1b759dac6051fb0ddea4b82);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3a848730b1b759dac6051fb0ddea4b82);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3a848730b1b759dac6051fb0ddea4b82, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3a848730b1b759dac6051fb0ddea4b82->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3a848730b1b759dac6051fb0ddea4b82, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3a848730b1b759dac6051fb0ddea4b82,
        type_description_1,
        par_image1,
        par_image2
    );


    // Release cached frame if used for exception.
    if (frame_3a848730b1b759dac6051fb0ddea4b82 == cache_frame_3a848730b1b759dac6051fb0ddea4b82) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_3a848730b1b759dac6051fb0ddea4b82);
        cache_frame_3a848730b1b759dac6051fb0ddea4b82 = NULL;
    }

    assertFrameObject(frame_3a848730b1b759dac6051fb0ddea4b82);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_image1);
    par_image1 = NULL;
    Py_XDECREF(par_image2);
    par_image2 = NULL;
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

    Py_XDECREF(par_image1);
    par_image1 = NULL;
    Py_XDECREF(par_image2);
    par_image2 = NULL;
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


static PyObject *impl_PIL$ImageChops$$$function_18_logical_xor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_image1 = python_pars[0];
    PyObject *par_image2 = python_pars[1];
    struct Nuitka_FrameObject *frame_11d0781cdb9efb14ce05dde7e05a6911;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_11d0781cdb9efb14ce05dde7e05a6911 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_11d0781cdb9efb14ce05dde7e05a6911)) {
        Py_XDECREF(cache_frame_11d0781cdb9efb14ce05dde7e05a6911);

#if _DEBUG_REFCOUNTS
        if (cache_frame_11d0781cdb9efb14ce05dde7e05a6911 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_11d0781cdb9efb14ce05dde7e05a6911 = MAKE_FUNCTION_FRAME(codeobj_11d0781cdb9efb14ce05dde7e05a6911, module_PIL$ImageChops, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_11d0781cdb9efb14ce05dde7e05a6911->m_type_description == NULL);
    frame_11d0781cdb9efb14ce05dde7e05a6911 = cache_frame_11d0781cdb9efb14ce05dde7e05a6911;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_11d0781cdb9efb14ce05dde7e05a6911);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_11d0781cdb9efb14ce05dde7e05a6911) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_image1);
        tmp_called_instance_1 = par_image1;
        frame_11d0781cdb9efb14ce05dde7e05a6911->m_frame.f_lineno = 289;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[7]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_image2);
        tmp_called_instance_2 = par_image2;
        frame_11d0781cdb9efb14ce05dde7e05a6911->m_frame.f_lineno = 290;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[7]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_4;
        if (par_image1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 291;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = par_image1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[9]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_image1 == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 291;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_image1;
        tmp_expression_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[10]);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 291;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[43]);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 291;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_image2 == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_called_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 291;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_image2;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[10]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 291;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_11d0781cdb9efb14ce05dde7e05a6911->m_frame.f_lineno = 291;
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 291;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_11d0781cdb9efb14ce05dde7e05a6911->m_frame.f_lineno = 291;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_11d0781cdb9efb14ce05dde7e05a6911);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_11d0781cdb9efb14ce05dde7e05a6911);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_11d0781cdb9efb14ce05dde7e05a6911);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_11d0781cdb9efb14ce05dde7e05a6911, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_11d0781cdb9efb14ce05dde7e05a6911->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_11d0781cdb9efb14ce05dde7e05a6911, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_11d0781cdb9efb14ce05dde7e05a6911,
        type_description_1,
        par_image1,
        par_image2
    );


    // Release cached frame if used for exception.
    if (frame_11d0781cdb9efb14ce05dde7e05a6911 == cache_frame_11d0781cdb9efb14ce05dde7e05a6911) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_11d0781cdb9efb14ce05dde7e05a6911);
        cache_frame_11d0781cdb9efb14ce05dde7e05a6911 = NULL;
    }

    assertFrameObject(frame_11d0781cdb9efb14ce05dde7e05a6911);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_image1);
    par_image1 = NULL;
    Py_XDECREF(par_image2);
    par_image2 = NULL;
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

    Py_XDECREF(par_image1);
    par_image1 = NULL;
    Py_XDECREF(par_image2);
    par_image2 = NULL;
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


static PyObject *impl_PIL$ImageChops$$$function_19_blend(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_image1 = python_pars[0];
    PyObject *par_image2 = python_pars[1];
    PyObject *par_alpha = python_pars[2];
    struct Nuitka_FrameObject *frame_562d7ce8e45db45cd16902e2ebb208ed;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_562d7ce8e45db45cd16902e2ebb208ed = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_562d7ce8e45db45cd16902e2ebb208ed)) {
        Py_XDECREF(cache_frame_562d7ce8e45db45cd16902e2ebb208ed);

#if _DEBUG_REFCOUNTS
        if (cache_frame_562d7ce8e45db45cd16902e2ebb208ed == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_562d7ce8e45db45cd16902e2ebb208ed = MAKE_FUNCTION_FRAME(codeobj_562d7ce8e45db45cd16902e2ebb208ed, module_PIL$ImageChops, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_562d7ce8e45db45cd16902e2ebb208ed->m_type_description == NULL);
    frame_562d7ce8e45db45cd16902e2ebb208ed = cache_frame_562d7ce8e45db45cd16902e2ebb208ed;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_562d7ce8e45db45cd16902e2ebb208ed);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_562d7ce8e45db45cd16902e2ebb208ed) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_image1);
        tmp_args_element_name_1 = par_image1;
        CHECK_OBJECT(par_image2);
        tmp_args_element_name_2 = par_image2;
        CHECK_OBJECT(par_alpha);
        tmp_args_element_name_3 = par_alpha;
        frame_562d7ce8e45db45cd16902e2ebb208ed->m_frame.f_lineno = 301;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_return_value = CALL_METHOD_WITH_ARGS3(tmp_called_instance_1, mod_consts[45], call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_562d7ce8e45db45cd16902e2ebb208ed);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_562d7ce8e45db45cd16902e2ebb208ed);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_562d7ce8e45db45cd16902e2ebb208ed);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_562d7ce8e45db45cd16902e2ebb208ed, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_562d7ce8e45db45cd16902e2ebb208ed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_562d7ce8e45db45cd16902e2ebb208ed, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_562d7ce8e45db45cd16902e2ebb208ed,
        type_description_1,
        par_image1,
        par_image2,
        par_alpha
    );


    // Release cached frame if used for exception.
    if (frame_562d7ce8e45db45cd16902e2ebb208ed == cache_frame_562d7ce8e45db45cd16902e2ebb208ed) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_562d7ce8e45db45cd16902e2ebb208ed);
        cache_frame_562d7ce8e45db45cd16902e2ebb208ed = NULL;
    }

    assertFrameObject(frame_562d7ce8e45db45cd16902e2ebb208ed);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_image1);
    Py_DECREF(par_image1);
    CHECK_OBJECT(par_image2);
    Py_DECREF(par_image2);
    CHECK_OBJECT(par_alpha);
    Py_DECREF(par_alpha);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_image1);
    Py_DECREF(par_image1);
    CHECK_OBJECT(par_image2);
    Py_DECREF(par_image2);
    CHECK_OBJECT(par_alpha);
    Py_DECREF(par_alpha);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageChops$$$function_20_composite(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_image1 = python_pars[0];
    PyObject *par_image2 = python_pars[1];
    PyObject *par_mask = python_pars[2];
    struct Nuitka_FrameObject *frame_1c9ae057aa20a9b4a1b081acbf0534d9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1c9ae057aa20a9b4a1b081acbf0534d9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1c9ae057aa20a9b4a1b081acbf0534d9)) {
        Py_XDECREF(cache_frame_1c9ae057aa20a9b4a1b081acbf0534d9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1c9ae057aa20a9b4a1b081acbf0534d9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1c9ae057aa20a9b4a1b081acbf0534d9 = MAKE_FUNCTION_FRAME(codeobj_1c9ae057aa20a9b4a1b081acbf0534d9, module_PIL$ImageChops, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1c9ae057aa20a9b4a1b081acbf0534d9->m_type_description == NULL);
    frame_1c9ae057aa20a9b4a1b081acbf0534d9 = cache_frame_1c9ae057aa20a9b4a1b081acbf0534d9;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1c9ae057aa20a9b4a1b081acbf0534d9);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1c9ae057aa20a9b4a1b081acbf0534d9) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_image1);
        tmp_args_element_name_1 = par_image1;
        CHECK_OBJECT(par_image2);
        tmp_args_element_name_2 = par_image2;
        CHECK_OBJECT(par_mask);
        tmp_args_element_name_3 = par_mask;
        frame_1c9ae057aa20a9b4a1b081acbf0534d9->m_frame.f_lineno = 311;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_return_value = CALL_METHOD_WITH_ARGS3(tmp_called_instance_1, mod_consts[47], call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1c9ae057aa20a9b4a1b081acbf0534d9);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1c9ae057aa20a9b4a1b081acbf0534d9);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1c9ae057aa20a9b4a1b081acbf0534d9);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1c9ae057aa20a9b4a1b081acbf0534d9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1c9ae057aa20a9b4a1b081acbf0534d9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1c9ae057aa20a9b4a1b081acbf0534d9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1c9ae057aa20a9b4a1b081acbf0534d9,
        type_description_1,
        par_image1,
        par_image2,
        par_mask
    );


    // Release cached frame if used for exception.
    if (frame_1c9ae057aa20a9b4a1b081acbf0534d9 == cache_frame_1c9ae057aa20a9b4a1b081acbf0534d9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1c9ae057aa20a9b4a1b081acbf0534d9);
        cache_frame_1c9ae057aa20a9b4a1b081acbf0534d9 = NULL;
    }

    assertFrameObject(frame_1c9ae057aa20a9b4a1b081acbf0534d9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_image1);
    Py_DECREF(par_image1);
    CHECK_OBJECT(par_image2);
    Py_DECREF(par_image2);
    CHECK_OBJECT(par_mask);
    Py_DECREF(par_mask);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_image1);
    Py_DECREF(par_image1);
    CHECK_OBJECT(par_image2);
    Py_DECREF(par_image2);
    CHECK_OBJECT(par_mask);
    Py_DECREF(par_mask);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageChops$$$function_21_offset(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_image = python_pars[0];
    PyObject *par_xoffset = python_pars[1];
    PyObject *par_yoffset = python_pars[2];
    struct Nuitka_FrameObject *frame_6f1e31124a9b9016aa8bc86e345bb8db;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6f1e31124a9b9016aa8bc86e345bb8db = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_yoffset);
        tmp_compexpr_left_1 = par_yoffset;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(par_xoffset);
        tmp_assign_source_1 = par_xoffset;
        {
            PyObject *old = par_yoffset;
            assert(old != NULL);
            par_yoffset = tmp_assign_source_1;
            Py_INCREF(par_yoffset);
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    // Tried code:
    if (isFrameUnusable(cache_frame_6f1e31124a9b9016aa8bc86e345bb8db)) {
        Py_XDECREF(cache_frame_6f1e31124a9b9016aa8bc86e345bb8db);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6f1e31124a9b9016aa8bc86e345bb8db == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6f1e31124a9b9016aa8bc86e345bb8db = MAKE_FUNCTION_FRAME(codeobj_6f1e31124a9b9016aa8bc86e345bb8db, module_PIL$ImageChops, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6f1e31124a9b9016aa8bc86e345bb8db->m_type_description == NULL);
    frame_6f1e31124a9b9016aa8bc86e345bb8db = cache_frame_6f1e31124a9b9016aa8bc86e345bb8db;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6f1e31124a9b9016aa8bc86e345bb8db);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6f1e31124a9b9016aa8bc86e345bb8db) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_image);
        tmp_called_instance_1 = par_image;
        frame_6f1e31124a9b9016aa8bc86e345bb8db->m_frame.f_lineno = 327;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[7]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        if (par_image == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 328;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = par_image;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[9]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (par_image == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 328;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_image;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[10]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 328;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_xoffset);
        tmp_args_element_name_2 = par_xoffset;
        CHECK_OBJECT(par_yoffset);
        tmp_args_element_name_3 = par_yoffset;
        frame_6f1e31124a9b9016aa8bc86e345bb8db->m_frame.f_lineno = 328;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_2, mod_consts[49], call_args);
        }

        Py_DECREF(tmp_called_instance_2);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 328;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_6f1e31124a9b9016aa8bc86e345bb8db->m_frame.f_lineno = 328;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6f1e31124a9b9016aa8bc86e345bb8db);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6f1e31124a9b9016aa8bc86e345bb8db);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6f1e31124a9b9016aa8bc86e345bb8db);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6f1e31124a9b9016aa8bc86e345bb8db, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6f1e31124a9b9016aa8bc86e345bb8db->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6f1e31124a9b9016aa8bc86e345bb8db, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6f1e31124a9b9016aa8bc86e345bb8db,
        type_description_1,
        par_image,
        par_xoffset,
        par_yoffset
    );


    // Release cached frame if used for exception.
    if (frame_6f1e31124a9b9016aa8bc86e345bb8db == cache_frame_6f1e31124a9b9016aa8bc86e345bb8db) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6f1e31124a9b9016aa8bc86e345bb8db);
        cache_frame_6f1e31124a9b9016aa8bc86e345bb8db = NULL;
    }

    assertFrameObject(frame_6f1e31124a9b9016aa8bc86e345bb8db);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_image);
    par_image = NULL;
    CHECK_OBJECT(par_yoffset);
    Py_DECREF(par_yoffset);
    par_yoffset = NULL;
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

    Py_XDECREF(par_image);
    par_image = NULL;
    CHECK_OBJECT(par_yoffset);
    Py_DECREF(par_yoffset);
    par_yoffset = NULL;
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
    CHECK_OBJECT(par_xoffset);
    Py_DECREF(par_xoffset);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_xoffset);
    Py_DECREF(par_xoffset);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_10_hard_light() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function_10_hard_light,
        mod_consts[70],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5867001bbb6e6ae3f3b1ff6b21cfcd19,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$ImageChops,
        mod_consts[28],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_11_overlay() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function_11_overlay,
        mod_consts[71],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5b2927f6f11574dd022b0a0e789194e7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$ImageChops,
        mod_consts[30],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_12_add(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function_12_add,
        mod_consts[73],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_af5d6b86625519a5568731eb8c2de9c5,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$ImageChops,
        mod_consts[32],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_13_subtract(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function_13_subtract,
        mod_consts[74],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f3809f5b09f631e662929cec9b6a8f2e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$ImageChops,
        mod_consts[34],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_14_add_modulo() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function_14_add_modulo,
        mod_consts[75],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_52a4ec6a3060ee5fb545f451fd089041,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$ImageChops,
        mod_consts[36],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_15_subtract_modulo() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function_15_subtract_modulo,
        mod_consts[76],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_680e4bc60583a65ef402a3b4fc7ba048,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$ImageChops,
        mod_consts[38],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_16_logical_and() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function_16_logical_and,
        mod_consts[77],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_875f9ecf318ba3957303016808d2e5dc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$ImageChops,
        mod_consts[40],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_17_logical_or() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function_17_logical_or,
        mod_consts[78],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3a848730b1b759dac6051fb0ddea4b82,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$ImageChops,
        mod_consts[42],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_18_logical_xor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function_18_logical_xor,
        mod_consts[79],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_11d0781cdb9efb14ce05dde7e05a6911,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$ImageChops,
        mod_consts[44],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_19_blend() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function_19_blend,
        mod_consts[45],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_562d7ce8e45db45cd16902e2ebb208ed,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$ImageChops,
        mod_consts[46],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_1_constant() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function_1_constant,
        mod_consts[61],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a41f488543dba645376be1c5ed62843a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$ImageChops,
        mod_consts[4],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_20_composite() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function_20_composite,
        mod_consts[47],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1c9ae057aa20a9b4a1b081acbf0534d9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$ImageChops,
        mod_consts[48],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_21_offset(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function_21_offset,
        mod_consts[49],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6f1e31124a9b9016aa8bc86e345bb8db,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$ImageChops,
        mod_consts[50],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_2_duplicate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function_2_duplicate,
        mod_consts[62],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b6440a9c29cf5abe823a924b5fb9d8d0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$ImageChops,
        mod_consts[6],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_3_invert() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function_3_invert,
        mod_consts[63],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_090c1d2465de0a6a89ffde8b4d35a585,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$ImageChops,
        mod_consts[12],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_4_lighter() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function_4_lighter,
        mod_consts[64],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_253060f9f26840c9fdd3e71e5617aa14,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$ImageChops,
        mod_consts[16],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_5_darker() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function_5_darker,
        mod_consts[65],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_79602f993d17eb4a0bfadef0738f3e81,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$ImageChops,
        mod_consts[18],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_6_difference() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function_6_difference,
        mod_consts[66],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_56a2423a30afb4e86d11e90a76b59f52,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$ImageChops,
        mod_consts[20],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_7_multiply() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function_7_multiply,
        mod_consts[67],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_50ad2260ff46f14f03bc994171458bf5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$ImageChops,
        mod_consts[22],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_8_screen() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function_8_screen,
        mod_consts[68],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_15a1a0e2eeff014080fad649e3c0fd8d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$ImageChops,
        mod_consts[24],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_9_soft_light() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function_9_soft_light,
        mod_consts[69],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_57ae2dcfc0db727cfb0e2e83e8429550,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$ImageChops,
        mod_consts[26],
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

function_impl_code functable_PIL$ImageChops[] = {
    impl_PIL$ImageChops$$$function_1_constant,
    impl_PIL$ImageChops$$$function_2_duplicate,
    impl_PIL$ImageChops$$$function_3_invert,
    impl_PIL$ImageChops$$$function_4_lighter,
    impl_PIL$ImageChops$$$function_5_darker,
    impl_PIL$ImageChops$$$function_6_difference,
    impl_PIL$ImageChops$$$function_7_multiply,
    impl_PIL$ImageChops$$$function_8_screen,
    impl_PIL$ImageChops$$$function_9_soft_light,
    impl_PIL$ImageChops$$$function_10_hard_light,
    impl_PIL$ImageChops$$$function_11_overlay,
    impl_PIL$ImageChops$$$function_12_add,
    impl_PIL$ImageChops$$$function_13_subtract,
    impl_PIL$ImageChops$$$function_14_add_modulo,
    impl_PIL$ImageChops$$$function_15_subtract_modulo,
    impl_PIL$ImageChops$$$function_16_logical_and,
    impl_PIL$ImageChops$$$function_17_logical_or,
    impl_PIL$ImageChops$$$function_18_logical_xor,
    impl_PIL$ImageChops$$$function_19_blend,
    impl_PIL$ImageChops$$$function_20_composite,
    impl_PIL$ImageChops$$$function_21_offset,
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

    function_impl_code *current = functable_PIL$ImageChops;
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

    if (offset > sizeof(functable_PIL$ImageChops) || offset < 0) {
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
        functable_PIL$ImageChops[offset],
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
        module_PIL$ImageChops,
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
NUITKA_MAY_BE_UNUSED static char const *module_full_name = "PIL.ImageChops";

// Internal entry point for module code.
PyObject *modulecode_PIL$ImageChops(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_PIL$ImageChops = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
#ifdef _NUITKA_TRACE
        PRINT_STRING("PIL.ImageChops: Skipping module init, already done.\n");
#endif

        return module_PIL$ImageChops;
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
    PRINT_STRING("PIL.ImageChops: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("PIL.ImageChops: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("PIL.ImageChops: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initPIL$ImageChops\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_PIL$ImageChops = MODULE_DICT(module_PIL$ImageChops);

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
        moduledict_PIL$ImageChops,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_PIL$ImageChops,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_PIL$ImageChops,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$ImageChops,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$ImageChops,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_PIL$ImageChops);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_PIL$ImageChops);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT(spec_value);

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_6b12175bd54b2168a910aa0c105e2de8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_6b12175bd54b2168a910aa0c105e2de8 = MAKE_MODULE_FRAME(codeobj_6b12175bd54b2168a910aa0c105e2de8, module_PIL$ImageChops);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_6b12175bd54b2168a910aa0c105e2de8);
    assert(Py_REFCNT(frame_6b12175bd54b2168a910aa0c105e2de8) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = mod_consts[52];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[55], tmp_assattr_name_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[56], tmp_assattr_name_2);
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
        UPDATE_STRING_DICT0(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[58];
        tmp_globals_name_1 = (PyObject *)moduledict_PIL$ImageChops;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = mod_consts[59];
        tmp_level_name_1 = mod_consts[60];
        frame_6b12175bd54b2168a910aa0c105e2de8->m_frame.f_lineno = 18;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_PIL$ImageChops,
                mod_consts[0],
                mod_consts[60]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_4);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6b12175bd54b2168a910aa0c105e2de8);
#endif
    popFrameStack();

    assertFrameObject(frame_6b12175bd54b2168a910aa0c105e2de8);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6b12175bd54b2168a910aa0c105e2de8);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6b12175bd54b2168a910aa0c105e2de8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6b12175bd54b2168a910aa0c105e2de8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6b12175bd54b2168a910aa0c105e2de8, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_5;


        tmp_assign_source_5 = MAKE_FUNCTION_PIL$ImageChops$$$function_1_constant();

        UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;


        tmp_assign_source_6 = MAKE_FUNCTION_PIL$ImageChops$$$function_2_duplicate();

        UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;


        tmp_assign_source_7 = MAKE_FUNCTION_PIL$ImageChops$$$function_3_invert();

        UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;


        tmp_assign_source_8 = MAKE_FUNCTION_PIL$ImageChops$$$function_4_lighter();

        UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION_PIL$ImageChops$$$function_5_darker();

        UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;


        tmp_assign_source_10 = MAKE_FUNCTION_PIL$ImageChops$$$function_6_difference();

        UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;


        tmp_assign_source_11 = MAKE_FUNCTION_PIL$ImageChops$$$function_7_multiply();

        UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;


        tmp_assign_source_12 = MAKE_FUNCTION_PIL$ImageChops$$$function_8_screen();

        UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;


        tmp_assign_source_13 = MAKE_FUNCTION_PIL$ImageChops$$$function_9_soft_light();

        UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;


        tmp_assign_source_14 = MAKE_FUNCTION_PIL$ImageChops$$$function_10_hard_light();

        UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;


        tmp_assign_source_15 = MAKE_FUNCTION_PIL$ImageChops$$$function_11_overlay();

        UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[72];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_16 = MAKE_FUNCTION_PIL$ImageChops$$$function_12_add(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[72];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_17 = MAKE_FUNCTION_PIL$ImageChops$$$function_13_subtract(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;


        tmp_assign_source_18 = MAKE_FUNCTION_PIL$ImageChops$$$function_14_add_modulo();

        UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;


        tmp_assign_source_19 = MAKE_FUNCTION_PIL$ImageChops$$$function_15_subtract_modulo();

        UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;


        tmp_assign_source_20 = MAKE_FUNCTION_PIL$ImageChops$$$function_16_logical_and();

        UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;


        tmp_assign_source_21 = MAKE_FUNCTION_PIL$ImageChops$$$function_17_logical_or();

        UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;


        tmp_assign_source_22 = MAKE_FUNCTION_PIL$ImageChops$$$function_18_logical_xor();

        UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;


        tmp_assign_source_23 = MAKE_FUNCTION_PIL$ImageChops$$$function_19_blend();

        UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;


        tmp_assign_source_24 = MAKE_FUNCTION_PIL$ImageChops$$$function_20_composite();

        UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = mod_consts[80];
        Py_INCREF(tmp_defaults_3);


        tmp_assign_source_25 = MAKE_FUNCTION_PIL$ImageChops$$$function_21_offset(tmp_defaults_3);

        UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_25);
    }

    return module_PIL$ImageChops;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

