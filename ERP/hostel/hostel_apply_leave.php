   
          <!DOCTYPE html>
<html>
    <head>
        	
	<meta charset="UTF-8"/>
    <title>~EST Campus~</title><link rel="icon" type="image/png"sizes="36x36" href="../images/android-icon-36x36.png">			
    <link rel="icon" type="image/png" sizes="36x36" href="../images/android-icon-36x36.png" />
    <meta content='width=device-width, initial-scale=1, maximum-scale=1, user-scalable=no' name='viewport'/>
    <link href="../tools/bootstrap-3.3.4/css/bootstrap.min.css" rel="stylesheet" type="text/css" />
    <!-- Validator -->
	<link href="../css/bootstrapValidator.css" rel="stylesheet" type="text/css"/>
	<!-- font-awesome -->
	
    <link href="../tools/font-awesome-4.3.0/css/font-awesome.min.css" rel="stylesheet" type="text/css" />
    <!-- Ionicons -->
    <link href="../tools/ionicons-2.0.1/css/ionicons.min.css" rel="stylesheet" type="text/css" />
    <!--Bootstrap Multiselect-->
	<link href="../css/bootstrap-multiselect.css" rel="stylesheet" type="text/css"/>
	
    <!-- Date Picker -->
    <link href="../css/datepicker/datepicker3.css" rel="stylesheet" type="text/css" />
    <link href="../tools/bootstrap-datetimepicker/css/bootstrap-datetimepicker.min.css" rel="stylesheet" type="text/css" />
    <!-- Daterange picker -->
    <link href="../css/daterangepicker/daterangepicker-bs3.css" rel="stylesheet" type="text/css" />
    <!--Time Picker-->
    <link href="../css/timepicker/bootstrap-timepicker.css" rel="stylesheet" type="text/css" />
    <!-- Theme style -->
    <link href="../css/AdminLTE.css" rel="stylesheet" type="text/css" />
	<!--Sweet Alert-->
    <link href="../tools/sweetalert/css/sweetalert.css" rel="stylesheet" type="text/css"/>
    <link href="../tools/sweet-alert/css/sweetalert2.min.css" type="text/css" rel="stylesheet"/>
    <!--Selectize-->
	<link href="../tools/selectize/css/selectize.bootstrap4.css" rel="stylesheet" type="text/css"/>
	
	<!--Jquery UI-->
	<link href="../tools/jquery-ui-1.11.4/jquery-ui.min.css" rel="stylesheet" type="text/css"/>
	<link href="../tools/jquery-ui-1.11.4/themes/redmond/jquery.ui.theme.css" rel="stylesheet" type="text/css"/>
	
	
	<!-- Bootstrap Datatable -->
    <link href="../css/datatables/dataTables.bootstrap.css" rel="stylesheet" type="text/css" />
    <link href="../css/datatables/dataTables.responsive.css" rel="stylesheet" type="text/css" />
    <link href="../tools/datatable/buttons.dataTables.min.css" type="text/css"/>
    
	<!--Toastr-->
	<link rel="stylesheet" type="text/css" href="../css/plugins/toastr/toastr.min.css" />
	
    <!-- Morris chart -->
    <link href="../css/morris/morris.css" rel="stylesheet" type="text/css" />
    <!-- jvectormap -->
    <link href="../css/jvectormap/jquery-jvectormap-1.2.2.css" rel="stylesheet" type="text/css" />
    <!-- bootstrap wysihtml5 - text editor -->
    <link href="../css/bootstrap-wysihtml5/bootstrap3-wysihtml5.min.css" rel="stylesheet" type="text/css" />
    <!-- fullCalendar -->
    <link href="../tools/fullcalendar-2.9.0/fullcalendar.css" rel="stylesheet" type="text/css" />
    <link href="../tools/fullcalendar-2.9.0/fullcalendar.print.css" rel="stylesheet" type="text/css" media="print"/>
    <!--Tool Tips-->
	<link href="../css/plugins/tooltip/tooltipster.css" rel="stylesheet"/>
	<link href="../css/plugins/tooltip/tooltipster-punk.css" rel="stylesheet"/>
	<!-- jstree -->
    <link rel="stylesheet" href="../tools/jstree/themes/default/style.min.css"/>
    <!--Jqgrid CSS-->
	<link rel="stylesheet" type="text/css" media="screen" href="../tools/jqGrid-4.6.0/css/ui.jqgrid.css" />
	<link rel="stylesheet" type="text/css" media="screen" href="../tools/jqGrid-4.6.0/css/ui.jqgrid-bootstarp.css" />
    <style>.datepicker{z-index:1200 !important;}</style>
    <link rel="stylesheet" href="../tools/flipclock/compiled/flipclock.css"/>
    <link href="../css/bootstrap-select.css" rel="stylesheet">
    <link href="../css/jquery.scrolling-tabs.min.css" rel="stylesheet"/>
    <link href="../tools/bootstrap-toggle-master/css/bootstrap-toggle.css" rel="stylesheet"/>
    <link href="../tools/assets/css/material-dashboard.css" rel="stylesheet" />
	<style>
		body > .header .logo {
		float: left;
		font-size: 20px;
		line-height: 42px;
		text-align: center;
		padding: 0px 0px;
		width: 220px;
		font-family: 'Kaushan Script', cursive;
		font-weight: 500;
		height: 50px;
		display: block;
	}
	</style>
        <style>
        	fieldset.scheduler-border {
			    border: 1px groove #000 !important;
			    padding: 0 1.4em 1.4em 1.4em !important;			    
			    -webkit-box-shadow:  0px 0px 0px 0px #000;
			            box-shadow:  0px 0px 0px 0px #000;
			}

			legend.scheduler-border {
			    font-size: 1.2em !important;
			    font-weight: bold !important;
			    text-align: center !important;
			    width:auto; /* Or auto */
			    padding:0 10px; /* To give a bit of padding on the left and right */
			    border-bottom:none;

			}	
			.datepicker{z-index:1151 !important;}
			.alignCenter{
				text-align: center;
			}		
        </style>            
    </head>
    <body class="skin-blue">
        <!-- header logo: style can be found in header.less -->
        <header class="header">
            		<input type="hidden" id="encrpt_role_code" name="encrpt_role_code" value="M1Z5SEVJM2dub0NWWE5GZy82dHh2QT09" />
		<a href="../dashboard/dashboard.php?role_code=M1Z5SEVJM2dub0NWWE5GZy82dHh2QT09" class="logo">
            <!-- Add the class icon to your logo image or logo icon to add the margining -->
            <img src="/estcampus/images/logo/SITBBS_logo.jpg" title="SiliconTech is a Unit of Silicon University" alt="SiliconTech is a Unit of Silicon University"/>
            <!--<font size="5px">EST Campus</font>-->
        </a>
        <!-- Header Navbar: style can be found in header.less -->
        <nav class="navbar navbar-static-top" role="navigation">
            <!-- Sidebar toggle button-->
            <a href="#" class="navbar-btn sidebar-toggle" data-toggle="offcanvas" role="button">
                <span class="sr-only">Toggle navigation</span>
                <span class="icon-bar"></span>
                <span class="icon-bar"></span>
                <span class="icon-bar"></span>
            </a>
            <font size="6px" color="#FFFFFF" class="">SiliconTech is a Unit of Silicon University</font>
            <div class="navbar-right">
                <ul class="nav navbar-nav">
		    <!-- Notifications: style can be found in dropdown.less -->
                    <li class="dropdown notifications-menu" id="liNotification">
                        
                    </li>
                  							<li> <a href="../include/bu_sso.php?service_type=GRIEVANCE" id="employeeLink" class="dropdown-toggle row-bg-toggle"  target="_blank"> <i class="fa fa-graduation-cap"></i> <span>Grievance</span> </a></li>	
						                    <!-- User Account: style can be found in dropdown.less -->
                    <li class="dropdown user user-menu">
                        <a href="#" class="dropdown-toggle" data-toggle="dropdown">
                            <!--<i class="glyphicon glyphicon-user"></i>-->
                            <img src="https://erp.silicon.ac.in:443/uploads/student_photo/SITBBS_B.TECH_2023-2027/CSE/23BCSF72/23BCSF72_16X16.jpg" style="width:20px;height:20px" alt="User Image" />
                            <span>PRIYANSU KUMAR PANDA (Student) <i class="caret"></i></span>
                        </a>
                        <ul class="dropdown-menu" style="height: auto">
                            <!-- User image -->
                            <li class="user-header bg-light-blue">
                                <img src="https://erp.silicon.ac.in:443/uploads/student_photo/SITBBS_B.TECH_2023-2027/CSE/23BCSF72/23BCSF72_64X64.jpg" class="img-circle" alt="User Image" />
                                <p>
                                    PRIYANSU KUMAR PANDA<br />
                                    Student                                </p>
                            </li>
                            <!-- Menu Body -->
                            
                            <!-- Menu Footer-->
                            <li class="user-footer">
                            									<p>
									<a href="../dashboard/dashboard.php?role_code=d3ZPdXkyYWVMNVdZaDRSbzh1M0FXUT09" style="color: Black" target="_blank">
                                    	<i class="fa fa-user"></i>
                                    	Student Parent<br />
                                    </a>                             
                                </p>
								     
								                       	
                                <div class="pull-left">
                                    <a href="../users/account_settings.php?role_code=M1Z5SEVJM2dub0NWWE5GZy82dHh2QT09" class="btn btn-default btn-flat">
                                    	<i class="fa fa-cog"></i>
                                    	Account Settings
                                    </a>
                                </div>
                                <div class="pull-right">
                                    <a href="../signout.php" class="btn btn-default btn-flat">
                                    	<i class="fa fa-lock"></i>
                                    	Sign out
                                    </a>
                                </div>
                                
                            </li>
                        </ul>
                    </li>
                </ul>
            </div>
        </nav>

        </header>
        <div class="wrapper row-offcanvas row-offcanvas-left">
            <!-- Left side column. contains the logo and sidebar -->
            <aside class="left-side sidebar-offcanvas">
                <!-- sidebar: style can be found in sidebar.less -->
                <section class="sidebar">
                    	<!-- Sidebar user panel -->
    <div class="user-panel">
        <div class="pull-left info">
            <!--TO-DO-->
        </div>
    </div>
    <!-- sidebar menu: : style can be found in sidebar.less -->
