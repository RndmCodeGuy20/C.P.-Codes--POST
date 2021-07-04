function clr() {
  document.getElementById("box").value = "";
}

function data(val) {
  document.getElementById("box").value += val;
}

function calculate() {
  var x = document.getElementById("box").value;
  document.getElementById("box").value = eval(x);
}
/*
<style>
input[type="button"]{
border-radius:10px;
border-color:#0b03fc;
background-color:#0ffc03;
color:black;
width:100%;
}

input[type="button"]:hover{
background-color:#0b03fc;
}
input[type="text"]{
border-radius:10px;
}
</style>*/