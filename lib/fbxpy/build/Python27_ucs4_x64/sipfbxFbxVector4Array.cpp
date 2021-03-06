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




PyDoc_STRVAR(doc_FbxVector4Array_GetCount, "GetCount(self) -> int");

extern "C" {static PyObject *meth_FbxVector4Array_GetCount(PyObject *, PyObject *);}
static PyObject *meth_FbxVector4Array_GetCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxVector4Array *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxVector4Array, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetCount();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxVector4Array, sipName_GetCount, doc_FbxVector4Array_GetCount);

    return NULL;
}


PyDoc_STRVAR(doc_FbxVector4Array_InsertAt, "InsertAt(self, int, FbxVector4) -> int");

extern "C" {static PyObject *meth_FbxVector4Array_InsertAt(PyObject *, PyObject *);}
static PyObject *meth_FbxVector4Array_InsertAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
         ::FbxVector4* a1;
         ::FbxVector4Array *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiJ9", &sipSelf, sipType_FbxVector4Array, &sipCpp, &a0, sipType_FbxVector4, &a1))
        {
            int sipRes;

            sipRes = sipCpp->InsertAt(a0,*a1);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxVector4Array, sipName_InsertAt, doc_FbxVector4Array_InsertAt);

    return NULL;
}


PyDoc_STRVAR(doc_FbxVector4Array_Add, "Add(self, FbxVector4) -> int");

extern "C" {static PyObject *meth_FbxVector4Array_Add(PyObject *, PyObject *);}
static PyObject *meth_FbxVector4Array_Add(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxVector4* a0;
         ::FbxVector4Array *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxVector4Array, &sipCpp, sipType_FbxVector4, &a0))
        {
            int sipRes;

            sipRes = sipCpp->Add(*a0);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxVector4Array, sipName_Add, doc_FbxVector4Array_Add);

    return NULL;
}


PyDoc_STRVAR(doc_FbxVector4Array_AddUnique, "AddUnique(self, FbxVector4) -> int");

extern "C" {static PyObject *meth_FbxVector4Array_AddUnique(PyObject *, PyObject *);}
static PyObject *meth_FbxVector4Array_AddUnique(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxVector4* a0;
         ::FbxVector4Array *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxVector4Array, &sipCpp, sipType_FbxVector4, &a0))
        {
            int sipRes;

            sipRes = sipCpp->AddUnique(*a0);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxVector4Array, sipName_AddUnique, doc_FbxVector4Array_AddUnique);

    return NULL;
}


PyDoc_STRVAR(doc_FbxVector4Array_AddArray, "AddArray(self, FbxVector4Array)");

extern "C" {static PyObject *meth_FbxVector4Array_AddArray(PyObject *, PyObject *);}
static PyObject *meth_FbxVector4Array_AddArray(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxVector4Array* a0;
         ::FbxVector4Array *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxVector4Array, &sipCpp, sipType_FbxVector4Array, &a0))
        {
            sipCpp->AddArray(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxVector4Array, sipName_AddArray, doc_FbxVector4Array_AddArray);

    return NULL;
}


PyDoc_STRVAR(doc_FbxVector4Array_AddArrayNoDuplicate, "AddArrayNoDuplicate(self, FbxVector4Array)");

extern "C" {static PyObject *meth_FbxVector4Array_AddArrayNoDuplicate(PyObject *, PyObject *);}
static PyObject *meth_FbxVector4Array_AddArrayNoDuplicate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxVector4Array* a0;
         ::FbxVector4Array *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxVector4Array, &sipCpp, sipType_FbxVector4Array, &a0))
        {
            sipCpp->AddArrayNoDuplicate(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxVector4Array, sipName_AddArrayNoDuplicate, doc_FbxVector4Array_AddArrayNoDuplicate);

    return NULL;
}


PyDoc_STRVAR(doc_FbxVector4Array_SetAt, "SetAt(self, int, FbxVector4)");

