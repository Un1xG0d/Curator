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




/* Call the instance's destructor. */
extern "C" {static void release_FbxLocalTime(void *, int);}
static void release_FbxLocalTime(void *sipCppV, int)
{
    delete reinterpret_cast< ::FbxLocalTime *>(sipCppV);
}


extern "C" {static void assign_FbxLocalTime(void *, SIP_SSIZE_T, const void *);}
static void assign_FbxLocalTime(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::FbxLocalTime *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::FbxLocalTime *>(sipSrc);
}


extern "C" {static void *array_FbxLocalTime(SIP_SSIZE_T);}
static void *array_FbxLocalTime(SIP_SSIZE_T sipNrElem)
{
    return new  ::FbxLocalTime[sipNrElem];
}


extern "C" {static void *copy_FbxLocalTime(const void *, SIP_SSIZE_T);}
static void *copy_FbxLocalTime(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::FbxLocalTime(reinterpret_cast<const  ::FbxLocalTime *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_FbxLocalTime(sipSimpleWrapper *);}
static void dealloc_FbxLocalTime(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxLocalTime(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_FbxLocalTime(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxLocalTime(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::FbxLocalTime *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::FbxLocalTime();

            return sipCpp;
        }
    }

    {
        const  ::FbxLocalTime* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_FbxLocalTime, &a0))
        {
            sipCpp = new  ::FbxLocalTime(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static PyObject *varget_FbxLocalTime_mDay(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxLocalTime_mDay(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::FbxLocalTime *sipCpp = reinterpret_cast< ::FbxLocalTime *>(sipSelf);

    sipVal = sipCpp->mDay;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_FbxLocalTime_mDay(void *, PyObject *, PyObject *);}
static int varset_FbxLocalTime_mDay(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::FbxLocalTime *sipCpp = reinterpret_cast< ::FbxLocalTime *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->mDay = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxLocalTime_mHour(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxLocalTime_mHour(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::FbxLocalTime *sipCpp = reinterpret_cast< ::FbxLocalTime *>(sipSelf);

    sipVal = sipCpp->mHour;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_FbxLocalTime_mHour(void *, PyObject *, PyObject *);}
static int varset_FbxLocalTime_mHour(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::FbxLocalTime *sipCpp = reinterpret_cast< ::FbxLocalTime *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->mHour = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxLocalTime_mMillisecond(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxLocalTime_mMillisecond(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::FbxLocalTime *sipCpp = reinterpret_cast< ::FbxLocalTime *>(sipSelf);

    sipVal = sipCpp->mMillisecond;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_FbxLocalTime_mMillisecond(void *, PyObject *, PyObject *);}
static int varset_FbxLocalTime_mMillisecond(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::FbxLocalTime *sipCpp = reinterpret_cast< ::FbxLocalTime *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->mMillisecond = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxLocalTime_mMinute(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxLocalTime_mMinute(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::FbxLocalTime *sipCpp = reinterpret_cast< ::FbxLocalTime *>(sipSelf);

    sipVal = sipCpp->mMinute;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_FbxLocalTime_mMinute(void *, PyObject *, PyObject *);}
static int varset_FbxLocalTime_mMinute(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::FbxLocalTime *sipCpp = reinterpret_cast< ::FbxLocalTime *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->mMinute = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxLocalTime_mMonth(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxLocalTime_mMonth(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::FbxLocalTime *sipCpp = reinterpret_cast< ::FbxLocalTime *>(sipSelf);

    sipVal = sipCpp->mMonth;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_FbxLocalTime_mMonth(void *, PyObject *, PyObject *);}
static int varset_FbxLocalTime_mMonth(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::FbxLocalTime *sipCpp = reinterpret_cast< ::FbxLocalTime *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->mMonth = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxLocalTime_mSecond(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxLocalTime_mSecond(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::FbxLocalTime *sipCpp = reinterpret_cast< ::FbxLocalTime *>(sipSelf);

    sipVal = sipCpp->mSecond;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_FbxLocalTime_mSecond(void *, PyObject *, PyObject *);}
static int varset_FbxLocalTime_mSecond(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::FbxLocalTime *sipCpp = reinterpret_cast< ::FbxLocalTime *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->mSecond = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxLocalTime_mYear(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxLocalTime_mYear(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::FbxLocalTime *sipCpp = reinterpret_cast< ::FbxLocalTime *>(sipSelf);

    sipVal = sipCpp->mYear;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_FbxLocalTime_mYear(void *, PyObject *, PyObject *);}
static int varset_FbxLocalTime_mYear(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::FbxLocalTime *sipCpp = reinterpret_cast< ::FbxLocalTime *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->mYear = sipVal;

    return 0;
}

sipVariableDef variables_FbxLocalTime[] = {
    {InstanceVariable, sipName_mDay, (PyMethodDef *)varget_FbxLocalTime_mDay, (PyMethodDef *)varset_FbxLocalTime_mDay, NULL, NULL},
    {InstanceVariable, sipName_mHour, (PyMethodDef *)varget_FbxLocalTime_mHour, (PyMethodDef *)varset_FbxLocalTime_mHour, NULL, NULL},
    {InstanceVariable, sipName_mMillisecond, (PyMethodDef *)varget_FbxLocalTime_mMillisecond, (PyMethodDef *)varset_FbxLocalTime_mMillisecond, NULL, NULL},
    {InstanceVariable, sipName_mMinute, (PyMethodDef *)varget_FbxLocalTime_mMinute, (PyMethodDef *)varset_FbxLocalTime_mMinute, NULL, NULL},
    {InstanceVariable, sipName_mMonth, (PyMethodDef *)varget_FbxLocalTime_mMonth, (PyMethodDef *)varset_FbxLocalTime_mMonth, NULL, NULL},
    {InstanceVariable, sipName_mSecond, (PyMethodDef *)varget_FbxLocalTime_mSecond, (PyMethodDef *)varset_FbxLocalTime_mSecond, NULL, NULL},
    {InstanceVariable, sipName_mYear, (PyMethodDef *)varget_FbxLocalTime_mYear, (PyMethodDef *)varset_FbxLocalTime_mYear, NULL, NULL},
};

PyDoc_STRVAR(doc_FbxLocalTime, "\1FbxLocalTime()\n"
    "FbxLocalTime(FbxLocalTime)");


sipClassTypeDef sipTypeDef_fbx_FbxLocalTime = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_FbxLocalTime,
        {0},
        0
    },
    {
        sipNameNr_FbxLocalTime,
        {0, 0, 1},
        0, 0,
        0, 0,
        7, variables_FbxLocalTime,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_FbxLocalTime,
    -1,
    -1,
    0,
    0,
    init_type_FbxLocalTime,
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
    dealloc_FbxLocalTime,
    assign_FbxLocalTime,
    array_FbxLocalTime,
    copy_FbxLocalTime,
    release_FbxLocalTime,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
