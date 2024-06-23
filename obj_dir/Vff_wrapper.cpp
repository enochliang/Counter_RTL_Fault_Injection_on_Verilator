// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vff_wrapper.h"
#include "Vff_wrapper__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vff_wrapper::Vff_wrapper(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vff_wrapper__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , _done{vlSymsp->TOP._done}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vff_wrapper::Vff_wrapper(const char* _vcname__)
    : Vff_wrapper(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vff_wrapper::~Vff_wrapper() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vff_wrapper___024root___eval_debug_assertions(Vff_wrapper___024root* vlSelf);
#endif  // VL_DEBUG
void Vff_wrapper___024root___eval_static(Vff_wrapper___024root* vlSelf);
void Vff_wrapper___024root___eval_initial(Vff_wrapper___024root* vlSelf);
void Vff_wrapper___024root___eval_settle(Vff_wrapper___024root* vlSelf);
void Vff_wrapper___024root___eval(Vff_wrapper___024root* vlSelf);

void Vff_wrapper::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vff_wrapper::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vff_wrapper___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vff_wrapper___024root___eval_static(&(vlSymsp->TOP));
        Vff_wrapper___024root___eval_initial(&(vlSymsp->TOP));
        Vff_wrapper___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vff_wrapper___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vff_wrapper::eventsPending() { return false; }

uint64_t Vff_wrapper::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vff_wrapper::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vff_wrapper___024root___eval_final(Vff_wrapper___024root* vlSelf);

VL_ATTR_COLD void Vff_wrapper::final() {
    Vff_wrapper___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vff_wrapper::hierName() const { return vlSymsp->name(); }
const char* Vff_wrapper::modelName() const { return "Vff_wrapper"; }
unsigned Vff_wrapper::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vff_wrapper::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vff_wrapper___024root__trace_init_top(Vff_wrapper___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vff_wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vff_wrapper___024root*>(voidSelf);
    Vff_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vff_wrapper___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vff_wrapper___024root__trace_register(Vff_wrapper___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vff_wrapper::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vff_wrapper::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vff_wrapper___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
