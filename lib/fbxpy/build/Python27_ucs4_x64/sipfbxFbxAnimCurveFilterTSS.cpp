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


#line 4 "/var/www/html/lib/fbxpy/sip/fbxstatus.sip"
#include <fbxsdk.h>
#line 44 "/var/www/html/lib/fbxpy/build/Python27_ucs4_x64/sipfbxFbxAnimCurveFilterTSS.cpp"


class sipFbxAnimCurveFilterTSS : public  ::FbxAnimCurveFilterTSS
{
public:
    sipFbxAnimCurveFilterTSS();
    sipFbxAnimCurveFilterTSS(const  ::FbxAnimCurveFilterTSS&);
    virtual ~sipFbxAnimCurveFilterTSS();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    const char* GetName() const;
    bool NeedApply( ::FbxAnimStack*, ::FbxStatus*);
    bool NeedApply( ::FbxObject*, ::FbxAnimStack*, ::FbxStatus*);
    bool NeedApply( ::FbxAnimCurveNode&, ::FbxStatus*);
    bool NeedApply( ::FbxAnimCurve**,int, ::FbxStatus*);
    bool NeedApply( ::FbxAnimCurve&, ::FbxStatus*);
    bool Apply( ::FbxAnimStack*, ::FbxStatus*);
    bool Apply( ::FbxObject*, ::FbxAnimStack*, ::FbxStatus*);
    bool Apply( ::FbxAnimCurveNode&, ::FbxStatus*);
    bool Apply( ::FbxAnimCurve**,int, ::FbxStatus*);
    bool Apply( ::FbxAnimCurve&, ::FbxStatus*);
    void Reset();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipFbxAnimCurveFilterTSS(const sipFbxAnimCurveFilterTSS &);
    sipFbxAnimCurveFilterTSS &operator = (const sipFbxAnimCurveFilterTSS &);

    char sipPyMethods[12];
};

