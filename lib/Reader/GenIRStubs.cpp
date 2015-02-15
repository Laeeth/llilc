//===---- lib/MSILReader/GenIRStubs.cpp -------------------------*- C++ -*-===//
//
// LLVM-MSILC
//
// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license.
// See LICENSE file in the project root for full license information.
//
//===----------------------------------------------------------------------===//
//
// Common reader functionality that is either not yet implemented
// or stubbed out.
//
//===----------------------------------------------------------------------===//

#include "reader.h"
#include <cstdarg>

// Get the special block-start placekeeping node
IRNode *fgNodeGetStartIRNode(FlowGraphNode *FgNode) { return (IRNode *)FgNode; }

// Get the first non-placekeeping node in block
IRNode *fgNodeGetStartInsertIRNode(FlowGraphNode *FgNode) {
  // Not using placekeepers yet
  return fgNodeGetStartIRNode(FgNode);
}

// Get the special block-end placekeeping node
IRNode *fgNodeGetEndIRNode(FlowGraphNode *FgNode) {
  throw NotYetImplementedException("fFgNodeGetEndIRNode");
}

IRNode *fgNodeGetEndIRInsertionPoint(FlowGraphNode *FgNode) { return NULL; }

void fgNodeSetIBCNotReal(FlowGraphNode *Fg) {
  throw NotYetImplementedException("fgNodeSetIBCNotReal");
}

GlobalVerifyData *fgNodeGetGlobalVerifyData(FlowGraphNode *Fg) {
  throw NotYetImplementedException("fgNodeGetGlobalVerifyData");
}

void fgNodeSetGlobalVerifyData(FlowGraphNode *Fg, GlobalVerifyData *GvData) {
  throw NotYetImplementedException("fgNodeSetGlobalVerifyData");
}

unsigned int fgNodeGetBlockNum(FlowGraphNode *Fg) {
  throw NotYetImplementedException("fgNodeGetBlockNum");
}

bool fgEdgeListIsHandler(FlowGraphEdgeList *FgEdge) {
  throw NotYetImplementedException("fgEdgeListIsHandler");
}

bool fgEdgeListIsFake(FlowGraphEdgeList *FgEdge) {
  throw NotYetImplementedException("fgEdgeListIsFake");
}

void fgEdgeListMakeFake(FlowGraphEdgeList *FgEdge) {
  throw NotYetImplementedException("fgEdgeListMakeFake");
}

IRNode *irNodeGetNext(IRNode *Node) {
  throw NotYetImplementedException("irNodeGetNext");
}

bool irNodeIsBranch(IRNode *Node) {
  throw NotYetImplementedException("irNodeIsBranch");
}

IRNode *irNodeGetInsertPointAfterMSILOffset(IRNode *Node, unsigned int Offset) {
  throw NotYetImplementedException("irNodeGetInsertPointAfterMSILOffset");
}

IRNode *irNodeGetInsertPointBeforeMSILOffset(IRNode *Node,
                                             unsigned int Offset) {
  throw NotYetImplementedException("irNodeGetInsertPointBeforeMSILOffset");
}

IRNode *
irNodeGetFirstLabelOrInstrNodeInEnclosingBlock(IRNode *HandlerStartNode) {
  throw NotYetImplementedException(
      "irNodeGetFirstLabelOrInstrNodeInEnclosingBlock");
}

unsigned int irNodeGetMSILOffset(IRNode *Node) {
  throw NotYetImplementedException("irNodeGetMSILOffset");
}

void irNodeLabelSetMSILOffset(IRNode *Node, unsigned int LabelMSILOffset) {
  throw NotYetImplementedException("irNodeLabelSetMSILOffset");
}

void irNodeBranchSetMSILOffset(IRNode *BranchNode, unsigned int Offset) {
  throw NotYetImplementedException("irNodeBranchSetMSILOffset");
}

void irNodeExceptSetMSILOffset(IRNode *BranchNode, unsigned int Offset) {
  throw NotYetImplementedException("irNodeExceptSetMSILOffset");
}

void irNodeInsertBefore(IRNode *InsertionPointTuple, IRNode *NewNode) {
  throw NotYetImplementedException("irNodeInsertBefore");
}

void irNodeInsertAfter(IRNode *InsertionPointTuple, IRNode *NewNode) {
  throw NotYetImplementedException("irNodeInsertAfter");
}

void irNodeSetRegion(IRNode *Node, EHRegion *Region) { return; }

EHRegion *irNodeGetRegion(IRNode *Node) {
  throw NotYetImplementedException("irNodeGetRegion");
}

FlowGraphNode *irNodeGetEnclosingBlock(IRNode *Node) {
  throw NotYetImplementedException("irNodeGetEnclosingBlock");
}

