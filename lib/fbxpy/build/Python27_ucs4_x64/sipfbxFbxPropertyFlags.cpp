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
extern "C" {static void release_FbxPropertyFlags(void *, int);}
static void release_FbxPropertyFlags(void *sipCppV, int)
{
    delete reinterpret_cast< ::FbxPropertyFlags *>(sipCppV);
}


extern "C" {static void assign_FbxPropertyFlags(void *, SIP_SSIZE_T, const void *);}
static void assign_FbxPropertyFlags(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::FbxPropertyFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::FbxPropertyFlags *>(sipSrc);
}


extern "C" {static void *array_FbxPropertyFlags(SIP_SSIZE_T);}
static void *array_FbxPropertyFlags(SIP_SSIZE_T sipNrElem)
{
    return new  ::FbxPropertyFlags[sipNrElem];
}


extern "C" {static void *copy_FbxPropertyFlags(const void *, SIP_SSIZE_T);}
static void *copy_FbxPropertyFlags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::FbxPropertyFlags(reinterpret_cast<const  ::FbxPropertyFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_FbxPropertyFlags(sipSimpleWrapper *);}
static void dealloc_FbxPropertyFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxPropertyFlags(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_FbxPropertyFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxPropertyFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::FbxPropertyFlags *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::FbxPropertyFlags();

            return sipCpp;
        }
    }

    {
        const  ::FbxPropertyFlags* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_FbxPropertyFlags, &a0))
        {
            sipCpp = new  ::FbxPropertyFlags(*a0);

            return sipCpp;
        }
    }

    return NULL;
}

static sipEnumMemberDef enummembers_FbxPropertyFlags[] = {
    {sipName_eAllFlags, static_cast<int>( ::FbxPropertyFlags::eAllFlags), 310},
    {sipName_eAnimatable, static_cast<int>( ::FbxPropertyFlags::eAnimatable), 310},
    {sipName_eAnimated, static_cast<int>( ::FbxPropertyFlags::eAnimated), 310},
    {sipName_eCtrlFlags, static_cast<int>( ::FbxPropertyFlags::eCtrlFlags), 310},
    {sipName_eDeleted, static_cast<int>( ::FbxPropertyFlags::eDeleted), 311},
    {sipName_eFlagCount, static_cast<int>( ::FbxPropertyFlags::eFlagCount), 310},
    {sipName_eHidden, static_cast<int>( ::FbxPropertyFlags::eHidden), 310},
    {sipName_eImported, static_cast<int>( ::FbxPropertyFlags::eImported), 310},
    {sipName_eInherit, static_cast<int>( ::FbxPropertyFlags::eInherit), 311},
    {sipName_eLockedAll, static_cast<int>( ::FbxPropertyFlags::eLockedAll), 310},
    {sipName_eLockedMember0, static_cast<int>( ::FbxPropertyFlags::eLockedMember0), 310},
    {sipName_eLockedMember1, static_cast<int>( ::FbxPropertyFlags::eLockedMember1), 310},
    {sipName_eLockedMember2, static_cast<int>( ::FbxPropertyFlags::eLockedMember2), 310},
    {sipName_eLockedMember3, static_cast<int>( ::FbxPropertyFlags::eLockedMember3), 310},
    {sipName_eMutedAll, static_cast<int>( ::FbxPropertyFlags::eMutedAll), 310},
    {sipName_eMutedMember0, static_cast<int>( ::FbxPropertyFlags::eMutedMember0), 310},
    {sipName_eMutedMember1, static_cast<int>( ::FbxPropertyFlags::eMutedMember1), 310},
    {sipName_eMutedMember2, static_cast<int>( ::FbxPropertyFlags::eMutedMember2), 310},
    {sipName_eMutedMember3, static_cast<int>( ::FbxPropertyFlags::eMutedMember3), 310},
    {sipName_eNone, static_cast<int>( ::FbxPropertyFlags::eNone), 310},
    {sipName_eNotSavable, static_cast<int>( ::FbxPropertyFlags::eNotSavable), 310},
    {sipName_eOverride, static_cast<int>( ::FbxPropertyFlags::eOverride), 311},
    {sipName_eStatic, static_cast<int>( ::FbxPropertyFlags::eStatic), 310},
    {sipName_eUIBoolGroup, static_cast<int>( ::FbxPropertyFlags::eUIBoolGroup), 310},
    {sipName_eUIDisabled, static_cast<int>( ::FbxPropertyFlags::eUIDisabled), 310},
    {sipName_eUIExpanded, static_cast<int>( ::FbxPropertyFlags::eUIExpanded), 310},
    {sipName_eUIFlags, static_cast<int>( ::FbxPropertyFlags::eUIFlags), 310},
    {sipName_eUIGroup, static_cast<int>( ::FbxPropertyFlags::eUIGroup), 310},
    {sipName_eUIHidden, static_cast<int>( ::FbxPropertyFlags::eUIHidden), 310},
    {sipName_eUILeftLabel, static_cast<int>( ::FbxPropertyFlags::eUILeftLabel), 310},
    {sipName_eUINoCaption, static_cast<int>( ::FbxPropertyFlags::eUINoCaption), 310},
    {sipName_eUIPanel, static_cast<int>( ::FbxPropertyFlags::eUIPanel), 310},
    {sipName_eUserDefined, static_cast<int>( ::FbxPropertyFlags::eUserDefined), 310},
};

PyDoc_STRVAR(doc_FbxPropertyFlags, "\1FbxPropertyFlags()\n"
    "FbxPropertyFlags(FbxPropertyFlags)");


sipClassTypeDef sipTypeDef_fbx_FbxPropertyFlags = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_FbxPropertyFlags,
        {0},
        0
    },
    {
        sipNameNr_FbxPropertyFlags,
        {0, 0, 1},
        0, 0,
        33, enummembers_FbxPropertyFlags,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_FbxPropertyFlags,
    -1,
    -1,
    0,
    0,
    init_type_FbxPropertyFlags,
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
    dealloc_FbxPropertyFlags,
    assign_FbxPropertyFlags,
    array_FbxPropertyFlags,
    copy_FbxPropertyFlags,
    release_FbxPropertyFlags,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