sipFbxAnimCurveFilterTSS::sipFbxAnimCurveFilterTSS():  ::FbxAnimCurveFilterTSS(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipFbxAnimCurveFilterTSS::sipFbxAnimCurveFilterTSS(const  ::FbxAnimCurveFilterTSS& a0):  ::FbxAnimCurveFilterTSS(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipFbxAnimCurveFilterTSS::~sipFbxAnimCurveFilterTSS()
{
    sipInstanceDestroyed(sipPySelf);
}

const char* sipFbxAnimCurveFilterTSS::GetName() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_GetName);

    if (!sipMeth)
        return  ::FbxAnimCurveFilterTSS::GetName();

    extern const char* sipVH_fbx_27(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_fbx_27(sipGILState, 0, sipPySelf, sipMeth, -65);
}

bool sipFbxAnimCurveFilterTSS::NeedApply( ::FbxAnimStack*a0, ::FbxStatus*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_NeedApply);

    if (!sipMeth)
        return  ::FbxAnimCurveFilterTSS::NeedApply(a0,a1);

    extern bool sipVH_fbx_28(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::FbxAnimStack*, ::FbxStatus*);

    return sipVH_fbx_28(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipFbxAnimCurveFilterTSS::NeedApply( ::FbxObject*a0, ::FbxAnimStack*a1, ::FbxStatus*a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_NeedApply);

    if (!sipMeth)
        return  ::FbxAnimCurveFilterTSS::NeedApply(a0,a1,a2);

    extern bool sipVH_fbx_29(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::FbxObject*, ::FbxAnimStack*, ::FbxStatus*);

    return sipVH_fbx_29(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2);
}

bool sipFbxAnimCurveFilterTSS::NeedApply( ::FbxAnimCurveNode& a0, ::FbxStatus*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_NeedApply);

    if (!sipMeth)
        return  ::FbxAnimCurveFilterTSS::NeedApply(a0,a1);

    extern bool sipVH_fbx_30(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::FbxAnimCurveNode&, ::FbxStatus*);

    return sipVH_fbx_30(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipFbxAnimCurveFilterTSS::NeedApply( ::FbxAnimCurve**a0,int a1, ::FbxStatus*a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_NeedApply);

    if (!sipMeth)
        return  ::FbxAnimCurveFilterTSS::NeedApply(a0,a1,a2);

    extern bool sipVH_fbx_31(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::FbxAnimCurve**,int, ::FbxStatus*);

    return sipVH_fbx_31(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2);
}

bool sipFbxAnimCurveFilterTSS::NeedApply( ::FbxAnimCurve& a0, ::FbxStatus*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_NeedApply);

    if (!sipMeth)
        return  ::FbxAnimCurveFilterTSS::NeedApply(a0,a1);

    extern bool sipVH_fbx_32(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::FbxAnimCurve&, ::FbxStatus*);

    return sipVH_fbx_32(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipFbxAnimCurveFilterTSS::Apply( ::FbxAnimStack*a0, ::FbxStatus*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_Apply);

    if (!sipMeth)
        return  ::FbxAnimCurveFilterTSS::Apply(a0,a1);

    extern bool sipVH_fbx_28(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::FbxAnimStack*, ::FbxStatus*);

    return sipVH_fbx_28(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipFbxAnimCurveFilterTSS::Apply( ::FbxObject*a0, ::FbxAnimStack*a1, ::FbxStatus*a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_Apply);

    if (!sipMeth)
        return  ::FbxAnimCurveFilterTSS::Apply(a0,a1,a2);

    extern bool sipVH_fbx_29(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::FbxObject*, ::FbxAnimStack*, ::FbxStatus*);

    return sipVH_fbx_29(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2);
}

bool sipFbxAnimCurveFilterTSS::Apply( ::FbxAnimCurveNode& a0, ::FbxStatus*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipName_Apply);

    if (!sipMeth)
        return  ::FbxAnimCurveFilterTSS::Apply(a0,a1);

    extern bool sipVH_fbx_30(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::FbxAnimCurveNode&, ::FbxStatus*);

    return sipVH_fbx_30(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipFbxAnimCurveFilterTSS::Apply( ::FbxAnimCurve**a0,int a1, ::FbxStatus*a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,NULL,sipName_Apply);

    if (!sipMeth)
        return  ::FbxAnimCurveFilterTSS::Apply(a0,a1,a2);

    extern bool sipVH_fbx_31(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::FbxAnimCurve**,int, ::FbxStatus*);

    return sipVH_fbx_31(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2);
}

bool sipFbxAnimCurveFilterTSS::Apply( ::FbxAnimCurve& a0, ::FbxStatus*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[10],sipPySelf,NULL,sipName_Apply);

    if (!sipMeth)
        return  ::FbxAnimCurveFilterTSS::Apply(a0,a1);

    extern bool sipVH_fbx_32(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::FbxAnimCurve&, ::FbxStatus*);

    return sipVH_fbx_32(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

void sipFbxAnimCurveFilterTSS::Reset()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[11],sipPySelf,NULL,sipName_Reset);

    if (!sipMeth)
    {
         ::FbxAnimCurveFilterTSS::Reset();
        return;
    }

    extern void sipVH_fbx_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH_fbx_0(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_FbxAnimCurveFilterTSS_GetName, "GetName(self) -> str");

extern "C" {static PyObject *meth_FbxAnimCurveFilterTSS_GetName(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimCurveFilterTSS_GetName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxAnimCurveFilterTSS *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxAnimCurveFilterTSS, &sipCpp))
        {
            const char*sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxAnimCurveFilterTSS::GetName() : sipCpp->GetName());

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
    sipNoMethod(sipParseErr, sipName_FbxAnimCurveFilterTSS, sipName_GetName, doc_FbxAnimCurveFilterTSS_GetName);

    return NULL;
}


PyDoc_STRVAR(doc_FbxAnimCurveFilterTSS_Apply, "Apply(self, FbxAnimStack, FbxStatus = None) -> bool\n"
    "Apply(self, FbxObject, FbxAnimStack, FbxStatus = None) -> bool\n"
    "Apply(self, FbxAnimCurveNode, FbxStatus = None) -> bool\n"
    "Apply(self, int, FbxStatus = None) -> Tuple[bool, FbxAnimCurve]\n"
    "Apply(self, FbxAnimCurve, FbxStatus = None) -> bool");

extern "C" {static PyObject *meth_FbxAnimCurveFilterTSS_Apply(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimCurveFilterTSS_Apply(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::FbxAnimStack* a0;
         ::FbxStatus* a1 = 0;
         ::FbxAnimCurveFilterTSS *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8|J8", &sipSelf, sipType_FbxAnimCurveFilterTSS, &sipCpp, sipType_FbxAnimStack, &a0, sipType_FbxStatus, &a1))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxAnimCurveFilterTSS::Apply(a0,a1) : sipCpp->Apply(a0,a1));

            return PyBool_FromLong(sipRes);
        }
    }

    {
         ::FbxObject* a0;
         ::FbxAnimStack* a1;
         ::FbxStatus* a2 = 0;
         ::FbxAnimCurveFilterTSS *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J8|J8", &sipSelf, sipType_FbxAnimCurveFilterTSS, &sipCpp, sipType_FbxObject, &a0, sipType_FbxAnimStack, &a1, sipType_FbxStatus, &a2))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxAnimCurveFilterTSS::Apply(a0,a1,a2) : sipCpp->Apply(a0,a1,a2));

            return PyBool_FromLong(sipRes);
        }
    }

    {
         ::FbxAnimCurveNode* a0;
         ::FbxStatus* a1 = 0;
         ::FbxAnimCurveFilterTSS *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9|J8", &sipSelf, sipType_FbxAnimCurveFilterTSS, &sipCpp, sipType_FbxAnimCurveNode, &a0, sipType_FbxStatus, &a1))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxAnimCurveFilterTSS::Apply(*a0,a1) : sipCpp->Apply(*a0,a1));

            return PyBool_FromLong(sipRes);
        }
    }

    {
         ::FbxAnimCurve* a0;
        int a1;
         ::FbxStatus* a2 = 0;
         ::FbxAnimCurveFilterTSS *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi|J8", &sipSelf, sipType_FbxAnimCurveFilterTSS, &sipCpp, &a1, sipType_FbxStatus, &a2))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxAnimCurveFilterTSS::Apply(&a0,a1,a2) : sipCpp->Apply(&a0,a1,a2));

            return sipBuildResult(0,"(bD)",sipRes,a0,sipType_FbxAnimCurve,NULL);
        }
    }

    {
         ::FbxAnimCurve* a0;
         ::FbxStatus* a1 = 0;
         ::FbxAnimCurveFilterTSS *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9|J8", &sipSelf, sipType_FbxAnimCurveFilterTSS, &sipCpp, sipType_FbxAnimCurve, &a0, sipType_FbxStatus, &a1))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxAnimCurveFilterTSS::Apply(*a0,a1) : sipCpp->Apply(*a0,a1));

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxAnimCurveFilterTSS, sipName_Apply, doc_FbxAnimCurveFilterTSS_Apply);

    return NULL;
}