bool irNodeIsEHFlowAnnotation(IRNode *Node) {
  throw NotYetImplementedException("irNodeIsEHFlowAnnotation");
}

bool irNodeIsHandlerFlowAnnotation(IRNode *Node) {
  throw NotYetImplementedException("irNodeIsHandlerFlowAnnotation");
}

BranchList *branchListGetNext(BranchList *BranchList) {
  throw NotYetImplementedException("branchListGetNext");
}

IRNode *branchListGetIRNode(BranchList *BranchList) {
  throw NotYetImplementedException("branchListGetIRNode");
}

void ReaderBase::verifyNeedsVerification() { return; }

VerificationState *ReaderBase::verifyInitializeBlock(FlowGraphNode *,
                                                     unsigned int IlOffset) {
  return NULL;
}

void ReaderBase::verPropEHInitFlow(FlowGraphNode *Block) { return; }

void ReaderBase::verPropHandlerInitFlow(FlowGraphNode *Block) { return; }

VerificationState *ReaderBase::verCreateNewVState(unsigned MaxStack,
                                                  unsigned NumLocals,
                                                  bool InitLocals,
                                                  InitState InitState) {
  return NULL;
}

void ReaderBase::verifyFinishBlock(VerificationState *Vstate,
                                   FlowGraphNode *Block) {
  return;
}

void ReaderBase::verifyPropCtorInitToSucc(InitState CurrState,
                                          FlowGraphNode *Succ, char *Reason) {
  return;
}

void ReaderBase::verifyPropCtorInitThroughBadBlock(FlowGraphNode *Block) {
  return;
}

FlowGraphNode *ReaderBase::verifyGetRegionBlock(EHRegion *Region) {
  return NULL;
}

void ReaderBase::verifyEnqueueBlock(GlobalVerifyData *GvSucc) { return; }

FlowGraphNode *
ReaderBase::verifyFindFaultHandlerBlock(VerificationState *Vstate,
                                        EHRegion *TryRegion) {
  return NULL;
}

void ReaderBase::verifyRecordLocalType(int Num, CorInfoType Type,
                                       CORINFO_CLASS_HANDLE ClassHandle) {
  return;
}

void ReaderBase::verifyRecordParamType(int Num, CorInfoType Type,
                                       CORINFO_CLASS_HANDLE ClassHandle,
                                       bool MakeByRef, bool IsThis) {
  return;
}

void ReaderBase::verifyRecordParamType(int Num, CORINFO_SIG_INFO *Sig,
                                       CORINFO_ARG_LIST_HANDLE Args) {
  return;
}

void ReaderBase::verifyRecordLocalType(int Num, CORINFO_SIG_INFO *Sig,
                                       CORINFO_ARG_LIST_HANDLE Args) {
  return;
}

void ReaderBase::verifyPushExceptionObject(VerificationState *Vstate,
                                           mdToken Token) {
  return;
}

void ReaderBase::verifyFieldAccess(VerificationState *Vstate,
                                   ReaderBaseNS::OPCODE Opcode,
                                   CORINFO_RESOLVED_TOKEN *ResolvedToken) {
  return;
}

BOOL verIsCallToInitThisPtr(CORINFO_CLASS_HANDLE Context,
                            CORINFO_CLASS_HANDLE Ttarget) {
  return FALSE;
}

void ReaderBase::verifyLoadElemA(VerificationState *Vstate, bool ReadOnlyPrefix,
                                 CORINFO_RESOLVED_TOKEN *ResolvedToken) {
  return;
}

void ReaderBase::verifyLoadElem(VerificationState *Vstate,
                                ReaderBaseNS::OPCODE Opcode,
                                CORINFO_RESOLVED_TOKEN *ResolvedToken) {
  return;
}

void ReaderBase::verifyLoadConstant(VerificationState *Vstate,
                                    ReaderBaseNS::OPCODE Opcode) {
  return;
}

void ReaderBase::verifyStoreObj(VerificationState *Vstate,
                                CORINFO_RESOLVED_TOKEN *ResolvedToken) {
  return;
}

void ReaderBase::verifyLoadObj(VerificationState *Vstate,
                               CORINFO_RESOLVED_TOKEN *ResolvedToken) {
  return;
}

void ReaderBase::verifyStloc(VerificationState *Vstate, unsigned int Locnum) {
  return;
}

void ReaderBase::verifyIsInst(VerificationState *Vstate,
                              CORINFO_RESOLVED_TOKEN *ResolvedToken) {
  return;
}

void ReaderBase::verifyCastClass(VerificationState *Vstate,
                                 CORINFO_RESOLVED_TOKEN *ResolvedToken) {
  return;
}

void ReaderBase::verifyBox(VerificationState *Vstate,
                           CORINFO_RESOLVED_TOKEN *ResolvedToken) {
  return;
}

void ReaderBase::verifyLoadAddr(VerificationState *Vstate) { return; }