extern "C" {static PyObject *meth_FbxVector4Array_SetAt(PyObject *, PyObject *);}
static PyObject *meth_FbxVector4Array_SetAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
         ::FbxVector4* a1;
         ::FbxVector4Array *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiJ9", &sipSelf, sipType_FbxVector4Array, &sipCpp, &a0, sipType_FbxVector4, &a1))
        {
            sipCpp->SetAt(a0,*a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxVector4Array, sipName_SetAt, doc_FbxVector4Array_SetAt);

    return NULL;
}


PyDoc_STRVAR(doc_FbxVector4Array_SetLast, "SetLast(self, FbxVector4)");

extern "C" {static PyObject *meth_FbxVector4Array_SetLast(PyObject *, PyObject *);}
static PyObject *meth_FbxVector4Array_SetLast(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxVector4* a0;
         ::FbxVector4Array *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxVector4Array, &sipCpp, sipType_FbxVector4, &a0))
        {
            sipCpp->SetLast(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxVector4Array, sipName_SetLast, doc_FbxVector4Array_SetLast);

    return NULL;
}


PyDoc_STRVAR(doc_FbxVector4Array_GetAt, "GetAt(self, int) -> FbxVector4");

extern "C" {static PyObject *meth_FbxVector4Array_GetAt(PyObject *, PyObject *);}
static PyObject *meth_FbxVector4Array_GetAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const  ::FbxVector4Array *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxVector4Array, &sipCpp, &a0))
        {
             ::FbxVector4*sipRes;

            sipRes = new  ::FbxVector4(sipCpp->GetAt(a0));

            return sipConvertFromNewType(sipRes,sipType_FbxVector4,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxVector4Array, sipName_GetAt, doc_FbxVector4Array_GetAt);

    return NULL;
}


PyDoc_STRVAR(doc_FbxVector4Array_GetFirst, "GetFirst(self) -> FbxVector4");

extern "C" {static PyObject *meth_FbxVector4Array_GetFirst(PyObject *, PyObject *);}
static PyObject *meth_FbxVector4Array_GetFirst(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxVector4Array *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxVector4Array, &sipCpp))
        {
             ::FbxVector4*sipRes;

            sipRes = new  ::FbxVector4(sipCpp->GetFirst());

            return sipConvertFromNewType(sipRes,sipType_FbxVector4,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxVector4Array, sipName_GetFirst, doc_FbxVector4Array_GetFirst);

    return NULL;
}


PyDoc_STRVAR(doc_FbxVector4Array_GetLast, "GetLast(self) -> FbxVector4");

extern "C" {static PyObject *meth_FbxVector4Array_GetLast(PyObject *, PyObject *);}
static PyObject *meth_FbxVector4Array_GetLast(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxVector4Array *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxVector4Array, &sipCpp))
        {
             ::FbxVector4*sipRes;

            sipRes = new  ::FbxVector4(sipCpp->GetLast());

            return sipConvertFromNewType(sipRes,sipType_FbxVector4,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxVector4Array, sipName_GetLast, doc_FbxVector4Array_GetLast);

    return NULL;
}


PyDoc_STRVAR(doc_FbxVector4Array_RemoveAt, "RemoveAt(self, int) -> FbxVector4");

extern "C" {static PyObject *meth_FbxVector4Array_RemoveAt(PyObject *, PyObject *);}
static PyObject *meth_FbxVector4Array_RemoveAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
         ::FbxVector4Array *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxVector4Array, &sipCpp, &a0))
        {
             ::FbxVector4*sipRes;

            sipRes = new  ::FbxVector4(sipCpp->RemoveAt(a0));

            return sipConvertFromNewType(sipRes,sipType_FbxVector4,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxVector4Array, sipName_RemoveAt, doc_FbxVector4Array_RemoveAt);

    return NULL;
}


PyDoc_STRVAR(doc_FbxVector4Array_RemoveLast, "RemoveLast(self) -> FbxVector4");

