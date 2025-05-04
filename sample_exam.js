function main() {
  var x = 0;

  function sub1() {
    var x = 10;
    sub2();
    console.log(x);
  }

  function sub2() {
    x = x + 15;
  }

  sub2();
  sub1();
  console.log(x);
}

main();
