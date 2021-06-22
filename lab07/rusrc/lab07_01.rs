mod lib;

mod lab07_01 {
    use std::io::stdin;

    use crate::lib::lab07_01::lab07_01;

    pub(crate) fn main() {
        lab07_01::display_menu();
        loop {
            let mut input_str = String::new();
            println!("Enter your choice(1-5):");
            stdin().read_line(&mut input_str).expect("Number Wrong");
            let your_choice = match input_str.trim().parse::<i64>() {
                Ok(num) => { num }
                Err(error) => { 0 }
            };
            input_str.clear();
            println!("Enter your two integer numbers:");
            stdin().read_line(&mut input_str).expect("Number Wrong");
            let mut input_str = input_str.trim().split(" ");
            let a = input_str.next().expect("no next").parse::<i64>().expect("Do not match i64");
            let b = input_str.next().expect("no next").parse::<i64>().expect("Do not match i64");
            println!();
            match your_choice {
                _ => {}//TODO
            }
            println!("\nPress y or Y to continue:");
            let mut input_str = String::new();
            stdin().read_line(&mut input_str).expect("Number Wrong");
            let confirm = match input_str.trim().parse::<char>() {
                Ok(ch) => { ch }
                Err(error) => { 'a' }
            };
            match confirm {
                'y' | 'Y' => {}
                _ => { return; }
            }
        }
    }
}

fn main() {
    lab07_01::main();
}