extern "C" {static PyObject *meth_FbxVector4Array_RemoveLast(PyObject *, PyObject *);}
static PyObject *meth_FbxVector4Array_RemoveLast(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxVector4Array *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxVector4Array, &sipCpp))
        {
             ::FbxVector4*sipRes;

            sipRes = new  ::FbxVector4(sipCpp->RemoveLast());

            return sipConvertFromNewType(sipRes,sipType_FbxVector4,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxVector4Array, sipName_RemoveLast, doc_FbxVector4Array_RemoveLast);

    return NULL;
}


PyDoc_STRVAR(doc_FbxVector4Array_RemoveIt, "RemoveIt(self, FbxVector4) -> bool");

extern "C" {static PyObject *meth_FbxVector4Array_RemoveIt(PyObject *, PyObject *);}
static PyObject *meth_FbxVector4Array_RemoveIt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxVector4* a0;
         ::FbxVector4Array *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxVector4Array, &sipCpp, sipType_FbxVector4, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->RemoveIt(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxVector4Array, sipName_RemoveIt, doc_FbxVector4Array_RemoveIt);

    return NULL;
}


PyDoc_STRVAR(doc_FbxVector4Array_RemoveArray, "RemoveArray(self, FbxVector4Array)");

extern "C" {static PyObject *meth_FbxVector4Array_RemoveArray(PyObject *, PyObject *);}
static PyObject *meth_FbxVector4Array_RemoveArray(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxVector4Array* a0;
         ::FbxVector4Array *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxVector4Array, &sipCpp, sipType_FbxVector4Array, &a0))
        {
            sipCpp->RemoveArray(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxVector4Array, sipName_RemoveArray, doc_FbxVector4Array_RemoveArray);

    return NULL;
}


PyDoc_STRVAR(doc_FbxVector4Array_Find, "Find(self, FbxVector4) -> int");

extern "C" {static PyObject *meth_FbxVector4Array_Find(PyObject *, PyObject *);}
static PyObject *meth_FbxVector4Array_Find(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxVector4* a0;
        const  ::FbxVector4Array *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxVector4Array, &sipCpp, sipType_FbxVector4, &a0))
        {
            int sipRes;

            sipRes = sipCpp->Find(*a0);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxVector4Array, sipName_Find, doc_FbxVector4Array_Find);

    return NULL;
}


extern "C" {static PyObject *slot_FbxVector4Array___getitem__(PyObject *,PyObject *);}
static PyObject *slot_FbxVector4Array___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxVector4Array *sipCpp = reinterpret_cast< ::FbxVector4Array *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxVector4Array));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
             ::FbxVector4*sipRes = 0;
            int sipIsErr = 0;

#line 33 "/var/www/html/lib/fbxpy/sip/fbxarray.sip"
        if (a0 < 0 || a0 >= sipCpp->GetCount())
        {
            PyErr_Format(PyExc_IndexError, "sequence index out of range");
            sipIsErr = 1;
        }
        else
        {
            fbxArrayElementCopy(&sipRes, (FbxVector4*)NULL, sipCpp, a0);
        }
#line 529 "/var/www/html/lib/fbxpy/build/Python27_ucs4_x64/sipfbxFbxVector4Array.cpp"

            if (sipIsErr)
                return 0;

            return sipConvertFromNewType(sipRes,sipType_FbxVector4,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxVector4Array, sipName___getitem__, NULL);

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxVector4Array(void *, int);}
static void release_FbxVector4Array(void *sipCppV, int)
{
    delete reinterpret_cast< ::FbxVector4Array *>(sipCppV);
}


extern "C" {static void assign_FbxVector4Array(void *, SIP_SSIZE_T, const void *);}
static void assign_FbxVector4Array(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::FbxVector4Array *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::FbxVector4Array *>(sipSrc);
}


extern "C" {static void *array_FbxVector4Array(SIP_SSIZE_T);}
static void *array_FbxVector4Array(SIP_SSIZE_T sipNrElem)
{
    return new  ::FbxVector4Array[sipNrElem];
}


