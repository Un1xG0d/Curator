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




PyDoc_STRVAR(doc_FbxClassId_Destroy, "Destroy(self)");

extern "C" {static PyObject *meth_FbxClassId_Destroy(PyObject *, PyObject *);}
static PyObject *meth_FbxClassId_Destroy(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxClassId *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxClassId, &sipCpp))
        {
            sipCpp->Destroy();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxClassId, sipName_Destroy, doc_FbxClassId_Destroy);

    return NULL;
}


PyDoc_STRVAR(doc_FbxClassId_GetName, "GetName(self) -> str");

extern "C" {static PyObject *meth_FbxClassId_GetName(PyObject *, PyObject *);}
static PyObject *meth_FbxClassId_GetName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxClassId *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxClassId, &sipCpp))
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
    sipNoMethod(sipParseErr, sipName_FbxClassId, sipName_GetName, doc_FbxClassId_GetName);

    return NULL;
}


PyDoc_STRVAR(doc_FbxClassId_GetParent, "GetParent(self) -> FbxClassId");

extern "C" {static PyObject *meth_FbxClassId_GetParent(PyObject *, PyObject *);}
static PyObject *meth_FbxClassId_GetParent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxClassId *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxClassId, &sipCpp))
        {
             ::FbxClassId*sipRes;

            sipRes = new  ::FbxClassId(sipCpp->GetParent());

            return sipConvertFromNewType(sipRes,sipType_FbxClassId,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxClassId, sipName_GetParent, doc_FbxClassId_GetParent);

    return NULL;
}


PyDoc_STRVAR(doc_FbxClassId_Create, "Create(self, FbxManager, str, FbxObject) -> FbxObject");

extern "C" {static PyObject *meth_FbxClassId_Create(PyObject *, PyObject *);}
static PyObject *meth_FbxClassId_Create(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxManager* a0;
        const char* a1;
        PyObject *a1Keep;
        const  ::FbxObject* a2;
         ::FbxClassId *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9A8J8", &sipSelf, sipType_FbxClassId, &sipCpp, sipType_FbxManager, &a0, &a1Keep, &a1, sipType_FbxObject, &a2))
        {
             ::FbxObject*sipRes;

            sipRes = sipCpp->Create(*a0,a1,a2);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxClassId, sipName_Create, doc_FbxClassId_Create);

    return NULL;
}


PyDoc_STRVAR(doc_FbxClassId_Is, "Is(self, FbxClassId) -> bool");

extern "C" {static PyObject *meth_FbxClassId_Is(PyObject *, PyObject *);}
static PyObject *meth_FbxClassId_Is(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxClassId* a0;
        const  ::FbxClassId *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxClassId, &sipCpp, sipType_FbxClassId, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->Is(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxClassId, sipName_Is, doc_FbxClassId_Is);

    return NULL;
}


PyDoc_STRVAR(doc_FbxClassId_GetFbxFileTypeName, "GetFbxFileTypeName(self, bool = False) -> str");

extern "C" {static PyObject *meth_FbxClassId_GetFbxFileTypeName(PyObject *, PyObject *);}
static PyObject *meth_FbxClassId_GetFbxFileTypeName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0 = 0;
        const  ::FbxClassId *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B|b", &sipSelf, sipType_FbxClassId, &sipCpp, &a0))
        {
            const char*sipRes;

            sipRes = sipCpp->GetFbxFileTypeName(a0);

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
    sipNoMethod(sipParseErr, sipName_FbxClassId, sipName_GetFbxFileTypeName, doc_FbxClassId_GetFbxFileTypeName);

    return NULL;
}


PyDoc_STRVAR(doc_FbxClassId_GetFbxFileSubTypeName, "GetFbxFileSubTypeName(self) -> str");

extern "C" {static PyObject *meth_FbxClassId_GetFbxFileSubTypeName(PyObject *, PyObject *);}
static PyObject *meth_FbxClassId_GetFbxFileSubTypeName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxClassId *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxClassId, &sipCpp))
        {
            const char*sipRes;

            sipRes = sipCpp->GetFbxFileSubTypeName();

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
    sipNoMethod(sipParseErr, sipName_FbxClassId, sipName_GetFbxFileSubTypeName, doc_FbxClassId_GetFbxFileSubTypeName);

    return NULL;
}


