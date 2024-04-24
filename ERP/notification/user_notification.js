setInterval(function() {
    user_notification();
}, 300000); // 60 * 5
user_notification();

function user_notification() {
    var role_code = $("#encrpt_role_code").val();
    $.ajax({
        url: "../notification/db_user_notification.php?role_code=" + role_code + "&oper=GET_USER_NOTIFICATION",
        type: "get",
        success: function(response) {
            var res1 = JSON.parse(response);
            if (res1.TYPE == "SESSION_OUT") {
                window.location.replace(res1.MESSAGE);
            } else if (res1.TYPE == "NOTIFICATION") {
                $("#liNotification").html(res1.MESSAGE);
            }
        },
        error: function() {
            toastr.error('Unable to process please contact support');
        }
    });
}