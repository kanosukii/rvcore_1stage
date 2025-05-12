######################################################################
#
# DESCRIPTION: Verilator Example: Small Makefile
#
# This calls the object directory makefile.  That allows the objects to
# be placed in the "current directory" which simplifies the Makefile.
#
# This file ONLY is placed under the Creative Commons Public Domain, for
# any use, without warranty, 2020 by Wilson Snyder.
# SPDX-License-Identifier: CC0-1.0
#
######################################################################
# Check for sanity to avoid later confusion

ifneq ($(words $(CURDIR)),1)
 $(error Unsupported: GNU Make cannot build in directories containing spaces, build elsewhere: '$(CURDIR)')
endif

######################################################################

# This is intended to be a minimal example.  Before copying this to start a
# real project, it is better to start with a more complete example,
# e.g. examples/make_tracing_c.

# If $VERILATOR_ROOT isn't in the environment, we assume it is part of a
# package install, and verilator is in your path. Otherwise find the
# binary relative to $VERILATOR_ROOT (such as when inside the git sources).
ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
VERILATOR_COVERAGE = verilator_coverage
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
VERILATOR_COVERAGE = $(VERILATOR_ROOT)/bin/verilator_coverage
endif

VERILATOR_FLAGS += -cc --exe
VERILATOR_FLAGS += -x-assign fast
VERILATOR_FLAGS += -Wall
VERILATOR_FLAGS += --trace
VERILATOR_FLAGS += --public
VERILATOR_FLAGS += --coverage
VERILATOR_FLAGS += --Wno-UNUSEDSIGNAL
#VERILATOR_FLAGS += --build
VSRCS = $(shell find $(abspath ./vcode) -name "*.v")
VERILATOR_INPUT = $(VSRCS) sim_main.cpp
default:
	@echo "-- Verilator"
	@echo "-- VERILATE & BUILD --------"

	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_INPUT) --top-module top
	@echo "--Verilator--"
	@echo "--Build--"
	$(MAKE) -j -C obj_dir -f ../Makefile_obj
	@echo "--Build--"
	@echo "-- RUN ---------------------"
	@rm -rf logs
	@mkdir -p logs
	obj_dir/Vtop +trace

	@rm -rf logs/annotated
	$(VERILATOR_COVERAGE) --annotate logs/annotated logs/coverage.dat
#	obj_dir/Vtop
	@echo "-- DONE --------------------"
	gtkwave ./logs/vlt_dump.vcd &
######################################################################

maintainer-copy::
clean mostlyclean distclean maintainer-clean::
	-rm -rf obj_dir *.log *.dmp *.vpd core logs coverage.dat

