extern "C" {
    pub fn utf8_to_codepoint(
        u: *const ::std::os::raw::c_uchar,
        lenptr: *mut ::std::os::raw::c_int,
    ) -> ::std::os::raw::c_uint;
}

mod ass3_03 {
    use crate::utf8_to_codepoint;

    pub(crate) fn main() {
        let s = 0u8;
        let svec =String::from("CC,我滴超人");
        let mut ch = &svec.as_bytes()[0] as *const u8;
        let mut num = 3;
        let mut num_ptr = &mut num as *mut i32;
        unsafe {
            let x = utf8_to_codepoint(ch, num_ptr);
            println!("x {}", x);
        }
        // TODO
    }
}

fn main() {
    ass3_03::main();
}