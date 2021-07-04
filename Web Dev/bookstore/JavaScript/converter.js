function clr() {
  document.getElementById("rupee").value = "";
}

function calculate(val) {
  var r = document.getElementById("rupee").value;
  if (val == 1) {
    document.getElementById("dollar").value = r * 0.013;
  } else {
    document.getElementById("pounds").value = r * 0.0098;
  }
}
