create_clock -period 10.000 -name clk [get_ports clk]


set_property PACKAGE_PIN H16 [get_ports clk]
set_property PACKAGE_PIN L20 [get_ports enable]
set_property PACKAGE_PIN L19 [get_ports rst]

set_property PACKAGE_PIN N16 [get_ports led]

set_property IOSTANDARD LVCMOS18 [get_ports clk]
set_property IOSTANDARD LVCMOS18 [get_ports enable]
set_property IOSTANDARD LVCMOS18 [get_ports led]
set_property IOSTANDARD LVCMOS18 [get_ports rst]

set_property PACKAGE_PIN R14 [get_ports led_enable]
set_property PACKAGE_PIN P14 [get_ports led_finish]
set_property IOSTANDARD LVCMOS18 [get_ports led_enable]
set_property IOSTANDARD LVCMOS18 [get_ports led_finish]

set_property PACKAGE_PIN L20 [get_ports btn]
set_property IOSTANDARD LVCMOS18 [get_ports btn]
