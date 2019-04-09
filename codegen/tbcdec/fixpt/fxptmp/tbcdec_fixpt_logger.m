% loggingMode - mode of operation : either read or log
%#codegen
%#internal
function loggedData = tbcdec_fixpt_logger(varargin)
    coder.inline( 'never' );
    coder.extrinsic( 'MException', 'throw' );
    persistent iterCount
    if isempty( iterCount )
        iterCount = 0;
    end
    if nargin>0
        % Log the data.
        r1_1_TB_logger( varargin{ 1 } );
        r2_1_TB_logger( varargin{ 2 } );
        r3_TB_logger( varargin{ 3 } );
        iter_TB_logger( varargin{ 4 } );
        intlv_TB_logger( varargin{ 5 } );
        Lc_TB_logger( varargin{ 6 } );
        dec_out_TB_logger( varargin{ 7 } );
        LLR_TB_logger( varargin{ 8 } );
        iterCount = iterCount + 1;
        loggedData = [  ];
        if iterCount>=Inf
            throw( MException( 'Coder:FXPCONV:MATLABSimBailOut', 'Return early for input computation' ) );
        end
        return
    else
        % Fetch the data.
        % make sure the 'log setup' has been performed
        assert( ~isempty( iterCount ) );
        loggedData.inputs.r1_1 = r1_1_TB_logger();
        loggedData.inputs.r2_1 = r2_1_TB_logger();
        loggedData.inputs.r3 = r3_TB_logger();
        loggedData.inputs.iter = iter_TB_logger();
        loggedData.inputs.intlv = intlv_TB_logger();
        loggedData.inputs.Lc = Lc_TB_logger();
        loggedData.outputs.dec_out = dec_out_TB_logger();
        loggedData.outputs.LLR = LLR_TB_logger();
        loggedData.iterCount = iterCount;
    end
end
function out = r1_1_TB_logger(v)
    coder.inline( 'never' );
    persistent p
    coder.varsize( 'p' );
    if nargin==1
        if isempty( p )
            p = [  ];
        end
        if size( v, 1 )>1
            p = [ p; loggableValue( v ) ];
        else
            p = [ p, loggableValue( v ) ];
        end
    else
        assert( ~isempty( p ) );
        out = p;
        p = [  ];
    end
end
function out = r2_1_TB_logger(v)
    coder.inline( 'never' );
    persistent p
    coder.varsize( 'p' );
    if nargin==1
        if isempty( p )
            p = [  ];
        end
        if size( v, 1 )>1
            p = [ p; loggableValue( v ) ];
        else
            p = [ p, loggableValue( v ) ];
        end
    else
        assert( ~isempty( p ) );
        out = p;
        p = [  ];
    end
end
function out = r3_TB_logger(v)
    coder.inline( 'never' );
    persistent p
    coder.varsize( 'p' );
    if nargin==1
        if isempty( p )
            p = [  ];
        end
        if size( v, 1 )>1
            p = [ p; loggableValue( v ) ];
        else
            p = [ p, loggableValue( v ) ];
        end
    else
        assert( ~isempty( p ) );
        out = p;
        p = [  ];
    end
end
function out = iter_TB_logger(v)
    coder.inline( 'never' );
    persistent p
    coder.varsize( 'p' );
    if nargin==1
        if isempty( p )
            p = [  ];
        end
        if size( v, 1 )>1
            p = [ p; loggableValue( v ) ];
        else
            p = [ p, loggableValue( v ) ];
        end
    else
        assert( ~isempty( p ) );
        out = p;
        p = [  ];
    end
end
function out = intlv_TB_logger(v)
    coder.inline( 'never' );
    persistent p
    coder.varsize( 'p' );
    if nargin==1
        if isempty( p )
            p = [  ];
        end
        if size( v, 1 )>1
            p = [ p; loggableValue( v ) ];
        else
            p = [ p, loggableValue( v ) ];
        end
    else
        assert( ~isempty( p ) );
        out = p;
        p = [  ];
    end
end
function out = Lc_TB_logger(v)
    coder.inline( 'never' );
    persistent p
    coder.varsize( 'p' );
    if nargin==1
        if isempty( p )
            p = [  ];
        end
        if size( v, 1 )>1
            p = [ p; loggableValue( v ) ];
        else
            p = [ p, loggableValue( v ) ];
        end
    else
        assert( ~isempty( p ) );
        out = p;
        p = [  ];
    end
end
function out = dec_out_TB_logger(v)
    coder.inline( 'never' );
    persistent p
    coder.varsize( 'p' );
    if nargin==1
        if isempty( p )
            p = [  ];
        end
        if size( v, 1 )>1
            p = [ p; loggableValue( v ) ];
        else
            p = [ p, loggableValue( v ) ];
        end
    else
        assert( ~isempty( p ) );
        out = p;
        p = [  ];
    end
end
function out = LLR_TB_logger(v)
    coder.inline( 'never' );
    persistent p
    coder.varsize( 'p' );
    if nargin==1
        if isempty( p )
            p = [  ];
        end
        if size( v, 1 )>1
            p = [ p; loggableValue( v ) ];
        else
            p = [ p, loggableValue( v ) ];
        end
    else
        assert( ~isempty( p ) );
        out = p;
        p = [  ];
    end
end
function out = loggableValue(in)
    coder.inline( 'always' );
    if coder.isenum( in )
        out = double( in );
    else
        out = in;
    end
end