<ul class="sidebar-menu">
	<li class="treeview active">
		<a href="#">
			<i class="fa fa-fw fa-hotel"></i><span>Hostel</span>
			<i class="fa fa-angle-left pull-right"></i>
		</a>
		<li class="treeview active" style="margin-left:20px">
			<a href="#">
				<i class="fa fa-fw fa-cog"></i><span>Activity</span>
				<i class="fa fa-angle-left pull-right"></i>
			</a>
			<ul class="treeview-menu">
				<li><a href="/estcampus/hostel/hostel_apply_leave.php?role_code=M1Z5SEVJM2dub0NWWE5GZy82dHh2QT09" style="font-weight:bold;font-size:15px">
	            <i class="fa fa-angle-double-right"></i> Leave</a></li>
				<li><a href="/estcampus/hostel/hostel_enrollment.php?role_code=M1Z5SEVJM2dub0NWWE5GZy82dHh2QT09" >
	            <i class="fa fa-angle-double-right"></i> Application</a></li>
			</ul>
		</li>
	</li>
	<li class="treeview">
		<a href="#">
			<i class="fa fa-cubes"></i><span>Academics</span>
			<i class="fa fa-angle-left pull-right"></i>
		</a>
		<li class="treeview" style="margin-left:20px">
			<a href="#">
				<i class="fa fa-wrench"></i><span>Planning</span>
				<i class="fa fa-angle-left pull-right"></i>
			</a>
			<ul class="treeview-menu">
				<li><a href="/estcampus/academics/student_elective_preference.php?role_code=M1Z5SEVJM2dub0NWWE5GZy82dHh2QT09" >
	            <i class="fa fa-angle-double-right"></i> Elective Preference</a></li>
			</ul>
		</li>
		<li class="treeview active" style="margin-left:20px">
			<a href="#">
				<i class="fa fa-futbol-o"></i><span>Activity</span>
				<i class="fa fa-angle-left pull-right"></i>
			</a>
			<ul class="treeview-menu">
				<li><a href="/estcampus/academics/student_registered_subjects.php?role_code=M1Z5SEVJM2dub0NWWE5GZy82dHh2QT09" >
		            <i class="fa fa-angle-double-right"></i> Allotted Subjects</a></li>
				<li><a href="/estcampus/academics/student_all_marks.php?role_code=M1Z5SEVJM2dub0NWWE5GZy82dHh2QT09" >
	            <i class="fa fa-angle-double-right"></i> All Mark</a></li>
				<li><a href="/estcampus/academics/raise_issue_by_student.php?role_code=M1Z5SEVJM2dub0NWWE5GZy82dHh2QT09" >
	            <i class="fa fa-angle-double-right"></i> Raise Issue</a></li>
				<li><a href="/estcampus/autonomous_exam/student_exam_registration.php?role_code=M1Z5SEVJM2dub0NWWE5GZy82dHh2QT09" >
	            <i class='fa fa-angle-double-right'></i> Exam Registration</a></li>
				<li><a href="/estcampus/autonomous_exam/student_sup_exam_registration.php?role_code=M1Z5SEVJM2dub0NWWE5GZy82dHh2QT09" >
	            <i class="fa fa-angle-double-right"></i> Supplementary Exam Registration</a></li>
				<li><a href="/estcampus/Training/student_training_registration.php?role_code=M1Z5SEVJM2dub0NWWE5GZy82dHh2QT09" >
	            <i class='fa fa-angle-double-right'></i> Training Registration</a></li>
				<li><a href="/estcampus/academics/student_subject.php?role_code=M1Z5SEVJM2dub0NWWE5GZy82dHh2QT09" >
	            <i class='fa fa-angle-double-right'></i> Subject to Register</a></li>
			</ul>
		</li>
	</li>
	<li class="treeview">
		<a href="#">
			<i class="fa fa-fw fa-book"></i><span>DMS</span>
			<i class="fa fa-angle-left pull-right"></i>
		</a>
		<li class="treeview" style="margin-left:20px">
			<a href="#">
				<i class="fa fa-fw fa-envelope"></i><span>Inbox</span>
				<i class="fa fa-angle-left pull-right"></i>
			</a>
			<ul class="treeview-menu">
				<li><a href="/estcampus/DMS/inbox_mydocument_ui.php?role_code=M1Z5SEVJM2dub0NWWE5GZy82dHh2QT09" >
	            <i class="fa fa-angle-double-right"></i> My Documents</a></li>
			</ul>
		</li>
	</li>
	<li class="treeview">
		<a href="#">
			<i class="fa fa-book"></i><span>Library</span>
			<i class="fa fa-angle-left pull-right"></i>
		</a>
		<li class="treeview" style="margin-left:20px">
			<a href="#">
				<i class="fa fa-fw fa-server"></i><span>Transaction</span>
				<i class="fa fa-angle-left pull-right"></i>
			</a>
			<ul class="treeview-menu">
				<li><a href="/estcampus/library/library_book_choice.php?role_code=M1Z5SEVJM2dub0NWWE5GZy82dHh2QT09" >
	            <i class="fa fa-angle-double-right"></i> Item Choice</a></li>
				<li><a href="/estcampus/library/student_acquisition.php?role_code=M1Z5SEVJM2dub0NWWE5GZy82dHh2QT09" >
	            <i class="fa fa-angle-double-right"></i> Acquisition</a></li>
			</ul>
		</li>
		<li class="treeview" style="margin-left:20px"> 
			<a href="#">
				<i class="fa fa-fw fa-cubes"></i><span>Report</span>
				<i class="fa fa-angle-left pull-right"></i>
			</a>
			<ul class="treeview-menu">
				<li><a href="/estcampus/library/my_book_status.php?role_code=M1Z5SEVJM2dub0NWWE5GZy82dHh2QT09" >
		            <i class="fa fa-angle-double-right"></i> Reports</a></li>
			</ul>
		</li>
	</li>
	<li class="treeview">
		<a href="#">
			<i class="fa fa-cutlery"></i><span>Canteen</span>
			<i class="fa fa-angle-left pull-right"></i>
		</a>
		<li class="treeview active" style="margin-left:20px">
			<a href="#">
				<i class="fa fa-futbol-o"></i><span>Activity</span>
				<i class="fa fa-angle-left pull-right"></i>
			</a>
			<ul class="treeview-menu">
				<li><a href="/estcampus/canteen/canteen_registration.php?role_code=M1Z5SEVJM2dub0NWWE5GZy82dHh2QT09" >
	            <i class="fa fa-angle-double-right"></i> Registration</a></li>
				<li><a href="/estcampus/canteen/student_wise_meal_cost_details.php?role_code=M1Z5SEVJM2dub0NWWE5GZy82dHh2QT09" >
	            <i class='fa fa-angle-double-right'></i> Meal Cost</a></li>
			</ul>
		</li>
	</li>
	<li class="treeview">
		<a href="#">
			<i class="fa fa-hdd-o"></i><span>Repository</span>
			<i class="fa fa-angle-left pull-right"></i>
		</a>
		<li class="treeview" style="margin-left:20px">
			<a href="#">
				<i class="fa fa-newspaper-o"></i><span>Student Handbook</span>
				<i class="fa fa-angle-left pull-right"></i>
			</a>
			<ul class="treeview-menu">
				<li><a href="/estcampus/academics/studenthandbook.php?role_code=M1Z5SEVJM2dub0NWWE5GZy82dHh2QT09" >
	            <i class='fa fa-angle-double-right'></i> Student HandBook</a></li>
			</ul>
		</li>
	</li>
	<li class="treeview">
		<a href="#">
			<i class="fa fa-shield"></i><span>Anti Ragging</span>
			<i class="fa fa-angle-left pull-right"></i>
		</a>
		<li class="treeview active" style="margin-left:20px">
			<a href="#">
				<i class="fa fa-wrench"></i><span>Activity</span>
				<i class="fa fa-angle-left pull-right"></i>
			</a>
			<ul class="treeview-menu">
				<li><a href="/estcampus/academics/Antiragging_online_Process.php?role_code=M1Z5SEVJM2dub0NWWE5GZy82dHh2QT09" >
	            <i class='fa fa-angle-double-right'></i> AntiRagging Registration</a></li>
			</ul>
		</li>
	</li>