extern "C" {static void *copy_FbxVector4Array(const void *, SIP_SSIZE_T);}
static void *copy_FbxVector4Array(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::FbxVector4Array(reinterpret_cast<const  ::FbxVector4Array *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_FbxVector4Array(sipSimpleWrapper *);}
static void dealloc_FbxVector4Array(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxVector4Array(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_FbxVector4Array(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxVector4Array(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::FbxVector4Array *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::FbxVector4Array();

            return sipCpp;
        }
    }

    {
        const  ::FbxVector4Array* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_FbxVector4Array, &a0))
        {
            sipCpp = new  ::FbxVector4Array(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxVector4Array[] = {
    {(void *)slot_FbxVector4Array___getitem__, getitem_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxVector4Array[] = {
    {SIP_MLNAME_CAST(sipName_Add), meth_FbxVector4Array_Add, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxVector4Array_Add)},
    {SIP_MLNAME_CAST(sipName_AddArray), meth_FbxVector4Array_AddArray, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxVector4Array_AddArray)},
    {SIP_MLNAME_CAST(sipName_AddArrayNoDuplicate), meth_FbxVector4Array_AddArrayNoDuplicate, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxVector4Array_AddArrayNoDuplicate)},
    {SIP_MLNAME_CAST(sipName_AddUnique), meth_FbxVector4Array_AddUnique, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxVector4Array_AddUnique)},
    {SIP_MLNAME_CAST(sipName_Find), meth_FbxVector4Array_Find, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxVector4Array_Find)},
    {SIP_MLNAME_CAST(sipName_GetAt), meth_FbxVector4Array_GetAt, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxVector4Array_GetAt)},
    {SIP_MLNAME_CAST(sipName_GetCount), meth_FbxVector4Array_GetCount, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxVector4Array_GetCount)},
    {SIP_MLNAME_CAST(sipName_GetFirst), meth_FbxVector4Array_GetFirst, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxVector4Array_GetFirst)},
    {SIP_MLNAME_CAST(sipName_GetLast), meth_FbxVector4Array_GetLast, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxVector4Array_GetLast)},
    {SIP_MLNAME_CAST(sipName_InsertAt), meth_FbxVector4Array_InsertAt, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxVector4Array_InsertAt)},
    {SIP_MLNAME_CAST(sipName_RemoveArray), meth_FbxVector4Array_RemoveArray, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxVector4Array_RemoveArray)},
    {SIP_MLNAME_CAST(sipName_RemoveAt), meth_FbxVector4Array_RemoveAt, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxVector4Array_RemoveAt)},
    {SIP_MLNAME_CAST(sipName_RemoveIt), meth_FbxVector4Array_RemoveIt, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxVector4Array_RemoveIt)},
    {SIP_MLNAME_CAST(sipName_RemoveLast), meth_FbxVector4Array_RemoveLast, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxVector4Array_RemoveLast)},
    {SIP_MLNAME_CAST(sipName_SetAt), meth_FbxVector4Array_SetAt, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxVector4Array_SetAt)},
    {SIP_MLNAME_CAST(sipName_SetLast), meth_FbxVector4Array_SetLast, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxVector4Array_SetLast)}
};

PyDoc_STRVAR(doc_FbxVector4Array, "\1FbxVector4Array()\n"
    "FbxVector4Array(FbxVector4Array)");


sipClassTypeDef sipTypeDef_fbx_FbxVector4Array = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_FbxVector4Array,
        {0},
        0
    },
    {
        sipNameNr_FbxVector4Array,
        {0, 0, 1},
        16, methods_FbxVector4Array,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_FbxVector4Array,
    -1,
    -1,
    0,
    slots_FbxVector4Array,
    init_type_FbxVector4Array,
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
    dealloc_FbxVector4Array,
    assign_FbxVector4Array,
    array_FbxVector4Array,
    copy_FbxVector4Array,
    release_FbxVector4Array,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
