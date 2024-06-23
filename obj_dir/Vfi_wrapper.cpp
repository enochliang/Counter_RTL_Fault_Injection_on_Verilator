// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vfi_wrapper.h"
#include "Vfi_wrapper__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vfi_wrapper::Vfi_wrapper(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vfi_wrapper__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , _done{vlSymsp->TOP._done}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vfi_wrapper::Vfi_wrapper(const char* _vcname__)
    : Vfi_wrapper(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vfi_wrapper::~Vfi_wrapper() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vfi_wrapper___024root___eval_debug_assertions(Vfi_wrapper___024root* vlSelf);
#endif  // VL_DEBUG
void Vfi_wrapper___024root___eval_static(Vfi_wrapper___024root* vlSelf);
void Vfi_wrapper___024root___eval_initial(Vfi_wrapper___024root* vlSelf);
void Vfi_wrapper___024root___eval_settle(Vfi_wrapper___024root* vlSelf);
void Vfi_wrapper___024root___eval(Vfi_wrapper___024root* vlSelf);

void Vfi_wrapper::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfi_wrapper::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vfi_wrapper___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vfi_wrapper___024root___eval_static(&(vlSymsp->TOP));
        Vfi_wrapper___024root___eval_initial(&(vlSymsp->TOP));
        Vfi_wrapper___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vfi_wrapper___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vfi_wrapper::eventsPending() { return false; }

uint64_t Vfi_wrapper::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vfi_wrapper::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vfi_wrapper___024root___eval_final(Vfi_wrapper___024root* vlSelf);

VL_ATTR_COLD void Vfi_wrapper::final() {
    Vfi_wrapper___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vfi_wrapper::hierName() const { return vlSymsp->name(); }
const char* Vfi_wrapper::modelName() const { return "Vfi_wrapper"; }
unsigned Vfi_wrapper::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vfi_wrapper::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vfi_wrapper___024root__trace_init_top(Vfi_wrapper___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vfi_wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfi_wrapper___024root*>(voidSelf);
    Vfi_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vfi_wrapper___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vfi_wrapper___024root__trace_register(Vfi_wrapper___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vfi_wrapper::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vfi_wrapper::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vfi_wrapper___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
