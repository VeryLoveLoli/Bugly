import XCTest

import BuglyTests

var tests = [XCTestCaseEntry]()
tests += BuglyTests.allTests()
XCTMain(tests)
