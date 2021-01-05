/* Generated code for Python module 'numpy.core._methods'
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

/* The "module_numpy$core$_methods" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$core$_methods;
PyDictObject *moduledict_numpy$core$_methods;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[160];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    loadConstantsBlob(&mod_consts[0], "numpy.core._methods", 160);

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
void checkModuleConstants_numpy$core$_methods(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "numpy.core._methods", 160);
}
#endif

// The module code objects.
static PyCodeObject *codeobj_0effa1662c8c9d091fdfaae48f913fc3;
static PyCodeObject *codeobj_5cb5f3d180433a177c07d62e2b951a14;
static PyCodeObject *codeobj_4124d97e6b0fe8261e9dbd470cdd342d;
static PyCodeObject *codeobj_56c3a0338ee7081d6744f480f442ad0c;
static PyCodeObject *codeobj_97ac3427b7249ca71b8cc3af232658ad;
static PyCodeObject *codeobj_62da645bfc34c14136250d018877118c;
static PyCodeObject *codeobj_f506a0e0280828d02c53f4d3238a98bd;
static PyCodeObject *codeobj_c52b9e604d2d83847a3d1bef291d0373;
static PyCodeObject *codeobj_4d8c55ef2fe9d1bac806eebbb80bdf67;
static PyCodeObject *codeobj_f89dd91135fe07830949798ff1527c29;
static PyCodeObject *codeobj_5e650fee9a43554a25c68aa9e15f6690;
static PyCodeObject *codeobj_5f56312ef57eac76c68613e12eb718d6;
static PyCodeObject *codeobj_4a8e6b0dd1aa5a43b9e95bf4cd92dfa3;
static PyCodeObject *codeobj_10349d8b44d954aa7dd867d034687ac9;
static PyCodeObject *codeobj_ab379933e307ac0b12f2eb722dd46d15;
static PyCodeObject *codeobj_bcee3bdfd7a885f0c78cdf5d7a675db6;
static PyCodeObject *codeobj_a255f330ed94317782d9f76e0b57e18c;
static PyCodeObject *codeobj_5b2c0512e8394ccf9bff4827a6e21214;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[97]; CHECK_OBJECT(module_filename_obj);
    codeobj_0effa1662c8c9d091fdfaae48f913fc3 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[145], NULL, NULL, 0, 0, 0);
    codeobj_5cb5f3d180433a177c07d62e2b951a14 = MAKE_CODEOBJECT(module_filename_obj, 56, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[134], mod_consts[146], NULL, 5, 0, 0);
    codeobj_4124d97e6b0fe8261e9dbd470cdd342d = MAKE_CODEOBJECT(module_filename_obj, 37, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[128], mod_consts[147], NULL, 6, 0, 0);
    codeobj_56c3a0338ee7081d6744f480f442ad0c = MAKE_CODEOBJECT(module_filename_obj, 41, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[129], mod_consts[147], NULL, 6, 0, 0);
    codeobj_97ac3427b7249ca71b8cc3af232658ad = MAKE_CODEOBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[133], mod_consts[146], NULL, 5, 0, 0);
    codeobj_62da645bfc34c14136250d018877118c = MAKE_CODEOBJECT(module_filename_obj, 106, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[137], mod_consts[148], NULL, 4, 1, 0);
    codeobj_f506a0e0280828d02c53f4d3238a98bd = MAKE_CODEOBJECT(module_filename_obj, 87, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[44], mod_consts[149], NULL, 1, 2, 0);
    codeobj_c52b9e604d2d83847a3d1bef291d0373 = MAKE_CODEOBJECT(module_filename_obj, 82, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[37], mod_consts[150], NULL, 1, 0, 0);
    codeobj_4d8c55ef2fe9d1bac806eebbb80bdf67 = MAKE_CODEOBJECT(module_filename_obj, 72, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[38], mod_consts[151], NULL, 1, 0, 0);
    codeobj_f89dd91135fe07830949798ff1527c29 = MAKE_CODEOBJECT(module_filename_obj, 59, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[50], mod_consts[152], NULL, 2, 0, 0);
    codeobj_5e650fee9a43554a25c68aa9e15f6690 = MAKE_CODEOBJECT(module_filename_obj, 252, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[143], mod_consts[153], NULL, 3, 0, 0);
    codeobj_5f56312ef57eac76c68613e12eb718d6 = MAKE_CODEOBJECT(module_filename_obj, 260, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[144], mod_consts[154], NULL, 2, 0, 0);
    codeobj_4a8e6b0dd1aa5a43b9e95bf4cd92dfa3 = MAKE_CODEOBJECT(module_filename_obj, 143, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[138], mod_consts[155], NULL, 5, 0, 0);
    codeobj_10349d8b44d954aa7dd867d034687ac9 = MAKE_CODEOBJECT(module_filename_obj, 49, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[131], mod_consts[156], NULL, 7, 0, 0);
    codeobj_ab379933e307ac0b12f2eb722dd46d15 = MAKE_CODEOBJECT(module_filename_obj, 245, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[142], mod_consts[157], NULL, 4, 0, 0);
    codeobj_bcee3bdfd7a885f0c78cdf5d7a675db6 = MAKE_CODEOBJECT(module_filename_obj, 232, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[140], mod_consts[158], NULL, 6, 0, 0);
    codeobj_a255f330ed94317782d9f76e0b57e18c = MAKE_CODEOBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[130], mod_consts[156], NULL, 7, 0, 0);
    codeobj_5b2c0512e8394ccf9bff4827a6e21214 = MAKE_CODEOBJECT(module_filename_obj, 176, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[79], mod_consts[159], NULL, 6, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function_20_complex_call_helper_keywords_star_list_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function_18_complex_call_helper_pos_keywords_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_10__clip_dep_invoke_with_casting(PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_11__clip(PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_12__mean(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_13__var(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_14__std(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_15__ptp(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_16__dump(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_17__dumps(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_1__amax(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_2__amin(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_3__sum(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_4__prod(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_5__any(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_6__all(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_7__count_reduce_items();


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_8__clip_dep_is_scalar_nan();


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_9__clip_dep_is_byte_swapped();


// The module function definitions.
static PyObject *impl_numpy$core$_methods$$$function_1__amax(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[0];
    PyObject *par_axis = python_pars[1];
    PyObject *par_out = python_pars[2];
    PyObject *par_keepdims = python_pars[3];
    PyObject *par_initial = python_pars[4];
    PyObject *par_where = python_pars[5];
    struct Nuitka_FrameObject *frame_4124d97e6b0fe8261e9dbd470cdd342d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4124d97e6b0fe8261e9dbd470cdd342d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4124d97e6b0fe8261e9dbd470cdd342d)) {
        Py_XDECREF(cache_frame_4124d97e6b0fe8261e9dbd470cdd342d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4124d97e6b0fe8261e9dbd470cdd342d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4124d97e6b0fe8261e9dbd470cdd342d = MAKE_FUNCTION_FRAME(codeobj_4124d97e6b0fe8261e9dbd470cdd342d, module_numpy$core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_4124d97e6b0fe8261e9dbd470cdd342d->m_type_description == NULL);
    frame_4124d97e6b0fe8261e9dbd470cdd342d = cache_frame_4124d97e6b0fe8261e9dbd470cdd342d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_4124d97e6b0fe8261e9dbd470cdd342d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4124d97e6b0fe8261e9dbd470cdd342d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_a);
        tmp_args_element_name_1 = par_a;
        CHECK_OBJECT(par_axis);
        tmp_args_element_name_2 = par_axis;
        tmp_args_element_name_3 = Py_None;
        CHECK_OBJECT(par_out);
        tmp_args_element_name_4 = par_out;
        CHECK_OBJECT(par_keepdims);
        tmp_args_element_name_5 = par_keepdims;
        CHECK_OBJECT(par_initial);
        tmp_args_element_name_6 = par_initial;
        CHECK_OBJECT(par_where);
        tmp_args_element_name_7 = par_where;
        frame_4124d97e6b0fe8261e9dbd470cdd342d->m_frame.f_lineno = 39;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS7(tmp_called_name_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4124d97e6b0fe8261e9dbd470cdd342d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_4124d97e6b0fe8261e9dbd470cdd342d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4124d97e6b0fe8261e9dbd470cdd342d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4124d97e6b0fe8261e9dbd470cdd342d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4124d97e6b0fe8261e9dbd470cdd342d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4124d97e6b0fe8261e9dbd470cdd342d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4124d97e6b0fe8261e9dbd470cdd342d,
        type_description_1,
        par_a,
        par_axis,
        par_out,
        par_keepdims,
        par_initial,
        par_where
    );


    // Release cached frame if used for exception.
    if (frame_4124d97e6b0fe8261e9dbd470cdd342d == cache_frame_4124d97e6b0fe8261e9dbd470cdd342d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_4124d97e6b0fe8261e9dbd470cdd342d);
        cache_frame_4124d97e6b0fe8261e9dbd470cdd342d = NULL;
    }

    assertFrameObject(frame_4124d97e6b0fe8261e9dbd470cdd342d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_keepdims);
    Py_DECREF(par_keepdims);
    CHECK_OBJECT(par_initial);
    Py_DECREF(par_initial);
    CHECK_OBJECT(par_where);
    Py_DECREF(par_where);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_keepdims);
    Py_DECREF(par_keepdims);
    CHECK_OBJECT(par_initial);
    Py_DECREF(par_initial);
    CHECK_OBJECT(par_where);
    Py_DECREF(par_where);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function_2__amin(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[0];
    PyObject *par_axis = python_pars[1];
    PyObject *par_out = python_pars[2];
    PyObject *par_keepdims = python_pars[3];
    PyObject *par_initial = python_pars[4];
    PyObject *par_where = python_pars[5];
    struct Nuitka_FrameObject *frame_56c3a0338ee7081d6744f480f442ad0c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_56c3a0338ee7081d6744f480f442ad0c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_56c3a0338ee7081d6744f480f442ad0c)) {
        Py_XDECREF(cache_frame_56c3a0338ee7081d6744f480f442ad0c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_56c3a0338ee7081d6744f480f442ad0c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_56c3a0338ee7081d6744f480f442ad0c = MAKE_FUNCTION_FRAME(codeobj_56c3a0338ee7081d6744f480f442ad0c, module_numpy$core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_56c3a0338ee7081d6744f480f442ad0c->m_type_description == NULL);
    frame_56c3a0338ee7081d6744f480f442ad0c = cache_frame_56c3a0338ee7081d6744f480f442ad0c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_56c3a0338ee7081d6744f480f442ad0c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_56c3a0338ee7081d6744f480f442ad0c) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_a);
        tmp_args_element_name_1 = par_a;
        CHECK_OBJECT(par_axis);
        tmp_args_element_name_2 = par_axis;
        tmp_args_element_name_3 = Py_None;
        CHECK_OBJECT(par_out);
        tmp_args_element_name_4 = par_out;
        CHECK_OBJECT(par_keepdims);
        tmp_args_element_name_5 = par_keepdims;
        CHECK_OBJECT(par_initial);
        tmp_args_element_name_6 = par_initial;
        CHECK_OBJECT(par_where);
        tmp_args_element_name_7 = par_where;
        frame_56c3a0338ee7081d6744f480f442ad0c->m_frame.f_lineno = 43;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS7(tmp_called_name_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_56c3a0338ee7081d6744f480f442ad0c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_56c3a0338ee7081d6744f480f442ad0c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_56c3a0338ee7081d6744f480f442ad0c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_56c3a0338ee7081d6744f480f442ad0c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_56c3a0338ee7081d6744f480f442ad0c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_56c3a0338ee7081d6744f480f442ad0c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_56c3a0338ee7081d6744f480f442ad0c,
        type_description_1,
        par_a,
        par_axis,
        par_out,
        par_keepdims,
        par_initial,
        par_where
    );


    // Release cached frame if used for exception.
    if (frame_56c3a0338ee7081d6744f480f442ad0c == cache_frame_56c3a0338ee7081d6744f480f442ad0c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_56c3a0338ee7081d6744f480f442ad0c);
        cache_frame_56c3a0338ee7081d6744f480f442ad0c = NULL;
    }

    assertFrameObject(frame_56c3a0338ee7081d6744f480f442ad0c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_keepdims);
    Py_DECREF(par_keepdims);
    CHECK_OBJECT(par_initial);
    Py_DECREF(par_initial);
    CHECK_OBJECT(par_where);
    Py_DECREF(par_where);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_keepdims);
    Py_DECREF(par_keepdims);
    CHECK_OBJECT(par_initial);
    Py_DECREF(par_initial);
    CHECK_OBJECT(par_where);
    Py_DECREF(par_where);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function_3__sum(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[0];
    PyObject *par_axis = python_pars[1];
    PyObject *par_dtype = python_pars[2];
    PyObject *par_out = python_pars[3];
    PyObject *par_keepdims = python_pars[4];
    PyObject *par_initial = python_pars[5];
    PyObject *par_where = python_pars[6];
    struct Nuitka_FrameObject *frame_a255f330ed94317782d9f76e0b57e18c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a255f330ed94317782d9f76e0b57e18c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a255f330ed94317782d9f76e0b57e18c)) {
        Py_XDECREF(cache_frame_a255f330ed94317782d9f76e0b57e18c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a255f330ed94317782d9f76e0b57e18c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a255f330ed94317782d9f76e0b57e18c = MAKE_FUNCTION_FRAME(codeobj_a255f330ed94317782d9f76e0b57e18c, module_numpy$core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a255f330ed94317782d9f76e0b57e18c->m_type_description == NULL);
    frame_a255f330ed94317782d9f76e0b57e18c = cache_frame_a255f330ed94317782d9f76e0b57e18c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a255f330ed94317782d9f76e0b57e18c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a255f330ed94317782d9f76e0b57e18c) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_a);
        tmp_args_element_name_1 = par_a;
        CHECK_OBJECT(par_axis);
        tmp_args_element_name_2 = par_axis;
        CHECK_OBJECT(par_dtype);
        tmp_args_element_name_3 = par_dtype;
        CHECK_OBJECT(par_out);
        tmp_args_element_name_4 = par_out;
        CHECK_OBJECT(par_keepdims);
        tmp_args_element_name_5 = par_keepdims;
        CHECK_OBJECT(par_initial);
        tmp_args_element_name_6 = par_initial;
        CHECK_OBJECT(par_where);
        tmp_args_element_name_7 = par_where;
        frame_a255f330ed94317782d9f76e0b57e18c->m_frame.f_lineno = 47;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS7(tmp_called_name_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a255f330ed94317782d9f76e0b57e18c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a255f330ed94317782d9f76e0b57e18c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a255f330ed94317782d9f76e0b57e18c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a255f330ed94317782d9f76e0b57e18c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a255f330ed94317782d9f76e0b57e18c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a255f330ed94317782d9f76e0b57e18c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a255f330ed94317782d9f76e0b57e18c,
        type_description_1,
        par_a,
        par_axis,
        par_dtype,
        par_out,
        par_keepdims,
        par_initial,
        par_where
    );


    // Release cached frame if used for exception.
    if (frame_a255f330ed94317782d9f76e0b57e18c == cache_frame_a255f330ed94317782d9f76e0b57e18c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a255f330ed94317782d9f76e0b57e18c);
        cache_frame_a255f330ed94317782d9f76e0b57e18c = NULL;
    }

    assertFrameObject(frame_a255f330ed94317782d9f76e0b57e18c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_keepdims);
    Py_DECREF(par_keepdims);
    CHECK_OBJECT(par_initial);
    Py_DECREF(par_initial);
    CHECK_OBJECT(par_where);
    Py_DECREF(par_where);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_keepdims);
    Py_DECREF(par_keepdims);
    CHECK_OBJECT(par_initial);
    Py_DECREF(par_initial);
    CHECK_OBJECT(par_where);
    Py_DECREF(par_where);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function_4__prod(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[0];
    PyObject *par_axis = python_pars[1];
    PyObject *par_dtype = python_pars[2];
    PyObject *par_out = python_pars[3];
    PyObject *par_keepdims = python_pars[4];
    PyObject *par_initial = python_pars[5];
    PyObject *par_where = python_pars[6];
    struct Nuitka_FrameObject *frame_10349d8b44d954aa7dd867d034687ac9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_10349d8b44d954aa7dd867d034687ac9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_10349d8b44d954aa7dd867d034687ac9)) {
        Py_XDECREF(cache_frame_10349d8b44d954aa7dd867d034687ac9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_10349d8b44d954aa7dd867d034687ac9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_10349d8b44d954aa7dd867d034687ac9 = MAKE_FUNCTION_FRAME(codeobj_10349d8b44d954aa7dd867d034687ac9, module_numpy$core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_10349d8b44d954aa7dd867d034687ac9->m_type_description == NULL);
    frame_10349d8b44d954aa7dd867d034687ac9 = cache_frame_10349d8b44d954aa7dd867d034687ac9;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_10349d8b44d954aa7dd867d034687ac9);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_10349d8b44d954aa7dd867d034687ac9) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_a);
        tmp_args_element_name_1 = par_a;
        CHECK_OBJECT(par_axis);
        tmp_args_element_name_2 = par_axis;
        CHECK_OBJECT(par_dtype);
        tmp_args_element_name_3 = par_dtype;
        CHECK_OBJECT(par_out);
        tmp_args_element_name_4 = par_out;
        CHECK_OBJECT(par_keepdims);
        tmp_args_element_name_5 = par_keepdims;
        CHECK_OBJECT(par_initial);
        tmp_args_element_name_6 = par_initial;
        CHECK_OBJECT(par_where);
        tmp_args_element_name_7 = par_where;
        frame_10349d8b44d954aa7dd867d034687ac9->m_frame.f_lineno = 51;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS7(tmp_called_name_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_10349d8b44d954aa7dd867d034687ac9);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_10349d8b44d954aa7dd867d034687ac9);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_10349d8b44d954aa7dd867d034687ac9);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_10349d8b44d954aa7dd867d034687ac9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_10349d8b44d954aa7dd867d034687ac9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_10349d8b44d954aa7dd867d034687ac9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_10349d8b44d954aa7dd867d034687ac9,
        type_description_1,
        par_a,
        par_axis,
        par_dtype,
        par_out,
        par_keepdims,
        par_initial,
        par_where
    );


    // Release cached frame if used for exception.
    if (frame_10349d8b44d954aa7dd867d034687ac9 == cache_frame_10349d8b44d954aa7dd867d034687ac9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_10349d8b44d954aa7dd867d034687ac9);
        cache_frame_10349d8b44d954aa7dd867d034687ac9 = NULL;
    }

    assertFrameObject(frame_10349d8b44d954aa7dd867d034687ac9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_keepdims);
    Py_DECREF(par_keepdims);
    CHECK_OBJECT(par_initial);
    Py_DECREF(par_initial);
    CHECK_OBJECT(par_where);
    Py_DECREF(par_where);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_keepdims);
    Py_DECREF(par_keepdims);
    CHECK_OBJECT(par_initial);
    Py_DECREF(par_initial);
    CHECK_OBJECT(par_where);
    Py_DECREF(par_where);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function_5__any(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[0];
    PyObject *par_axis = python_pars[1];
    PyObject *par_dtype = python_pars[2];
    PyObject *par_out = python_pars[3];
    PyObject *par_keepdims = python_pars[4];
    struct Nuitka_FrameObject *frame_97ac3427b7249ca71b8cc3af232658ad;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_97ac3427b7249ca71b8cc3af232658ad = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_97ac3427b7249ca71b8cc3af232658ad)) {
        Py_XDECREF(cache_frame_97ac3427b7249ca71b8cc3af232658ad);

#if _DEBUG_REFCOUNTS
        if (cache_frame_97ac3427b7249ca71b8cc3af232658ad == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_97ac3427b7249ca71b8cc3af232658ad = MAKE_FUNCTION_FRAME(codeobj_97ac3427b7249ca71b8cc3af232658ad, module_numpy$core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_97ac3427b7249ca71b8cc3af232658ad->m_type_description == NULL);
    frame_97ac3427b7249ca71b8cc3af232658ad = cache_frame_97ac3427b7249ca71b8cc3af232658ad;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_97ac3427b7249ca71b8cc3af232658ad);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_97ac3427b7249ca71b8cc3af232658ad) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_a);
        tmp_args_element_name_1 = par_a;
        CHECK_OBJECT(par_axis);
        tmp_args_element_name_2 = par_axis;
        CHECK_OBJECT(par_dtype);
        tmp_args_element_name_3 = par_dtype;
        CHECK_OBJECT(par_out);
        tmp_args_element_name_4 = par_out;
        CHECK_OBJECT(par_keepdims);
        tmp_args_element_name_5 = par_keepdims;
        frame_97ac3427b7249ca71b8cc3af232658ad->m_frame.f_lineno = 54;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5(tmp_called_name_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_97ac3427b7249ca71b8cc3af232658ad);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_97ac3427b7249ca71b8cc3af232658ad);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_97ac3427b7249ca71b8cc3af232658ad);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_97ac3427b7249ca71b8cc3af232658ad, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_97ac3427b7249ca71b8cc3af232658ad->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_97ac3427b7249ca71b8cc3af232658ad, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_97ac3427b7249ca71b8cc3af232658ad,
        type_description_1,
        par_a,
        par_axis,
        par_dtype,
        par_out,
        par_keepdims
    );


    // Release cached frame if used for exception.
    if (frame_97ac3427b7249ca71b8cc3af232658ad == cache_frame_97ac3427b7249ca71b8cc3af232658ad) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_97ac3427b7249ca71b8cc3af232658ad);
        cache_frame_97ac3427b7249ca71b8cc3af232658ad = NULL;
    }

    assertFrameObject(frame_97ac3427b7249ca71b8cc3af232658ad);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_keepdims);
    Py_DECREF(par_keepdims);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_keepdims);
    Py_DECREF(par_keepdims);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function_6__all(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[0];
    PyObject *par_axis = python_pars[1];
    PyObject *par_dtype = python_pars[2];
    PyObject *par_out = python_pars[3];
    PyObject *par_keepdims = python_pars[4];
    struct Nuitka_FrameObject *frame_5cb5f3d180433a177c07d62e2b951a14;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5cb5f3d180433a177c07d62e2b951a14 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5cb5f3d180433a177c07d62e2b951a14)) {
        Py_XDECREF(cache_frame_5cb5f3d180433a177c07d62e2b951a14);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5cb5f3d180433a177c07d62e2b951a14 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5cb5f3d180433a177c07d62e2b951a14 = MAKE_FUNCTION_FRAME(codeobj_5cb5f3d180433a177c07d62e2b951a14, module_numpy$core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5cb5f3d180433a177c07d62e2b951a14->m_type_description == NULL);
    frame_5cb5f3d180433a177c07d62e2b951a14 = cache_frame_5cb5f3d180433a177c07d62e2b951a14;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5cb5f3d180433a177c07d62e2b951a14);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5cb5f3d180433a177c07d62e2b951a14) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_a);
        tmp_args_element_name_1 = par_a;
        CHECK_OBJECT(par_axis);
        tmp_args_element_name_2 = par_axis;
        CHECK_OBJECT(par_dtype);
        tmp_args_element_name_3 = par_dtype;
        CHECK_OBJECT(par_out);
        tmp_args_element_name_4 = par_out;
        CHECK_OBJECT(par_keepdims);
        tmp_args_element_name_5 = par_keepdims;
        frame_5cb5f3d180433a177c07d62e2b951a14->m_frame.f_lineno = 57;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5(tmp_called_name_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5cb5f3d180433a177c07d62e2b951a14);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5cb5f3d180433a177c07d62e2b951a14);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5cb5f3d180433a177c07d62e2b951a14);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5cb5f3d180433a177c07d62e2b951a14, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5cb5f3d180433a177c07d62e2b951a14->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5cb5f3d180433a177c07d62e2b951a14, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5cb5f3d180433a177c07d62e2b951a14,
        type_description_1,
        par_a,
        par_axis,
        par_dtype,
        par_out,
        par_keepdims
    );


    // Release cached frame if used for exception.
    if (frame_5cb5f3d180433a177c07d62e2b951a14 == cache_frame_5cb5f3d180433a177c07d62e2b951a14) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_5cb5f3d180433a177c07d62e2b951a14);
        cache_frame_5cb5f3d180433a177c07d62e2b951a14 = NULL;
    }

    assertFrameObject(frame_5cb5f3d180433a177c07d62e2b951a14);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_keepdims);
    Py_DECREF(par_keepdims);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_keepdims);
    Py_DECREF(par_keepdims);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function_7__count_reduce_items(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arr = python_pars[0];
    PyObject *par_axis = python_pars[1];
    PyObject *var_items = NULL;
    PyObject *var_ax = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_f89dd91135fe07830949798ff1527c29;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f89dd91135fe07830949798ff1527c29 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f89dd91135fe07830949798ff1527c29)) {
        Py_XDECREF(cache_frame_f89dd91135fe07830949798ff1527c29);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f89dd91135fe07830949798ff1527c29 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f89dd91135fe07830949798ff1527c29 = MAKE_FUNCTION_FRAME(codeobj_f89dd91135fe07830949798ff1527c29, module_numpy$core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f89dd91135fe07830949798ff1527c29->m_type_description == NULL);
    frame_f89dd91135fe07830949798ff1527c29 = cache_frame_f89dd91135fe07830949798ff1527c29;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f89dd91135fe07830949798ff1527c29);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f89dd91135fe07830949798ff1527c29) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_axis);
        tmp_compexpr_left_1 = par_axis;
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
        PyObject *tmp_tuple_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_arr);
        tmp_expression_name_1 = par_arr;
        tmp_xrange_low_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[6]);
        if (tmp_xrange_low_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_arg_1 = BUILTIN_XRANGE1(tmp_xrange_low_1);
        Py_DECREF(tmp_xrange_low_1);
        if (tmp_tuple_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = PySequence_Tuple(tmp_tuple_arg_1);
        Py_DECREF(tmp_tuple_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_axis;
            assert(old != NULL);
            par_axis = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_axis);
        tmp_isinstance_inst_1 = par_axis;
        tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooo";
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_axis);
        tmp_tuple_element_1 = par_axis;
        tmp_assign_source_2 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_2, 0, tmp_tuple_element_1);
        {
            PyObject *old = par_axis;
            assert(old != NULL);
            par_axis = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = mod_consts[7];
        assert(var_items == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_items = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        if (par_axis == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 65;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_1 = par_axis;
        tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_5 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooo";
                exception_lineno = 65;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_6 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_ax;
            var_ax = tmp_assign_source_6;
            Py_INCREF(var_ax);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_5;
        if (var_items == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 66;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_left_name_1 = var_items;
        if (par_arr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 66;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_expression_name_3 = par_arr;
        tmp_expression_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[11]);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_name_4 == NULL)) {
            tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_name_2);

            exception_lineno = 66;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[13]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_name_2);

            exception_lineno = 66;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_ax);
        tmp_args_element_name_1 = var_ax;
        if (par_arr == NULL) {
            Py_DECREF(tmp_expression_name_2);
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 66;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_expression_name_5 = par_arr;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[6]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_name_2);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 66;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        frame_f89dd91135fe07830949798ff1527c29->m_frame.f_lineno = 66;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_subscript_name_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_subscript_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_name_2);

            exception_lineno = 66;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_right_name_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_1);
        Py_DECREF(tmp_expression_name_2);
        Py_DECREF(tmp_subscript_name_1);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_result = BINARY_OPERATION_MULT_OBJECT_OBJECT_INPLACE(&tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_7 = tmp_left_name_1;
        var_items = tmp_assign_source_7;

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 65;
        type_description_1 = "oooo";
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
    if (var_items == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 67;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_items;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f89dd91135fe07830949798ff1527c29);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f89dd91135fe07830949798ff1527c29);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f89dd91135fe07830949798ff1527c29);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f89dd91135fe07830949798ff1527c29, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f89dd91135fe07830949798ff1527c29->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f89dd91135fe07830949798ff1527c29, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f89dd91135fe07830949798ff1527c29,
        type_description_1,
        par_arr,
        par_axis,
        var_items,
        var_ax
    );


    // Release cached frame if used for exception.
    if (frame_f89dd91135fe07830949798ff1527c29 == cache_frame_f89dd91135fe07830949798ff1527c29) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_f89dd91135fe07830949798ff1527c29);
        cache_frame_f89dd91135fe07830949798ff1527c29 = NULL;
    }

    assertFrameObject(frame_f89dd91135fe07830949798ff1527c29);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_arr);
    par_arr = NULL;
    Py_XDECREF(par_axis);
    par_axis = NULL;
    Py_XDECREF(var_items);
    var_items = NULL;
    Py_XDECREF(var_ax);
    var_ax = NULL;
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

    Py_XDECREF(par_arr);
    par_arr = NULL;
    Py_XDECREF(par_axis);
    par_axis = NULL;
    Py_XDECREF(var_items);
    var_items = NULL;
    Py_XDECREF(var_ax);
    var_ax = NULL;
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


static PyObject *impl_numpy$core$_methods$$$function_8__clip_dep_is_scalar_nan(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[0];
    PyObject *var_ndim = NULL;
    struct Nuitka_FrameObject *frame_4d8c55ef2fe9d1bac806eebbb80bdf67;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_4d8c55ef2fe9d1bac806eebbb80bdf67 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4d8c55ef2fe9d1bac806eebbb80bdf67)) {
        Py_XDECREF(cache_frame_4d8c55ef2fe9d1bac806eebbb80bdf67);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4d8c55ef2fe9d1bac806eebbb80bdf67 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4d8c55ef2fe9d1bac806eebbb80bdf67 = MAKE_FUNCTION_FRAME(codeobj_4d8c55ef2fe9d1bac806eebbb80bdf67, module_numpy$core$_methods, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_4d8c55ef2fe9d1bac806eebbb80bdf67->m_type_description == NULL);
    frame_4d8c55ef2fe9d1bac806eebbb80bdf67 = cache_frame_4d8c55ef2fe9d1bac806eebbb80bdf67;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_4d8c55ef2fe9d1bac806eebbb80bdf67);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4d8c55ef2fe9d1bac806eebbb80bdf67) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[14];
        tmp_globals_name_1 = (PyObject *)moduledict_numpy$core$_methods;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = mod_consts[15];
        tmp_level_name_1 = mod_consts[16];
        frame_4d8c55ef2fe9d1bac806eebbb80bdf67->m_frame.f_lineno = 74;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_numpy$core$_methods,
                mod_consts[6],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[6]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_ndim == NULL);
        var_ndim = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_tmp_condition_result_1_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_ndim);
        tmp_called_name_1 = var_ndim;
        CHECK_OBJECT(par_a);
        tmp_args_element_name_1 = par_a;
        frame_4d8c55ef2fe9d1bac806eebbb80bdf67->m_frame.f_lineno = 75;
        tmp_compexpr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = mod_consts[16];
        tmp_tmp_condition_result_1_object_1 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_tmp_condition_result_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_1_object_1);

            exception_lineno = 75;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_1_object_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_a);
        tmp_args_element_name_2 = par_a;
        frame_4d8c55ef2fe9d1bac806eebbb80bdf67->m_frame.f_lineno = 78;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[18], tmp_args_element_name_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_4d8c55ef2fe9d1bac806eebbb80bdf67, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_4d8c55ef2fe9d1bac806eebbb80bdf67, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_2 = PyExc_TypeError;
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
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_3;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 77;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_4d8c55ef2fe9d1bac806eebbb80bdf67->m_frame) frame_4d8c55ef2fe9d1bac806eebbb80bdf67->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_3;
    branch_end_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    goto frame_return_exit_1;
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
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4d8c55ef2fe9d1bac806eebbb80bdf67);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_4d8c55ef2fe9d1bac806eebbb80bdf67);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4d8c55ef2fe9d1bac806eebbb80bdf67);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4d8c55ef2fe9d1bac806eebbb80bdf67, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4d8c55ef2fe9d1bac806eebbb80bdf67->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4d8c55ef2fe9d1bac806eebbb80bdf67, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4d8c55ef2fe9d1bac806eebbb80bdf67,
        type_description_1,
        par_a,
        var_ndim
    );


    // Release cached frame if used for exception.
    if (frame_4d8c55ef2fe9d1bac806eebbb80bdf67 == cache_frame_4d8c55ef2fe9d1bac806eebbb80bdf67) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_4d8c55ef2fe9d1bac806eebbb80bdf67);
        cache_frame_4d8c55ef2fe9d1bac806eebbb80bdf67 = NULL;
    }

    assertFrameObject(frame_4d8c55ef2fe9d1bac806eebbb80bdf67);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_ndim);
    Py_DECREF(var_ndim);
    var_ndim = NULL;
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

    Py_XDECREF(var_ndim);
    var_ndim = NULL;
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
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function_9__clip_dep_is_byte_swapped(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[0];
    struct Nuitka_FrameObject *frame_c52b9e604d2d83847a3d1bef291d0373;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c52b9e604d2d83847a3d1bef291d0373 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c52b9e604d2d83847a3d1bef291d0373)) {
        Py_XDECREF(cache_frame_c52b9e604d2d83847a3d1bef291d0373);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c52b9e604d2d83847a3d1bef291d0373 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c52b9e604d2d83847a3d1bef291d0373 = MAKE_FUNCTION_FRAME(codeobj_c52b9e604d2d83847a3d1bef291d0373, module_numpy$core$_methods, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c52b9e604d2d83847a3d1bef291d0373->m_type_description == NULL);
    frame_c52b9e604d2d83847a3d1bef291d0373 = cache_frame_c52b9e604d2d83847a3d1bef291d0373;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c52b9e604d2d83847a3d1bef291d0373);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c52b9e604d2d83847a3d1bef291d0373) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_a);
        tmp_isinstance_inst_1 = par_a;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[19]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
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
    {
        PyObject *tmp_operand_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        CHECK_OBJECT(par_a);
        tmp_expression_name_3 = par_a;
        tmp_expression_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[20]);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[21]);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c52b9e604d2d83847a3d1bef291d0373);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c52b9e604d2d83847a3d1bef291d0373);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c52b9e604d2d83847a3d1bef291d0373);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c52b9e604d2d83847a3d1bef291d0373, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c52b9e604d2d83847a3d1bef291d0373->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c52b9e604d2d83847a3d1bef291d0373, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c52b9e604d2d83847a3d1bef291d0373,
        type_description_1,
        par_a
    );


    // Release cached frame if used for exception.
    if (frame_c52b9e604d2d83847a3d1bef291d0373 == cache_frame_c52b9e604d2d83847a3d1bef291d0373) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c52b9e604d2d83847a3d1bef291d0373);
        cache_frame_c52b9e604d2d83847a3d1bef291d0373 = NULL;
    }

    assertFrameObject(frame_c52b9e604d2d83847a3d1bef291d0373);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_a);
    par_a = NULL;
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

    Py_XDECREF(par_a);
    par_a = NULL;
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


static PyObject *impl_numpy$core$_methods$$$function_10__clip_dep_invoke_with_casting(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ufunc = python_pars[0];
    PyObject *par_out = python_pars[1];
    PyObject *par_casting = python_pars[2];
    PyObject *par_args = python_pars[3];
    PyObject *par_kwargs = python_pars[4];
    PyObject *var_e = NULL;
    struct Nuitka_FrameObject *frame_f506a0e0280828d02c53f4d3238a98bd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_f506a0e0280828d02c53f4d3238a98bd = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f506a0e0280828d02c53f4d3238a98bd)) {
        Py_XDECREF(cache_frame_f506a0e0280828d02c53f4d3238a98bd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f506a0e0280828d02c53f4d3238a98bd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f506a0e0280828d02c53f4d3238a98bd = MAKE_FUNCTION_FRAME(codeobj_f506a0e0280828d02c53f4d3238a98bd, module_numpy$core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f506a0e0280828d02c53f4d3238a98bd->m_type_description == NULL);
    frame_f506a0e0280828d02c53f4d3238a98bd = cache_frame_f506a0e0280828d02c53f4d3238a98bd;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f506a0e0280828d02c53f4d3238a98bd);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f506a0e0280828d02c53f4d3238a98bd) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_casting);
        tmp_compexpr_left_1 = par_casting;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg4_1;
        CHECK_OBJECT(par_ufunc);
        tmp_dircall_arg1_1 = par_ufunc;
        CHECK_OBJECT(par_args);
        tmp_dircall_arg2_1 = par_args;
        tmp_dict_key_1 = mod_consts[22];
        CHECK_OBJECT(par_out);
        tmp_dict_value_1 = par_out;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[23];
        CHECK_OBJECT(par_casting);
        tmp_dict_value_1 = par_casting;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___main__$$$function_20_complex_call_helper_keywords_star_list_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_dircall_arg3_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dircall_arg4_2;
        CHECK_OBJECT(par_ufunc);
        tmp_dircall_arg1_2 = par_ufunc;
        CHECK_OBJECT(par_args);
        tmp_dircall_arg2_2 = par_args;
        tmp_dict_key_2 = mod_consts[22];
        CHECK_OBJECT(par_out);
        tmp_dict_value_2 = par_out;
        tmp_dircall_arg3_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_2 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_2);
        Py_INCREF(tmp_dircall_arg2_2);
        Py_INCREF(tmp_dircall_arg4_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2, tmp_dircall_arg4_2};
            tmp_return_value = impl___main__$$$function_20_complex_call_helper_keywords_star_list_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooo";
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_f506a0e0280828d02c53f4d3238a98bd, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_f506a0e0280828d02c53f4d3238a98bd, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_expression_name_1;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[25]);
        if (tmp_compexpr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooo";
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
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_e = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_kw_name_1;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[27]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        tmp_expression_name_3 = mod_consts[28];
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[29]);
        assert(!(tmp_called_name_2 == NULL));
        CHECK_OBJECT(var_e);
        tmp_expression_name_4 = var_e;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[30]);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 100;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        if (var_e == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_element_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 100;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }

        tmp_expression_name_5 = var_e;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[32]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 100;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        frame_f506a0e0280828d02c53f4d3238a98bd->m_frame.f_lineno = 98;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 98;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kw_name_1 = PyDict_Copy(mod_consts[34]);
        frame_f506a0e0280828d02c53f4d3238a98bd->m_frame.f_lineno = 97;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_dircall_arg1_3;
        PyObject *tmp_dircall_arg2_3;
        PyObject *tmp_dircall_arg3_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dircall_arg4_3;
        CHECK_OBJECT(par_ufunc);
        tmp_dircall_arg1_3 = par_ufunc;
        CHECK_OBJECT(par_args);
        tmp_dircall_arg2_3 = par_args;
        tmp_dict_key_3 = mod_consts[22];
        CHECK_OBJECT(par_out);
        tmp_dict_value_3 = par_out;
        tmp_dircall_arg3_3 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_3, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[23];
        tmp_dict_value_3 = mod_consts[35];
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_3, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_3 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_3);
        Py_INCREF(tmp_dircall_arg2_3);
        Py_INCREF(tmp_dircall_arg4_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3, tmp_dircall_arg2_3, tmp_dircall_arg3_3, tmp_dircall_arg4_3};
            tmp_return_value = impl___main__$$$function_20_complex_call_helper_keywords_star_list_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        goto try_return_handler_3;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto try_return_handler_2;
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

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 93;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_f506a0e0280828d02c53f4d3238a98bd->m_frame) frame_f506a0e0280828d02c53f4d3238a98bd->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
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

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f506a0e0280828d02c53f4d3238a98bd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f506a0e0280828d02c53f4d3238a98bd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f506a0e0280828d02c53f4d3238a98bd);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f506a0e0280828d02c53f4d3238a98bd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f506a0e0280828d02c53f4d3238a98bd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f506a0e0280828d02c53f4d3238a98bd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f506a0e0280828d02c53f4d3238a98bd,
        type_description_1,
        par_ufunc,
        par_out,
        par_casting,
        par_args,
        par_kwargs,
        var_e
    );


    // Release cached frame if used for exception.
    if (frame_f506a0e0280828d02c53f4d3238a98bd == cache_frame_f506a0e0280828d02c53f4d3238a98bd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_f506a0e0280828d02c53f4d3238a98bd);
        cache_frame_f506a0e0280828d02c53f4d3238a98bd = NULL;
    }

    assertFrameObject(frame_f506a0e0280828d02c53f4d3238a98bd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_ufunc);
    Py_DECREF(par_ufunc);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_casting);
    Py_DECREF(par_casting);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ufunc);
    Py_DECREF(par_ufunc);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_casting);
    Py_DECREF(par_casting);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function_11__clip(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[0];
    PyObject *par_min = python_pars[1];
    PyObject *par_max = python_pars[2];
    PyObject *par_out = python_pars[3];
    PyObject *par_casting = python_pars[4];
    PyObject *par_kwargs = python_pars[5];
    nuitka_bool var_using_deprecated_nan = NUITKA_BOOL_UNASSIGNED;
    struct Nuitka_FrameObject *frame_62da645bfc34c14136250d018877118c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_62da645bfc34c14136250d018877118c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_62da645bfc34c14136250d018877118c)) {
        Py_XDECREF(cache_frame_62da645bfc34c14136250d018877118c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_62da645bfc34c14136250d018877118c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_62da645bfc34c14136250d018877118c = MAKE_FUNCTION_FRAME(codeobj_62da645bfc34c14136250d018877118c, module_numpy$core$_methods, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_62da645bfc34c14136250d018877118c->m_type_description == NULL);
    frame_62da645bfc34c14136250d018877118c = cache_frame_62da645bfc34c14136250d018877118c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_62da645bfc34c14136250d018877118c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_62da645bfc34c14136250d018877118c) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(par_min);
        tmp_compexpr_left_1 = par_min;
        tmp_compexpr_right_1 = Py_None;
        tmp_and_left_value_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_max);
        tmp_compexpr_left_2 = par_max;
        tmp_compexpr_right_2 = Py_None;
        tmp_and_right_value_1 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? true : false;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[36];
        frame_62da645bfc34c14136250d018877118c->m_frame.f_lineno = 108;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 108;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooob";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_a);
        tmp_args_element_name_1 = par_a;
        frame_62da645bfc34c14136250d018877118c->m_frame.f_lineno = 113;
        tmp_operand_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_out);
        tmp_args_element_name_2 = par_out;
        frame_62da645bfc34c14136250d018877118c->m_frame.f_lineno = 113;
        tmp_operand_name_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        if (tmp_operand_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        Py_DECREF(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_2 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_2 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        nuitka_bool tmp_assign_source_1;
        tmp_assign_source_1 = NUITKA_BOOL_FALSE;
        var_using_deprecated_nan = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_3;
        int tmp_truth_name_1;
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_min);
        tmp_args_element_name_3 = par_min;
        frame_62da645bfc34c14136250d018877118c->m_frame.f_lineno = 115;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 115;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[39];
        {
            PyObject *old = par_min;
            assert(old != NULL);
            par_min = tmp_assign_source_2;
            Py_INCREF(par_min);
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_assign_source_3;
        tmp_assign_source_3 = NUITKA_BOOL_TRUE;
        var_using_deprecated_nan = tmp_assign_source_3;
    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_called_name_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_4;
        int tmp_truth_name_2;
        tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_name_4 == NULL)) {
            tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_max);
        tmp_args_element_name_4 = par_max;
        frame_62da645bfc34c14136250d018877118c->m_frame.f_lineno = 118;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_4);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 118;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[40];
        {
            PyObject *old = par_max;
            assert(old != NULL);
            par_max = tmp_assign_source_4;
            Py_INCREF(par_max);
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_assign_source_5;
        tmp_assign_source_5 = NUITKA_BOOL_TRUE;
        var_using_deprecated_nan = tmp_assign_source_5;
    }
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        if (var_using_deprecated_nan == NUITKA_BOOL_UNASSIGNED) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 121;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }

        tmp_condition_result_5 = var_using_deprecated_nan;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[27]);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[42];
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooooob";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_name_5);
        Py_DECREF(tmp_args_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kw_name_1 = PyDict_Copy(mod_consts[34]);
        frame_62da645bfc34c14136250d018877118c->m_frame.f_lineno = 122;
        tmp_call_result_3 = CALL_FUNCTION(tmp_called_name_5, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_5);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_5:;
    branch_no_2:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        if (par_min == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 133;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_3 = par_min;
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_6 = (tmp_compexpr_left_3 == tmp_compexpr_right_3) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg4_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[45]);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = PyTuple_New(3);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_a);
        tmp_tuple_element_2 = par_a;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_2);
        if (par_max == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 135;
            type_description_1 = "oooooob";
            goto tuple_build_exception_2;
        }

        tmp_tuple_element_2 = par_max;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 2, tmp_tuple_element_2);
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_dircall_arg2_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_dict_key_1 = mod_consts[22];
        CHECK_OBJECT(par_out);
        tmp_dict_value_1 = par_out;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[23];
        CHECK_OBJECT(par_casting);
        tmp_dict_value_1 = par_casting;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kwargs);
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


            exception_lineno = 134;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_6;
    branch_no_6:;
    {
        bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        if (par_max == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 136;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_4 = par_max;
        tmp_compexpr_right_4 = Py_None;
        tmp_condition_result_7 = (tmp_compexpr_left_4 == tmp_compexpr_right_4) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_dircall_arg3_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dircall_arg4_2;
        tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_dircall_arg1_2 == NULL)) {
            tmp_dircall_arg1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_dircall_arg1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[47]);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_2 = PyTuple_New(3);
        PyTuple_SET_ITEM(tmp_dircall_arg2_2, 0, tmp_tuple_element_3);
        CHECK_OBJECT(par_a);
        tmp_tuple_element_3 = par_a;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 1, tmp_tuple_element_3);
        if (par_min == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 138;
            type_description_1 = "oooooob";
            goto tuple_build_exception_3;
        }

        tmp_tuple_element_3 = par_min;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 2, tmp_tuple_element_3);
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_dircall_arg2_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_dict_key_2 = mod_consts[22];
        CHECK_OBJECT(par_out);
        tmp_dict_value_2 = par_out;
        tmp_dircall_arg3_2 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[23];
        CHECK_OBJECT(par_casting);
        tmp_dict_value_2 = par_casting;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_2 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_2);
        Py_INCREF(tmp_dircall_arg4_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2, tmp_dircall_arg4_2};
            tmp_return_value = impl___main__$$$function_18_complex_call_helper_pos_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_dircall_arg1_3;
        PyObject *tmp_dircall_arg2_3;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_dircall_arg3_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dircall_arg4_3;
        tmp_dircall_arg1_3 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_dircall_arg1_3 == NULL)) {
            tmp_dircall_arg1_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_dircall_arg1_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_name_4 == NULL)) {
            tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[48]);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_3 = PyTuple_New(4);
        PyTuple_SET_ITEM(tmp_dircall_arg2_3, 0, tmp_tuple_element_4);
        CHECK_OBJECT(par_a);
        tmp_tuple_element_4 = par_a;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_3, 1, tmp_tuple_element_4);
        if (par_min == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 141;
            type_description_1 = "oooooob";
            goto tuple_build_exception_4;
        }

        tmp_tuple_element_4 = par_min;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_3, 2, tmp_tuple_element_4);
        if (par_max == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 141;
            type_description_1 = "oooooob";
            goto tuple_build_exception_4;
        }

        tmp_tuple_element_4 = par_max;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_3, 3, tmp_tuple_element_4);
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_dircall_arg2_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_dict_key_3 = mod_consts[22];
        CHECK_OBJECT(par_out);
        tmp_dict_value_3 = par_out;
        tmp_dircall_arg3_3 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_3, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[23];
        CHECK_OBJECT(par_casting);
        tmp_dict_value_3 = par_casting;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_3, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_3 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_3);
        Py_INCREF(tmp_dircall_arg4_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3, tmp_dircall_arg2_3, tmp_dircall_arg3_3, tmp_dircall_arg4_3};
            tmp_return_value = impl___main__$$$function_18_complex_call_helper_pos_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_7:;
    branch_end_6:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_62da645bfc34c14136250d018877118c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_62da645bfc34c14136250d018877118c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_62da645bfc34c14136250d018877118c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_62da645bfc34c14136250d018877118c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_62da645bfc34c14136250d018877118c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_62da645bfc34c14136250d018877118c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_62da645bfc34c14136250d018877118c,
        type_description_1,
        par_a,
        par_min,
        par_max,
        par_out,
        par_casting,
        par_kwargs,
        (int)var_using_deprecated_nan
    );


    // Release cached frame if used for exception.
    if (frame_62da645bfc34c14136250d018877118c == cache_frame_62da645bfc34c14136250d018877118c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_62da645bfc34c14136250d018877118c);
        cache_frame_62da645bfc34c14136250d018877118c = NULL;
    }

    assertFrameObject(frame_62da645bfc34c14136250d018877118c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_min);
    par_min = NULL;
    Py_XDECREF(par_max);
    par_max = NULL;
    var_using_deprecated_nan = NUITKA_BOOL_UNASSIGNED;
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

    Py_XDECREF(par_min);
    par_min = NULL;
    Py_XDECREF(par_max);
    par_max = NULL;
    var_using_deprecated_nan = NUITKA_BOOL_UNASSIGNED;
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
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_casting);
    Py_DECREF(par_casting);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_casting);
    Py_DECREF(par_casting);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function_12__mean(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[0];
    PyObject *par_axis = python_pars[1];
    PyObject *par_dtype = python_pars[2];
    PyObject *par_out = python_pars[3];
    PyObject *par_keepdims = python_pars[4];
    PyObject *var_arr = NULL;
    nuitka_bool var_is_float16_result = NUITKA_BOOL_UNASSIGNED;
    PyObject *var_rcount = NULL;
    PyObject *var_ret = NULL;
    struct Nuitka_FrameObject *frame_4a8e6b0dd1aa5a43b9e95bf4cd92dfa3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4a8e6b0dd1aa5a43b9e95bf4cd92dfa3 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4a8e6b0dd1aa5a43b9e95bf4cd92dfa3)) {
        Py_XDECREF(cache_frame_4a8e6b0dd1aa5a43b9e95bf4cd92dfa3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4a8e6b0dd1aa5a43b9e95bf4cd92dfa3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4a8e6b0dd1aa5a43b9e95bf4cd92dfa3 = MAKE_FUNCTION_FRAME(codeobj_4a8e6b0dd1aa5a43b9e95bf4cd92dfa3, module_numpy$core$_methods, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_4a8e6b0dd1aa5a43b9e95bf4cd92dfa3->m_type_description == NULL);
    frame_4a8e6b0dd1aa5a43b9e95bf4cd92dfa3 = cache_frame_4a8e6b0dd1aa5a43b9e95bf4cd92dfa3;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_4a8e6b0dd1aa5a43b9e95bf4cd92dfa3);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4a8e6b0dd1aa5a43b9e95bf4cd92dfa3) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_a);
        tmp_args_element_name_1 = par_a;
        frame_4a8e6b0dd1aa5a43b9e95bf4cd92dfa3->m_frame.f_lineno = 144;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        assert(var_arr == NULL);
        var_arr = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_assign_source_2;
        tmp_assign_source_2 = NUITKA_BOOL_FALSE;
        var_is_float16_result = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_arr);
        tmp_args_element_name_2 = var_arr;
        CHECK_OBJECT(par_axis);
        tmp_args_element_name_3 = par_axis;
        frame_4a8e6b0dd1aa5a43b9e95bf4cd92dfa3->m_frame.f_lineno = 147;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        assert(var_rcount == NULL);
        var_rcount = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_tmp_condition_result_1_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_rcount);
        tmp_compexpr_left_1 = var_rcount;
        tmp_compexpr_right_1 = mod_consts[16];
        tmp_tmp_condition_result_1_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_tmp_condition_result_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_1_object_1);

            exception_lineno = 149;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_1_object_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[27]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[51];
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooooboo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kw_name_1 = PyDict_Copy(mod_consts[34]);
        frame_4a8e6b0dd1aa5a43b9e95bf4cd92dfa3->m_frame.f_lineno = 150;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(par_dtype);
        tmp_compexpr_left_2 = par_dtype;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_called_name_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_name_4;
        int tmp_truth_name_2;
        tmp_called_name_4 = LOOKUP_BUILTIN(mod_consts[53]);
        assert(tmp_called_name_4 != NULL);
        CHECK_OBJECT(var_arr);
        tmp_expression_name_3 = var_arr;
        tmp_expression_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[20]);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[54]);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_name_4 == NULL)) {
            tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_4);

            exception_lineno = 154;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[56]);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_4);

            exception_lineno = 154;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_5;
            PyTuple_SET_ITEM(tmp_args_element_name_5, 0, tmp_tuple_element_2);
            tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_expression_name_5 == NULL)) {
                tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
            }

            if (tmp_expression_name_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_1 = "ooooooboo";
                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[57]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_1 = "ooooooboo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_args_element_name_5, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_args_element_name_4);
        Py_DECREF(tmp_args_element_name_5);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        frame_4a8e6b0dd1aa5a43b9e95bf4cd92dfa3->m_frame.f_lineno = 154;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_4, call_args);
        }

        Py_DECREF(tmp_args_element_name_4);
        Py_DECREF(tmp_args_element_name_5);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 154;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        frame_4a8e6b0dd1aa5a43b9e95bf4cd92dfa3->m_frame.f_lineno = 155;
        tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, mod_consts[20], &PyTuple_GET_ITEM(mod_consts[58], 0));

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_dtype;
            assert(old != NULL);
            par_dtype = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_called_name_5;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_expression_name_8;
        int tmp_truth_name_3;
        tmp_called_name_5 = LOOKUP_BUILTIN(mod_consts[53]);
        assert(tmp_called_name_5 != NULL);
        if (var_arr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 156;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_7 = var_arr;
        tmp_expression_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[20]);
        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[54]);
        Py_DECREF(tmp_expression_name_6);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_8 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_name_8 == NULL)) {
            tmp_expression_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_expression_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_6);

            exception_lineno = 156;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[59]);
        if (tmp_args_element_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_6);

            exception_lineno = 156;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        frame_4a8e6b0dd1aa5a43b9e95bf4cd92dfa3->m_frame.f_lineno = 156;
        {
            PyObject *call_args[] = {tmp_args_element_name_6, tmp_args_element_name_7};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_5, call_args);
        }

        Py_DECREF(tmp_args_element_name_6);
        Py_DECREF(tmp_args_element_name_7);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_3);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_3);

            exception_lineno = 156;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_3);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        frame_4a8e6b0dd1aa5a43b9e95bf4cd92dfa3->m_frame.f_lineno = 157;
        tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, mod_consts[20], &PyTuple_GET_ITEM(mod_consts[60], 0));

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_dtype;
            assert(old != NULL);
            par_dtype = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_assign_source_6;
        tmp_assign_source_6 = NUITKA_BOOL_TRUE;
        var_is_float16_result = tmp_assign_source_6;
    }
    branch_no_4:;
    branch_end_3:;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_6;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        tmp_called_name_6 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_name_6 == NULL)) {
            tmp_called_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        if (var_arr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 160;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_8 = var_arr;
        CHECK_OBJECT(par_axis);
        tmp_args_element_name_9 = par_axis;
        if (par_dtype == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 160;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_10 = par_dtype;
        CHECK_OBJECT(par_out);
        tmp_args_element_name_11 = par_out;
        CHECK_OBJECT(par_keepdims);
        tmp_args_element_name_12 = par_keepdims;
        frame_4a8e6b0dd1aa5a43b9e95bf4cd92dfa3->m_frame.f_lineno = 160;
        {
            PyObject *call_args[] = {tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12};
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS5(tmp_called_name_6, call_args);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        assert(var_ret == NULL);
        var_ret = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_name_9;
        CHECK_OBJECT(var_ret);
        tmp_isinstance_inst_1 = var_ret;
        tmp_expression_name_9 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_name_9 == NULL)) {
            tmp_expression_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_expression_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[19]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_7;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_expression_name_10 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_name_10 == NULL)) {
            tmp_expression_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[61]);
        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ret);
        tmp_tuple_element_3 = var_ret;
        tmp_args_name_2 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_2, 0, tmp_tuple_element_3);
        CHECK_OBJECT(var_rcount);
        tmp_tuple_element_3 = var_rcount;
        PyTuple_SET_ITEM0(tmp_args_name_2, 1, tmp_tuple_element_3);
        tmp_dict_key_1 = mod_consts[22];
        CHECK_OBJECT(var_ret);
        tmp_dict_value_1 = var_ret;
        tmp_kw_name_2 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[23];
        tmp_dict_value_1 = mod_consts[35];
        tmp_res = PyDict_SetItem(tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[62];
        tmp_dict_value_1 = Py_False;
        tmp_res = PyDict_SetItem(tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_4a8e6b0dd1aa5a43b9e95bf4cd92dfa3->m_frame.f_lineno = 162;
        tmp_assign_source_8 = CALL_FUNCTION(tmp_called_name_7, tmp_args_name_2, tmp_kw_name_2);
        Py_DECREF(tmp_called_name_7);
        Py_DECREF(tmp_args_name_2);
        Py_DECREF(tmp_kw_name_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ret;
            assert(old != NULL);
            var_ret = tmp_assign_source_8;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        if (var_is_float16_result == NUITKA_BOOL_UNASSIGNED) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[63]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 164;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }

        tmp_and_left_value_1 = var_is_float16_result;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_out);
        tmp_compexpr_left_3 = par_out;
        tmp_compexpr_right_3 = Py_None;
        tmp_and_right_value_1 = (tmp_compexpr_left_3 == tmp_compexpr_right_3) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_6 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_6 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_args_element_name_13;
        if (var_arr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 165;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_11 = var_arr;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[20]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ret);
        tmp_args_element_name_13 = var_ret;
        frame_4a8e6b0dd1aa5a43b9e95bf4cd92dfa3->m_frame.f_lineno = 165;
        tmp_assign_source_9 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[54], tmp_args_element_name_13);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ret;
            assert(old != NULL);
            var_ret = tmp_assign_source_9;
            Py_DECREF(old);
        }

    }
    branch_no_6:;
    goto branch_end_5;
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_attribute_name_1;
        CHECK_OBJECT(var_ret);
        tmp_expression_name_12 = var_ret;
        tmp_attribute_name_1 = mod_consts[20];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_name_12, tmp_attribute_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        nuitka_bool tmp_condition_result_8;
        if (var_is_float16_result == NUITKA_BOOL_UNASSIGNED) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[63]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 167;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }

        tmp_condition_result_8 = var_is_float16_result;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_name_8;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        if (var_arr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 168;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_14 = var_arr;
        tmp_expression_name_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[20]);
        if (tmp_expression_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[54]);
        Py_DECREF(tmp_expression_name_13);
        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ret);
        tmp_left_name_1 = var_ret;
        CHECK_OBJECT(var_rcount);
        tmp_right_name_1 = var_rcount;
        tmp_args_element_name_14 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        if (tmp_args_element_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_8);

            exception_lineno = 168;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        frame_4a8e6b0dd1aa5a43b9e95bf4cd92dfa3->m_frame.f_lineno = 168;
        tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_14);
        Py_DECREF(tmp_called_name_8);
        Py_DECREF(tmp_args_element_name_14);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ret;
            assert(old != NULL);
            var_ret = tmp_assign_source_10;
            Py_DECREF(old);
        }

    }
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_9;
        PyObject *tmp_expression_name_15;
        PyObject *tmp_expression_name_16;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT(var_ret);
        tmp_expression_name_16 = var_ret;
        tmp_expression_name_15 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, mod_consts[20]);
        if (tmp_expression_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, mod_consts[54]);
        Py_DECREF(tmp_expression_name_15);
        if (tmp_called_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        if (var_ret == NULL) {
            Py_DECREF(tmp_called_name_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 170;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_2 = var_ret;
        CHECK_OBJECT(var_rcount);
        tmp_right_name_2 = var_rcount;
        tmp_args_element_name_15 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_2);
        if (tmp_args_element_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_9);

            exception_lineno = 170;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        frame_4a8e6b0dd1aa5a43b9e95bf4cd92dfa3->m_frame.f_lineno = 170;
        tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_9, tmp_args_element_name_15);
        Py_DECREF(tmp_called_name_9);
        Py_DECREF(tmp_args_element_name_15);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ret;
            var_ret = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    branch_end_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT(var_ret);
        tmp_left_name_3 = var_ret;
        CHECK_OBJECT(var_rcount);
        tmp_right_name_3 = var_rcount;
        tmp_assign_source_12 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_name_3, tmp_right_name_3);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ret;
            assert(old != NULL);
            var_ret = tmp_assign_source_12;
            Py_DECREF(old);
        }

    }
    branch_end_7:;
    branch_end_5:;
    if (var_ret == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 174;
        type_description_1 = "ooooooboo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_ret;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4a8e6b0dd1aa5a43b9e95bf4cd92dfa3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_4a8e6b0dd1aa5a43b9e95bf4cd92dfa3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4a8e6b0dd1aa5a43b9e95bf4cd92dfa3);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4a8e6b0dd1aa5a43b9e95bf4cd92dfa3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4a8e6b0dd1aa5a43b9e95bf4cd92dfa3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4a8e6b0dd1aa5a43b9e95bf4cd92dfa3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4a8e6b0dd1aa5a43b9e95bf4cd92dfa3,
        type_description_1,
        par_a,
        par_axis,
        par_dtype,
        par_out,
        par_keepdims,
        var_arr,
        (int)var_is_float16_result,
        var_rcount,
        var_ret
    );


    // Release cached frame if used for exception.
    if (frame_4a8e6b0dd1aa5a43b9e95bf4cd92dfa3 == cache_frame_4a8e6b0dd1aa5a43b9e95bf4cd92dfa3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_4a8e6b0dd1aa5a43b9e95bf4cd92dfa3);
        cache_frame_4a8e6b0dd1aa5a43b9e95bf4cd92dfa3 = NULL;
    }

    assertFrameObject(frame_4a8e6b0dd1aa5a43b9e95bf4cd92dfa3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_dtype);
    par_dtype = NULL;
    Py_XDECREF(var_arr);
    var_arr = NULL;
    var_is_float16_result = NUITKA_BOOL_UNASSIGNED;
    CHECK_OBJECT(var_rcount);
    Py_DECREF(var_rcount);
    var_rcount = NULL;
    Py_XDECREF(var_ret);
    var_ret = NULL;
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

    Py_XDECREF(par_dtype);
    par_dtype = NULL;
    Py_XDECREF(var_arr);
    var_arr = NULL;
    var_is_float16_result = NUITKA_BOOL_UNASSIGNED;
    Py_XDECREF(var_rcount);
    var_rcount = NULL;
    Py_XDECREF(var_ret);
    var_ret = NULL;
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
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_keepdims);
    Py_DECREF(par_keepdims);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_keepdims);
    Py_DECREF(par_keepdims);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function_13__var(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[0];
    PyObject *par_axis = python_pars[1];
    PyObject *par_dtype = python_pars[2];
    PyObject *par_out = python_pars[3];
    PyObject *par_ddof = python_pars[4];
    PyObject *par_keepdims = python_pars[5];
    PyObject *var_arr = NULL;
    PyObject *var_rcount = NULL;
    PyObject *var_arrmean = NULL;
    PyObject *var_x = NULL;
    PyObject *var_xv = NULL;
    PyObject *var_ret = NULL;
    struct Nuitka_FrameObject *frame_5b2c0512e8394ccf9bff4827a6e21214;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5b2c0512e8394ccf9bff4827a6e21214 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5b2c0512e8394ccf9bff4827a6e21214)) {
        Py_XDECREF(cache_frame_5b2c0512e8394ccf9bff4827a6e21214);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5b2c0512e8394ccf9bff4827a6e21214 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5b2c0512e8394ccf9bff4827a6e21214 = MAKE_FUNCTION_FRAME(codeobj_5b2c0512e8394ccf9bff4827a6e21214, module_numpy$core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5b2c0512e8394ccf9bff4827a6e21214->m_type_description == NULL);
    frame_5b2c0512e8394ccf9bff4827a6e21214 = cache_frame_5b2c0512e8394ccf9bff4827a6e21214;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5b2c0512e8394ccf9bff4827a6e21214);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5b2c0512e8394ccf9bff4827a6e21214) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_a);
        tmp_args_element_name_1 = par_a;
        frame_5b2c0512e8394ccf9bff4827a6e21214->m_frame.f_lineno = 177;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_arr == NULL);
        var_arr = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_arr);
        tmp_args_element_name_2 = var_arr;
        CHECK_OBJECT(par_axis);
        tmp_args_element_name_3 = par_axis;
        frame_5b2c0512e8394ccf9bff4827a6e21214->m_frame.f_lineno = 179;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_rcount == NULL);
        var_rcount = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_ddof);
        tmp_compexpr_left_1 = par_ddof;
        CHECK_OBJECT(var_rcount);
        tmp_compexpr_right_1 = var_rcount;
        tmp_condition_result_1 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
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
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[27]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[65];
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooooooooooo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kw_name_1 = PyDict_Copy(mod_consts[34]);
        frame_5b2c0512e8394ccf9bff4827a6e21214->m_frame.f_lineno = 182;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_called_name_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_name_4;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_dtype);
        tmp_compexpr_left_2 = par_dtype;
        tmp_compexpr_right_2 = Py_None;
        tmp_and_left_value_1 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_called_name_4 = LOOKUP_BUILTIN(mod_consts[53]);
        assert(tmp_called_name_4 != NULL);
        CHECK_OBJECT(var_arr);
        tmp_expression_name_3 = var_arr;
        tmp_expression_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[20]);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[54]);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_name_4 == NULL)) {
            tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_4);

            exception_lineno = 186;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[56]);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_4);

            exception_lineno = 186;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_5;
            PyTuple_SET_ITEM(tmp_args_element_name_5, 0, tmp_tuple_element_2);
            tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_expression_name_5 == NULL)) {
                tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
            }

            if (tmp_expression_name_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[57]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_args_element_name_5, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_args_element_name_4);
        Py_DECREF(tmp_args_element_name_5);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        frame_5b2c0512e8394ccf9bff4827a6e21214->m_frame.f_lineno = 186;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_4, call_args);
        }

        Py_DECREF(tmp_args_element_name_4);
        Py_DECREF(tmp_args_element_name_5);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 186;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5b2c0512e8394ccf9bff4827a6e21214->m_frame.f_lineno = 187;
        tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, mod_consts[20], &PyTuple_GET_ITEM(mod_consts[58], 0));

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_dtype;
            assert(old != NULL);
            par_dtype = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kw_name_2;
        tmp_called_name_5 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_name_5 == NULL)) {
            tmp_called_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_arr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 192;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_3 = var_arr;
        tmp_args_name_2 = PyTuple_New(3);
        PyTuple_SET_ITEM0(tmp_args_name_2, 0, tmp_tuple_element_3);
        CHECK_OBJECT(par_axis);
        tmp_tuple_element_3 = par_axis;
        PyTuple_SET_ITEM0(tmp_args_name_2, 1, tmp_tuple_element_3);
        CHECK_OBJECT(par_dtype);
        tmp_tuple_element_3 = par_dtype;
        PyTuple_SET_ITEM0(tmp_args_name_2, 2, tmp_tuple_element_3);
        tmp_kw_name_2 = PyDict_Copy(mod_consts[66]);
        frame_5b2c0512e8394ccf9bff4827a6e21214->m_frame.f_lineno = 192;
        tmp_assign_source_4 = CALL_FUNCTION(tmp_called_name_5, tmp_args_name_2, tmp_kw_name_2);
        Py_DECREF(tmp_args_name_2);
        Py_DECREF(tmp_kw_name_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_arrmean == NULL);
        var_arrmean = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_name_6;
        CHECK_OBJECT(var_arrmean);
        tmp_isinstance_inst_1 = var_arrmean;
        tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_name_6 == NULL)) {
            tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[19]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_6;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kw_name_3;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_expression_name_7 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_name_7 == NULL)) {
            tmp_expression_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[61]);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_arrmean);
        tmp_tuple_element_4 = var_arrmean;
        tmp_args_name_3 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_3, 0, tmp_tuple_element_4);
        CHECK_OBJECT(var_rcount);
        tmp_tuple_element_4 = var_rcount;
        PyTuple_SET_ITEM0(tmp_args_name_3, 1, tmp_tuple_element_4);
        tmp_dict_key_1 = mod_consts[22];
        CHECK_OBJECT(var_arrmean);
        tmp_dict_value_1 = var_arrmean;
        tmp_kw_name_3 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_kw_name_3, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[23];
        tmp_dict_value_1 = mod_consts[35];
        tmp_res = PyDict_SetItem(tmp_kw_name_3, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[62];
        tmp_dict_value_1 = Py_False;
        tmp_res = PyDict_SetItem(tmp_kw_name_3, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_5b2c0512e8394ccf9bff4827a6e21214->m_frame.f_lineno = 194;
        tmp_assign_source_5 = CALL_FUNCTION(tmp_called_name_6, tmp_args_name_3, tmp_kw_name_3);
        Py_DECREF(tmp_called_name_6);
        Py_DECREF(tmp_args_name_3);
        Py_DECREF(tmp_kw_name_3);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_arrmean;
            assert(old != NULL);
            var_arrmean = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_7;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(var_arrmean);
        tmp_expression_name_9 = var_arrmean;
        tmp_expression_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[20]);
        if (tmp_expression_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[54]);
        Py_DECREF(tmp_expression_name_8);
        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_arrmean == NULL) {
            Py_DECREF(tmp_called_name_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[67]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 197;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_1 = var_arrmean;
        CHECK_OBJECT(var_rcount);
        tmp_right_name_1 = var_rcount;
        tmp_args_element_name_6 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 197;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5b2c0512e8394ccf9bff4827a6e21214->m_frame.f_lineno = 197;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_6);
        Py_DECREF(tmp_called_name_7);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_arrmean;
            var_arrmean = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    branch_end_3:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_8;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        tmp_called_name_8 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_name_8 == NULL)) {
            tmp_called_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_arr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 202;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_2 = var_arr;
        CHECK_OBJECT(var_arrmean);
        tmp_right_name_2 = var_arrmean;
        tmp_args_element_name_7 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_2);
        if (tmp_args_element_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5b2c0512e8394ccf9bff4827a6e21214->m_frame.f_lineno = 202;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_7);
        Py_DECREF(tmp_args_element_name_7);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_x == NULL);
        var_x = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_called_name_9;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_expression_name_12;
        int tmp_truth_name_2;
        tmp_called_name_9 = LOOKUP_BUILTIN(mod_consts[53]);
        assert(tmp_called_name_9 != NULL);
        if (var_arr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 204;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_11 = var_arr;
        tmp_expression_name_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[20]);
        if (tmp_expression_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[54]);
        Py_DECREF(tmp_expression_name_10);
        if (tmp_args_element_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_12 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_name_12 == NULL)) {
            tmp_expression_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_expression_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_8);

            exception_lineno = 204;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[68]);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_8);

            exception_lineno = 204;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_9 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_13;
            PyTuple_SET_ITEM(tmp_args_element_name_9, 0, tmp_tuple_element_5);
            tmp_expression_name_13 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_expression_name_13 == NULL)) {
                tmp_expression_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
            }

            if (tmp_expression_name_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[56]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_args_element_name_9, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_args_element_name_8);
        Py_DECREF(tmp_args_element_name_9);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        frame_5b2c0512e8394ccf9bff4827a6e21214->m_frame.f_lineno = 204;
        {
            PyObject *call_args[] = {tmp_args_element_name_8, tmp_args_element_name_9};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_9, call_args);
        }

        Py_DECREF(tmp_args_element_name_8);
        Py_DECREF(tmp_args_element_name_9);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_3);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_3);

            exception_lineno = 204;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_3);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_10;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_args_name_4;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kw_name_4;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_expression_name_14 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_name_14 == NULL)) {
            tmp_expression_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[69]);
        if (tmp_called_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_x);
        tmp_tuple_element_6 = var_x;
        tmp_args_name_4 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_4, 0, tmp_tuple_element_6);
        CHECK_OBJECT(var_x);
        tmp_tuple_element_6 = var_x;
        PyTuple_SET_ITEM0(tmp_args_name_4, 1, tmp_tuple_element_6);
        tmp_dict_key_2 = mod_consts[22];
        CHECK_OBJECT(var_x);
        tmp_dict_value_2 = var_x;
        tmp_kw_name_4 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kw_name_4, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        frame_5b2c0512e8394ccf9bff4827a6e21214->m_frame.f_lineno = 205;
        tmp_assign_source_8 = CALL_FUNCTION(tmp_called_name_10, tmp_args_name_4, tmp_kw_name_4);
        Py_DECREF(tmp_called_name_10);
        Py_DECREF(tmp_args_name_4);
        Py_DECREF(tmp_kw_name_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_x;
            assert(old != NULL);
            var_x = tmp_assign_source_8;
            Py_DECREF(old);
        }

    }
    goto branch_end_4;
    branch_no_4:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_expression_name_15;
        CHECK_OBJECT(var_x);
        tmp_expression_name_15 = var_x;
        tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, mod_consts[20]);
        if (tmp_compexpr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_compexpr_right_3 == NULL)) {
            tmp_compexpr_right_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
        }

        if (tmp_compexpr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_3);

            exception_lineno = 207;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_3, tmp_compexpr_left_3);
        Py_DECREF(tmp_compexpr_left_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
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
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_name_11;
        PyObject *tmp_expression_name_16;
        PyObject *tmp_kw_name_5;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_expression_name_17;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_expression_name_18;
        if (var_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[71]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 208;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_16 = var_x;
        tmp_called_name_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, mod_consts[72]);
        if (tmp_called_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_3 = mod_consts[20];
        tmp_expression_name_17 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_expression_name_17 == NULL)) {
            tmp_expression_name_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
        }

        if (tmp_expression_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_11);

            exception_lineno = 208;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_x == NULL) {
            Py_DECREF(tmp_called_name_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[71]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 208;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_18 = var_x;
        tmp_subscript_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_18, mod_consts[20]);
        if (tmp_subscript_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_11);

            exception_lineno = 208;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_7 = LOOKUP_SUBSCRIPT(tmp_expression_name_17, tmp_subscript_name_1);
        Py_DECREF(tmp_subscript_name_1);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_11);

            exception_lineno = 208;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_3 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_dict_value_3, 0, tmp_tuple_element_7);
        tmp_tuple_element_7 = mod_consts[73];
        PyTuple_SET_ITEM0(tmp_dict_value_3, 1, tmp_tuple_element_7);
        tmp_kw_name_5 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kw_name_5, tmp_dict_key_3, tmp_dict_value_3);
        Py_DECREF(tmp_dict_value_3);
        assert(!(tmp_res != 0));
        frame_5b2c0512e8394ccf9bff4827a6e21214->m_frame.f_lineno = 208;
        tmp_assign_source_9 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_11, tmp_kw_name_5);
        Py_DECREF(tmp_called_name_11);
        Py_DECREF(tmp_kw_name_5);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_xv == NULL);
        var_xv = tmp_assign_source_9;
    }
    {
        PyObject *tmp_called_name_12;
        PyObject *tmp_expression_name_19;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_name_5;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_kw_name_6;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        tmp_expression_name_19 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_name_19 == NULL)) {
            tmp_expression_name_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_12 = LOOKUP_ATTRIBUTE(tmp_expression_name_19, mod_consts[69]);
        if (tmp_called_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_xv);
        tmp_tuple_element_8 = var_xv;
        tmp_args_name_5 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_5, 0, tmp_tuple_element_8);
        CHECK_OBJECT(var_xv);
        tmp_tuple_element_8 = var_xv;
        PyTuple_SET_ITEM0(tmp_args_name_5, 1, tmp_tuple_element_8);
        tmp_dict_key_4 = mod_consts[22];
        CHECK_OBJECT(var_xv);
        tmp_dict_value_4 = var_xv;
        tmp_kw_name_6 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kw_name_6, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        frame_5b2c0512e8394ccf9bff4827a6e21214->m_frame.f_lineno = 209;
        tmp_call_result_4 = CALL_FUNCTION(tmp_called_name_12, tmp_args_name_5, tmp_kw_name_6);
        Py_DECREF(tmp_called_name_12);
        Py_DECREF(tmp_args_name_5);
        Py_DECREF(tmp_kw_name_6);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_name_20;
        PyObject *tmp_called_name_13;
        PyObject *tmp_expression_name_21;
        PyObject *tmp_args_name_6;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_expression_name_22;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_kw_name_7;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_expression_name_24;
        tmp_expression_name_21 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_name_21 == NULL)) {
            tmp_expression_name_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_21, mod_consts[74]);
        if (tmp_called_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_xv);
        tmp_expression_name_22 = var_xv;
        tmp_subscript_name_2 = mod_consts[75];
        tmp_tuple_element_9 = LOOKUP_SUBSCRIPT(tmp_expression_name_22, tmp_subscript_name_2);
        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_13);

            exception_lineno = 210;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_6 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_23;
            PyObject *tmp_subscript_name_3;
            PyTuple_SET_ITEM(tmp_args_name_6, 0, tmp_tuple_element_9);
            CHECK_OBJECT(var_xv);
            tmp_expression_name_23 = var_xv;
            tmp_subscript_name_3 = mod_consts[76];
            tmp_tuple_element_9 = LOOKUP_SUBSCRIPT(tmp_expression_name_23, tmp_subscript_name_3);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_args_name_6, 1, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_called_name_13);
        Py_DECREF(tmp_args_name_6);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_dict_key_5 = mod_consts[22];
        if (var_x == NULL) {
            Py_DECREF(tmp_called_name_13);
            Py_DECREF(tmp_args_name_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[71]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 210;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_24 = var_x;
        tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_24, mod_consts[77]);
        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_13);
            Py_DECREF(tmp_args_name_6);

            exception_lineno = 210;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_7 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kw_name_7, tmp_dict_key_5, tmp_dict_value_5);
        Py_DECREF(tmp_dict_value_5);
        assert(!(tmp_res != 0));
        frame_5b2c0512e8394ccf9bff4827a6e21214->m_frame.f_lineno = 210;
        tmp_expression_name_20 = CALL_FUNCTION(tmp_called_name_13, tmp_args_name_6, tmp_kw_name_7);
        Py_DECREF(tmp_called_name_13);
        Py_DECREF(tmp_args_name_6);
        Py_DECREF(tmp_kw_name_7);
        if (tmp_expression_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_20, mod_consts[77]);
        Py_DECREF(tmp_expression_name_20);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_x;
            var_x = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_name_25;
        PyObject *tmp_called_name_14;
        PyObject *tmp_expression_name_26;
        PyObject *tmp_args_name_7;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_kw_name_8;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        tmp_expression_name_26 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_name_26 == NULL)) {
            tmp_expression_name_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_26, mod_consts[69]);
        if (tmp_called_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_x == NULL) {
            Py_DECREF(tmp_called_name_14);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[71]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 214;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_10 = var_x;
        tmp_args_name_7 = PyTuple_New(2);
        {
            PyObject *tmp_called_name_15;
            PyObject *tmp_expression_name_27;
            PyObject *tmp_args_element_name_10;
            PyTuple_SET_ITEM0(tmp_args_name_7, 0, tmp_tuple_element_10);
            tmp_expression_name_27 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_expression_name_27 == NULL)) {
                tmp_expression_name_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_expression_name_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_5;
            }
            tmp_called_name_15 = LOOKUP_ATTRIBUTE(tmp_expression_name_27, mod_consts[78]);
            if (tmp_called_name_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_5;
            }
            if (var_x == NULL) {
                Py_DECREF(tmp_called_name_15);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[71]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 214;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_5;
            }

            tmp_args_element_name_10 = var_x;
            frame_5b2c0512e8394ccf9bff4827a6e21214->m_frame.f_lineno = 214;
            tmp_tuple_element_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_15, tmp_args_element_name_10);
            Py_DECREF(tmp_called_name_15);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_args_name_7, 1, tmp_tuple_element_10);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_called_name_14);
        Py_DECREF(tmp_args_name_7);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_dict_key_6 = mod_consts[22];
        if (var_x == NULL) {
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_args_name_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[71]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 214;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_6 = var_x;
        tmp_kw_name_8 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kw_name_8, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        frame_5b2c0512e8394ccf9bff4827a6e21214->m_frame.f_lineno = 214;
        tmp_expression_name_25 = CALL_FUNCTION(tmp_called_name_14, tmp_args_name_7, tmp_kw_name_8);
        Py_DECREF(tmp_called_name_14);
        Py_DECREF(tmp_args_name_7);
        Py_DECREF(tmp_kw_name_8);
        if (tmp_expression_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_25, mod_consts[77]);
        Py_DECREF(tmp_expression_name_25);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_x;
            var_x = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    branch_end_5:;
    branch_end_4:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_16;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        tmp_called_name_16 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_name_16 == NULL)) {
            tmp_called_name_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[71]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 216;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_11 = var_x;
        CHECK_OBJECT(par_axis);
        tmp_args_element_name_12 = par_axis;
        CHECK_OBJECT(par_dtype);
        tmp_args_element_name_13 = par_dtype;
        CHECK_OBJECT(par_out);
        tmp_args_element_name_14 = par_out;
        CHECK_OBJECT(par_keepdims);
        tmp_args_element_name_15 = par_keepdims;
        frame_5b2c0512e8394ccf9bff4827a6e21214->m_frame.f_lineno = 216;
        {
            PyObject *call_args[] = {tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15};
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS5(tmp_called_name_16, call_args);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ret == NULL);
        var_ret = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_17;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_list_element_1;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        tmp_called_name_17 = LOOKUP_BUILTIN(mod_consts[46]);
        assert(tmp_called_name_17 != NULL);
        CHECK_OBJECT(var_rcount);
        tmp_left_name_3 = var_rcount;
        CHECK_OBJECT(par_ddof);
        tmp_right_name_3 = par_ddof;
        tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_3, tmp_right_name_3);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_16 = PyList_New(2);
        PyList_SET_ITEM(tmp_args_element_name_16, 0, tmp_list_element_1);
        tmp_list_element_1 = mod_consts[16];
        PyList_SET_ITEM0(tmp_args_element_name_16, 1, tmp_list_element_1);
        frame_5b2c0512e8394ccf9bff4827a6e21214->m_frame.f_lineno = 219;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_17, tmp_args_element_name_16);
        Py_DECREF(tmp_args_element_name_16);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_rcount;
            assert(old != NULL);
            var_rcount = tmp_assign_source_13;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_expression_name_28;
        CHECK_OBJECT(var_ret);
        tmp_isinstance_inst_2 = var_ret;
        tmp_expression_name_28 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_name_28 == NULL)) {
            tmp_expression_name_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_expression_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_28, mod_consts[19]);
        if (tmp_isinstance_cls_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        Py_DECREF(tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_name_18;
        PyObject *tmp_expression_name_29;
        PyObject *tmp_args_name_8;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_kw_name_9;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        tmp_expression_name_29 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_name_29 == NULL)) {
            tmp_expression_name_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_18 = LOOKUP_ATTRIBUTE(tmp_expression_name_29, mod_consts[61]);
        if (tmp_called_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ret);
        tmp_tuple_element_11 = var_ret;
        tmp_args_name_8 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_8, 0, tmp_tuple_element_11);
        CHECK_OBJECT(var_rcount);
        tmp_tuple_element_11 = var_rcount;
        PyTuple_SET_ITEM0(tmp_args_name_8, 1, tmp_tuple_element_11);
        tmp_dict_key_7 = mod_consts[22];
        CHECK_OBJECT(var_ret);
        tmp_dict_value_7 = var_ret;
        tmp_kw_name_9 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_kw_name_9, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[23];
        tmp_dict_value_7 = mod_consts[35];
        tmp_res = PyDict_SetItem(tmp_kw_name_9, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[62];
        tmp_dict_value_7 = Py_False;
        tmp_res = PyDict_SetItem(tmp_kw_name_9, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        frame_5b2c0512e8394ccf9bff4827a6e21214->m_frame.f_lineno = 223;
        tmp_assign_source_14 = CALL_FUNCTION(tmp_called_name_18, tmp_args_name_8, tmp_kw_name_9);
        Py_DECREF(tmp_called_name_18);
        Py_DECREF(tmp_args_name_8);
        Py_DECREF(tmp_kw_name_9);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ret;
            assert(old != NULL);
            var_ret = tmp_assign_source_14;
            Py_DECREF(old);
        }

    }
    goto branch_end_6;
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_expression_name_30;
        PyObject *tmp_attribute_name_1;
        CHECK_OBJECT(var_ret);
        tmp_expression_name_30 = var_ret;
        tmp_attribute_name_1 = mod_consts[20];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_name_30, tmp_attribute_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_name_19;
        PyObject *tmp_expression_name_31;
        PyObject *tmp_expression_name_32;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT(var_ret);
        tmp_expression_name_32 = var_ret;
        tmp_expression_name_31 = LOOKUP_ATTRIBUTE(tmp_expression_name_32, mod_consts[20]);
        if (tmp_expression_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_19 = LOOKUP_ATTRIBUTE(tmp_expression_name_31, mod_consts[54]);
        Py_DECREF(tmp_expression_name_31);
        if (tmp_called_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_ret == NULL) {
            Py_DECREF(tmp_called_name_19);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 226;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_4 = var_ret;
        CHECK_OBJECT(var_rcount);
        tmp_right_name_4 = var_rcount;
        tmp_args_element_name_17 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_name_4, tmp_right_name_4);
        if (tmp_args_element_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_19);

            exception_lineno = 226;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5b2c0512e8394ccf9bff4827a6e21214->m_frame.f_lineno = 226;
        tmp_assign_source_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_19, tmp_args_element_name_17);
        Py_DECREF(tmp_called_name_19);
        Py_DECREF(tmp_args_element_name_17);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ret;
            var_ret = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        CHECK_OBJECT(var_ret);
        tmp_left_name_5 = var_ret;
        CHECK_OBJECT(var_rcount);
        tmp_right_name_5 = var_rcount;
        tmp_assign_source_16 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_name_5, tmp_right_name_5);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ret;
            assert(old != NULL);
            var_ret = tmp_assign_source_16;
            Py_DECREF(old);
        }

    }
    branch_end_7:;
    branch_end_6:;
    if (var_ret == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 230;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_ret;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5b2c0512e8394ccf9bff4827a6e21214);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5b2c0512e8394ccf9bff4827a6e21214);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5b2c0512e8394ccf9bff4827a6e21214);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5b2c0512e8394ccf9bff4827a6e21214, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5b2c0512e8394ccf9bff4827a6e21214->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5b2c0512e8394ccf9bff4827a6e21214, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5b2c0512e8394ccf9bff4827a6e21214,
        type_description_1,
        par_a,
        par_axis,
        par_dtype,
        par_out,
        par_ddof,
        par_keepdims,
        var_arr,
        var_rcount,
        var_arrmean,
        var_x,
        var_xv,
        var_ret
    );


    // Release cached frame if used for exception.
    if (frame_5b2c0512e8394ccf9bff4827a6e21214 == cache_frame_5b2c0512e8394ccf9bff4827a6e21214) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_5b2c0512e8394ccf9bff4827a6e21214);
        cache_frame_5b2c0512e8394ccf9bff4827a6e21214 = NULL;
    }

    assertFrameObject(frame_5b2c0512e8394ccf9bff4827a6e21214);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    par_dtype = NULL;
    Py_XDECREF(var_arr);
    var_arr = NULL;
    CHECK_OBJECT(var_rcount);
    Py_DECREF(var_rcount);
    var_rcount = NULL;
    CHECK_OBJECT(var_arrmean);
    Py_DECREF(var_arrmean);
    var_arrmean = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_xv);
    var_xv = NULL;
    Py_XDECREF(var_ret);
    var_ret = NULL;
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

    Py_XDECREF(par_dtype);
    par_dtype = NULL;
    Py_XDECREF(var_arr);
    var_arr = NULL;
    Py_XDECREF(var_rcount);
    var_rcount = NULL;
    Py_XDECREF(var_arrmean);
    var_arrmean = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_xv);
    var_xv = NULL;
    Py_XDECREF(var_ret);
    var_ret = NULL;
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
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_ddof);
    Py_DECREF(par_ddof);
    CHECK_OBJECT(par_keepdims);
    Py_DECREF(par_keepdims);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_ddof);
    Py_DECREF(par_ddof);
    CHECK_OBJECT(par_keepdims);
    Py_DECREF(par_keepdims);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function_14__std(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[0];
    PyObject *par_axis = python_pars[1];
    PyObject *par_dtype = python_pars[2];
    PyObject *par_out = python_pars[3];
    PyObject *par_ddof = python_pars[4];
    PyObject *par_keepdims = python_pars[5];
    PyObject *var_ret = NULL;
    struct Nuitka_FrameObject *frame_bcee3bdfd7a885f0c78cdf5d7a675db6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_bcee3bdfd7a885f0c78cdf5d7a675db6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bcee3bdfd7a885f0c78cdf5d7a675db6)) {
        Py_XDECREF(cache_frame_bcee3bdfd7a885f0c78cdf5d7a675db6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bcee3bdfd7a885f0c78cdf5d7a675db6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bcee3bdfd7a885f0c78cdf5d7a675db6 = MAKE_FUNCTION_FRAME(codeobj_bcee3bdfd7a885f0c78cdf5d7a675db6, module_numpy$core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_bcee3bdfd7a885f0c78cdf5d7a675db6->m_type_description == NULL);
    frame_bcee3bdfd7a885f0c78cdf5d7a675db6 = cache_frame_bcee3bdfd7a885f0c78cdf5d7a675db6;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_bcee3bdfd7a885f0c78cdf5d7a675db6);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_bcee3bdfd7a885f0c78cdf5d7a675db6) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_a);
        tmp_tuple_element_1 = par_a;
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[8];
        CHECK_OBJECT(par_axis);
        tmp_dict_value_1 = par_axis;
        tmp_kw_name_1 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[20];
        CHECK_OBJECT(par_dtype);
        tmp_dict_value_1 = par_dtype;
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[22];
        CHECK_OBJECT(par_out);
        tmp_dict_value_1 = par_out;
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[80];
        CHECK_OBJECT(par_ddof);
        tmp_dict_value_1 = par_ddof;
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[81];
        CHECK_OBJECT(par_keepdims);
        tmp_dict_value_1 = par_keepdims;
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_bcee3bdfd7a885f0c78cdf5d7a675db6->m_frame.f_lineno = 233;
        tmp_assign_source_1 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ret == NULL);
        var_ret = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(var_ret);
        tmp_isinstance_inst_1 = var_ret;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[19]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ooooooo";
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[82]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ret);
        tmp_tuple_element_2 = var_ret;
        tmp_args_name_2 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_2, 0, tmp_tuple_element_2);
        tmp_dict_key_2 = mod_consts[22];
        CHECK_OBJECT(var_ret);
        tmp_dict_value_2 = var_ret;
        tmp_kw_name_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        frame_bcee3bdfd7a885f0c78cdf5d7a675db6->m_frame.f_lineno = 237;
        tmp_assign_source_2 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_name_2);
        Py_DECREF(tmp_kw_name_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ret;
            assert(old != NULL);
            var_ret = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_attribute_name_1;
        CHECK_OBJECT(var_ret);
        tmp_expression_name_3 = var_ret;
        tmp_attribute_name_1 = mod_consts[20];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_name_3, tmp_attribute_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT(var_ret);
        tmp_expression_name_5 = var_ret;
        tmp_expression_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[20]);
        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[54]);
        Py_DECREF(tmp_expression_name_4);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_name_6 == NULL)) {
            tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 239;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[82]);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 239;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_ret == NULL) {
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_called_name_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 239;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = var_ret;
        frame_bcee3bdfd7a885f0c78cdf5d7a675db6->m_frame.f_lineno = 239;
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_4);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 239;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_bcee3bdfd7a885f0c78cdf5d7a675db6->m_frame.f_lineno = 239;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ret;
            var_ret = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_3;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ret);
        tmp_args_element_name_3 = var_ret;
        frame_bcee3bdfd7a885f0c78cdf5d7a675db6->m_frame.f_lineno = 241;
        tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[82], tmp_args_element_name_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ret;
            assert(old != NULL);
            var_ret = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    branch_end_2:;
    branch_end_1:;
    if (var_ret == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 243;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_ret;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bcee3bdfd7a885f0c78cdf5d7a675db6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_bcee3bdfd7a885f0c78cdf5d7a675db6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bcee3bdfd7a885f0c78cdf5d7a675db6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bcee3bdfd7a885f0c78cdf5d7a675db6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bcee3bdfd7a885f0c78cdf5d7a675db6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bcee3bdfd7a885f0c78cdf5d7a675db6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bcee3bdfd7a885f0c78cdf5d7a675db6,
        type_description_1,
        par_a,
        par_axis,
        par_dtype,
        par_out,
        par_ddof,
        par_keepdims,
        var_ret
    );


    // Release cached frame if used for exception.
    if (frame_bcee3bdfd7a885f0c78cdf5d7a675db6 == cache_frame_bcee3bdfd7a885f0c78cdf5d7a675db6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_bcee3bdfd7a885f0c78cdf5d7a675db6);
        cache_frame_bcee3bdfd7a885f0c78cdf5d7a675db6 = NULL;
    }

    assertFrameObject(frame_bcee3bdfd7a885f0c78cdf5d7a675db6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_ret);
    var_ret = NULL;
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

    Py_XDECREF(var_ret);
    var_ret = NULL;
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
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_ddof);
    Py_DECREF(par_ddof);
    CHECK_OBJECT(par_keepdims);
    Py_DECREF(par_keepdims);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_ddof);
    Py_DECREF(par_ddof);
    CHECK_OBJECT(par_keepdims);
    Py_DECREF(par_keepdims);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function_15__ptp(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[0];
    PyObject *par_axis = python_pars[1];
    PyObject *par_out = python_pars[2];
    PyObject *par_keepdims = python_pars[3];
    struct Nuitka_FrameObject *frame_ab379933e307ac0b12f2eb722dd46d15;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ab379933e307ac0b12f2eb722dd46d15 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ab379933e307ac0b12f2eb722dd46d15)) {
        Py_XDECREF(cache_frame_ab379933e307ac0b12f2eb722dd46d15);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ab379933e307ac0b12f2eb722dd46d15 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ab379933e307ac0b12f2eb722dd46d15 = MAKE_FUNCTION_FRAME(codeobj_ab379933e307ac0b12f2eb722dd46d15, module_numpy$core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ab379933e307ac0b12f2eb722dd46d15->m_type_description == NULL);
    frame_ab379933e307ac0b12f2eb722dd46d15 = cache_frame_ab379933e307ac0b12f2eb722dd46d15;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ab379933e307ac0b12f2eb722dd46d15);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ab379933e307ac0b12f2eb722dd46d15) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[83]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 247;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_a);
        tmp_args_element_name_2 = par_a;
        CHECK_OBJECT(par_axis);
        tmp_args_element_name_3 = par_axis;
        tmp_args_element_name_4 = Py_None;
        CHECK_OBJECT(par_out);
        tmp_args_element_name_5 = par_out;
        CHECK_OBJECT(par_keepdims);
        tmp_args_element_name_6 = par_keepdims;
        frame_ab379933e307ac0b12f2eb722dd46d15->m_frame.f_lineno = 247;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS5(tmp_called_name_2, call_args);
        }

        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 247;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 248;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_a);
        tmp_args_element_name_8 = par_a;
        CHECK_OBJECT(par_axis);
        tmp_args_element_name_9 = par_axis;
        tmp_args_element_name_10 = Py_None;
        tmp_args_element_name_11 = Py_None;
        CHECK_OBJECT(par_keepdims);
        tmp_args_element_name_12 = par_keepdims;
        frame_ab379933e307ac0b12f2eb722dd46d15->m_frame.f_lineno = 248;
        {
            PyObject *call_args[] = {tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12};
            tmp_args_element_name_7 = CALL_FUNCTION_WITH_ARGS5(tmp_called_name_3, call_args);
        }

        if (tmp_args_element_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 248;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_out);
        tmp_args_element_name_13 = par_out;
        frame_ab379933e307ac0b12f2eb722dd46d15->m_frame.f_lineno = 246;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_7, tmp_args_element_name_13};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_7);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ab379933e307ac0b12f2eb722dd46d15);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ab379933e307ac0b12f2eb722dd46d15);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ab379933e307ac0b12f2eb722dd46d15);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ab379933e307ac0b12f2eb722dd46d15, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ab379933e307ac0b12f2eb722dd46d15->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ab379933e307ac0b12f2eb722dd46d15, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ab379933e307ac0b12f2eb722dd46d15,
        type_description_1,
        par_a,
        par_axis,
        par_out,
        par_keepdims
    );


    // Release cached frame if used for exception.
    if (frame_ab379933e307ac0b12f2eb722dd46d15 == cache_frame_ab379933e307ac0b12f2eb722dd46d15) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ab379933e307ac0b12f2eb722dd46d15);
        cache_frame_ab379933e307ac0b12f2eb722dd46d15 = NULL;
    }

    assertFrameObject(frame_ab379933e307ac0b12f2eb722dd46d15);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_keepdims);
    Py_DECREF(par_keepdims);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_out);
    Py_DECREF(par_out);
    CHECK_OBJECT(par_keepdims);
    Py_DECREF(par_keepdims);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function_16__dump(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_file = python_pars[1];
    PyObject *par_protocol = python_pars[2];
    PyObject *var_ctx = NULL;
    PyObject *var_f = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_5e650fee9a43554a25c68aa9e15f6690;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
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
    static struct Nuitka_FrameObject *cache_frame_5e650fee9a43554a25c68aa9e15f6690 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5e650fee9a43554a25c68aa9e15f6690)) {
        Py_XDECREF(cache_frame_5e650fee9a43554a25c68aa9e15f6690);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5e650fee9a43554a25c68aa9e15f6690 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5e650fee9a43554a25c68aa9e15f6690 = MAKE_FUNCTION_FRAME(codeobj_5e650fee9a43554a25c68aa9e15f6690, module_numpy$core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5e650fee9a43554a25c68aa9e15f6690->m_type_description == NULL);
    frame_5e650fee9a43554a25c68aa9e15f6690 = cache_frame_5e650fee9a43554a25c68aa9e15f6690;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5e650fee9a43554a25c68aa9e15f6690);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5e650fee9a43554a25c68aa9e15f6690) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_attribute_name_1;
        CHECK_OBJECT(par_file);
        tmp_expression_name_1 = par_file;
        tmp_attribute_name_1 = mod_consts[84];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_name_1, tmp_attribute_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooo";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_file);
        tmp_args_element_name_1 = par_file;
        frame_5e650fee9a43554a25c68aa9e15f6690->m_frame.f_lineno = 254;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ctx == NULL);
        var_ctx = tmp_assign_source_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_open_filename_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_open_mode_1;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_file);
        tmp_args_element_name_2 = par_file;
        frame_5e650fee9a43554a25c68aa9e15f6690->m_frame.f_lineno = 256;
        tmp_open_filename_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        if (tmp_open_filename_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_open_mode_1 = mod_consts[87];
        tmp_assign_source_2 = BUILTIN_OPEN(tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL);
        Py_DECREF(tmp_open_filename_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ctx == NULL);
        var_ctx = tmp_assign_source_2;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(var_ctx);
        tmp_assign_source_3 = var_ctx;
        assert(tmp_with_1__source == NULL);
        Py_INCREF(tmp_assign_source_3);
        tmp_with_1__source = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_name_2 = tmp_with_1__source;
        tmp_called_name_3 = LOOKUP_SPECIAL(tmp_expression_name_2, mod_consts[88]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_5e650fee9a43554a25c68aa9e15f6690->m_frame.f_lineno = 257;
        tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tmp_called_name_3);
        Py_DECREF(tmp_called_name_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_name_3;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_name_3 = tmp_with_1__source;
        tmp_assign_source_5 = LOOKUP_SPECIAL(tmp_expression_name_3, mod_consts[89]);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_assign_source_6;
        tmp_assign_source_6 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_with_1__enter);
        tmp_assign_source_7 = tmp_with_1__enter;
        assert(var_f == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_f = tmp_assign_source_7;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_4 == NULL)) {
            tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[91]);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_self);
        tmp_tuple_element_1 = par_self;
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_f);
        tmp_tuple_element_1 = var_f;
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[92];
        CHECK_OBJECT(par_protocol);
        tmp_dict_value_1 = par_protocol;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_5e650fee9a43554a25c68aa9e15f6690->m_frame.f_lineno = 258;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_name_4, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_1);
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_type_1);
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_value_1);
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF(exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_5e650fee9a43554a25c68aa9e15f6690, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_5e650fee9a43554a25c68aa9e15f6690, exception_keeper_lineno_1);
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
        tmp_compexpr_right_1 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
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
        nuitka_bool tmp_assign_source_8;
        tmp_assign_source_8 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_8;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_name_5 = tmp_with_1__exit;
        tmp_args_element_name_3 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_name_4 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_name_5 = EXC_TRACEBACK(PyThreadState_GET());
        frame_5e650fee9a43554a25c68aa9e15f6690->m_frame.f_lineno = 258;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_5, call_args);
        }

        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
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
        exception_lineno = 258;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_5e650fee9a43554a25c68aa9e15f6690->m_frame) frame_5e650fee9a43554a25c68aa9e15f6690->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooo";
    goto try_except_handler_5;
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 257;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_5e650fee9a43554a25c68aa9e15f6690->m_frame) frame_5e650fee9a43554a25c68aa9e15f6690->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooo";
    goto try_except_handler_5;
    branch_end_2:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
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

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    goto try_end_3;
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

    {
        bool tmp_condition_result_4;
        nuitka_bool tmp_compexpr_left_2;
        nuitka_bool tmp_compexpr_right_2;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_2 = tmp_with_1__indicator;
        tmp_compexpr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_name_6 = tmp_with_1__exit;
        frame_5e650fee9a43554a25c68aa9e15f6690->m_frame.f_lineno = 258;
        tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_6, &PyTuple_GET_ITEM(mod_consts[93], 0));

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_3);
            Py_XDECREF(exception_keeper_value_3);
            Py_XDECREF(exception_keeper_tb_3);

            exception_lineno = 258;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_4:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_5;
        nuitka_bool tmp_compexpr_left_3;
        nuitka_bool tmp_compexpr_right_3;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_3 = tmp_with_1__indicator;
        tmp_compexpr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_5 = (tmp_compexpr_left_3 == tmp_compexpr_right_3) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_name_7;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_name_7 = tmp_with_1__exit;
        frame_5e650fee9a43554a25c68aa9e15f6690->m_frame.f_lineno = 258;
        tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_7, &PyTuple_GET_ITEM(mod_consts[93], 0));

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_5:;
    goto try_end_4;
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

    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5e650fee9a43554a25c68aa9e15f6690);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5e650fee9a43554a25c68aa9e15f6690);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5e650fee9a43554a25c68aa9e15f6690, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5e650fee9a43554a25c68aa9e15f6690->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5e650fee9a43554a25c68aa9e15f6690, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5e650fee9a43554a25c68aa9e15f6690,
        type_description_1,
        par_self,
        par_file,
        par_protocol,
        var_ctx,
        var_f
    );


    // Release cached frame if used for exception.
    if (frame_5e650fee9a43554a25c68aa9e15f6690 == cache_frame_5e650fee9a43554a25c68aa9e15f6690) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_5e650fee9a43554a25c68aa9e15f6690);
        cache_frame_5e650fee9a43554a25c68aa9e15f6690 = NULL;
    }

    assertFrameObject(frame_5e650fee9a43554a25c68aa9e15f6690);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    CHECK_OBJECT(tmp_with_1__exit);
    Py_DECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_ctx);
    Py_DECREF(var_ctx);
    var_ctx = NULL;
    CHECK_OBJECT(var_f);
    Py_DECREF(var_f);
    var_f = NULL;
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

    Py_XDECREF(var_ctx);
    var_ctx = NULL;
    Py_XDECREF(var_f);
    var_f = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_file);
    Py_DECREF(par_file);
    CHECK_OBJECT(par_protocol);
    Py_DECREF(par_protocol);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_file);
    Py_DECREF(par_file);
    CHECK_OBJECT(par_protocol);
    Py_DECREF(par_protocol);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function_17__dumps(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_protocol = python_pars[1];
    struct Nuitka_FrameObject *frame_5f56312ef57eac76c68613e12eb718d6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_5f56312ef57eac76c68613e12eb718d6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5f56312ef57eac76c68613e12eb718d6)) {
        Py_XDECREF(cache_frame_5f56312ef57eac76c68613e12eb718d6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5f56312ef57eac76c68613e12eb718d6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5f56312ef57eac76c68613e12eb718d6 = MAKE_FUNCTION_FRAME(codeobj_5f56312ef57eac76c68613e12eb718d6, module_numpy$core$_methods, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5f56312ef57eac76c68613e12eb718d6->m_type_description == NULL);
    frame_5f56312ef57eac76c68613e12eb718d6 = cache_frame_5f56312ef57eac76c68613e12eb718d6;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5f56312ef57eac76c68613e12eb718d6);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5f56312ef57eac76c68613e12eb718d6) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[94]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_tuple_element_1 = par_self;
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[92];
        CHECK_OBJECT(par_protocol);
        tmp_dict_value_1 = par_protocol;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_5f56312ef57eac76c68613e12eb718d6->m_frame.f_lineno = 261;
        tmp_return_value = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5f56312ef57eac76c68613e12eb718d6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5f56312ef57eac76c68613e12eb718d6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5f56312ef57eac76c68613e12eb718d6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5f56312ef57eac76c68613e12eb718d6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5f56312ef57eac76c68613e12eb718d6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5f56312ef57eac76c68613e12eb718d6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5f56312ef57eac76c68613e12eb718d6,
        type_description_1,
        par_self,
        par_protocol
    );


    // Release cached frame if used for exception.
    if (frame_5f56312ef57eac76c68613e12eb718d6 == cache_frame_5f56312ef57eac76c68613e12eb718d6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_5f56312ef57eac76c68613e12eb718d6);
        cache_frame_5f56312ef57eac76c68613e12eb718d6 = NULL;
    }

    assertFrameObject(frame_5f56312ef57eac76c68613e12eb718d6);

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
    CHECK_OBJECT(par_protocol);
    Py_DECREF(par_protocol);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_protocol);
    Py_DECREF(par_protocol);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_10__clip_dep_invoke_with_casting(PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function_10__clip_dep_invoke_with_casting,
        mod_consts[44],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f506a0e0280828d02c53f4d3238a98bd,
        NULL,
#if PYTHON_VERSION >= 300
        kw_defaults,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_11__clip(PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function_11__clip,
        mod_consts[137],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_62da645bfc34c14136250d018877118c,
        defaults,
#if PYTHON_VERSION >= 300
        kw_defaults,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_12__mean(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function_12__mean,
        mod_consts[138],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4a8e6b0dd1aa5a43b9e95bf4cd92dfa3,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_13__var(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function_13__var,
        mod_consts[79],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5b2c0512e8394ccf9bff4827a6e21214,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_14__std(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function_14__std,
        mod_consts[140],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_bcee3bdfd7a885f0c78cdf5d7a675db6,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_15__ptp(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function_15__ptp,
        mod_consts[142],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ab379933e307ac0b12f2eb722dd46d15,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_16__dump(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function_16__dump,
        mod_consts[143],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5e650fee9a43554a25c68aa9e15f6690,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_17__dumps(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function_17__dumps,
        mod_consts[144],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5f56312ef57eac76c68613e12eb718d6,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_1__amax(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function_1__amax,
        mod_consts[128],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4124d97e6b0fe8261e9dbd470cdd342d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_2__amin(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function_2__amin,
        mod_consts[129],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_56c3a0338ee7081d6744f480f442ad0c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_3__sum(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function_3__sum,
        mod_consts[130],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a255f330ed94317782d9f76e0b57e18c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_4__prod(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function_4__prod,
        mod_consts[131],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_10349d8b44d954aa7dd867d034687ac9,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_5__any(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function_5__any,
        mod_consts[133],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_97ac3427b7249ca71b8cc3af232658ad,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_6__all(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function_6__all,
        mod_consts[134],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5cb5f3d180433a177c07d62e2b951a14,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_7__count_reduce_items() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function_7__count_reduce_items,
        mod_consts[50],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f89dd91135fe07830949798ff1527c29,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_8__clip_dep_is_scalar_nan() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function_8__clip_dep_is_scalar_nan,
        mod_consts[38],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4d8c55ef2fe9d1bac806eebbb80bdf67,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_9__clip_dep_is_byte_swapped() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function_9__clip_dep_is_byte_swapped,
        mod_consts[37],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c52b9e604d2d83847a3d1bef291d0373,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$_methods,
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

function_impl_code functable_numpy$core$_methods[] = {
    impl_numpy$core$_methods$$$function_1__amax,
    impl_numpy$core$_methods$$$function_2__amin,
    impl_numpy$core$_methods$$$function_3__sum,
    impl_numpy$core$_methods$$$function_4__prod,
    impl_numpy$core$_methods$$$function_5__any,
    impl_numpy$core$_methods$$$function_6__all,
    impl_numpy$core$_methods$$$function_7__count_reduce_items,
    impl_numpy$core$_methods$$$function_8__clip_dep_is_scalar_nan,
    impl_numpy$core$_methods$$$function_9__clip_dep_is_byte_swapped,
    impl_numpy$core$_methods$$$function_10__clip_dep_invoke_with_casting,
    impl_numpy$core$_methods$$$function_11__clip,
    impl_numpy$core$_methods$$$function_12__mean,
    impl_numpy$core$_methods$$$function_13__var,
    impl_numpy$core$_methods$$$function_14__std,
    impl_numpy$core$_methods$$$function_15__ptp,
    impl_numpy$core$_methods$$$function_16__dump,
    impl_numpy$core$_methods$$$function_17__dumps,
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

    function_impl_code *current = functable_numpy$core$_methods;
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

    if (offset > sizeof(functable_numpy$core$_methods) || offset < 0) {
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
        functable_numpy$core$_methods[offset],
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
        module_numpy$core$_methods,
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
NUITKA_MAY_BE_UNUSED static char const *module_full_name = "numpy.core._methods";

// Internal entry point for module code.
PyObject *modulecode_numpy$core$_methods(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_numpy$core$_methods = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
#ifdef _NUITKA_TRACE
        PRINT_STRING("numpy.core._methods: Skipping module init, already done.\n");
#endif

        return module_numpy$core$_methods;
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
    PRINT_STRING("numpy.core._methods: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("numpy.core._methods: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("numpy.core._methods: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initnumpy$core$_methods\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_numpy$core$_methods = MODULE_DICT(module_numpy$core$_methods);

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
        moduledict_numpy$core$_methods,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_numpy$core$_methods,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_numpy$core$_methods,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$core$_methods,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$core$_methods,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_numpy$core$_methods);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_numpy$core$_methods);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT(spec_value);

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_0effa1662c8c9d091fdfaae48f913fc3;
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
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[95];
        UPDATE_STRING_DICT0(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[97];
        UPDATE_STRING_DICT0(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_0effa1662c8c9d091fdfaae48f913fc3 = MAKE_MODULE_FRAME(codeobj_0effa1662c8c9d091fdfaae48f913fc3, module_numpy$core$_methods);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_0effa1662c8c9d091fdfaae48f913fc3);
    assert(Py_REFCNT(frame_0effa1662c8c9d091fdfaae48f913fc3) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = mod_consts[97];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[100], tmp_assattr_name_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[101], tmp_assattr_name_2);
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
        UPDATE_STRING_DICT0(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[26];
        tmp_globals_name_1 = (PyObject *)moduledict_numpy$core$_methods;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = mod_consts[16];
        frame_0effa1662c8c9d091fdfaae48f913fc3->m_frame.f_lineno = 6;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[103];
        tmp_globals_name_2 = (PyObject *)moduledict_numpy$core$_methods;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = mod_consts[104];
        tmp_level_name_2 = mod_consts[16];
        frame_0effa1662c8c9d091fdfaae48f913fc3->m_frame.f_lineno = 8;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_numpy$core$_methods,
                mod_consts[105],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[105]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = mod_consts[103];
        tmp_globals_name_3 = (PyObject *)moduledict_numpy$core$_methods;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = mod_consts[106];
        tmp_level_name_3 = mod_consts[16];
        frame_0effa1662c8c9d091fdfaae48f913fc3->m_frame.f_lineno = 9;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_numpy$core$_methods,
                mod_consts[107],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[107]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = mod_consts[108];
        tmp_globals_name_4 = (PyObject *)moduledict_numpy$core$_methods;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = mod_consts[109];
        tmp_level_name_4 = mod_consts[16];
        frame_0effa1662c8c9d091fdfaae48f913fc3->m_frame.f_lineno = 10;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_numpy$core$_methods,
                mod_consts[49],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[49]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = mod_consts[103];
        tmp_globals_name_5 = (PyObject *)moduledict_numpy$core$_methods;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = mod_consts[110];
        tmp_level_name_5 = mod_consts[16];
        frame_0effa1662c8c9d091fdfaae48f913fc3->m_frame.f_lineno = 11;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_numpy$core$_methods,
                mod_consts[111],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[111]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = mod_consts[103];
        tmp_globals_name_6 = (PyObject *)moduledict_numpy$core$_methods;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = mod_consts[112];
        tmp_level_name_6 = mod_consts[16];
        frame_0effa1662c8c9d091fdfaae48f913fc3->m_frame.f_lineno = 12;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_numpy$core$_methods,
                mod_consts[24],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[24]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = mod_consts[113];
        tmp_globals_name_7 = (PyObject *)moduledict_numpy$core$_methods;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = mod_consts[114];
        tmp_level_name_7 = mod_consts[16];
        frame_0effa1662c8c9d091fdfaae48f913fc3->m_frame.f_lineno = 13;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_numpy$core$_methods,
                mod_consts[115],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[115]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = mod_consts[116];
        tmp_globals_name_8 = (PyObject *)moduledict_numpy$core$_methods;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = mod_consts[117];
        tmp_level_name_8 = mod_consts[16];
        frame_0effa1662c8c9d091fdfaae48f913fc3->m_frame.f_lineno = 14;
        tmp_assign_source_11 = IMPORT_MODULE5(tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_numpy$core$_methods,
                mod_consts[90],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[90]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_numpy$core$_methods,
                mod_consts[86],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[86]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_9 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_numpy$core$_methods,
                mod_consts[85],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[85]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_14);
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
        PyObject *tmp_assign_source_15;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[47]);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_15 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[118]);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_expression_name_4;
        tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_name_4 == NULL)) {
            tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[45]);
        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_16 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[118]);
        Py_DECREF(tmp_expression_name_3);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_expression_name_6;
        tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_name_6 == NULL)) {
            tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[74]);
        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_17 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[118]);
        Py_DECREF(tmp_expression_name_5);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_expression_name_8;
        tmp_expression_name_8 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_name_8 == NULL)) {
            tmp_expression_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[69]);
        if (tmp_expression_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_18 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[118]);
        Py_DECREF(tmp_expression_name_7);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_expression_name_10;
        tmp_expression_name_10 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_name_10 == NULL)) {
            tmp_expression_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[119]);
        if (tmp_expression_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[118]);
        Py_DECREF(tmp_expression_name_9);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_expression_name_12;
        tmp_expression_name_12 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_name_12 == NULL)) {
            tmp_expression_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[120]);
        if (tmp_expression_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_20 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[118]);
        Py_DECREF(tmp_expression_name_11);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_15;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_16;
        tmp_expression_name_13 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_name_13 == NULL)) {
            tmp_expression_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_expression_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[20]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_14 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_name_14 == NULL)) {
            tmp_expression_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_expression_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[121]);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        frame_0effa1662c8c9d091fdfaae48f913fc3->m_frame.f_lineno = 26;
        tmp_dict_key_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_15 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_name_15 == NULL)) {
            tmp_expression_name_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_expression_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_1);

            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, mod_consts[20]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_1);

            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_16 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_name_16 == NULL)) {
            tmp_expression_name_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_expression_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_1);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, mod_consts[122]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_1);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        frame_0effa1662c8c9d091fdfaae48f913fc3->m_frame.f_lineno = 26;
        tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_1);

            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_21 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_called_name_3;
            PyObject *tmp_expression_name_17;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_expression_name_18;
            PyObject *tmp_called_name_4;
            PyObject *tmp_expression_name_19;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_expression_name_20;
            tmp_res = PyDict_SetItem(tmp_assign_source_21, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;

                goto dict_build_exception_1;
            }
            tmp_expression_name_17 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_expression_name_17 == NULL)) {
                tmp_expression_name_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
            }

            if (tmp_expression_name_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;

                goto dict_build_exception_1;
            }
            tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_17, mod_consts[20]);
            if (tmp_called_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;

                goto dict_build_exception_1;
            }
            tmp_expression_name_18 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_expression_name_18 == NULL)) {
                tmp_expression_name_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
            }

            if (tmp_expression_name_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_3);

                exception_lineno = 27;

                goto dict_build_exception_1;
            }
            tmp_args_element_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_18, mod_consts[123]);
            if (tmp_args_element_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_3);

                exception_lineno = 27;

                goto dict_build_exception_1;
            }
            frame_0effa1662c8c9d091fdfaae48f913fc3->m_frame.f_lineno = 27;
            tmp_dict_key_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_3);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_3);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;

                goto dict_build_exception_1;
            }
            tmp_expression_name_19 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_expression_name_19 == NULL)) {
                tmp_expression_name_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
            }

            if (tmp_expression_name_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 27;

                goto dict_build_exception_1;
            }
            tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_19, mod_consts[20]);
            if (tmp_called_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 27;

                goto dict_build_exception_1;
            }
            tmp_expression_name_20 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_expression_name_20 == NULL)) {
                tmp_expression_name_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
            }

            if (tmp_expression_name_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);
                Py_DECREF(tmp_called_name_4);

                exception_lineno = 27;

                goto dict_build_exception_1;
            }
            tmp_args_element_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_20, mod_consts[124]);
            if (tmp_args_element_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);
                Py_DECREF(tmp_called_name_4);

                exception_lineno = 27;

                goto dict_build_exception_1;
            }
            frame_0effa1662c8c9d091fdfaae48f913fc3->m_frame.f_lineno = 27;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_4);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_args_element_name_4);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 27;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_21, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;

                goto dict_build_exception_1;
            }
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_21);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_21);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_21;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_expression_name_22;
        PyObject *tmp_called_name_6;
        PyObject *tmp_expression_name_23;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_expression_name_24;
        tmp_expression_name_21 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_name_21 == NULL)) {
            tmp_expression_name_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_expression_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_21, mod_consts[20]);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_22 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_name_22 == NULL)) {
            tmp_expression_name_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_expression_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_22, mod_consts[125]);
        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        frame_0effa1662c8c9d091fdfaae48f913fc3->m_frame.f_lineno = 30;
        tmp_compexpr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_5);
        Py_DECREF(tmp_called_name_5);
        Py_DECREF(tmp_args_element_name_5);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_23 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_name_23 == NULL)) {
            tmp_expression_name_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_expression_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_1);

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_23, mod_consts[20]);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_1);

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_24 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_name_24 == NULL)) {
            tmp_expression_name_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_expression_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_1);
            Py_DECREF(tmp_called_name_6);

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_24, mod_consts[124]);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_1);
            Py_DECREF(tmp_called_name_6);

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        frame_0effa1662c8c9d091fdfaae48f913fc3->m_frame.f_lineno = 30;
        tmp_compexpr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_6);
        Py_DECREF(tmp_called_name_6);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_1);

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

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
        PyObject *tmp_called_name_7;
        PyObject *tmp_expression_name_25;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_called_name_8;
        PyObject *tmp_expression_name_26;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_expression_name_27;
        PyObject *tmp_called_name_9;
        PyObject *tmp_expression_name_28;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_expression_name_29;
        tmp_expression_name_25 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_expression_name_25 == NULL)) {
            tmp_expression_name_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
        }

        if (tmp_expression_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_25, mod_consts[126]);
        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_26 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_name_26 == NULL)) {
            tmp_expression_name_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_expression_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_called_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_26, mod_consts[20]);
        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_27 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_name_27 == NULL)) {
            tmp_expression_name_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_expression_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);
            Py_DECREF(tmp_called_name_8);

            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_27, mod_consts[127]);
        if (tmp_args_element_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);
            Py_DECREF(tmp_called_name_8);

            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        frame_0effa1662c8c9d091fdfaae48f913fc3->m_frame.f_lineno = 32;
        tmp_dict_key_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_8);
        Py_DECREF(tmp_called_name_8);
        Py_DECREF(tmp_args_element_name_8);
        if (tmp_dict_key_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_28 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_name_28 == NULL)) {
            tmp_expression_name_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_expression_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);
            Py_DECREF(tmp_dict_key_2);

            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_called_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_28, mod_consts[20]);
        if (tmp_called_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);
            Py_DECREF(tmp_dict_key_2);

            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_29 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_name_29 == NULL)) {
            tmp_expression_name_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_expression_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);
            Py_DECREF(tmp_dict_key_2);
            Py_DECREF(tmp_called_name_9);

            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_29, mod_consts[125]);
        if (tmp_args_element_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);
            Py_DECREF(tmp_dict_key_2);
            Py_DECREF(tmp_called_name_9);

            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        frame_0effa1662c8c9d091fdfaae48f913fc3->m_frame.f_lineno = 32;
        tmp_dict_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_9, tmp_args_element_name_9);
        Py_DECREF(tmp_called_name_9);
        Py_DECREF(tmp_args_element_name_9);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);
            Py_DECREF(tmp_dict_key_2);

            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_7 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_args_element_name_7, tmp_dict_key_2, tmp_dict_value_2);
        Py_DECREF(tmp_dict_value_2);
        Py_DECREF(tmp_dict_key_2);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto dict_build_exception_2;
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_called_name_7);
        Py_DECREF(tmp_args_element_name_7);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        frame_0effa1662c8c9d091fdfaae48f913fc3->m_frame.f_lineno = 31;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_7);
        Py_DECREF(tmp_called_name_7);
        Py_DECREF(tmp_args_element_name_7);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = Py_None;
        tmp_defaults_1 = PyTuple_New(5);
        PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = Py_None;
        PyTuple_SET_ITEM0(tmp_defaults_1, 1, tmp_tuple_element_1);
        tmp_tuple_element_1 = Py_False;
        PyTuple_SET_ITEM0(tmp_defaults_1, 2, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_defaults_1, 3, tmp_tuple_element_1);
        tmp_tuple_element_1 = Py_True;
        PyTuple_SET_ITEM0(tmp_defaults_1, 4, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_defaults_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;


        tmp_assign_source_22 = MAKE_FUNCTION_numpy$core$_methods$$$function_1__amax(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_defaults_2;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = Py_None;
        tmp_defaults_2 = PyTuple_New(5);
        PyTuple_SET_ITEM0(tmp_defaults_2, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = Py_None;
        PyTuple_SET_ITEM0(tmp_defaults_2, 1, tmp_tuple_element_2);
        tmp_tuple_element_2 = Py_False;
        PyTuple_SET_ITEM0(tmp_defaults_2, 2, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_defaults_2, 3, tmp_tuple_element_2);
        tmp_tuple_element_2 = Py_True;
        PyTuple_SET_ITEM0(tmp_defaults_2, 4, tmp_tuple_element_2);
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_defaults_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;


        tmp_assign_source_23 = MAKE_FUNCTION_numpy$core$_methods$$$function_2__amin(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_defaults_3;
        PyObject *tmp_tuple_element_3;
        tmp_tuple_element_3 = Py_None;
        tmp_defaults_3 = PyTuple_New(6);
        PyTuple_SET_ITEM0(tmp_defaults_3, 0, tmp_tuple_element_3);
        tmp_tuple_element_3 = Py_None;
        PyTuple_SET_ITEM0(tmp_defaults_3, 1, tmp_tuple_element_3);
        tmp_tuple_element_3 = Py_None;
        PyTuple_SET_ITEM0(tmp_defaults_3, 2, tmp_tuple_element_3);
        tmp_tuple_element_3 = Py_False;
        PyTuple_SET_ITEM0(tmp_defaults_3, 3, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_defaults_3, 4, tmp_tuple_element_3);
        tmp_tuple_element_3 = Py_True;
        PyTuple_SET_ITEM0(tmp_defaults_3, 5, tmp_tuple_element_3);
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_defaults_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;


        tmp_assign_source_24 = MAKE_FUNCTION_numpy$core$_methods$$$function_3__sum(tmp_defaults_3);

        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_defaults_4;
        PyObject *tmp_tuple_element_4;
        tmp_tuple_element_4 = Py_None;
        tmp_defaults_4 = PyTuple_New(6);
        PyTuple_SET_ITEM0(tmp_defaults_4, 0, tmp_tuple_element_4);
        tmp_tuple_element_4 = Py_None;
        PyTuple_SET_ITEM0(tmp_defaults_4, 1, tmp_tuple_element_4);
        tmp_tuple_element_4 = Py_None;
        PyTuple_SET_ITEM0(tmp_defaults_4, 2, tmp_tuple_element_4);
        tmp_tuple_element_4 = Py_False;
        PyTuple_SET_ITEM0(tmp_defaults_4, 3, tmp_tuple_element_4);
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto tuple_build_exception_4;
        }
        PyTuple_SET_ITEM0(tmp_defaults_4, 4, tmp_tuple_element_4);
        tmp_tuple_element_4 = Py_True;
        PyTuple_SET_ITEM0(tmp_defaults_4, 5, tmp_tuple_element_4);
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_defaults_4);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;


        tmp_assign_source_25 = MAKE_FUNCTION_numpy$core$_methods$$$function_4__prod(tmp_defaults_4);

        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_25);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0effa1662c8c9d091fdfaae48f913fc3);
#endif
    popFrameStack();

    assertFrameObject(frame_0effa1662c8c9d091fdfaae48f913fc3);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0effa1662c8c9d091fdfaae48f913fc3);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0effa1662c8c9d091fdfaae48f913fc3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0effa1662c8c9d091fdfaae48f913fc3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0effa1662c8c9d091fdfaae48f913fc3, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_defaults_5;
        tmp_defaults_5 = mod_consts[132];
        Py_INCREF(tmp_defaults_5);


        tmp_assign_source_26 = MAKE_FUNCTION_numpy$core$_methods$$$function_5__any(tmp_defaults_5);

        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_defaults_6;
        tmp_defaults_6 = mod_consts[132];
        Py_INCREF(tmp_defaults_6);


        tmp_assign_source_27 = MAKE_FUNCTION_numpy$core$_methods$$$function_6__all(tmp_defaults_6);

        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;


        tmp_assign_source_28 = MAKE_FUNCTION_numpy$core$_methods$$$function_7__count_reduce_items();

        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;


        tmp_assign_source_29 = MAKE_FUNCTION_numpy$core$_methods$$$function_8__clip_dep_is_scalar_nan();

        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;


        tmp_assign_source_30 = MAKE_FUNCTION_numpy$core$_methods$$$function_9__clip_dep_is_byte_swapped();

        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_kw_defaults_1;
        tmp_kw_defaults_1 = PyDict_Copy(mod_consts[135]);


        tmp_assign_source_31 = MAKE_FUNCTION_numpy$core$_methods$$$function_10__clip_dep_invoke_with_casting(tmp_kw_defaults_1);

        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_defaults_7;
        PyObject *tmp_kw_defaults_2;
        tmp_defaults_7 = mod_consts[93];
        tmp_kw_defaults_2 = PyDict_Copy(mod_consts[136]);
        Py_INCREF(tmp_defaults_7);


        tmp_assign_source_32 = MAKE_FUNCTION_numpy$core$_methods$$$function_11__clip(tmp_defaults_7, tmp_kw_defaults_2);

        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_defaults_8;
        tmp_defaults_8 = mod_consts[132];
        Py_INCREF(tmp_defaults_8);


        tmp_assign_source_33 = MAKE_FUNCTION_numpy$core$_methods$$$function_12__mean(tmp_defaults_8);

        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_defaults_9;
        tmp_defaults_9 = mod_consts[139];
        Py_INCREF(tmp_defaults_9);


        tmp_assign_source_34 = MAKE_FUNCTION_numpy$core$_methods$$$function_13__var(tmp_defaults_9);

        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_defaults_10;
        tmp_defaults_10 = mod_consts[139];
        Py_INCREF(tmp_defaults_10);


        tmp_assign_source_35 = MAKE_FUNCTION_numpy$core$_methods$$$function_14__std(tmp_defaults_10);

        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_defaults_11;
        tmp_defaults_11 = mod_consts[141];
        Py_INCREF(tmp_defaults_11);


        tmp_assign_source_36 = MAKE_FUNCTION_numpy$core$_methods$$$function_15__ptp(tmp_defaults_11);

        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_defaults_12;
        tmp_defaults_12 = mod_consts[73];
        Py_INCREF(tmp_defaults_12);


        tmp_assign_source_37 = MAKE_FUNCTION_numpy$core$_methods$$$function_16__dump(tmp_defaults_12);

        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_defaults_13;
        tmp_defaults_13 = mod_consts[73];
        Py_INCREF(tmp_defaults_13);


        tmp_assign_source_38 = MAKE_FUNCTION_numpy$core$_methods$$$function_17__dumps(tmp_defaults_13);

        UPDATE_STRING_DICT1(moduledict_numpy$core$_methods, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_38);
    }

    return module_numpy$core$_methods;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