void ReaderBase::verifyLoadToken(VerificationState *Vstate,
                                 CORINFO_RESOLVED_TOKEN *ResolvedToken) {
  return;
}

void ReaderBase::verifyUnbox(VerificationState *Vstate,
                             CORINFO_RESOLVED_TOKEN *ResolvedToken) {
  return;
}

void ReaderBase::verifyStoreElemRef(VerificationState *Vstate) { return; }

void ReaderBase::verifyLdarg(VerificationState *Vstate, unsigned int Locnum,
                             ReaderBaseNS::OPCODE Opcode) {
  return;
}

void ReaderBase::verifyStarg(VerificationState *Vstate, unsigned int Locnum) {
  return;
}

void ReaderBase::verifyLdloc(VerificationState *Vstate, unsigned int Locnum,
                             ReaderBaseNS::OPCODE Opcode) {
  return;
}

void ReaderBase::verifyStoreElem(VerificationState *Vstate,
                                 ReaderBaseNS::StElemOpcode Opcode,
                                 CORINFO_RESOLVED_TOKEN *ResolvedToken) {
  return;
}

void ReaderBase::verifyLoadLen(VerificationState *Vstate) { return; }

void ReaderBase::verifyDup(VerificationState *Vstate, const BYTE *CodeAddr) {
  return;
}

void ReaderBase::verifyEndFilter(VerificationState *Vstate, DWORD MsilOffset) {
  return;
}

void ReaderBase::verifyInitObj(VerificationState *Vstate,
                               CORINFO_RESOLVED_TOKEN *ResolvedToken) {
  return;
}

void ReaderBase::verifyCall(VerificationState *Vstate,
                            ReaderBaseNS::OPCODE Opcode, bool TailCall,
                            bool ReadOnlyCall, bool ConstraintCall,
                            bool ThisPossiblyModified,
                            mdToken ConstraintTypeRef, mdToken Token) {
  return;
}

void ReaderBase::verifyCpObj(VerificationState *Vstate,
                             CORINFO_RESOLVED_TOKEN *ResolvedToken) {
  return;
}

void ReaderBase::verifyNewObj(VerificationState *Vstate,
                              ReaderBaseNS::OPCODE Opcode, bool IsTail,
                              CORINFO_RESOLVED_TOKEN *ResolvedToken,
                              const BYTE *CodeAddr) {
  return;
}

void ReaderBase::verifyBoolBranch(VerificationState *Vstate,
                                  unsigned int NextOffset,
                                  unsigned int TargetOffset) {
  return;
}

void ReaderBase::verifyLoadNull(VerificationState *Vstate) { return; }

void ReaderBase::verifyLoadStr(VerificationState *Vstate, mdToken Token) {
  return;
}

void ReaderBase::verifyIntegerBinary(VerificationState *Vstate) { return; }

void ReaderBase::verifyBinary(VerificationState *Vstate,
                              ReaderBaseNS::OPCODE Opcode) {
  return;
}

void ReaderBase::verifyShift(VerificationState *Vstate) { return; }

void ReaderBase::verifyReturn(VerificationState *Vstate, EHRegion *Region) {
  return;
}

void ReaderBase::verifyEndFinally(VerificationState *Vstate) { return; }

void ReaderBase::verifyThrow(VerificationState *Vstate) { return; }

void ReaderBase::verifyLoadFtn(VerificationState *Vstate,
                               ReaderBaseNS::OPCODE Opcode,
                               CORINFO_RESOLVED_TOKEN *ResolvedToken,
                               const BYTE *CodeAddr,
                               CORINFO_CALL_INFO *CallInfo) {
  return;
}

void ReaderBase::verifyNewArr(VerificationState *Vstate,
                              CORINFO_RESOLVED_TOKEN *ResolvedToken) {
  return;
}

void ReaderBase::verifyLoadIndirect(VerificationState *Vstate,
                                    ReaderBaseNS::LdIndirOpcode Opcode) {
  return;
}

void ReaderBase::verifyStoreIndir(VerificationState *Vstate,
                                  ReaderBaseNS::StIndirOpcode Opcode) {
  return;
}

void ReaderBase::verifyConvert(VerificationState *Vstate,
                               ReaderBaseNS::ConvOpcode Opcode) {
  return;
}

void ReaderBase::verifyCompare(VerificationState *Vstate,
                               ReaderBaseNS::OPCODE Opcode) {
  return;
}

void ReaderBase::verifyUnary(VerificationState *Vstate,
                             ReaderBaseNS::UnaryOpcode Opcode) {
  return;
}

void ReaderBase::verifyPop(VerificationState *Vstate) { return; }

void ReaderBase::verifyArgList(VerificationState *Vstate) { return; }

void ReaderBase::verifyCkFinite(VerificationState *Vstate) { return; }

