namespace llvm.api

public class LLVM {
    public LLVM() {}
    public void initializeAllTargetInfos() {}
    public void initializeAllTargets() {}
    public void initializeAllTargetMCs() {}
    public void initializeAllAsmParsers() {}
    public void initializeAllAsmPrinters() {}
    public void shutdown() {}
    public void contextCreate(fly.mem.Ptr ctx) {}
    public void contextDispose(const fly.mem.Ptr ctx) {}
    public void getGlobalContext(fly.mem.Ptr ctx) {}
    public void moduleCreateWithNameInContext(const string name, const fly.mem.Ptr ctx, fly.mem.Ptr mod) {}
    public void disposeModule(const fly.mem.Ptr mod) {}
    public void setDataLayout(const fly.mem.Ptr mod, const string layout) {}
    public void setTarget(const fly.mem.Ptr mod, const string triple) {}
    public void printModuleToFile(const fly.mem.Ptr mod, const string filename) {}
    public void writeBitcodeToFile(const fly.mem.Ptr mod, const string path) {}
    public void verifyModule(const fly.mem.Ptr mod, bool ok) {}
    public void int1TypeInContext(const fly.mem.Ptr ctx, fly.mem.Ptr ty) {}
    public void int8TypeInContext(const fly.mem.Ptr ctx, fly.mem.Ptr ty) {}
    public void int16TypeInContext(const fly.mem.Ptr ctx, fly.mem.Ptr ty) {}
    public void int32TypeInContext(const fly.mem.Ptr ctx, fly.mem.Ptr ty) {}
    public void int64TypeInContext(const fly.mem.Ptr ctx, fly.mem.Ptr ty) {}
    public void intTypeInContext(const fly.mem.Ptr ctx, const int bits, fly.mem.Ptr ty) {}
    public void floatTypeInContext(const fly.mem.Ptr ctx, fly.mem.Ptr ty) {}
    public void doubleTypeInContext(const fly.mem.Ptr ctx, fly.mem.Ptr ty) {}
    public void voidTypeInContext(const fly.mem.Ptr ctx, fly.mem.Ptr ty) {}
    public void pointerType(const fly.mem.Ptr elemTy, const int addrSpace, fly.mem.Ptr ty) {}
    public void arrayType(const fly.mem.Ptr elemTy, const int count, fly.mem.Ptr ty) {}
    public void functionType(const fly.mem.Ptr retTy, const fly.mem.Ptr paramTypes, const int paramCount, const bool isVarArg, fly.mem.Ptr ty) {}
    public void structTypeInContext(const fly.mem.Ptr ctx, const fly.mem.Ptr elemTypes, const int elemCount, const bool packed, fly.mem.Ptr ty) {}
    public void structCreateNamed(const fly.mem.Ptr ctx, const string name, fly.mem.Ptr ty) {}
    public void structSetBody(const fly.mem.Ptr ty, const fly.mem.Ptr elemTypes, const int elemCount, const bool packed) {}
    public void addFunction(const fly.mem.Ptr mod, const string name, const fly.mem.Ptr fnTy, fly.mem.Ptr fn) {}
    public void getNamedFunction(const fly.mem.Ptr mod, const string name, fly.mem.Ptr fn) {}
    public void getParam(const fly.mem.Ptr fn, const int index, fly.mem.Ptr param) {}
    public void setValueName2(const fly.mem.Ptr val, const string name) {}
    public void setLinkage(const fly.mem.Ptr val, const int linkage) {}
    public void setVisibility(const fly.mem.Ptr val, const int visibility) {}
    public void typeOf(const fly.mem.Ptr val, fly.mem.Ptr ty) {}
    public void appendBasicBlockInContext(const fly.mem.Ptr ctx, const fly.mem.Ptr fn, const string name, fly.mem.Ptr bb) {}
    public void getInsertBlock(const fly.mem.Ptr builder, fly.mem.Ptr bb) {}
    public void getBasicBlockParent(const fly.mem.Ptr bb, fly.mem.Ptr fn) {}
    public void createBuilderInContext(const fly.mem.Ptr ctx, fly.mem.Ptr builder) {}
    public void disposeBuilder(const fly.mem.Ptr builder) {}
    public void positionBuilderAtEnd(const fly.mem.Ptr builder, const fly.mem.Ptr bb) {}
    public void positionBuilderBefore(const fly.mem.Ptr builder, const fly.mem.Ptr instr) {}
    public void buildAdd(const fly.mem.Ptr b, const fly.mem.Ptr lhs, const fly.mem.Ptr rhs, const string name, fly.mem.Ptr v) {}
    public void buildSub(const fly.mem.Ptr b, const fly.mem.Ptr lhs, const fly.mem.Ptr rhs, const string name, fly.mem.Ptr v) {}
    public void buildMul(const fly.mem.Ptr b, const fly.mem.Ptr lhs, const fly.mem.Ptr rhs, const string name, fly.mem.Ptr v) {}
    public void buildSDiv(const fly.mem.Ptr b, const fly.mem.Ptr lhs, const fly.mem.Ptr rhs, const string name, fly.mem.Ptr v) {}
    public void buildUDiv(const fly.mem.Ptr b, const fly.mem.Ptr lhs, const fly.mem.Ptr rhs, const string name, fly.mem.Ptr v) {}
    public void buildSRem(const fly.mem.Ptr b, const fly.mem.Ptr lhs, const fly.mem.Ptr rhs, const string name, fly.mem.Ptr v) {}
    public void buildFAdd(const fly.mem.Ptr b, const fly.mem.Ptr lhs, const fly.mem.Ptr rhs, const string name, fly.mem.Ptr v) {}
    public void buildFSub(const fly.mem.Ptr b, const fly.mem.Ptr lhs, const fly.mem.Ptr rhs, const string name, fly.mem.Ptr v) {}
    public void buildFMul(const fly.mem.Ptr b, const fly.mem.Ptr lhs, const fly.mem.Ptr rhs, const string name, fly.mem.Ptr v) {}
    public void buildFDiv(const fly.mem.Ptr b, const fly.mem.Ptr lhs, const fly.mem.Ptr rhs, const string name, fly.mem.Ptr v) {}
    public void buildNeg(const fly.mem.Ptr b, const fly.mem.Ptr v, const string name, fly.mem.Ptr result) {}
    public void buildFNeg(const fly.mem.Ptr b, const fly.mem.Ptr v, const string name, fly.mem.Ptr result) {}
    public void buildAnd(const fly.mem.Ptr b, const fly.mem.Ptr lhs, const fly.mem.Ptr rhs, const string name, fly.mem.Ptr v) {}
    public void buildOr(const fly.mem.Ptr b, const fly.mem.Ptr lhs, const fly.mem.Ptr rhs, const string name, fly.mem.Ptr v) {}
    public void buildXor(const fly.mem.Ptr b, const fly.mem.Ptr lhs, const fly.mem.Ptr rhs, const string name, fly.mem.Ptr v) {}
    public void buildShl(const fly.mem.Ptr b, const fly.mem.Ptr lhs, const fly.mem.Ptr rhs, const string name, fly.mem.Ptr v) {}
    public void buildLShr(const fly.mem.Ptr b, const fly.mem.Ptr lhs, const fly.mem.Ptr rhs, const string name, fly.mem.Ptr v) {}
    public void buildAShr(const fly.mem.Ptr b, const fly.mem.Ptr lhs, const fly.mem.Ptr rhs, const string name, fly.mem.Ptr v) {}
    public void buildICmp(const fly.mem.Ptr b, const int pred, const fly.mem.Ptr lhs, const fly.mem.Ptr rhs, const string name, fly.mem.Ptr v) {}
    public void buildFCmp(const fly.mem.Ptr b, const int pred, const fly.mem.Ptr lhs, const fly.mem.Ptr rhs, const string name, fly.mem.Ptr v) {}
    public void buildAlloca(const fly.mem.Ptr b, const fly.mem.Ptr ty, const string name, fly.mem.Ptr v) {}
    public void buildLoad2(const fly.mem.Ptr b, const fly.mem.Ptr ty, const fly.mem.Ptr ptr, const string name, fly.mem.Ptr v) {}
    public void buildStore(const fly.mem.Ptr b, const fly.mem.Ptr val, const fly.mem.Ptr ptr) {}
    public void buildGEP2(const fly.mem.Ptr b, const fly.mem.Ptr ty, const fly.mem.Ptr ptr, const fly.mem.Ptr indices, const int numIndices, const string name, fly.mem.Ptr v) {}
    public void buildStructGEP2(const fly.mem.Ptr b, const fly.mem.Ptr ty, const fly.mem.Ptr ptr, const int idx, const string name, fly.mem.Ptr v) {}
    public void buildMemCpy(const fly.mem.Ptr b, const fly.mem.Ptr dst, const int dstAlign, const fly.mem.Ptr src, const int srcAlign, const fly.mem.Ptr size, fly.mem.Ptr v) {}
    public void buildTrunc(const fly.mem.Ptr b, const fly.mem.Ptr val, const fly.mem.Ptr destTy, const string name, fly.mem.Ptr v) {}
    public void buildZExt(const fly.mem.Ptr b, const fly.mem.Ptr val, const fly.mem.Ptr destTy, const string name, fly.mem.Ptr v) {}
    public void buildSExt(const fly.mem.Ptr b, const fly.mem.Ptr val, const fly.mem.Ptr destTy, const string name, fly.mem.Ptr v) {}
    public void buildFPToSI(const fly.mem.Ptr b, const fly.mem.Ptr val, const fly.mem.Ptr destTy, const string name, fly.mem.Ptr v) {}
    public void buildSIToFP(const fly.mem.Ptr b, const fly.mem.Ptr val, const fly.mem.Ptr destTy, const string name, fly.mem.Ptr v) {}
    public void buildFPExt(const fly.mem.Ptr b, const fly.mem.Ptr val, const fly.mem.Ptr destTy, const string name, fly.mem.Ptr v) {}
    public void buildFPTrunc(const fly.mem.Ptr b, const fly.mem.Ptr val, const fly.mem.Ptr destTy, const string name, fly.mem.Ptr v) {}
    public void buildBitCast(const fly.mem.Ptr b, const fly.mem.Ptr val, const fly.mem.Ptr destTy, const string name, fly.mem.Ptr v) {}
    public void buildPointerCast(const fly.mem.Ptr b, const fly.mem.Ptr val, const fly.mem.Ptr destTy, const string name, fly.mem.Ptr v) {}
    public void buildRet(const fly.mem.Ptr b, const fly.mem.Ptr val, fly.mem.Ptr v) {}
    public void buildRetVoid(const fly.mem.Ptr b, fly.mem.Ptr v) {}
    public void buildBr(const fly.mem.Ptr b, const fly.mem.Ptr dest, fly.mem.Ptr v) {}
    public void buildCondBr(const fly.mem.Ptr b, const fly.mem.Ptr cond, const fly.mem.Ptr thenBB, const fly.mem.Ptr elseBB, fly.mem.Ptr v) {}
    public void buildSwitch(const fly.mem.Ptr b, const fly.mem.Ptr val, const fly.mem.Ptr defaultBB, const int numCases, fly.mem.Ptr v) {}
    public void addCase(const fly.mem.Ptr switchInstr, const fly.mem.Ptr onVal, const fly.mem.Ptr dest) {}
    public void buildPhi(const fly.mem.Ptr b, const fly.mem.Ptr ty, const string name, fly.mem.Ptr v) {}
    public void addIncoming(const fly.mem.Ptr phi, const fly.mem.Ptr vals, const fly.mem.Ptr blocks, const int count) {}
    public void buildCall2(const fly.mem.Ptr b, const fly.mem.Ptr fnTy, const fly.mem.Ptr fn, const fly.mem.Ptr args, const int numArgs, const string name, fly.mem.Ptr v) {}
    public void buildUnreachable(const fly.mem.Ptr b, fly.mem.Ptr v) {}
    public void constInt(const fly.mem.Ptr intTy, const long val, const bool signExtend, fly.mem.Ptr v) {}
    public void constReal(const fly.mem.Ptr realTy, const double val, fly.mem.Ptr v) {}
    public void constNull(const fly.mem.Ptr ty, fly.mem.Ptr v) {}
    public void constPointerNull(const fly.mem.Ptr ty, fly.mem.Ptr v) {}
    public void constStringInContext(const fly.mem.Ptr ctx, const string str, const bool nullTerminated, fly.mem.Ptr v) {}
    public void constStructInContext(const fly.mem.Ptr ctx, const fly.mem.Ptr vals, const int numVals, const bool packed, fly.mem.Ptr v) {}
    public void constArray(const fly.mem.Ptr elemTy, const fly.mem.Ptr vals, const int numVals, fly.mem.Ptr v) {}
    public void addGlobal(const fly.mem.Ptr mod, const fly.mem.Ptr ty, const string name, fly.mem.Ptr v) {}
    public void getNamedGlobal(const fly.mem.Ptr mod, const string name, fly.mem.Ptr v) {}
    public void setInitializer(const fly.mem.Ptr global, const fly.mem.Ptr val) {}
    public void setGlobalConstant(const fly.mem.Ptr global, const bool isConst) {}
    public void getDefaultTargetTriple(fly.mem.Ptr triple) {}
    public void getTargetFromTriple(const string triple, fly.mem.Ptr target, bool ok) {}
    public void createTargetMachine(const fly.mem.Ptr target, const string triple, const string cpu, const string features, const int optLevel, const int reloc, const int codeModel, fly.mem.Ptr tm) {}
    public void disposeTargetMachine(const fly.mem.Ptr tm) {}
    public void createTargetDataLayout(const fly.mem.Ptr tm, fly.mem.Ptr dl) {}
    public void setModuleDataLayout(const fly.mem.Ptr mod, const fly.mem.Ptr dl) {}
    public void targetMachineEmitToFile(const fly.mem.Ptr tm, const fly.mem.Ptr mod, const string filename, const int emitType, bool ok) {}
    public void createPassManager(fly.mem.Ptr pm) {}
    public void runPassManager(const fly.mem.Ptr pm, const fly.mem.Ptr mod, bool changed) {}
    public void disposePassManager(const fly.mem.Ptr pm) {}
    public void lookupIntrinsicID(const string name, int id) {}
    public void getIntrinsicDeclaration(const fly.mem.Ptr mod, const int id, const fly.mem.Ptr paramTypes, const int paramCount, fly.mem.Ptr fn) {}
    public void disposeMessage(const fly.mem.Ptr msg) {}
    public void isNull(const fly.mem.Ptr val, bool result) {}
    public void isUndef(const fly.mem.Ptr val, bool result) {}
}

