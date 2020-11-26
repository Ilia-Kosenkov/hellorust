// Import dependencies
extern crate libc;
extern crate rand;

// Modules are other .rs source files
mod hello;
mod random;
mod threads;

// Export functions called by R
pub use hello::string_from_rust_;
pub use random::random_number_;
pub use threads::run_threads_;
