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




PyDoc_STRVAR(doc_FbxDataType_Create, "Create(str, EFbxType) -> FbxDataType\n"
    "Create(str, FbxDataType) -> FbxDataType");

extern "C" {static PyObject *meth_FbxDataType_Create(PyObject *, PyObject *);}
static PyObject *meth_FbxDataType_Create(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const char* a0;
        PyObject *a0Keep;
         ::EFbxType a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "A8E", &a0Keep, &a0, sipType_EFbxType, &a1))
        {
             ::FbxDataType*sipRes;

            sipRes = new  ::FbxDataType( ::FbxDataType::Create(a0,a1));
            Py_DECREF(a0Keep);

            return sipConvertFromNewType(sipRes,sipType_FbxDataType,NULL);
        }
    }

    {
        const char* a0;
        PyObject *a0Keep;
        const  ::FbxDataType* a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "A8J9", &a0Keep, &a0, sipType_FbxDataType, &a1))
        {
             ::FbxDataType*sipRes;

            sipRes = new  ::FbxDataType( ::FbxDataType::Create(a0,*a1));
            Py_DECREF(a0Keep);

            return sipConvertFromNewType(sipRes,sipType_FbxDataType,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxDataType, sipName_Create, doc_FbxDataType_Create);

    return NULL;
}


PyDoc_STRVAR(doc_FbxDataType_Destroy, "Destroy(self)");

extern "C" {static PyObject *meth_FbxDataType_Destroy(PyObject *, PyObject *);}
static PyObject *meth_FbxDataType_Destroy(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxDataType *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxDataType, &sipCpp))
        {
            sipCpp->Destroy();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxDataType, sipName_Destroy, doc_FbxDataType_Destroy);

    return NULL;
}


PyDoc_STRVAR(doc_FbxDataType_Valid, "Valid(self) -> bool");

extern "C" {static PyObject *meth_FbxDataType_Valid(PyObject *, PyObject *);}
static PyObject *meth_FbxDataType_Valid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxDataType *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxDataType, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->Valid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxDataType, sipName_Valid, doc_FbxDataType_Valid);

    return NULL;
}


PyDoc_STRVAR(doc_FbxDataType_Is, "Is(self, FbxDataType) -> bool");

extern "C" {static PyObject *meth_FbxDataType_Is(PyObject *, PyObject *);}
static PyObject *meth_FbxDataType_Is(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxDataType* a0;
         ::FbxDataType *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxDataType, &sipCpp, sipType_FbxDataType, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->Is(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxDataType, sipName_Is, doc_FbxDataType_Is);

    return NULL;
}


PyDoc_STRVAR(doc_FbxDataType_GetType, "GetType(self) -> EFbxType");

extern "C" {static PyObject *meth_FbxDataType_GetType(PyObject *, PyObject *);}
static PyObject *meth_FbxDataType_GetType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxDataType *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxDataType, &sipCpp))
        {
             ::EFbxType sipRes;

            sipRes = sipCpp->GetType();

            return sipConvertFromEnum(sipRes,sipType_EFbxType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxDataType, sipName_GetType, doc_FbxDataType_GetType);

    return NULL;
}


PyDoc_STRVAR(doc_FbxDataType_GetName, "GetName(self) -> str");

extern "C" {static PyObject *meth_FbxDataType_GetName(PyObject *, PyObject *);}
static PyObject *meth_FbxDataType_GetName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxDataType *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxDataType, &sipCpp))
        {
            const char*sipRes;

            sipRes = sipCpp->GetName();

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

#if PY_MAJOR_VERSION >= 3
            return PyUnicode_FromString(sipRes);
#else
            return PyUnicode_DecodeUTF8(sipRes, strlen(sipRes), NULL);
#endif
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxDataType, sipName_GetName, doc_FbxDataType_GetName);

    return NULL;
}


extern "C" {static PyObject *slot_FbxDataType___ne__(PyObject *,PyObject *);}
static PyObject *slot_FbxDataType___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxDataType *sipCpp = reinterpret_cast< ::FbxDataType *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxDataType));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::FbxDataType* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxDataType, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxDataType::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, ne_slot, sipType_FbxDataType, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_FbxDataType___eq__(PyObject *,PyObject *);}
static PyObject *slot_FbxDataType___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxDataType *sipCpp = reinterpret_cast< ::FbxDataType *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxDataType));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::FbxDataType* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxDataType, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxDataType::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, eq_slot, sipType_FbxDataType, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxDataType(void *, int);}
static void release_FbxDataType(void *sipCppV, int)
{
    delete reinterpret_cast< ::FbxDataType *>(sipCppV);
}


extern "C" {static void assign_FbxDataType(void *, SIP_SSIZE_T, const void *);}
static void assign_FbxDataType(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::FbxDataType *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::FbxDataType *>(sipSrc);
}


extern "C" {static void *array_FbxDataType(SIP_SSIZE_T);}
static void *array_FbxDataType(SIP_SSIZE_T sipNrElem)
{
    return new  ::FbxDataType[sipNrElem];
}


extern "C" {static void *copy_FbxDataType(const void *, SIP_SSIZE_T);}
static void *copy_FbxDataType(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::FbxDataType(reinterpret_cast<const  ::FbxDataType *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_FbxDataType(sipSimpleWrapper *);}
static void dealloc_FbxDataType(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxDataType(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_FbxDataType(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxDataType(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::FbxDataType *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::FbxDataType();

            return sipCpp;
        }
    }

    {
        const  ::FbxDataType* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_FbxDataType, &a0))
        {
            sipCpp = new  ::FbxDataType(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxDataType[] = {
    {(void *)slot_FbxDataType___ne__, ne_slot},
    {(void *)slot_FbxDataType___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxDataType[] = {
    {SIP_MLNAME_CAST(sipName_Create), meth_FbxDataType_Create, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxDataType_Create)},
    {SIP_MLNAME_CAST(sipName_Destroy), meth_FbxDataType_Destroy, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxDataType_Destroy)},
    {SIP_MLNAME_CAST(sipName_GetName), meth_FbxDataType_GetName, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxDataType_GetName)},
    {SIP_MLNAME_CAST(sipName_GetType), meth_FbxDataType_GetType, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxDataType_GetType)},
    {SIP_MLNAME_CAST(sipName_Is), meth_FbxDataType_Is, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxDataType_Is)},
    {SIP_MLNAME_CAST(sipName_Valid), meth_FbxDataType_Valid, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxDataType_Valid)}
};

PyDoc_STRVAR(doc_FbxDataType, "\1FbxDataType()\n"
    "FbxDataType(FbxDataType)");


sipClassTypeDef sipTypeDef_fbx_FbxDataType = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_FbxDataType,
        {0},
        0
    },
    {
        sipNameNr_FbxDataType,
        {0, 0, 1},
        6, methods_FbxDataType,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_FbxDataType,
    -1,
    -1,
    0,
    slots_FbxDataType,
    init_type_FbxDataType,
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
    dealloc_FbxDataType,
    assign_FbxDataType,
    array_FbxDataType,
    copy_FbxDataType,
    release_FbxDataType,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