PyDoc_STRVAR(doc_FbxAnimCurveFilterTSS_Reset, "Reset(self)");

extern "C" {static PyObject *meth_FbxAnimCurveFilterTSS_Reset(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimCurveFilterTSS_Reset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::FbxAnimCurveFilterTSS *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxAnimCurveFilterTSS, &sipCpp))
        {
            (sipSelfWasArg ? sipCpp-> ::FbxAnimCurveFilterTSS::Reset() : sipCpp->Reset());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxAnimCurveFilterTSS, sipName_Reset, doc_FbxAnimCurveFilterTSS_Reset);

    return NULL;
}


PyDoc_STRVAR(doc_FbxAnimCurveFilterTSS_GetShift, "GetShift(self) -> FbxTime");

extern "C" {static PyObject *meth_FbxAnimCurveFilterTSS_GetShift(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimCurveFilterTSS_GetShift(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxAnimCurveFilterTSS *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxAnimCurveFilterTSS, &sipCpp))
        {
             ::FbxTime*sipRes;

            sipRes = new  ::FbxTime(sipCpp->GetShift());

            return sipConvertFromNewType(sipRes,sipType_FbxTime,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxAnimCurveFilterTSS, sipName_GetShift, doc_FbxAnimCurveFilterTSS_GetShift);

    return NULL;
}


PyDoc_STRVAR(doc_FbxAnimCurveFilterTSS_SetShift, "SetShift(self, FbxTime)");

extern "C" {static PyObject *meth_FbxAnimCurveFilterTSS_SetShift(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimCurveFilterTSS_SetShift(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxTime* a0;
         ::FbxAnimCurveFilterTSS *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxAnimCurveFilterTSS, &sipCpp, sipType_FbxTime, &a0))
        {
            sipCpp->SetShift(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxAnimCurveFilterTSS, sipName_SetShift, doc_FbxAnimCurveFilterTSS_SetShift);

    return NULL;
}


PyDoc_STRVAR(doc_FbxAnimCurveFilterTSS_GetScale, "GetScale(self) -> float");

extern "C" {static PyObject *meth_FbxAnimCurveFilterTSS_GetScale(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimCurveFilterTSS_GetScale(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxAnimCurveFilterTSS *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxAnimCurveFilterTSS, &sipCpp))
        {
            double sipRes;

            sipRes = sipCpp->GetScale();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxAnimCurveFilterTSS, sipName_GetScale, doc_FbxAnimCurveFilterTSS_GetScale);

    return NULL;
}


PyDoc_STRVAR(doc_FbxAnimCurveFilterTSS_SetScale, "SetScale(self, float)");

extern "C" {static PyObject *meth_FbxAnimCurveFilterTSS_SetScale(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimCurveFilterTSS_SetScale(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        double a0;
         ::FbxAnimCurveFilterTSS *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_FbxAnimCurveFilterTSS, &sipCpp, &a0))
        {
            sipCpp->SetScale(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxAnimCurveFilterTSS, sipName_SetScale, doc_FbxAnimCurveFilterTSS_SetScale);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_FbxAnimCurveFilterTSS(void *, const sipTypeDef *);}
static void *cast_FbxAnimCurveFilterTSS(void *sipCppV, const sipTypeDef *targetType)
{
     ::FbxAnimCurveFilterTSS *sipCpp = reinterpret_cast< ::FbxAnimCurveFilterTSS *>(sipCppV);

    if (targetType == sipType_FbxAnimCurveFilter)
        return static_cast< ::FbxAnimCurveFilter *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxAnimCurveFilterTSS(void *, int);}
static void release_FbxAnimCurveFilterTSS(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipFbxAnimCurveFilterTSS *>(sipCppV);
    else
        delete reinterpret_cast< ::FbxAnimCurveFilterTSS *>(sipCppV);
}


extern "C" {static void assign_FbxAnimCurveFilterTSS(void *, SIP_SSIZE_T, const void *);}
static void assign_FbxAnimCurveFilterTSS(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::FbxAnimCurveFilterTSS *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::FbxAnimCurveFilterTSS *>(sipSrc);
}


extern "C" {static void *array_FbxAnimCurveFilterTSS(SIP_SSIZE_T);}
static void *array_FbxAnimCurveFilterTSS(SIP_SSIZE_T sipNrElem)
{
    return new  ::FbxAnimCurveFilterTSS[sipNrElem];
}


extern "C" {static void *copy_FbxAnimCurveFilterTSS(const void *, SIP_SSIZE_T);}
static void *copy_FbxAnimCurveFilterTSS(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::FbxAnimCurveFilterTSS(reinterpret_cast<const  ::FbxAnimCurveFilterTSS *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_FbxAnimCurveFilterTSS(sipSimpleWrapper *);}
static void dealloc_FbxAnimCurveFilterTSS(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipFbxAnimCurveFilterTSS *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxAnimCurveFilterTSS(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_FbxAnimCurveFilterTSS(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxAnimCurveFilterTSS(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipFbxAnimCurveFilterTSS *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipFbxAnimCurveFilterTSS();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::FbxAnimCurveFilterTSS* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_FbxAnimCurveFilterTSS, &a0))
        {
            sipCpp = new sipFbxAnimCurveFilterTSS(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_FbxAnimCurveFilterTSS[] = {{17, 255, 1}};


static PyMethodDef methods_FbxAnimCurveFilterTSS[] = {
    {SIP_MLNAME_CAST(sipName_Apply), meth_FbxAnimCurveFilterTSS_Apply, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxAnimCurveFilterTSS_Apply)},
    {SIP_MLNAME_CAST(sipName_GetName), meth_FbxAnimCurveFilterTSS_GetName, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxAnimCurveFilterTSS_GetName)},
    {SIP_MLNAME_CAST(sipName_GetScale), meth_FbxAnimCurveFilterTSS_GetScale, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxAnimCurveFilterTSS_GetScale)},
    {SIP_MLNAME_CAST(sipName_GetShift), meth_FbxAnimCurveFilterTSS_GetShift, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxAnimCurveFilterTSS_GetShift)},
    {SIP_MLNAME_CAST(sipName_Reset), meth_FbxAnimCurveFilterTSS_Reset, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxAnimCurveFilterTSS_Reset)},
    {SIP_MLNAME_CAST(sipName_SetScale), meth_FbxAnimCurveFilterTSS_SetScale, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxAnimCurveFilterTSS_SetScale)},
    {SIP_MLNAME_CAST(sipName_SetShift), meth_FbxAnimCurveFilterTSS_SetShift, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxAnimCurveFilterTSS_SetShift)}
};

PyDoc_STRVAR(doc_FbxAnimCurveFilterTSS, "\1FbxAnimCurveFilterTSS()\n"
    "FbxAnimCurveFilterTSS(FbxAnimCurveFilterTSS)");


sipClassTypeDef sipTypeDef_fbx_FbxAnimCurveFilterTSS = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_FbxAnimCurveFilterTSS,
        {0},
        0
    },
    {
        sipNameNr_FbxAnimCurveFilterTSS,
        {0, 0, 1},
        7, methods_FbxAnimCurveFilterTSS,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_FbxAnimCurveFilterTSS,
    -1,
    -1,
    supers_FbxAnimCurveFilterTSS,
    0,
    init_type_FbxAnimCurveFilterTSS,
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
    dealloc_FbxAnimCurveFilterTSS,
    assign_FbxAnimCurveFilterTSS,
    array_FbxAnimCurveFilterTSS,
    copy_FbxAnimCurveFilterTSS,
    release_FbxAnimCurveFilterTSS,
    cast_FbxAnimCurveFilterTSS,
    0,
    0,
    0,
    0,
    0,
    0
};
