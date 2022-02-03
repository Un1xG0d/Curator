/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.3
 *
 * Copyright (C) 2009 Autodesk, Inc. and/or its licensors.
 * All Rights Reserved.
 * 
 * The coded instructions, statements, computer programs, and/or related material 
 * (collectively the "Data") in these files contain unpublished information 
 * proprietary to Autodesk, Inc. and/or its licensors, which is protected by 
 * Canada and United States of America federal copyright law and by international 
 * treaties. 
 * 
 * The Data may not be disclosed or distributed to third parties, in whole or in
 * part, without the prior written consent of Autodesk, Inc. ("Autodesk").
 * 
 * THE DATA IS PROVIDED "AS IS" AND WITHOUT WARRANTY.
 * ALL WARRANTIES ARE EXPRESSLY EXCLUDED AND DISCLAIMED. AUTODESK MAKES NO
 * WARRANTY OF ANY KIND WITH RESPECT TO THE DATA, EXPRESS, IMPLIED OR ARISING
 * BY CUSTOM OR TRADE USAGE, AND DISCLAIMS ANY IMPLIED WARRANTIES OF TITLE, 
 * NON-INFRINGEMENT, MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE OR USE. 
 * WITHOUT LIMITING THE FOREGOING, AUTODESK DOES NOT WARRANT THAT THE OPERATION
 * OF THE DATA WILL BE UNINTERRUPTED OR ERROR FREE. 
 * 
 * IN NO EVENT SHALL AUTODESK, ITS AFFILIATES, PARENT COMPANIES, LICENSORS
 * OR SUPPLIERS ("AUTODESK GROUP") BE LIABLE FOR ANY LOSSES, DAMAGES OR EXPENSES
 * OF ANY KIND (INCLUDING WITHOUT LIMITATION PUNITIVE OR MULTIPLE DAMAGES OR OTHER
 * SPECIAL, DIRECT, INDIRECT, EXEMPLARY, INCIDENTAL, LOSS OF PROFITS, REVENUE
 * OR DATA, COST OF COVER OR CONSEQUENTIAL LOSSES OR DAMAGES OF ANY KIND),
 * HOWEVER CAUSED, AND REGARDLESS OF THE THEORY OF LIABILITY, WHETHER DERIVED
 * FROM CONTRACT, TORT (INCLUDING, BUT NOT LIMITED TO, NEGLIGENCE), OR OTHERWISE,
 * ARISING OUT OF OR RELATING TO THE DATA OR ITS USE OR ANY OTHER PERFORMANCE,
 * WHETHER OR NOT AUTODESK HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH LOSS
 * OR DAMAGE. 
 */

#include "sipAPIfbx.h"




extern "C" {static PyObject *slot_FbxDouble4___ne__(PyObject *,PyObject *);}
static PyObject *slot_FbxDouble4___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxDouble4 *sipCpp = reinterpret_cast< ::FbxDouble4 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxDouble4));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::FbxDouble4* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxDouble4, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxDouble4::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, ne_slot, sipType_FbxDouble4, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_FbxDouble4___eq__(PyObject *,PyObject *);}
static PyObject *slot_FbxDouble4___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxDouble4 *sipCpp = reinterpret_cast< ::FbxDouble4 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxDouble4));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::FbxDouble4* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxDouble4, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxDouble4::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, eq_slot, sipType_FbxDouble4, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_FbxDouble4___getitem__(PyObject *,PyObject *);}
static PyObject *slot_FbxDouble4___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxDouble4 *sipCpp = reinterpret_cast< ::FbxDouble4 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxDouble4));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            double sipRes = 0;
            int sipIsErr = 0;

#line 186 "/var/www/html/lib/fbxpy/sip/fbxtypes.sip"
        if (a0 < 0 || a0 >= 4)
        {
            PyErr_Format(PyExc_IndexError, "sequence index out of range");
            sipIsErr = 1;
        }
        else
        {
            fbxArrayElementCopy(&sipRes, (double*)NULL, sipCpp, a0);
        }
#line 136 "/var/www/html/lib/fbxpy/build/Python27_ucs4_x64/sipfbxFbxDouble4.cpp"

            if (sipIsErr)
                return 0;

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxDouble4, sipName___getitem__, NULL);

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxDouble4(void *, int);}
static void release_FbxDouble4(void *sipCppV, int)
{
    delete reinterpret_cast< ::FbxDouble4 *>(sipCppV);
}


extern "C" {static void assign_FbxDouble4(void *, SIP_SSIZE_T, const void *);}
static void assign_FbxDouble4(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::FbxDouble4 *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::FbxDouble4 *>(sipSrc);
}


extern "C" {static void *array_FbxDouble4(SIP_SSIZE_T);}
static void *array_FbxDouble4(SIP_SSIZE_T sipNrElem)
{
    return new  ::FbxDouble4[sipNrElem];
}


extern "C" {static void *copy_FbxDouble4(const void *, SIP_SSIZE_T);}
static void *copy_FbxDouble4(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::FbxDouble4(reinterpret_cast<const  ::FbxDouble4 *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_FbxDouble4(sipSimpleWrapper *);}
static void dealloc_FbxDouble4(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxDouble4(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_FbxDouble4(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxDouble4(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::FbxDouble4 *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::FbxDouble4();

            return sipCpp;
        }
    }

    {
        double a0;
        double a1;
        double a2;
        double a3;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "dddd", &a0, &a1, &a2, &a3))
        {
            sipCpp = new  ::FbxDouble4(a0,a1,a2,a3);

            return sipCpp;
        }
    }

    {
        const  ::FbxDouble4* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_FbxDouble4, &a0))
        {
            sipCpp = new  ::FbxDouble4(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxDouble4[] = {
    {(void *)slot_FbxDouble4___ne__, ne_slot},
    {(void *)slot_FbxDouble4___eq__, eq_slot},
    {(void *)slot_FbxDouble4___getitem__, getitem_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_FbxDouble4, "\1FbxDouble4()\n"
    "FbxDouble4(float, float, float, float)\n"
    "FbxDouble4(FbxDouble4)");


sipClassTypeDef sipTypeDef_fbx_FbxDouble4 = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_FbxDouble4,
        {0},
        0
    },
    {
        sipNameNr_FbxDouble4,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_FbxDouble4,
    -1,
    -1,
    0,
    slots_FbxDouble4,
    init_type_FbxDouble4,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_FbxDouble4,
    assign_FbxDouble4,
    array_FbxDouble4,
    copy_FbxDouble4,
    release_FbxDouble4,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
