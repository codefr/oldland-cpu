MAX_CYCLE_COUNT = 10000

connect("localhost", "36000")
loadelf("i_sdram")

expect_testpoints = {
	{ TP_USER, 0 },
	{ TP_USER, 1 },
	{ TP_SUCCESS, 0 },
}

return run_testpoints(expect_testpoints)