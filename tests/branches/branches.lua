require "common"

MAX_CYCLE_COUNT = 1000

connect_and_load("branches")

expect_testpoints = {
	{ TP_SUCCESS, 0, function () regs() end }
}

return step_testpoints(expect_testpoints)