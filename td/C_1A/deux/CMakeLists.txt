cmake_minimum_required(VERSION 2.6)
project(deux)

file(
	GLOB_RECURSE
	source_files
	../src/*
	)

add_executable(
	../bin/deux
	${source_files}
	)
