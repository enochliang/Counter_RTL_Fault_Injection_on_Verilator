#include <iostream>
#include <verilated.h>
#include "verilated_vcd_c.h"
#include "Vfi_wrapper.h"

int main(int argc, char **argv)
{
    // Construct context object, design object, and trace object
    VerilatedContext *m_contextp = new VerilatedContext; // Context
    VerilatedVcdC *m_tracep = new VerilatedVcdC;         // Trace
    Vfi_wrapper *m_duvp = new Vfi_wrapper;                 // Design
    // Trace configuration
    m_contextp->traceEverOn(true);     // Turn on trace switch in context
    m_duvp->trace(m_tracep, 3);        // Set depth to 3
    m_tracep->open("sim.vcd"); // Open the VCD file to store data
    // Write data to the waveform file
    unsigned int time = 0;
    unsigned int _done = 0;
    
    // Initial State
    m_duvp->clk = 0;
    m_duvp->rst = 1;
    m_duvp->eval();
    m_tracep->dump(m_contextp->time());
    m_contextp->timeInc(1);

    //m_duvp->rst = 0;
    //m_duvp->eval();
    //time++;
    //m_duvp->rst = 1;
    //m_duvp->eval();

    
    while (_done != 1)
    {
        // Refresh circuit state
	if (m_duvp->clk == 0){
            m_duvp->clk = 1;
	}else{
	    m_duvp->clk = 0;
	}
	time++;
	_done = m_duvp->_done;
        m_duvp->eval();
        // Dump data
        m_tracep->dump(m_contextp->time());
        // Increase simulation time
        m_contextp->timeInc(1);
    }
    // Remember to close the trace object to save data in the file
    m_tracep->close();
    // Free memory
    delete m_duvp;
    return 0;
}
