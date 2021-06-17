mod lab02_02;

#[cfg(test)]
mod tests {
    mod lab02_02 {
        use crate::lab02_02 as outer;
        use crate::lab02_02::lab02_02 as moder;

        #[test]
        fn exploration() {
            outer::lab02_02_pubfunc();
            moder::lab02_02();
        }
    }
}