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




PyDoc_STRVAR(doc_FbxPropertyELook_Get, "Get(self) -> FbxMarker.ELook");

extern "C" {static PyObject *meth_FbxPropertyELook_Get(PyObject *, PyObject *);}
static PyObject *meth_FbxPropertyELook_Get(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxPropertyELook *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxPropertyELook, &sipCpp))
        {
             ::FbxMarker::ELook sipRes;

            sipRes = sipCpp->Get();

            return sipConvertFromEnum(sipRes,sipType_FbxMarker_ELook);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxPropertyELook, sipName_Get, doc_FbxPropertyELook_Get);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_FbxPropertyELook(void *, const sipTypeDef *);}
static void *cast_FbxPropertyELook(void *sipCppV, const sipTypeDef *targetType)
{
     ::FbxPropertyELook *sipCpp = reinterpret_cast< ::FbxPropertyELook *>(sipCppV);

    if (targetType == sipType_FbxProperty)
        return static_cast< ::FbxProperty *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxPropertyELook(void *, int);}
static void release_FbxPropertyELook(void *sipCppV, int)
{
    delete reinterpret_cast< ::FbxPropertyELook *>(sipCppV);
}


extern "C" {static void assign_FbxPropertyELook(void *, SIP_SSIZE_T, const void *);}
static void assign_FbxPropertyELook(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::FbxPropertyELook *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::FbxPropertyELook *>(sipSrc);
}


extern "C" {static void *array_FbxPropertyELook(SIP_SSIZE_T);}
static void *array_FbxPropertyELook(SIP_SSIZE_T sipNrElem)
{
    return new  ::FbxPropertyELook[sipNrElem];
}


extern "C" {static void *copy_FbxPropertyELook(const void *, SIP_SSIZE_T);}
static void *copy_FbxPropertyELook(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::FbxPropertyELook(reinterpret_cast<const  ::FbxPropertyELook *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_FbxPropertyELook(sipSimpleWrapper *);}
static void dealloc_FbxPropertyELook(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxPropertyELook(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_FbxPropertyELook(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxPropertyELook(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::FbxPropertyELook *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::FbxPropertyELook();

            return sipCpp;
        }
    }

    {
        const  ::FbxProperty* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_FbxProperty, &a0))
        {
            sipCpp = new  ::FbxPropertyELook(*a0);

            return sipCpp;
        }
    }

    {
        const  ::FbxPropertyELook* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_FbxPropertyELook, &a0))
        {
            sipCpp = new  ::FbxPropertyELook(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_FbxPropertyELook[] = {{258, 255, 1}};


static PyMethodDef methods_FbxPropertyELook[] = {
    {SIP_MLNAME_CAST(sipName_Get), meth_FbxPropertyELook_Get, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxPropertyELook_Get)}
};

PyDoc_STRVAR(doc_FbxPropertyELook, "\1FbxPropertyELook()\n"
    "FbxPropertyELook(FbxProperty)\n"
    "FbxPropertyELook(FbxPropertyELook)");


sipClassTypeDef sipTypeDef_fbx_FbxPropertyELook = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_FbxPropertyELook,
        {0},
        0
    },
    {
        sipNameNr_FbxPropertyELook,
        {0, 0, 1},
        1, methods_FbxPropertyELook,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_FbxPropertyELook,
    -1,
    -1,
    supers_FbxPropertyELook,
    0,
    init_type_FbxPropertyELook,
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
    dealloc_FbxPropertyELook,
    assign_FbxPropertyELook,
    array_FbxPropertyELook,
    copy_FbxPropertyELook,
    release_FbxPropertyELook,
    cast_FbxPropertyELook,
    0,
    0,
    0,
    0,
    0,
    0
};
