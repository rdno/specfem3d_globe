
 !
 ! this is the parameter file for static compilation of the solver
 !
 ! mesh statistics:
 ! ---------------
 !
 !
 ! number of chunks =            1
 !
 ! these statistics do not include the central cube
 !
 ! number of processors =            4
 !
 ! maximum number of points per region =        38773
 !
 ! on NEC SX, make sure "loopcnt=" parameter
 ! in Makefile is greater than max vector length =       116319
 !
 ! total elements per slice =          585
 ! total points per slice =        42695
 !
 ! the time step of the solver will be DT =   0.118749999      (s)
 ! the (approximate) minimum period resolved will be =    90.6666641      (s)
 !
 ! total for full 1-chunk mesh:
 ! ---------------------------
 !
 ! exact total number of spectral elements in entire mesh = 
 !    2340.0000000000000     
 ! approximate total number of points in entire mesh = 
 !    170780.00000000000     
 ! approximate total number of degrees of freedom in entire mesh = 
 !    482764.00000000000     
 !
 ! position of the mesh chunk at the surface:
 ! -----------------------------------------
 !
 ! angular size in first direction in degrees =    30.0000000    
 ! angular size in second direction in degrees =    30.0000000    
 !
 ! longitude of center in degrees =   -20.0000000    
 ! latitude of center in degrees =    65.0000000    
 !
 ! angle of rotation of the first chunk =    60.0000000    
 !
 ! corner            1
 ! longitude in degrees =   -12.592287198440598     
 ! latitude in degrees =    44.847419976207945     
 !
 ! corner            2
 ! longitude in degrees =    27.642375790461500     
 ! latitude in degrees =    62.563800016966823     
 !
 ! corner            3
 ! longitude in degrees =   -55.586922236232105     
 ! latitude in degrees =    54.155035089701506     
 !
 ! corner            4
 ! longitude in degrees =   -67.178928702422837     
 ! latitude in degrees =    82.864433448054044     
 !
 ! resolution of the mesh at the surface:
 ! -------------------------------------
 !
 ! spectral elements along a great circle =          192
 ! GLL points along a great circle =          768
 ! average distance between points in degrees =   0.468750000    
 ! average distance between points in km =    52.1226234    
 ! average size of a spectral element in km =    208.490494    
 !

 ! approximate static memory needed by the solver:
 ! ----------------------------------------------
 !
 ! (lower bound, usually the real amount used is 5% to 10% higher)
 !
 ! (you can get a more precise estimate of the size used per MPI process
 !  by typing "size -d bin/xspecfem3D"
 !  after compiling the code with the DATA/Par_file you plan to use)
 !
 ! size of static arrays per slice =    84.136032000000000       MB
 !                                 =    80.238372802734375       MiB
 !                                 =    8.4136031999999999E-002  GB
 !                                 =    7.8357785940170288E-002  GiB
 !
 ! (should be below to 80% or 90% of the memory installed per core)
 ! (if significantly more, the job will not run by lack of memory )
 ! (note that if significantly less, you waste a significant amount
 !  of memory per processor core)
 ! (but that can be perfectly acceptable if you can afford it and
 !  want faster results by using more cores)
 !
 ! size of static arrays for all slices =    336.54412800000000       MB
 !                                      =    320.95349121093750       MiB
 !                                      =   0.33654412800000000       GB
 !                                      =   0.31343114376068115       GiB
 !                                      =    3.3654412800000001E-004  TB
 !                                      =    3.0608510132879019E-004  TiB
 !

 integer, parameter :: NEX_XI_VAL =           16
 integer, parameter :: NEX_ETA_VAL =           16

 integer, parameter :: NSPEC_CRUST_MANTLE =          540
 integer, parameter :: NSPEC_OUTER_CORE =           43
 integer, parameter :: NSPEC_INNER_CORE =            2

 integer, parameter :: NGLOB_CRUST_MANTLE =        38773
 integer, parameter :: NGLOB_OUTER_CORE =         3697
 integer, parameter :: NGLOB_INNER_CORE =          225

 integer, parameter :: NSPECMAX_ANISO_IC =            1

 integer, parameter :: NSPECMAX_ISO_MANTLE =          540
 integer, parameter :: NSPECMAX_TISO_MANTLE =          540
 integer, parameter :: NSPECMAX_ANISO_MANTLE =            1

 integer, parameter :: NSPEC_CRUST_MANTLE_ATTENUATION =          540
 integer, parameter :: NSPEC_INNER_CORE_ATTENUATION =            2

 integer, parameter :: NSPEC_CRUST_MANTLE_STR_OR_ATT =          540
 integer, parameter :: NSPEC_INNER_CORE_STR_OR_ATT =            2

 integer, parameter :: NSPEC_CRUST_MANTLE_STR_AND_ATT =            1
 integer, parameter :: NSPEC_INNER_CORE_STR_AND_ATT =            1

 integer, parameter :: NSPEC_CRUST_MANTLE_STRAIN_ONLY =            1
 integer, parameter :: NSPEC_INNER_CORE_STRAIN_ONLY =            1

 integer, parameter :: NSPEC_CRUST_MANTLE_ADJOINT =            1
 integer, parameter :: NSPEC_OUTER_CORE_ADJOINT =            1
 integer, parameter :: NSPEC_INNER_CORE_ADJOINT =            1
 integer, parameter :: NGLOB_CRUST_MANTLE_ADJOINT =            1
 integer, parameter :: NGLOB_OUTER_CORE_ADJOINT =            1
 integer, parameter :: NGLOB_INNER_CORE_ADJOINT =            1
 integer, parameter :: NSPEC_OUTER_CORE_ROT_ADJOINT =            1

 integer, parameter :: NSPEC_CRUST_MANTLE_STACEY =          540
 integer, parameter :: NSPEC_OUTER_CORE_STACEY =           43

 integer, parameter :: NGLOB_CRUST_MANTLE_OCEANS =        38773

 logical, parameter :: TRANSVERSE_ISOTROPY_VAL = .true.

 logical, parameter :: ANISOTROPIC_3D_MANTLE_VAL = .false.

 logical, parameter :: ANISOTROPIC_INNER_CORE_VAL = .false.

 logical, parameter :: ATTENUATION_VAL = .true.

 logical, parameter :: ATTENUATION_3D_VAL = .false.

 logical, parameter :: ELLIPTICITY_VAL = .true.

 logical, parameter :: GRAVITY_VAL = .true.

 logical, parameter :: OCEANS_VAL = .true.

 integer, parameter :: NX_BATHY_VAL =         5400
 integer, parameter :: NY_BATHY_VAL =         2700

 logical, parameter :: ROTATION_VAL = .true.
 logical, parameter :: EXACT_MASS_MATRIX_FOR_ROTATION_VAL = .false.

 integer, parameter :: NSPEC_OUTER_CORE_ROTATION =           43

 logical, parameter :: PARTIAL_PHYS_DISPERSION_ONLY_VAL = .false.

 integer, parameter :: NPROC_XI_VAL =            2
 integer, parameter :: NPROC_ETA_VAL =            2
 integer, parameter :: NCHUNKS_VAL =            1
 integer, parameter :: NPROCTOT_VAL =            4

 integer, parameter :: ATT1_VAL =            5
 integer, parameter :: ATT2_VAL =            5
 integer, parameter :: ATT3_VAL =            5
 integer, parameter :: ATT4_VAL =          540
 integer, parameter :: ATT5_VAL =            2

 integer, parameter :: NSPEC2DMAX_XMIN_XMAX_CM =          110
 integer, parameter :: NSPEC2DMAX_YMIN_YMAX_CM =          110
 integer, parameter :: NSPEC2D_BOTTOM_CM =            4
 integer, parameter :: NSPEC2D_TOP_CM =           64
 integer, parameter :: NSPEC2DMAX_XMIN_XMAX_IC =            2
 integer, parameter :: NSPEC2DMAX_YMIN_YMAX_IC =            2
 integer, parameter :: NSPEC2D_BOTTOM_IC =            1
 integer, parameter :: NSPEC2D_TOP_IC =            1
 integer, parameter :: NSPEC2DMAX_XMIN_XMAX_OC =           26
 integer, parameter :: NSPEC2DMAX_YMIN_YMAX_OC =           27
 integer, parameter :: NSPEC2D_BOTTOM_OC =            1
 integer, parameter :: NSPEC2D_TOP_OC =            4
 integer, parameter :: NSPEC2D_MOHO =            1
 integer, parameter :: NSPEC2D_400 =            1
 integer, parameter :: NSPEC2D_670 =            1
 integer, parameter :: NSPEC2D_CMB =            1
 integer, parameter :: NSPEC2D_ICB =            1

 logical, parameter :: USE_DEVILLE_PRODUCTS_VAL = .true.
 integer, parameter :: NSPEC_CRUST_MANTLE_3DMOVIE = 1
 integer, parameter :: NGLOB_CRUST_MANTLE_3DMOVIE = 1

 integer, parameter :: NSPEC_OUTER_CORE_3DMOVIE = 1
 integer, parameter :: NGLOB_XY_CM =        38773
 integer, parameter :: NGLOB_XY_IC =            1

 logical, parameter :: ATTENUATION_1D_WITH_3D_STORAGE_VAL = .true.

 logical, parameter :: FORCE_VECTORIZATION_VAL = .true.

 logical, parameter :: UNDO_ATTENUATION_VAL = .false.
 integer, parameter :: NT_DUMP_ATTENUATION_VAL =         6633

 double precision, parameter :: ANGULAR_WIDTH_ETA_IN_DEGREES_VAL =    30.000000
 double precision, parameter :: ANGULAR_WIDTH_XI_IN_DEGREES_VAL =    30.000000
 double precision, parameter :: CENTER_LATITUDE_IN_DEGREES_VAL =    65.000000
 double precision, parameter :: CENTER_LONGITUDE_IN_DEGREES_VAL =   -20.000000
 double precision, parameter :: GAMMA_ROTATION_AZIMUTH_VAL =    60.000000