void ReaderBase::verifyFailure(VerificationState *Vstate) { return; }

void ReaderBase::verifyToken(mdToken Token) { return; }

void ReaderBase::verifyRefAnyVal(VerificationState *Vstate,
                                 CORINFO_RESOLVED_TOKEN *ResolvedToken) {
  return;
}

void ReaderBase::verifyRefAnyType(VerificationState *Vstate) { return; }

void ReaderBase::verifyUnboxAny(VerificationState *Vstate,
                                CORINFO_RESOLVED_TOKEN *ResolvedToken) {
  return;
}

void ReaderBase::verifySwitch(VerificationState *Vstate) { return; }

void ReaderBase::verifyMkRefAny(VerificationState *Vstate,
                                CORINFO_RESOLVED_TOKEN *ResolvedToken) {
  return;
}

void ReaderBase::verifySizeOf(VerificationState *Vstate,
                              CORINFO_RESOLVED_TOKEN *ResolvedToken) {
  return;
}

void ReaderBase::verifyRethrow(VerificationState *Vstate, EHRegion *Region) {
  return;
}

void ReaderBase::verifyTail(VerificationState *Vstate, EHRegion *Region) {
  return;
}

void ReaderBase::verifyConstrained(VerificationState *Vstate,
                                   mdToken TypeDefOrRefOrSpec) {
  return;
}

void ReaderBase::verifyReadOnly(VerificationState *Vstate) { return; }

void ReaderBase::verifyVolatile(VerificationState *Vstate) { return; }

void ReaderBase::verifyUnaligned(VerificationState *Vstate,
                                 ReaderAlignType Alignment) {
  return;
}

void ReaderBase::verifyPrefixConsumed(VerificationState *Vstate,
                                      ReaderBaseNS::OPCODE Opcode) {
  return;
}

void ReaderBase::verifyLeave(VerificationState *Vstate) { return; }

void ReaderBase::verifyBranchTarget(VerificationState *Vstate,
                                    FlowGraphNode *CurrentFGNode,
                                    EHRegion *SrcRegion,
                                    unsigned int TargetOffset, bool IsLeave) {
  return;
}

void ReaderBase::verifyReturnFlow(unsigned int SrcOffset) { return; }

void ReaderBase::verifyFallThrough(VerificationState *Vstate,
                                   FlowGraphNode *Fg) {
  return;
}

bool verCheckDelegateCreation(ReaderBaseNS::OPCODE Opcode,
                              VerificationState *Vstate, const BYTE *CodeAddr,
                              mdMemberRef &TargetMemberRef, VerType FtnType,
                              VerType ObjType) {
  return false;
}

void ReaderBase::verVerifyCall(ReaderBaseNS::OPCODE Opcode,
                               const CORINFO_RESOLVED_TOKEN *ResolvedToken,
                               const CORINFO_CALL_INFO *CallInfo, bool TailCall,
                               const BYTE *CodeAddr,
                               VerificationState *Vstate) {
  return;
}

void ReaderBase::verifyIsMethodToken(mdToken Token) { return; }

void ReaderBase::verifyIsCallToken(mdToken Token) { return; }

void ReaderBase::verVerifyField(CORINFO_RESOLVED_TOKEN *ResolvedToken,
                                const CORINFO_FIELD_INFO &FieldInfo,
                                const VerType *TiThis, BOOL Mutator) {
  return;
}

bool ReaderBase::verIsValueClass(CORINFO_CLASS_HANDLE ClassHandle) {
  return false;
}

bool ReaderBase::verIsBoxedValueType(const VerType &Ti) { return false; }

bool ReaderBase::verIsCallToken(mdToken Token) { return false; }

bool ReaderBase::verIsValClassWithStackPtr(CORINFO_CLASS_HANDLE ClassHandle) {
  return false;
}

bool ReaderBase::verIsGenericTypeVar(CORINFO_CLASS_HANDLE ClassHandle) {
  return false;
}

void ReaderBase::verDumpType(const VerType &Ti) { return; }

bool ReaderBase::verNeedsCtorTrack() { return false; }

void ReaderBase::verifyIsClassToken(mdToken Token) { return; }

void ReaderBase::verifyIsFieldToken(mdToken Token) { return; }

void ReaderBase::verifyEIT() { return; }

void ReaderBase::verGlobalError(const char *Message) { return; }

int _cdecl dbPrint(const char *Format, ...) {
  va_list Args;
  va_start(Args, Format);
  int NumChars = vfprintf(stderr, Format, Args);
  va_end(Args);
  return NumChars;
}

BOOL HaveEnvConfigTailCallOpt = FALSE;
UINT EnvConfigTailCallOpt = 0;
BOOL HaveEnvConfigTailCallMax = FALSE;
UINT EnvConfigTailCallMax = 0;