PyDoc_STRVAR(doc_FbxClassId_IsValid, "IsValid(self) -> bool");

extern "C" {static PyObject *meth_FbxClassId_IsValid(PyObject *, PyObject *);}
static PyObject *meth_FbxClassId_IsValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxClassId *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxClassId, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->IsValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxClassId, sipName_IsValid, doc_FbxClassId_IsValid);

    return NULL;
}


PyDoc_STRVAR(doc_FbxClassId_SetObjectTypePrefix, "SetObjectTypePrefix(self, str)");

extern "C" {static PyObject *meth_FbxClassId_SetObjectTypePrefix(PyObject *, PyObject *);}
static PyObject *meth_FbxClassId_SetObjectTypePrefix(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const char* a0;
        PyObject *a0Keep;
         ::FbxClassId *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BA8", &sipSelf, sipType_FbxClassId, &sipCpp, &a0Keep, &a0))
        {
            sipCpp->SetObjectTypePrefix(a0);
            Py_DECREF(a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxClassId, sipName_SetObjectTypePrefix, doc_FbxClassId_SetObjectTypePrefix);

    return NULL;
}


PyDoc_STRVAR(doc_FbxClassId_GetObjectTypePrefix, "GetObjectTypePrefix(self) -> str");

extern "C" {static PyObject *meth_FbxClassId_GetObjectTypePrefix(PyObject *, PyObject *);}
static PyObject *meth_FbxClassId_GetObjectTypePrefix(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxClassId *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxClassId, &sipCpp))
        {
            const char*sipRes;

            sipRes = sipCpp->GetObjectTypePrefix();

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
    sipNoMethod(sipParseErr, sipName_FbxClassId, sipName_GetObjectTypePrefix, doc_FbxClassId_GetObjectTypePrefix);

    return NULL;
}


PyDoc_STRVAR(doc_FbxClassId_ClassInstanceIncRef, "ClassInstanceIncRef(self) -> int");

extern "C" {static PyObject *meth_FbxClassId_ClassInstanceIncRef(PyObject *, PyObject *);}
static PyObject *meth_FbxClassId_ClassInstanceIncRef(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxClassId *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxClassId, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->ClassInstanceIncRef();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxClassId, sipName_ClassInstanceIncRef, doc_FbxClassId_ClassInstanceIncRef);

    return NULL;
}


PyDoc_STRVAR(doc_FbxClassId_ClassInstanceDecRef, "ClassInstanceDecRef(self) -> int");

extern "C" {static PyObject *meth_FbxClassId_ClassInstanceDecRef(PyObject *, PyObject *);}
static PyObject *meth_FbxClassId_ClassInstanceDecRef(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxClassId *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxClassId, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->ClassInstanceDecRef();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxClassId, sipName_ClassInstanceDecRef, doc_FbxClassId_ClassInstanceDecRef);

    return NULL;
}


PyDoc_STRVAR(doc_FbxClassId_GetInstanceRef, "GetInstanceRef(self) -> int");

extern "C" {static PyObject *meth_FbxClassId_GetInstanceRef(PyObject *, PyObject *);}
static PyObject *meth_FbxClassId_GetInstanceRef(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxClassId *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxClassId, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetInstanceRef();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxClassId, sipName_GetInstanceRef, doc_FbxClassId_GetInstanceRef);

    return NULL;
}


extern "C" {static PyObject *slot_FbxClassId___ne__(PyObject *,PyObject *);}
static PyObject *slot_FbxClassId___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxClassId *sipCpp = reinterpret_cast< ::FbxClassId *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxClassId));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::FbxClassId* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxClassId, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxClassId::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, ne_slot, sipType_FbxClassId, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_FbxClassId___eq__(PyObject *,PyObject *);}
static PyObject *slot_FbxClassId___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxClassId *sipCpp = reinterpret_cast< ::FbxClassId *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxClassId));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::FbxClassId* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxClassId, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxClassId::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, eq_slot, sipType_FbxClassId, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxClassId(void *, int);}
static void release_FbxClassId(void *sipCppV, int)
{
    delete reinterpret_cast< ::FbxClassId *>(sipCppV);
}


