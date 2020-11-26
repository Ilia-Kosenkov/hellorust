context("Testing rust code")

test_that("Rust string is returned correctly", {
  expect_equal(
    hello(), 
    # This bypasses some limitations, constructing unicode string from codes
    stringi::stri_unescape_unicode("Hello \\u041C\\u0438\\u0440 !"))
})

test_that("Rust rnadom numbers are random", {
  expect_false(random_number() == random_number())
})