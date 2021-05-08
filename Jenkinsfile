pipeline{
    agent any
    parameters {
        booleanParam(name: 'Refresh',
                    defaultValue: false,
                    description: 'Read Jenkinsfile and exit.')
    }
    stages{
        stage("build"){
            steps{
                echo "Building..."
                sh 'sudo ./scripts/premake.sh'
                sh 'sudo ./scripts/build.sh'
                echo "Finished"
            }
    }
        stage("tests"){
            steps{
                echo "Testing..."
                sh 'sudo ./scripts/run-tests.sh' 
                echo "Finished"
            }
        }
    }
}