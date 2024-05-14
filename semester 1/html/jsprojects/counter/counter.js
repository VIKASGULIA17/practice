let count=0;
let value=document.querySelector("#num");
let btns=document.querySelectorAll(".btn");
btns.forEach(function (item) {
    item.addEventListener("click", function (e) {
        const styles=e.currentTarget.classList;
        if (styles.contains("decrease")){
            count++;
        }
        value.textContent =count ;
    });
});