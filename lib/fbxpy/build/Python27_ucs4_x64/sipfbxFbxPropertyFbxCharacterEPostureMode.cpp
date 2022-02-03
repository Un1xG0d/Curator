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




PyDoc_STRVAR(doc_FbxPropertyFbxCharacterEPostureMode_Get, "Get(self) -> FbxCharacter.EPostureMode");

extern "C" {static PyObject *meth_FbxPropertyFbxCharacterEPostureMode_Get(PyObject *, PyObject *);}
static PyObject *meth_FbxPropertyFbxCharacterEPostureMode_Get(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxPropertyFbxCharacterEPostureMode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxPropertyFbxCharacterEPostureMode, &sipCpp))
        {
             ::FbxCharacter::EPostureMode sipRes;

            sipRes = sipCpp->Get();

            return sipConvertFromEnum(sipRes,sipType_FbxCharacter_EPostureMode);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxPropertyFbxCharacterEPostureMode, sipName_Get, doc_FbxPropertyFbxCharacterEPostureMode_Get);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_FbxPropertyFbxCharacterEPostureMode(void *, const sipTypeDef *);}
static void *cast_FbxPropertyFbxCharacterEPostureMode(void *sipCppV, const sipTypeDef *targetType)
{
     ::FbxPropertyFbxCharacterEPostureMode *sipCpp = reinterpret_cast< ::FbxPropertyFbxCharacterEPostureMode *>(sipCppV);

    if (targetType == sipType_FbxProperty)
        return static_cast< ::FbxProperty *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxPropertyFbxCharacterEPostureMode(void *, int);}
static void release_FbxPropertyFbxCharacterEPostureMode(void *sipCppV, int)
{
    delete reinterpret_cast< ::FbxPropertyFbxCharacterEPostureMode *>(sipCppV);
}


extern "C" {static void assign_FbxPropertyFbxCharacterEPostureMode(void *, SIP_SSIZE_T, const void *);}
static void assign_FbxPropertyFbxCharacterEPostureMode(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::FbxPropertyFbxCharacterEPostureMode *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::FbxPropertyFbxCharacterEPostureMode *>(sipSrc);
}


extern "C" {static void *array_FbxPropertyFbxCharacterEPostureMode(SIP_SSIZE_T);}
static void *array_FbxPropertyFbxCharacterEPostureMode(SIP_SSIZE_T sipNrElem)
{
    return new  ::FbxPropertyFbxCharacterEPostureMode[sipNrElem];
}


extern "C" {static void *copy_FbxPropertyFbxCharacterEPostureMode(const void *, SIP_SSIZE_T);}
static void *copy_FbxPropertyFbxCharacterEPostureMode(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::FbxPropertyFbxCharacterEPostureMode(reinterpret_cast<const  ::FbxPropertyFbxCharacterEPostureMode *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_FbxPropertyFbxCharacterEPostureMode(sipSimpleWrapper *);}
static void dealloc_FbxPropertyFbxCharacterEPostureMode(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxPropertyFbxCharacterEPostureMode(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_FbxPropertyFbxCharacterEPostureMode(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxPropertyFbxCharacterEPostureMode(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::FbxPropertyFbxCharacterEPostureMode *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::FbxPropertyFbxCharacterEPostureMode();

            return sipCpp;
        }
    }

    {
        const  ::FbxProperty* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_FbxProperty, &a0))
        {
            sipCpp = new  ::FbxPropertyFbxCharacterEPostureMode(*a0);

            return sipCpp;
        }
    }

    {
        const  ::FbxPropertyFbxCharacterEPostureMode* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_FbxPropertyFbxCharacterEPostureMode, &a0))
        {
            sipCpp = new  ::FbxPropertyFbxCharacterEPostureMode(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_FbxPropertyFbxCharacterEPostureMode[] = {{258, 255, 1}};


static PyMethodDef methods_FbxPropertyFbxCharacterEPostureMode[] = {
    {SIP_MLNAME_CAST(sipName_Get), meth_FbxPropertyFbxCharacterEPostureMode_Get, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxPropertyFbxCharacterEPostureMode_Get)}
};

PyDoc_STRVAR(doc_FbxPropertyFbxCharacterEPostureMode, "\1FbxPropertyFbxCharacterEPostureMode()\n"
    "FbxPropertyFbxCharacterEPostureMode(FbxProperty)\n"
    "FbxPropertyFbxCharacterEPostureMode(FbxPropertyFbxCharacterEPostureMode)");


sipClassTypeDef sipTypeDef_fbx_FbxPropertyFbxCharacterEPostureMode = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_FbxPropertyFbxCharacterEPostureMode,
        {0},
        0
    },
    {
        sipNameNr_FbxPropertyFbxCharacterEPostureMode,
        {0, 0, 1},
        1, methods_FbxPropertyFbxCharacterEPostureMode,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_FbxPropertyFbxCharacterEPostureMode,
    -1,
    -1,
    supers_FbxPropertyFbxCharacterEPostureMode,
    0,
    init_type_FbxPropertyFbxCharacterEPostureMode,
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
    dealloc_FbxPropertyFbxCharacterEPostureMode,
    assign_FbxPropertyFbxCharacterEPostureMode,
    array_FbxPropertyFbxCharacterEPostureMode,
    copy_FbxPropertyFbxCharacterEPostureMode,
    release_FbxPropertyFbxCharacterEPostureMode,
    cast_FbxPropertyFbxCharacterEPostureMode,
    0,
    0,
    0,
    0,
    0,
    0
};