</ul>
    
                </section>
                <!-- /.sidebar -->
            </aside>

            <!-- Right side column. Contains the navbar and content of the page -->
            <aside class="right-side">
                <!-- Content Header (Page header) -->
                <section class="content-header">
                    <h1>
                        Leave Workways
                    </h1>
                    <ol class="breadcrumb">
                        <li><a href="../dashboard/dashboard.php"><i class="fa fa-dashboard"></i> Home</a></li>
                        <li class="active">Leave</li>
                    </ol>
                </section>

                <!-- Main content -->
                <section class="content">
                    <!-- Small boxes (Stat box) -->
                    <div class="row">
  						<div class="col-lg-12">
  							<div class="nav-tabs-custom">
	  							<ul class="nav nav-tabs">									
									<li class="active"><a href="#tabStudentApply" data-toggle="tab">Applications</a></li>														
									<li><a href="#tabLeaveHistory" data-toggle="tab">History</a></li>																																					
	                            </ul>
	                            <div class="tab-content">	                            	
		                            <!--LEAVE APPROVAL START-->
									<div class="tab-pane active" id="tabStudentApply">		                            	
		                            	<div class="row">
		                            		<div class="col-md-12">
		                            			<button id="btnNewLeave" type="button" class="btn btn-primary"><i class="fa fa-plus"></i>&nbsp;&nbsp;New Application</button>				                    													                            	
		                            		</div>
		                            	</div>
		                            	<div class="row">
		                            		<div class="col-md-12" id="divApplications">
		                            			
		                            		</div>
		                            	</div>                      			                            	
										<!--Modal Form For Leave View-->
										<div class="modal fade" id="divModalLeaveStatus" tabindex="-1" role="dialog" aria-labelledby="myModalLabel" aria-hidden="true" data-backdrop = "static">
											<div class="modal-dialog">
												<div class="modal-content">
													<div class="modal-header">
														<button type="button" class="close" data-dismiss="modal" aria-hidden="true">
															&times;
														</button>
														<h4 class="modal-title" id="myModalLabel"><span id="lblModalLeaveapplication"> </span>Leave Detail</h4>
													</div>
													<div class="modal-body" id="divStatusBody">
													
													</div><!-- /modal-body -->
												</div><!-- /modal-content -->
											</div><!-- /modal-dialog -->
										</div>
										<!-- /modal -->
		                            	<!--ADD/EDIT MODAL FORM START-->									
										<div class="modal fade" id="applyLeaveModal" tabindex="-1" role="dialog" aria-labelledby="myModalLabel" aria-hidden="true" data-backdrop = "static">
											<div class="modal-dialog">
												<div class="modal-content">
													<div class="modal-header">
														<button type="button" class="close" data-dismiss="modal" aria-hidden="true">
															&times;
														</button>
														<h4 class="modal-title" id="myModalLabel">Leave Application</h4>
													</div>
													<div class="modal-body">
														<div class="row setup-content">
													      	<div class="col-xs-12 ">
														        <div class="col-md-12">
															        <form class="form-horizontal" role="form" id="frmApplyLeave">
																		<div class="form-group" hidden="">
																			<label class="col-sm-3 control-label">HIDE code</label>	
																			<div class="col-sm-9">																																															
																				<input type="text" class="form-control" id="hidHostelCode" name="hidHostelCode" value="623bd44b-9640-9ade-4bb6-93f067cdbb8c">
																				<input type="text" class="form-control" id="hidMobileNo" name="hidMobileNo" value="7978796462">
																			</div>
																		</div>
																		<!--<div class="form-group">
																			<label for="" class="col-sm-3 control-label">Student Name :</label>
																			<div class="col-sm-8">
																				<input type="text" id="txtStudentName" class="form-control tooltips"name="txtStudentName" title="Student name" value="PRIYANSU KUMAR PANDA(23BCSF72)"></input>
																			</div>
																		</div>
																		<div class="form-group">
																			<label for="" class="col-sm-3 control-label">Hostel Name :</label>
																			<div class="col-sm-8">
																				<input type="text" id="txtHostelName" class="form-control tooltips"name="txtHostelName" title="Hostel Name" value="Boys Residence-I"></input>
																			</div>
																		</div>
																		<div class="form-group">
																			<label for="" class="col-sm-3 control-label">Room Name :</label>
																			<div class="col-sm-8">
																				<input type="text" id="txtRoomName"class="form-control tooltips"name="txtRoomName" title="Room Name" value="415"></input>
																			</div>
																		</div>
																		<div class="form-group">
																			<label for="" class="col-sm-3 control-label">Bed No :</label>
																			<div class="col-sm-8">
																				<input type="text" id="txtBedNo"class="form-control tooltips"name="txtBedNo" title="Bed No" value="2"></input>
																			</div>
																		</div>-->
																		<div class="form-group">
																			<fieldset class="scheduler-border">
																				<legend class="scheduler-border" style="margin: 10px;">Leave From</legend> 		                            	
											                            			<label for="" class="col-sm-1 control-label" style="margin:0px 10px;">Date</label>											
																					<div class="col-sm-2" style="width:38%">
																						<div class="input-group input-append date" id="datePicker">
																			                <input type="text" class="form-control" id="leaveDateFrom" name="leaveDateFrom" readonly="readonly"
															                      			placeholder="Eg: 16-Dec-2016"/>
																			            </div>																									
																					</div>
																					<label for="" class="col-sm-1 control-label">Time</label>
																					<div class="col-sm-2 bootstrap-timepicker" style="width:38%">																						
																		              	<input type="text" class="form-control" id="leaveTimeFrom" name="leaveTimeFrom" readonly="readonly" placeholder="Eg: 12:00"/>																	             																																	
																					</div>
																			</fieldset>
																		</div>
																		<div class="form-group">
																			<fieldset class="scheduler-border">
																				<legend class="scheduler-border" style="margin: 10px;">Leave To</legend> 		                            	
											                            			<label for="" class="col-sm-1 control-label" style="margin:0px 10px;">Date</label>											
																					<div class="col-sm-2" style="width:38%">
																						<div class="input-group input-append date" id="datePicker">
																			                <input type="text" class="form-control" id="leaveDateTo" name="leaveDateTo" readonly="readonly"
															                      			placeholder="Eg: 16-Dec-2016" />
																			            </div>																									
																					</div>
																					<label for="" class="col-sm-1 control-label">Time</label>
																					<div class="col-sm-2 bootstrap-timepicker" style="width:38%">																						
																		              	<input type="text" class="form-control" id="leaveTimeTo" name="leaveTimeTo" readonly="readonly" placeholder="Eg: 12:00"/>																	             																																	
																					</div>
																			</fieldset>
																		</div>																		
																		<div id="divStep3">
																			<div class="form-group">
																				<label class="col-sm-3 control-label">Destination:</label>
																				<div class="col-sm-8">
																					<input type="text" id="txtdestination" class="form-control tooltips" name="txtdestination" value="" />
																				</div>
																			</div>
																			<div class="form-group">
																				<label class="col-sm-3 control-label">Contact no:</label>
																				<div class="col-sm-8">
																					<input type="text" id="txtContact_no" class="form-control tooltips" name="txtContact_no" value="7978796462" />
																				</div>
																			</div>
																			<div class="form-group">
																				<label class="col-sm-3 control-label">Reason:</label>
																				<div class="col-sm-8">
																					<textarea id="txtLeaveReason" class="form-control tooltips" name="txtLeaveReason"></textarea>
																				</div>
																			</div>
																			<div class="modal-footer" >
																				<span style="color:red">*</span>  All Fields are Mandatory																																						
																				<button type="button" class="btn btn-danger" data-dismiss="modal"><i class="fa fa-close"></i> Close</button>
																				<button type="submit" class="btn btn-primary" id="btnApplyLeave"><i class="fa fa-server"></i> Apply</button>
																			</div>
																		</div>																																																			
																	</form>
														        </div>
													      	</div>
													    </div>
													</div>
												</div>
											</div>
										</div>
										<!--ADD/EDIT MODAL FORM END-->
		                            </div>
									<!--LEAVE APPROVAL END-->
									<!--LEAVE HISTORY START-->										
									<div class="tab-pane" id="tabLeaveHistory">
										<div class="panel panel-primary" style="margin: 10px 0px 0px 0px;">
						                	<div class="panel-heading" style="text-align: center;color: white;font-size: 16px;font-weight: 600;">Leave History</div>
						                	<div class="panel-body"> 
												<div class="box-body">
													<table class="table table-bordered" id="tblLeaveHistory">
														<thead>
															<tr style="background-color: #ededed;">
																<th class="text-center">Sl No</th>
																<th class="text-center">Leave application id</th>
																<th class="text-center">student code</th>
																<th class="text-center">Student Name</th>
																<th class="text-center">Apply Date</th>																
																<th class="text-center">Leave Days</th>																																																													
																<th class="text-center">Destination</th>																																																													
																<th class="text-center">Contact No</th>																																
																<th class="text-center">Reason</th>																																
																<th class="text-center">Status</th>																																
															</tr>
														</thead>
														<tbody>

														</tbody>
													</table>
												</div>
											</div>
										</div>		
									</div>	
									<!--LEAVE HISTORY END-->															                            		                   																										                           	                           		                            	                           	                           
	                            </div>
	                        </div>
  						</div><!-- /.col (main col) -->
                    </div><!-- /.row (main row) -->

                </section><!-- /.content -->
            </aside><!-- /.right-side -->
        </div><!-- ./wrapper -->

        <!-- add new calendar event modal -->


    
	<script src="../js/jquery-2.1.3.min.js" type="text/javascript"></script>
	<script src="../js/crypto-js.min.js" type="text/javascript"></script>
	<script src="../js/NormalEncrptionDecryption.js" type="text/javascript"></script>
    <script src="../tools/bootstrap-3.3.4/js/bootstrap.min.js" type="text/javascript"></script>
    <script src="../tools/jquery-ui-1.11.4/jquery-ui.min.js" type="text/javascript"></script>
    <!-- Bootstrap WYSIHTML5 -->
    <script src="../js/plugins/bootstrap-wysihtml5/bootstrap3-wysihtml5.all.min.js" type="text/javascript"></script>
    <!-- iCheck -->
    <script src="../js/plugins/iCheck/icheck.min.js" type="text/javascript"></script>
	<!-- toaster -->
    <script src="../tools/toastr/js/toastr.min.js" type="text/javascript"></script>
    <!--Select2-->
    <!--<script src="../academics/select2.min.js"></script>-->
    <script src="../tools/bootstrap-multiselect/js/bootstrap-multiselect.js"  type="text/javascript"></script>
    <!-- Bootbox -->
    <script src="../js/bootbox.min.js" type="text/javascript"></script>
    
    <!-- AdminLTE App -->
    <script src="../js/AdminLTE/app.js" type="text/javascript"></script>

	<!-- AdminLTE for demo purposes -->
    <!--<script src="../js/AdminLTE/demo.js" type="text/javascript"></script>-->
    <!--Bootstrap Multiselect-->
    <script src="../tools/bootstrap-multiselect/js/bootstrap-multiselect.js" type="text/javascript"></script>
    <!--Bootstrap Validator-->
    <script src="../js/bootstrapValidator.js" type="text/javascript"></script>
    
    <!-- DATA TABES SCRIPT -->
    <script src="../js/plugins/dataTables/jquery.dataTables.min.js" type="text/javascript"></script>
    <script src="../js/plugins/dataTables/dataTables.bootstrap.min.js" type="text/javascript"></script>
    <script src="../js/plugins/daterangepicker/daterangepicker.js" type="text/javascript"></script>
  	<script src="../js/plugins/datepicker/bootstrap-datepicker.js" type="text/javascript"></script>
    
    <script src="../tools/datatable/dataTables.buttons.min.js" type="text/javascript"></script>
	<script src="../tools/datatable/buttons.flash.min.js" type="text/javascript"></script>
	<script src="../tools/datatable/jszip.min.js" type="text/javascript"></script>
	<script src="../tools/datatable/pdfmake.min.js" type="text/javascript"></script>
	<script src="../tools/datatable/vfs_fonts.js" type="text/javascript"></script>
	<script src="../tools/datatable/buttons.html5.min.js" type="text/javascript"></script>
    <!-- fullCalendar -->
    <script src="../tools/fullcalendar-2.3.1/lib/moment.min.js" type="text/javascript"></script>
    <script src="../tools/fullcalendar-2.3.1/fullcalendar.min.js" type="text/javascript"></script>
    <script src="../tools/jquery-loading/jquery.loading.js"  type="text/javascript"></script>
    <!--jstree-->
    <script src="../tools/jstree/jstree.min.js" type="text/javascript"></script>
   <!--user notification-->
    <script src="../notification/user_notification.js?v=1.5" type="text/javascript"></script>
    
    <!--Sweet Alert -->
    <script type="text/javascript" src="../tools/sweet-alert/js/sweetalert2.min.js"></script>
    <script type="text/javascript" src="../tools/sweet-alert/js/promise.min.js"></script>
    
	<script src="../tools/selectize/js/standalone/selectize.js" type="text/javascript"></script>
	<script type="text/javascript">
		//If in Datepicker Same Date Selected in 2 times showing Error By using this function Error Rectified
		function DataPickerShowHide(id)
		{
			$(id).on('show', function(e){
			    if ( e.date)  {
			         $(this).data('stickyDate', e.date);
			    }
			    else {
			         $(this).data('stickyDate', null);
			    }
			});
			$(id).on('hide', function(e){
			    var stickyDate = $(this).data('stickyDate');

			    if ( !e.date && stickyDate)  {
			        $(this).datepicker('setDate', stickyDate);
			        $(this).data('stickyDate', null);
			    }
			});
		}
	</script>
	
	
      
	<!-- AdminLTE dashboard demo (This is only for demo purposes) -->
    <script src="../tools/datatable/js/jquery.dataTables.min.js"></script>
    <script src="../js/plugins/datatables/dataTables.bootstrap.js" type="text/javascript"></script>   
    <script src="../tools/jqGrid-4.6.0/js/jquery.jqGrid.min.js" type="text/javascript"></script>
	<script src="../tools/jqGrid-4.6.0/js/i18n/grid.locale-en.js" type="text/javascript"></script>
	<script src="../tools/toastr/js/toastr.min.js" type="text/javascript"></script>
	<!--Time Picker JS-->
    <script src="../css/timepicker/bootstrap-timepicker.min.js" type="text/javascript"></script>
    <!-- daterangepicker -->
    <script src="../js/plugins/daterangepicker/daterangepicker.js" type="text/javascript"></script>
    <!-- datepicker -->
    <script src="../js/plugins/datepicker/bootstrap-datepicker.js" type="text/javascript"></script>
    <script type="text/javascript" src="../tools/sweet-alert/js/sweetalert2.min.js"></script>
	<script src="js/hostel_apply_leave_js.js?v=1" type="text/javascript"></script>
		
	    </body>
</html>
