use rand::random;

#[no_mangle]
pub extern fn random_number_() -> i32 {
  let tuple = random::<i32>();
  tuple
}
