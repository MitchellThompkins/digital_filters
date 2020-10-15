# Table of Contents
[[_TOC_]]

# Introduction
**This is a WIP**

This is a collection of common filters implemented in C++ which are intended to
be used on embedded systems.

They have the advantage that they:
* Do not rely on the standard library
* Do not dynamically allocate any memory
* Can be used by only specifying the filter parameters
* Filter coefficients are solved at compile-time

# Build Requirements
* C++14 for compile time coefficient calculation
* C++11 is calculated at run time

# Usecase Assumptions
* The user knows the sample rate of the filter
* The filter is called at a consistent rate

# IIR Filters
* Critically damped _n_-order LPF
* Butterworth
* Chebyshev Type I
* Chebyshev Type II
* State variable
* Band-stop
* Elliptic
* Bessel
* Gaussian
* Custom Coefficients

# FIR Filters

# Building

# Testing

# Filter Theory
