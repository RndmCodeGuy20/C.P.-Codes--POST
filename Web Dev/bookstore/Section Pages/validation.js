function validate() {
  var name = document.getElementById("fname");
  var last = document.getElementById("lname");
  var email = document.getElementById("E-mail");
  var cuid = document.getElementById("CuID");
  var pass = document.getElementById("pass");
  var passco = document.getElementById("passcon");

  var pattern_fname = /^[A-Za-z ]+$/;
  var pattern_lname = /^([A-Za-z ])+$/;
  var pattern_email = /^([a-z0-9\._]+)@([a-z]+).([a-z]{2,3})$/;
  var pattern_cuid = /^([C]+[U]+[S]+[T]+[I]+[D]+)-(\d\d)-[MF]-([a-z]+)/;
  var pattern_password = /^([A-Za-z]+).([A-Za-z]+).([0-9@#]+)/;
  if (name.value == "") {
    alert("Name is not Entered!!!!");
    name.style.border = "2px solid red";
    return false;
  } else {
    if (email.value == "") {
      alert("E-mail is not Entered!!!!");
      email.style.border = "2px solid red";
      return false;
    } else {
      if (pattern_fname.test(name.value)) {
        if (pattern_email.test(email.value)) {
          if (pattern_cuid.test(cuid.value)) {
            if (pattern_password.test(pass.value)) {
              if (passco.value == pass.value) {
                alert("DATA SUBMITTED!!!!");
                return true;
              } else {
                alert("Password NOT Matching!!!!");
                passco.style.border = "2px solid red";
                return false;
              }
            } else {
              alert("Password NOT in Format!!!!");
              pass.style.border = "2px solid red";
              return false;
            }
          } else {
            alert("Customer ID NOT in Format!!!!");
            cuid.style.border = "2px solid red";
            return false;
          }
        } else {
          alert("E-mail NOT in Format!!!!");
          email.style.border = "2px solid red";
          return false;
        }
      } else {
        alert("Name NOT in Format!!!!");
        name.style.border = "2px solid red";
        return false;
      }
    }
  }
}
