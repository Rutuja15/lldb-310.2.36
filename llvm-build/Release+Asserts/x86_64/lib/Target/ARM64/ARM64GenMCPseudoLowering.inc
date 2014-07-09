/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Pseudo-instruction MC lowering Source Fragment                              *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

bool ARM64AsmPrinter::
emitPseudoExpansionLowering(MCStreamer &OutStreamer,
                            const MachineInstr *MI) {
  switch (MI->getOpcode()) {
    default: return false;
    case ARM64::STRBBpost_isel: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM64::STRBBpost);
      // Operand: Rt
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: addr
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: idx
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM64::STRDpost_isel: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM64::STRDpost);
      // Operand: Rt
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: addr
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: idx
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM64::STRHHpost_isel: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM64::STRHHpost);
      // Operand: Rt
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: addr
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: idx
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM64::STRSpost_isel: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM64::STRSpost);
      // Operand: Rt
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: addr
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: idx
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM64::STRWpost_isel: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM64::STRWpost);
      // Operand: Rt
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: addr
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: idx
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM64::STRXpost_isel: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM64::STRXpost);
      // Operand: Rt
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: addr
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: idx
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
  }
  return true;
}

