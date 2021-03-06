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




class sipFbxTakeInfo : public  ::FbxTakeInfo
{
public:
    sipFbxTakeInfo();
    sipFbxTakeInfo(const  ::FbxTakeInfo&);
    ~sipFbxTakeInfo();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipFbxTakeInfo(const sipFbxTakeInfo &);
    sipFbxTakeInfo &operator = (const sipFbxTakeInfo &);
};

sipFbxTakeInfo::sipFbxTakeInfo():  ::FbxTakeInfo(), sipPySelf(0)
{
}

sipFbxTakeInfo::sipFbxTakeInfo(const  ::FbxTakeInfo& a0):  ::FbxTakeInfo(a0), sipPySelf(0)
{
}

sipFbxTakeInfo::~sipFbxTakeInfo()
{
    sipInstanceDestroyed(sipPySelf);
}


PyDoc_STRVAR(doc_FbxTakeInfo_CopyLayers, "CopyLayers(self, FbxTakeInfo)");

extern "C" {static PyObject *meth_FbxTakeInfo_CopyLayers(PyObject *, PyObject *);}
static PyObject *meth_FbxTakeInfo_CopyLayers(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxTakeInfo* a0;
         ::FbxTakeInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxTakeInfo, &sipCpp, sipType_FbxTakeInfo, &a0))
        {
            sipCpp->CopyLayers(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxTakeInfo, sipName_CopyLayers, doc_FbxTakeInfo_CopyLayers);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxTakeInfo(void *, int);}
static void release_FbxTakeInfo(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipFbxTakeInfo *>(sipCppV);
    else
        delete reinterpret_cast< ::FbxTakeInfo *>(sipCppV);
}


extern "C" {static void assign_FbxTakeInfo(void *, SIP_SSIZE_T, const void *);}
static void assign_FbxTakeInfo(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::FbxTakeInfo *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::FbxTakeInfo *>(sipSrc);
}


extern "C" {static void *array_FbxTakeInfo(SIP_SSIZE_T);}
static void *array_FbxTakeInfo(SIP_SSIZE_T sipNrElem)
{
    return new  ::FbxTakeInfo[sipNrElem];
}