extern "C" {static void assign_FbxClassId(void *, SIP_SSIZE_T, const void *);}
static void assign_FbxClassId(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::FbxClassId *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::FbxClassId *>(sipSrc);
}


extern "C" {static void *array_FbxClassId(SIP_SSIZE_T);}
static void *array_FbxClassId(SIP_SSIZE_T sipNrElem)
{
    return new  ::FbxClassId[sipNrElem];
}


extern "C" {static void *copy_FbxClassId(const void *, SIP_SSIZE_T);}
static void *copy_FbxClassId(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::FbxClassId(reinterpret_cast<const  ::FbxClassId *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_FbxClassId(sipSimpleWrapper *);}
static void dealloc_FbxClassId(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxClassId(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_FbxClassId(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxClassId(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::FbxClassId *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::FbxClassId();

            return sipCpp;
        }
    }

    {
        const  ::FbxClassId* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_FbxClassId, &a0))
        {
            sipCpp = new  ::FbxClassId(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxClassId[] = {
    {(void *)slot_FbxClassId___ne__, ne_slot},
    {(void *)slot_FbxClassId___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxClassId[] = {
    {SIP_MLNAME_CAST(sipName_ClassInstanceDecRef), meth_FbxClassId_ClassInstanceDecRef, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxClassId_ClassInstanceDecRef)},
    {SIP_MLNAME_CAST(sipName_ClassInstanceIncRef), meth_FbxClassId_ClassInstanceIncRef, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxClassId_ClassInstanceIncRef)},
    {SIP_MLNAME_CAST(sipName_Create), meth_FbxClassId_Create, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxClassId_Create)},
    {SIP_MLNAME_CAST(sipName_Destroy), meth_FbxClassId_Destroy, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxClassId_Destroy)},
    {SIP_MLNAME_CAST(sipName_GetFbxFileSubTypeName), meth_FbxClassId_GetFbxFileSubTypeName, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxClassId_GetFbxFileSubTypeName)},
    {SIP_MLNAME_CAST(sipName_GetFbxFileTypeName), meth_FbxClassId_GetFbxFileTypeName, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxClassId_GetFbxFileTypeName)},
    {SIP_MLNAME_CAST(sipName_GetInstanceRef), meth_FbxClassId_GetInstanceRef, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxClassId_GetInstanceRef)},
    {SIP_MLNAME_CAST(sipName_GetName), meth_FbxClassId_GetName, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxClassId_GetName)},
    {SIP_MLNAME_CAST(sipName_GetObjectTypePrefix), meth_FbxClassId_GetObjectTypePrefix, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxClassId_GetObjectTypePrefix)},
    {SIP_MLNAME_CAST(sipName_GetParent), meth_FbxClassId_GetParent, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxClassId_GetParent)},
    {SIP_MLNAME_CAST(sipName_Is), meth_FbxClassId_Is, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxClassId_Is)},
    {SIP_MLNAME_CAST(sipName_IsValid), meth_FbxClassId_IsValid, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxClassId_IsValid)},
    {SIP_MLNAME_CAST(sipName_SetObjectTypePrefix), meth_FbxClassId_SetObjectTypePrefix, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxClassId_SetObjectTypePrefix)}
};

PyDoc_STRVAR(doc_FbxClassId, "\1FbxClassId()\n"
    "FbxClassId(FbxClassId)");


sipClassTypeDef sipTypeDef_fbx_FbxClassId = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_FbxClassId,
        {0},
        0
    },
    {
        sipNameNr_FbxClassId,
        {0, 0, 1},
        13, methods_FbxClassId,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_FbxClassId,
    -1,
    -1,
    0,
    slots_FbxClassId,
    init_type_FbxClassId,
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
    dealloc_FbxClassId,
    assign_FbxClassId,
    array_FbxClassId,
    copy_FbxClassId,
    release_FbxClassId,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