extern "C" {static void *copy_FbxTakeInfo(const void *, SIP_SSIZE_T);}
static void *copy_FbxTakeInfo(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::FbxTakeInfo(reinterpret_cast<const  ::FbxTakeInfo *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_FbxTakeInfo(sipSimpleWrapper *);}
static void dealloc_FbxTakeInfo(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipFbxTakeInfo *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxTakeInfo(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_FbxTakeInfo(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxTakeInfo(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipFbxTakeInfo *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipFbxTakeInfo();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::FbxTakeInfo* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_FbxTakeInfo, &a0))
        {
            sipCpp = new sipFbxTakeInfo(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_FbxTakeInfo[] = {
    {SIP_MLNAME_CAST(sipName_CopyLayers), meth_FbxTakeInfo_CopyLayers, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxTakeInfo_CopyLayers)}
};

static sipEnumMemberDef enummembers_FbxTakeInfo[] = {
    {sipName_eAbsolute, static_cast<int>( ::FbxTakeInfo::eAbsolute), 357},
    {sipName_eRelative, static_cast<int>( ::FbxTakeInfo::eRelative), 357},
};


extern "C" {static PyObject *varget_FbxTakeInfo_mCurrentLayer(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxTakeInfo_mCurrentLayer(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::FbxTakeInfo *sipCpp = reinterpret_cast< ::FbxTakeInfo *>(sipSelf);

    sipVal = sipCpp->mCurrentLayer;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_FbxTakeInfo_mCurrentLayer(void *, PyObject *, PyObject *);}
static int varset_FbxTakeInfo_mCurrentLayer(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::FbxTakeInfo *sipCpp = reinterpret_cast< ::FbxTakeInfo *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->mCurrentLayer = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxTakeInfo_mDescription(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxTakeInfo_mDescription(void *sipSelf, PyObject *, PyObject *)
{
     ::FbxString*sipVal;
     ::FbxTakeInfo *sipCpp = reinterpret_cast< ::FbxTakeInfo *>(sipSelf);

    sipVal = &sipCpp->mDescription;

    return sipConvertFromType(sipVal, sipType_FbxString, NULL);
}


extern "C" {static int varset_FbxTakeInfo_mDescription(void *, PyObject *, PyObject *);}
static int varset_FbxTakeInfo_mDescription(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxString*sipVal;
     ::FbxTakeInfo *sipCpp = reinterpret_cast< ::FbxTakeInfo *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxString *>(sipForceConvertToType(sipPy,sipType_FbxString,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->mDescription = *sipVal;

    sipReleaseType(sipVal, sipType_FbxString, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_FbxTakeInfo_mImportName(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxTakeInfo_mImportName(void *sipSelf, PyObject *, PyObject *)
{
     ::FbxString*sipVal;
     ::FbxTakeInfo *sipCpp = reinterpret_cast< ::FbxTakeInfo *>(sipSelf);

    sipVal = &sipCpp->mImportName;

    return sipConvertFromType(sipVal, sipType_FbxString, NULL);
}


extern "C" {static int varset_FbxTakeInfo_mImportName(void *, PyObject *, PyObject *);}
static int varset_FbxTakeInfo_mImportName(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxString*sipVal;
     ::FbxTakeInfo *sipCpp = reinterpret_cast< ::FbxTakeInfo *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxString *>(sipForceConvertToType(sipPy,sipType_FbxString,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->mImportName = *sipVal;

    sipReleaseType(sipVal, sipType_FbxString, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_FbxTakeInfo_mImportOffset(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxTakeInfo_mImportOffset(void *sipSelf, PyObject *, PyObject *)
{
     ::FbxTime*sipVal;
     ::FbxTakeInfo *sipCpp = reinterpret_cast< ::FbxTakeInfo *>(sipSelf);

    sipVal = &sipCpp->mImportOffset;

    return sipConvertFromType(sipVal, sipType_FbxTime, NULL);
}


extern "C" {static int varset_FbxTakeInfo_mImportOffset(void *, PyObject *, PyObject *);}
static int varset_FbxTakeInfo_mImportOffset(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxTime*sipVal;
     ::FbxTakeInfo *sipCpp = reinterpret_cast< ::FbxTakeInfo *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxTime *>(sipForceConvertToType(sipPy,sipType_FbxTime,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->mImportOffset = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxTakeInfo_mImportOffsetType(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxTakeInfo_mImportOffsetType(void *sipSelf, PyObject *, PyObject *)
{
     ::FbxTakeInfo::EImportOffsetType sipVal;
     ::FbxTakeInfo *sipCpp = reinterpret_cast< ::FbxTakeInfo *>(sipSelf);

    sipVal = sipCpp->mImportOffsetType;

    return sipConvertFromEnum(sipVal, sipType_FbxTakeInfo_EImportOffsetType);
}


extern "C" {static int varset_FbxTakeInfo_mImportOffsetType(void *, PyObject *, PyObject *);}
static int varset_FbxTakeInfo_mImportOffsetType(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxTakeInfo::EImportOffsetType sipVal;
     ::FbxTakeInfo *sipCpp = reinterpret_cast< ::FbxTakeInfo *>(sipSelf);

    sipVal = ( ::FbxTakeInfo::EImportOffsetType)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->mImportOffsetType = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxTakeInfo_mLocalTimeSpan(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxTakeInfo_mLocalTimeSpan(void *sipSelf, PyObject *, PyObject *)
{
     ::FbxTimeSpan*sipVal;
     ::FbxTakeInfo *sipCpp = reinterpret_cast< ::FbxTakeInfo *>(sipSelf);

    sipVal = &sipCpp->mLocalTimeSpan;

    return sipConvertFromType(sipVal, sipType_FbxTimeSpan, NULL);
}


extern "C" {static int varset_FbxTakeInfo_mLocalTimeSpan(void *, PyObject *, PyObject *);}
static int varset_FbxTakeInfo_mLocalTimeSpan(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxTimeSpan*sipVal;
     ::FbxTakeInfo *sipCpp = reinterpret_cast< ::FbxTakeInfo *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxTimeSpan *>(sipForceConvertToType(sipPy,sipType_FbxTimeSpan,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->mLocalTimeSpan = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxTakeInfo_mName(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxTakeInfo_mName(void *sipSelf, PyObject *, PyObject *)
{
     ::FbxString*sipVal;
     ::FbxTakeInfo *sipCpp = reinterpret_cast< ::FbxTakeInfo *>(sipSelf);

    sipVal = &sipCpp->mName;

    return sipConvertFromType(sipVal, sipType_FbxString, NULL);
}


extern "C" {static int varset_FbxTakeInfo_mName(void *, PyObject *, PyObject *);}
static int varset_FbxTakeInfo_mName(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxString*sipVal;
     ::FbxTakeInfo *sipCpp = reinterpret_cast< ::FbxTakeInfo *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxString *>(sipForceConvertToType(sipPy,sipType_FbxString,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->mName = *sipVal;

    sipReleaseType(sipVal, sipType_FbxString, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_FbxTakeInfo_mReferenceTimeSpan(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxTakeInfo_mReferenceTimeSpan(void *sipSelf, PyObject *, PyObject *)
{
     ::FbxTimeSpan*sipVal;
     ::FbxTakeInfo *sipCpp = reinterpret_cast< ::FbxTakeInfo *>(sipSelf);

    sipVal = &sipCpp->mReferenceTimeSpan;

    return sipConvertFromType(sipVal, sipType_FbxTimeSpan, NULL);
}


extern "C" {static int varset_FbxTakeInfo_mReferenceTimeSpan(void *, PyObject *, PyObject *);}
static int varset_FbxTakeInfo_mReferenceTimeSpan(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxTimeSpan*sipVal;
     ::FbxTakeInfo *sipCpp = reinterpret_cast< ::FbxTakeInfo *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxTimeSpan *>(sipForceConvertToType(sipPy,sipType_FbxTimeSpan,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->mReferenceTimeSpan = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxTakeInfo_mSelect(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxTakeInfo_mSelect(void *sipSelf, PyObject *, PyObject *)
{
    bool sipVal;
     ::FbxTakeInfo *sipCpp = reinterpret_cast< ::FbxTakeInfo *>(sipSelf);

    sipVal = sipCpp->mSelect;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_FbxTakeInfo_mSelect(void *, PyObject *, PyObject *);}
static int varset_FbxTakeInfo_mSelect(void *sipSelf, PyObject *sipPy, PyObject *)
{
    bool sipVal;
     ::FbxTakeInfo *sipCpp = reinterpret_cast< ::FbxTakeInfo *>(sipSelf);

    sipVal = (bool)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->mSelect = sipVal;

    return 0;
}

sipVariableDef variables_FbxTakeInfo[] = {
    {InstanceVariable, sipName_mCurrentLayer, (PyMethodDef *)varget_FbxTakeInfo_mCurrentLayer, (PyMethodDef *)varset_FbxTakeInfo_mCurrentLayer, NULL, NULL},
    {InstanceVariable, sipName_mDescription, (PyMethodDef *)varget_FbxTakeInfo_mDescription, (PyMethodDef *)varset_FbxTakeInfo_mDescription, NULL, NULL},
    {InstanceVariable, sipName_mImportName, (PyMethodDef *)varget_FbxTakeInfo_mImportName, (PyMethodDef *)varset_FbxTakeInfo_mImportName, NULL, NULL},
    {InstanceVariable, sipName_mImportOffset, (PyMethodDef *)varget_FbxTakeInfo_mImportOffset, (PyMethodDef *)varset_FbxTakeInfo_mImportOffset, NULL, NULL},
    {InstanceVariable, sipName_mImportOffsetType, (PyMethodDef *)varget_FbxTakeInfo_mImportOffsetType, (PyMethodDef *)varset_FbxTakeInfo_mImportOffsetType, NULL, NULL},
    {InstanceVariable, sipName_mLocalTimeSpan, (PyMethodDef *)varget_FbxTakeInfo_mLocalTimeSpan, (PyMethodDef *)varset_FbxTakeInfo_mLocalTimeSpan, NULL, NULL},
    {InstanceVariable, sipName_mName, (PyMethodDef *)varget_FbxTakeInfo_mName, (PyMethodDef *)varset_FbxTakeInfo_mName, NULL, NULL},
    {InstanceVariable, sipName_mReferenceTimeSpan, (PyMethodDef *)varget_FbxTakeInfo_mReferenceTimeSpan, (PyMethodDef *)varset_FbxTakeInfo_mReferenceTimeSpan, NULL, NULL},
    {InstanceVariable, sipName_mSelect, (PyMethodDef *)varget_FbxTakeInfo_mSelect, (PyMethodDef *)varset_FbxTakeInfo_mSelect, NULL, NULL},
};

PyDoc_STRVAR(doc_FbxTakeInfo, "\1FbxTakeInfo()\n"
    "FbxTakeInfo(FbxTakeInfo)");


sipClassTypeDef sipTypeDef_fbx_FbxTakeInfo = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_FbxTakeInfo,
        {0},
        0
    },
    {
        sipNameNr_FbxTakeInfo,
        {0, 0, 1},
        1, methods_FbxTakeInfo,
        2, enummembers_FbxTakeInfo,
        9, variables_FbxTakeInfo,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_FbxTakeInfo,
    -1,
    -1,
    0,
    0,
    init_type_FbxTakeInfo,
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
    dealloc_FbxTakeInfo,
    assign_FbxTakeInfo,
    array_FbxTakeInfo,
    copy_FbxTakeInfo,
    release_FbxTakeInfo,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
